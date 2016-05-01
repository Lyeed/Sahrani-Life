/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

format
[
	"%1 %2 %3",
	(date select 2),
	switch (date select 1) do
	{
		case 1: {"Janvier"};
		case 2: {"Février"};
		case 3: {"Mars"};
		case 4: {"Avril"};
		case 5: {"Mai"};
		case 6: {"Juin"};
		case 7: {"Juillet"};
		case 8: {"Aout"};
		case 9: {"Septembre"};
		case 10: {"Octobre"};
		case 11: {"Novembre"};
		case 12: {"Décembre"};
	},
	(date select 0)
]
