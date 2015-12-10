/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_id", "_list_sexe", "_list_origin"];
disableSerialization;

createDialog "RscDisplayWelcomeCharacter";
_display = findDisplay 1500;
_id = _display displayAddEventHandler ["KeyDown", "if ((_this select 1) isEqualTo 1) then {true}"];

_list_sexe = _display displayCtrl 1505;
lbClear _list_sexe;

_list_sexe lbAdd "homme";
_list_sexe lbSetPicture [0, "\lyeed_IMG\data\welcome\male.paa"];
_list_sexe lbAdd "femme";
_list_sexe lbSetPicture [1, "\lyeed_IMG\data\welcome\female.paa"];
_list_sexe lbSetCurSel 0;

_list_origin = _display displayCtrl 1504;
lbClear _list_origin;
{
	_index = _list_origin lbAdd (_x select 0);
	_list_origin lbSetPicture [_index, (_x select 1)];
} forEach (
[
	["Afghanistan", "\world_markers\images\Afghanistan.paa"],
	["Afrique du Sud", "\world_markers\images\SouthAfrica.paa"],
	["Albanie", "\world_markers\images\Albania.paa"],
	["Algérie", "\world_markers\images\Algeria.paa"],
	["Allemagne", "\world_markers\images\Germany.paa"],
	["Andorre", "\world_markers\images\Andorra.paa"],
	["Angola", "\world_markers\images\Angola.paa"],
	["Arabie saoudite", "\world_markers\images\SAudiArabia.paa"],
	["Argentine", "\world_markers\images\Argentina.paa"],
	["Arménie", "\world_markers\images\Armenia.paa"],
	["Australie", "\world_markers\images\Australia.paa"],
	["Azerbaïdjan", "\world_markers\images\Azerbajan.paa"],
	["Bahamas", "\world_markers\images\Bahamas.paa"],
	["Bahreïn", "\world_markers\images\Bahrain.paa"],
	["Bangladesh", "\world_markers\images\Bangladesh.paa"],
	["Barbade", "\world_markers\images\Barbados.paa"],
	["Belgique", "\world_markers\images\Belgium.paa"],
	["Belize", "\world_markers\images\Belize.paa"],
	["Bénin", "\world_markers\images\Benin.paa"],
	["Biélorussie", "\world_markers\images\Belarus.paa"],
	["Bolivie", "\world_markers\images\Bolivia.paa"],
	["Bosnie-Herzégovine", "\world_markers\images\BosniaHerzegovina.paa"],
	["Botswana", "\world_markers\images\Botswana.paa"],
	["Brésil", "\world_markers\images\Brazil.paa"],
	["Brunei", "\world_markers\images\Brunei.paa"],
	["Bulgarie", "\world_markers\images\Bulgaria.paa"],
	["Burkina Faso", "\world_markers\images\BurkinaFaso"],
	["Burundi", "\world_markers\images\Burundi.paa"],
	["Cambodge", "\world_markers\images\Cambodia.paa"],
	["Cameroun", "\world_markers\images\Cameroon.paa"],
	["Canada", "\world_markers\images\Canada.paa"],
	["Cap-Vert" , "\world_markers\images\CapeVerde.paa"],
	["Chili", "\world_markers\images\Chile.paa"],
	["Chine", "\world_markers\images\China.paa"],
	["Chypre", "\world_markers\images\CyprusRepublic.paa"],
	["Colombie", "\world_markers\images\Colombia.paa"],
	["Comores", "\world_markers\images\Comoros.paa"],
	["Congo", "\world_markers\images\DemocraticCongo.paa"],
	["Corée du Nord", "\world_markers\images\NorthKorea.paa"],
	["Corée du Sud", "\world_markers\images\Southkorea.paa"],
	["Costa Rica", "\world_markers\images\CostaRica.paa"],
	["Côte d'Ivoire", "\world_markers\images\IvoiryCoast.paa"],
	["Croatie", "\world_markers\images\Croatia.paa"],
	["Cuba", "\world_markers\images\Cuba.paa"],
	["Danemark", "\world_markers\images\Denmark.paa"],
	["Djibouti", "\world_markers\images\Djibouti.paa"],
	["Dominique", "\world_markers\images\Dominica.paa"],
	["Égypte", "\world_markers\images\Egypt.paa"],
	["Émirats arabes unis", "\world_markers\images\UnitedArabEmirates.paa"],
	["Équateur", "\world_markers\images\Ecuador.paa"],
	["Érythrée", "\world_markers\images\Eritrea.paa"],
	["Espagne", "\world_markers\images\Spain.paa"],
	["Estonie", "\world_markers\images\Estonia.paa"],
	["États-Unis", "\world_markers\images\UnitedStates.paa"],
	["Éthiopie", "\world_markers\images\Ethiopia.paa"],
	["Finlande", "\world_markers\images\Finland.paa"],
	["France", "\world_markers\images\France.paa"],
	["Gabon", "\world_markers\images\Gabon.paa"],
	["Gambie", "\world_markers\images\Gambia.paa"],
	["Géorgie", "\world_markers\images\GeorgiaRepublic.paa"],
	["Ghana", "\world_markers\images\Ghana.paa"],
	["Grèce", "\world_markers\images\Greece.paa"],
	["Grenade", "\world_markers\images\Grenada.paa"],
	["Groenland", "\world_markers\images\Greenland.paa"],
	["Guatemala", "\world_markers\images\Guatemala.paa"],
	["Guinée", "\world_markers\images\Guinea.paa"],
	["Guinée-Bissao", "\world_markers\images\GuineaBissau.paa"],
	["Guyana", "\world_markers\images\Guyana.paa"],
	["Haïti", "\world_markers\images\Haiti.paa"],
	["Honduras", "\world_markers\images\Honduras.paa"],
	["Hongrie", "\world_markers\images\Hunfrya.paa"],
	["Inde", "\world_markers\images\India.paa"],
	["Indonésie", "\world_markers\images\Indonesia.paa"],
	["Iran", "\world_markers\images\Iran.paa"],
	["Iraq", "\world_markers\images\Iraq.paa"],
	["Irlande", "\world_markers\images\Ireland.paa"],
	["Israël", "\world_markers\images\Israel.paa"],
	["Italie", "\world_markers\images\Italy.paa"],
	["Jamaïque", "\world_markers\images\Jamaica.paa"],
	["Japon", "\world_markers\images\Japan.paa"],
	["Jordanie", "\world_markers\images\Jordan.paa"],
	["Kazakhstan", "\world_markers\images\Kazkhstan.paa"],
	["Kenya", "\world_markers\images\Kenya.paa"],
	["Kirghizistan", "\world_markers\images\Kyrgyzstan.paa"],
	["Kiribati", "\world_markers\images\KiribatiRepublic.paa"],
	["Koweït", "\world_markers\images\Kuwait.paa"],
	["Laos", "\world_markers\images\Laos.paa"],
	["Lesotho", "\world_markers\images\Lesotho.paa"],
	["Liban", "\world_markers\images\Libanon.paa"],
	["Liberia", "\world_markers\images\Liberia.paa"],
	["Libye", "\world_markers\images\Lybia.paa"],
	["Liechtenstein", "\world_markers\images\Liechtenstein.paa"],
	["Lituanie", "\world_markers\images\Lithuania.paa"],
	["Luxembourg", "\world_markers\images\Luxembourg.paa"],
	["Madagascar", "\world_markers\images\Madagascar.paa"],
	["Malaisie", "\world_markers\images\Malaysia.paa"],
	["Malawi", "\world_markers\images\Malawi.paa"],
	["Maldives", "\world_markers\images\Maldives.paa"],
	["Mali", "\world_markers\images\Mali.paa"],
	["Malte", "\world_markers\images\MaltaRepublic.paa"],
	["Maroc", "\world_markers\images\Morocco.paa"],
	["Maurice", "\world_markers\images\Mauritius.paa"],
	["Mauritanie", "\world_markers\images\Mauritania.paa"],
	["Comorres", "\world_markers\images\Comorros.paa"],
	["Mexique", "\world_markers\images\Mexico.paa"],
	["Moldavie", "\world_markers\images\Moldova.paa"],
	["Monaco", "\world_markers\images\Monaco.paa"],
	["Mongolie", "\world_markers\images\Mongolia.paa"],
	["Monténégro", "\world_markers\images\Montenegro.paa"],
	["Mozambique", "\world_markers\images\Mozambique.paa"],
	["Namibie", "\world_markers\images\Nambia.paa"],
	["Nauru", "\world_markers\images\NauruRepublic.paa"],
	["Népal", "\world_markers\images\Nepal.paa"],
	["Nicaragua", "\world_markers\images\Nicaragua.paa"],
	["Niger", "\world_markers\images\Niger.paa"],
	["Nigeria", "\world_markers\images\Nigeria.paa"],
	["Norvège", "\world_markers\images\Norway.paa"],
	["Nouvelle-Zélande", "\world_markers\images\NewZealand.paa"],
	["Oman", "\world_markers\images\Kyrgyzstan.paa"],
	["Ouganda", "\world_markers\images\Oman.paa"],
	["Pakistan", "\world_markers\images\Pakistan.paa"],
	["Panama", "\world_markers\images\Panama.paa"],
	["Paraguay", "\world_markers\images\Paraguay.paa"],
	["Pays-Bas", "\world_markers\images\Netherlands.paa"],
	["Pérou", "\world_markers\images\Kyrgyzstan.paa"],
	["Philippines", "\world_markers\images\Peru.paa"],
	["Pologne", "\world_markers\images\Poland.paa"],
	["Portugal", "\world_markers\images\Portugal.paa"],
	["Qatar", "\world_markers\images\Qatar.paa"],
	["République tchèque", "\world_markers\images\CzechRepublic.paa"],
	["Roumanie", "\world_markers\images\Roumania.paa"],
	["Royaume-Uni", "\world_markers\images\UnitedKingdom.paa"],
	["Russie", "\world_markers\images\Russia.paa"],
	["Rwanda", "\world_markers\images\Rwanda.paa"],
	["Sainte-Lucie", "\world_markers\images\SaintLucia.paa"],
	["Saint-Vincent-et-les-Grenadines", "\world_markers\images\SaintVincentGrenadines.paa"],
	["Samoa", "\world_markers\images\Samoa.paa"],
	["Sénégal", "\world_markers\images\Senegal.paa"],
	["Serbie", "\world_markers\images\SerbiaRepuplic.paa"],
	["Seychelles", "\world_markers\images\Seychelles.paa"],
	["Sierra Leone", "\world_markers\images\SierraLeone.paa"],
	["Singapour", "\world_markers\images\Singapore.paa"],
	["Slovaquie", "\world_markers\images\Slovakia.paa"],
	["Slovénie", "\world_markers\images\Slovenia.paa"],
	["Somalie", "\world_markers\images\Somalia.paa"],
	["Sri Lanka", "\world_markers\images\SriLanka.paa"],
	["Suède", "\world_markers\images\Sweden.paa"],
	["Suisse", "\world_markers\images\Switzerland.paa"],
	["Suriname", "\world_markers\images\Suriname.paa"],
	["Syrie", "\world_markers\images\Syria.paa"],
	["Tadjikistan", "\world_markers\images\Tadjikistan.paa"],
	["Taïwan", "\world_markers\images\Taiwan.paa"],
	["Tanzanie", "\world_markers\images\Tanzania.paa"],
	["Thaïlande", "\world_markers\images\Thailand.paa"],
	["Togo", "\world_markers\images\Togo.paa"],
	["Tonga", "\world_markers\images\Tonga.paa"],
	["Tunisie", "\world_markers\images\Tunisia.paa"],
	["Turkménistan", "\world_markers\images\Turkmenistan.paa"],
	["Turquie", "\world_markers\images\Turkey.paa"],
	["Tuvalu", "\world_markers\images\Tuvalu.paa"],
	["Ukraine", "\world_markers\images\Ukraine.paa"],
	["Uruguay", "\world_markers\images\Uruguay.paa"],
	["Vanuatu", "\world_markers\images\Vanatu.paa"],
	["Venezuela", "\world_markers\images\Venezuela.paa"],
	["Viêt Nam", "\world_markers\images\Vietnam.paa"],
	["Yémen", "\world_markers\images\Yemen.paa"],
	["Zambie", "\world_markers\images\Zambia.paa"],
	["Zimbabwe", "\world_markers\images\Zimbabwe.paa"]
]);
_list_origin lbSetCurSel 0;

waitUntil
{
	(_display displayCtrl 1507) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", ([] call public_fnc_strTime)];
	(_display displayCtrl 1506) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", ([] call public_fnc_strDate)];
	sleep 0.5;
	isNull (findDisplay 1500)
};

(findDisplay 1500) displayRemoveEventHandler ["KeyDown", _id];