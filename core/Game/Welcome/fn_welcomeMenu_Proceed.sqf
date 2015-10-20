/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_firstname", "_lastName", "_birth", "_sexe", "_origin", "_action", "_bad", "_displayError", "_age"];
_displayError =
{
	((findDisplay 1500) displayCtrl 1508) ctrlSetStructuredText parseText format["<t align='center' color='#DF0101'>%1</t>", _this];
	playSound "addItemFailed";
};

// firstName
_firstname = ctrlText 1501;
if (_firstname isEqualTo "") exitWith {
	"Vous n'avez pas entré de prénom pour votre personnage" call _displayError;
};
_bad = [_firstname, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzéè-"] call public_fnc_TextAllowed;
if (!(_bad isEqualTo "")) exitWith {
	"Vous utilisez un caractère interdit dans votre prénom de votre personnage<br/>(ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzéè-)" call _displayError;
};
if (((toArray(_firstname) select 0) < 65) || ((toArray(_firstname) select 0) > 90)) exitWith {
	"Le prénom de votre personnage doit commencer par une majuscule" call _displayError;
};

// lastName
_lastName = ctrlText 1502;
if (_lastName isEqualTo "") exitWith {
	"Vous n'avez pas entré de nom pour votre personnage" call _displayError;
};
_bad = [_lastName, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzéè-"] call public_fnc_TextAllowed;
if (!(_bad isEqualTo "")) exitWith {
	"Vous utilisez un caractère interdit dans votre nom de famille<br/>(ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzéè-)" call _displayError;
};
if (((toArray(_lastName) select 0) < 65) || ((toArray(_lastName) select 0) > 90)) exitWith {
	"Le nom de votre personnage doit commencer par une majuscule" call _displayError;
};
if ((([_firstname] call CBA_fnc_strLen) + ([_lastName] call CBA_fnc_strLen)) != (([profileName] call CBA_fnc_strLen) - 1)) exitWith {
	"Le prénom et le nom entrés ne correspondent pas à votre nom de profil ArmA 3" call _displayError;
};

// birth
_birth = ctrlText 1503;
if ((_birth isEqualTo "00/00/0000") || (_birth isEqualTo "")) exitWith {
	"Vous n'avez pas entré de date de naissance pour votre personnage" call _displayError;
};
_bad = [_birth, "0123456789/"] call public_fnc_TextAllowed;
if (!(_bad isEqualTo "")) exitWith {
	"Vous utilisez un caractère interdit dans votre date de naissance<br/>(0123456789/)" call _displayError;
};
_age = [_birth] call public_fnc_age;
if ((_age < 18) || (_age > 100)) exitWith {
	"Votre personnage doit avoir plus de 18 ans et moins de 90 ans" call _displayError;
};

_origin = lbText[1504, (lbCurSel 1504)];
_sexe = lbText[1505, (lbCurSel 1505)];
_action = 
[
	format
	[
		"Êtes-vous sûr des informations entrées ? Une fois validé vous devrez <t color='#FF4000'>changer d'identité</t> pour pouvoir les modifier<br/><br/><t align='left'>Sexe</t><t align='right'>%5</t><br/><t align='left'>Prénom</t><t align='right'>%1</t><br/><t align='left'>Nom</t><t align='right'>%2</t><br/><t align='left'>Âge</t><t align='right'>%3</t><br/><t align='left'>Origine</t><t align='right'>%4</t>", 
		_firstname,
		_lastName,
		_age,
		_origin,
		_sexe
	],
	"Validation",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	g_firstName = _firstname;
	g_lastName = _lastName;
	g_birth = _birth;
	g_nationality = _origin;
	g_sexe = _sexe;
	closeDialog 0;
};