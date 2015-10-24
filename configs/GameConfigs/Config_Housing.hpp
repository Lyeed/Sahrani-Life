/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_STORAGES
{
	class Skyline_Coffre_Small 
	{
		inventory = 800;//virtual space
	};
	class Skyline_Coffre_Medium 
	{
		inventory = 1700;
	};	
	class Skyline_Coffre_Large 
	{
		inventory = 3200;
	};
};

class ALYSIA_HOUSES
{
	class Land_Sara_zluty_statek_in
	{
		price = 150000;//buy price
		storage = "Skyline_Coffre_Small";//Storage className from ALYSIA_STORAGES, "" to disable storage
		garage = 0;//Can use garage point  (1 - YES / 2 - NO)
		side = "CIV";//(CIV-WEST-EAST-GUER)
		rank = 5;//Rank needed to buy (not for civilian)
		license = "home";//License needed (only for civilian) "" to disable condition
	};

	class Land_Sara_domek_zluty
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		garage = 0;
		side = "CIV";
		rank = 0;
		license = "home";
	};
};