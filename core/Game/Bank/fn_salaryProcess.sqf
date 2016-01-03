/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (player getVariable ["arrested", false]) then {
	["Vous n'avez pas reçu votre salaire car vous êtes en prison", "buy"] call public_fnc_info;
} else {
	[true, (call g_paycheck), "Salaire"] call public_fnc_handleATM;
	[false, ((call g_paycheck) * 0.05), "Taxe salariale"] call public_fnc_handleATM;
	[format["Vous avez reçu votre salaire : <t color='#8cff9b'>%1</t>kn<br/>Pour plus d'informations sur vos éventuelles factures, rendez-vous dans l'application <t color='#00FF80'>solde</t> de votre tablette", ([(call g_paycheck)] call public_fnc_numberText)], "buy"] call public_fnc_info;
};

if (!(g_phone_forfait in ["", "lite", "none"])) then
{
	_price = getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "bill");
	if (_price < g_atm) then
	{
		[false, _price, "Forfait téléphonique"] call public_fnc_handleATM;
	} else {
		["Vous n'avez plus assez d'argent dans votre compte en banque pour payer votre forfait téléphonique.<br/>Vous avez été rétrogradé au forfait lite.", "FORFAIT"] call public_fnc_phone_message_receive;
		["lite"] call public_fnc_phone_forfait_change;
	};
};
