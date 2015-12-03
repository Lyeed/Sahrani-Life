/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_selected", "_display"];
_selected = [_this, 0, -1, [-1]] call BIS_fnc_param;

disableSerialization;
_display = findDisplay 45600;
if (isNull _display) exitWith {};

uiNamespace setVariable ["AH_selected", _selected];
 
{
	ctrlShow[_x, false];
} forEach ([45618,45619,45602,45603,45604,45609,45610,45611,45612,45613,45620,45621,45622,45623,45624,45625,45626,45632,45633,45627,45628,45629,45630,45631,45634,45635,45636,45637,45638,45639,45640,45641,45642,45643]);

switch (_selected) do
{
	case -1:
	{
		(_display displayCtrl 45644) ctrlSetBackgroundColor [1, 1, 1, 1];
		(_display displayCtrl 45644) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#000000'>Infos</t>";

		(_display displayCtrl 45614) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45614) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Mes ventes</t>";

		(_display displayCtrl 45615) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45615) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Acheter</t>";

		(_display displayCtrl 45617) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45617) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Vendre</t>";

		(_display displayCtrl 45634) ctrlSetStructuredText parseText 
		(
				"<t font='PuristaSemiBold'>"
			+	"L'hôtel des ventes vous permet de vendre vos objets et véhicules à d'autres personnes au prix que vous avez décidé.<br/>"
			+	"Le Nord et le Sud ne partage pas les même stocks, les prix peuvent donc varier d'une région à l'autre.<br/>"
			+	"En tant que vendeur, vous n'avez pas besoin d'être présent sur l'île pour recevoir l'argent d'une transaction.<br/>"
			+	"La commission d'une vente est de 5% à payer lors de la mise en vente."
			+	"</t>"
		);

		_south = count([0, "SOUTH"] call public_fnc_auctionHouse_getStock) + count([1, "SOUTH"] call public_fnc_auctionHouse_getStock) + count([2, "SOUTH"] call public_fnc_auctionHouse_getStock);
		_north = count([0, "NORTH"] call public_fnc_auctionHouse_getStock) + count([1, "NORTH"] call public_fnc_auctionHouse_getStock) + count([2, "NORTH"] call public_fnc_auctionHouse_getStock);

		(_display displayCtrl 45636) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_south + _north)];
		(_display displayCtrl 45639) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", _north];
		(_display displayCtrl 45642) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", _south];

		{
			ctrlShow[_x, true];
		} forEach ([45634, 45635, 45636, 45637, 45638, 45639, 45640, 45641, 45642, 45643]);
	};

	case 0:
	{
		(_display displayCtrl 45619) ctrlSetStructuredText parseText "<t align='center'>Disponible à l'achat</t>";

		(_display displayCtrl 45614) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45614) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Mes ventes</t>";

		(_display displayCtrl 45615) ctrlSetBackgroundColor [1, 1, 1, 1];
		(_display displayCtrl 45615) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#000000'>Acheter</t>";

		(_display displayCtrl 45617) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45617) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Vendre</t>";

		(_display displayCtrl 45644) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45644) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Infos</t>";

		{
			ctrlShow[_x, true];
		} forEach ([45618, 45619, 45602, 45632, 45633]);

		_list = _display displayCtrl 45602;
		lbClear _list;

		{
			_data = [g_AH_type, (_x select 0)] call public_fnc_auctionHouse_getInfo;
			_index = _list lbAdd format["%1 %2", (_data select 0), if ((getPlayerUID player) isEqualTo (_x select 2)) then {"(Vous)"} else {""}];
			_list lbSetPicture [_index, (_data select 1)];
			_list lbSetValue [_index, (_x select 1)];
			_list lbSetData [_index, (_x select 2)];
		} forEach ([g_AH_type, g_AH_location] call public_fnc_auctionHouse_getStock);

		if ((lbSize _list) isEqualTo 0) then {
			_list lbAdd "Aucune vente";
		} else {
			ctrlShow[45603, true];
			ctrlShow[45604, true];
		};

		_list lbSetCurSel 0;
	};

	case 1:
	{
		(_display displayCtrl 45619) ctrlSetStructuredText parseText "<t align='center'>Inventaire</t>";

		(_display displayCtrl 45614) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45614) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Mes ventes</t>";

		(_display displayCtrl 45615) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45615) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Acheter</t>";

		(_display displayCtrl 45617) ctrlSetBackgroundColor [1, 1, 1, 1];
		(_display displayCtrl 45617) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#000000'>Vendre</t>";

		(_display displayCtrl 45644) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45644) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Infos</t>";

		{
			ctrlShow[_x, true];
		} forEach ([45618, 45619, 45621]);

		_list = _display displayCtrl 45621;
		lbClear _list;

		{
			_data = [g_AH_type, _x] call public_fnc_auctionHouse_getInfo;
			_index = _list lbAdd (_data select 0);
			_list lbSetPicture [_index, (_data select 1)];
			_list lbSetData [_index, _x];
		} forEach ([g_AH_type] call public_fnc_auctionHouse_getPlayerData);

		if ((lbSize _list) isEqualTo 0) then {
			_list lbAdd "Vide";
		} else {
			{
				ctrlShow[_x, true];
			} forEach ([45627, 45628, 45629, 45630, 45631, 45603, 45620]);
			_list lbSetCurSel 0;
		};
	};

	case 2:
	{
		(_display displayCtrl 45619) ctrlSetStructuredText parseText "<t align='center'>Liste</t>";

		(_display displayCtrl 45614) ctrlSetBackgroundColor [1, 1, 1, 1];
		(_display displayCtrl 45614) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#000000'>Mes ventes</t>";

		(_display displayCtrl 45615) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45615) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Acheter</t>";

		(_display displayCtrl 45617) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45617) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Vendre</t>";

		(_display displayCtrl 45644) ctrlSetBackgroundColor [0, 0, 0, 1];
		(_display displayCtrl 45644) ctrlSetStructuredText parseText "<t align='center' size='1.3' color='#FFFFFF'>Infos</t>";

		{
			ctrlShow[_x, true];
		} forEach ([45619, 45621, 45618, 45621]);

		_list = _display displayCtrl 45621;
		lbClear _list;

		{
			if ((_x select 2) isEqualTo (getPlayerUID player)) then
			{
				_data = [g_AH_type, (_x select 0)] call public_fnc_auctionHouse_getInfo;
				_index = _list lbAdd format["%1 - %2kn", (_data select 0), (_x select 1)];
				_list lbSetPicture [_index, (_data select 1)];
				_list lbSetValue [_index, _forEachIndex];
			};
		} forEach ([g_AH_type, g_AH_location] call public_fnc_auctionHouse_getStock);
		if ((lbSize _list) isEqualTo 0) then {
			_list lbAdd "Aucune";
		} else {
			_list lbSetCurSel 0;
			{
				ctrlShow [_x, true];
			} forEach ([45622, 45623, 45624, 45625, 45626]);
		};
	};
};
