/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_className", "_error", "_gangName"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

_className = (format["getText (_x >> 'item') == '%1'", _item] configClasses (missionConfigFile >> "ALYSIA_LASTING_OBJECTS")) select 0;
if (isNil "_className") exitWith {
	diag_log format["[ALYSIA:ERROR] Item [%1] does not exist in class ALYSIA_LASTING_OBJECTS >> item", _item];
};

if (getNumber(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> _className >> "side" >> str(playerSide)) == 0) exitWith {
	["Vous ne pouvez pas utiliser cet objet"] call public_fnc_error;
};

if (!(isNull g_objPut)) exitWith {
	["Vous deployez déjà un élèment"] call public_fnc_error;
};

if (vehicle player != player) exitWith {
	["Vous ne pouvez pas utiliser cet objet dans un véhicule"] call public_fnc_error; 
};

if ((count g_lastingObjects) >= (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "LastingObjects_max_per_player"))) exitWith {
	[
		format
		[
			"Vous possédez déjà le nombre maximum d'objets persistants (%1/%2)",
			count(g_laboratory),
			(getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "LastingObjects_max_per_player"))
		]
	] call public_fnc_error;
};

_gangName = (group player) getVariable["gang_name", ""];
_error = false;
if (playerSide == civilian) then
{	
	if (_gangName == "") exitWith 
	{
		_error = true;
		["Vous devez être dans un groupe whitelisté pour poser un laboratoire"] call public_fnc_error;
	};

	if (([_gangName] call public_fnc_lastingObjectsGang) > (getNumber(missionConfigFile >> "ALYSIA_LASTING_OBJECTS_CONFIG" >> "max_per_civilian_gang"))) exitWith 
	{
		_error = true;	
		[
			format
			[
				"Votre groupe possède déjà le nombre maximum de laboratoire%1 (%2/%3)",
				if ((getNumber(missionConfigFile >> "ALYSIA_LASTING_OBJECTS_CONFIG" >> "max_per_civilian_gang")) > 1) then {"s"} else {""}, 
				([_gangName] call public_fnc_laboGang),
				(getNumber(missionConfigFile >> "ALYSIA_LASTING_OBJECTS_CONFIG" >> "max_per_civilian_gang"))				
			]			
		] call public_fnc_error;
	};

	if (!(missionNamespace getVariable[format["license_%1", (getText(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> _className >> "license"))], false])) exitWith 
	{
		_error = true;
		[
			format
			[
				"Vous n'avez pas la license requise<br/><t color='#FF4000'>%1</t>",
				([getText(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> _className >> "license")] call public_fnc_licenseGetName)
			]
		] call public_fnc_error;
	};
};
if (_error) exitWith {};

if ([false, _item, 1] call public_fnc_handleInv) then
{
	private["_object", "_action_1", "_camera", "_pos", "_action_2"];

	_object = _className createVehicle [0, 0, 0];
	_object attachTo[player, [0, (getNumber(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> _className >> "distance")), 1]];
	g_objPut = _object;

	_action_1 = player addAction[format["Placer <t color='#FFFF33'>%1</t>", getText(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "name")], 
	{
		if ((time - g_action_delay) < 2) exitWith {
			["Veuillez ralentir dans vos actions"] call public_fnc_error; 
		};	
		g_action_delay = time;
		if (!(isNull g_objPut)) then 
		{
			private["_forbidenTxt", "_distance_between", "_forbidenDistance"];
			if (!(surfaceIsWater (getPos g_objPut))) then
			{
				_distance_between = getNumber(missionConfigFile >> "ALYSIA_LASTING_OBJECTS_CONFIG" >> "forbiden_distance");
				{
					_forbidenDistance = player distance (getMarkerPos _x);
					if (_forbidenDistance < _distance_between) exitWith {
						_forbidenTxt = markerText _x;
					};
				} forEach (getArray(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> _className >> "forbiden_markers"));
				if (isNil "_forbidenTxt") then
				{
					if ((nearestObjects [player, (call g_lastingObjects_Buildings) , (getNumber(missionConfigFile >> "ALYSIA_LASTING_OBJECTS_CONFIG" >> "distance_between_objects"))]) isEqualTo []) then
					{
						detach g_objPut;
						g_objPut = ObjNull;
					} else {
						["Vous êtes trop proche d'un autre objet durable pour pouvoir poser le votre"] call public_fnc_error;
					};
				} else {
					[format["Vous êtes trop proche de la zone<br/><t align='center' color='#FFFF33'>%1</t><br/>(%2/%3m)", _forbidenTxt, _forbidenDistance, _distance_between]] call public_fnc_error;
				};
			} else {
				["Vous ne pouvez pas placer d'objet sous l'eau"] call public_fnc_error;
			};
		};
	}, "", 9999992, true, true, "",'!isNull g_objPut'];

	_action_2 = player addAction["<t color='#ff8c8c'>Annuler</t> la pose", 
	{
		if ((time - g_action_delay) < 2) exitWith {
			["Veuillez ralentir dans vos actions"] call public_fnc_error; 
		};
		g_action_delay = time;
		if (!(isNull g_objPut)) then {
			deleteVehicle g_objPut;
		};
	}, "", 9999991, true, true, "",'!isNull g_objPut'];

	waitUntil {isNull g_objPut};
	if (isNull _object) exitWith {
		[true, _item, 1] call public_fnc_handleInv;
	};

	player removeAction _action_1;
	player removeAction _action_2;

	_pos = getPos _object;
	_object setPos [(_pos select 0), (_pos select 1), 0];

	playSound (getText(missionConfigFile >> "ALYSIA_LASTING_OBJECTS" >> _className >> "sound"));
	_camera = "camera" camCreate [((_pos select 0) - 2), (_pos select 1), ((_pos select 2) + 30)];
	_camera cameraEffect ["internal", "back"];

	_camera camSetFOV 2.000;
	_camera camCommit 0;

	waitUntil {camCommitted _camera};
	 
	_camera camSetTarget _object;
	_camera camSetRelPos [0, 0, 2];
	_camera camCommit 8;

	waitUntil {camCommitted _camera};

	_camera cameraEffect ["terminate", "back"];
	camDestroy _camera;

	g_lastingObjects pushBack _object;
	[[(getPlayerUID player), _object, _gangName], "TON_fnc_lastingObjectsInsert", false] spawn life_fnc_MP;
};