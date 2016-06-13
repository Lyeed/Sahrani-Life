#define AFFECT_FARM {"bean","corn","patate","wheat","cottonp","sunflower","cotton","huile_bottle","tissue"}
#define AFFECT_PROCESSED {"brique","soufre","saltp","coal","ciment","woodp","furniture","glass"}
#define AFFECT_MINERAL {"ironp","platinep","copperp","alu","goldbar"}
#define AFFECT_DRUGS {"cigarette","cigare","heroinps","meth_bag","marijuana_bag","cocainepc_bag","cocainep_bag"}
#define AFFECT_ILLEGAL {"grozdova","slivovica","turtle","artefact","artefact_R","objvaleur"}

class ALYSIA_ITEMS
{
    class illegal_money
    {
        name="kn (argent sale)";
        weight=0;
        illegal=1;
        image="alysia_items_virtual\data\money.paa";
    };

    class engrais
    {
        name="Engrais";
        weight=1;
        price_buy=25;
        image="alysia_items_virtual\data\engrais.paa";
    };

    class goldnuggets
    {
        name="Pépite d'or";
        weight=1;
        image="alysia_items_virtual\data\pepite_or.paa";
    };
    class goldbar
    {
        name="Lingot d'or";
        weight=30;
        image="alysia_items_virtual\data\lingot_or.paa";
        license="gold";
        class market
        {
            max=15400;
            min=1540;
            affect[]=AFFECT_MINERAL;
        };
    };

    class handcuffs
    {
        name="Menottes";
        weight=2;
        price_buy=45;
        illegal=1;
        image="alysia_items_virtual\data\menottes.paa";
    };
    class handcuffkeys
    {
        name="Clés de menottes";
        weight=1;
        price_buy=5;
        illegal=1;
        image="alysia_items_virtual\data\clee_menottes.paa";
    };

    class patch
    {
        name="Patch anti addiction";
        weight=1;
        price_buy=75;
        image="alysia_items_virtual\data\patch_anti_addiction.paa";
        class use
        {
            action="[] call AlysiaClient_fnc_item_patch;";
        };
    };

    class adn
    {
        name="Test ADN";
        buy_license_GUER="guer_gen";
        weight=3;
        price_buy=24500;
        image="alysia_items_virtual\data\adn.paa";
    };

    class nitro
    {
        name="Nitro";
        weight=4;
        price_buy=500;
        illegal=1;
        image="alysia_items_virtual\data\nitroboost.paa";
    };

    class storage_small
    {
        name="Coffre (Petit)";
        weight=10;
        price_buy=20000;
        image="alysia_items_virtual\data\coffre.paa";
        class use
        {
            action="['storage_small'] spawn AlysiaClient_fnc_item_chest;";
        };
    };
    class storage_medium: storage_small
    {
        name="Coffre (Moyen)";
        weight=20;
        price_buy=31000;
        class use
        {
            action="['storage_medium'] spawn AlysiaClient_fnc_item_chest;";
        };
    };
    class storage_large: storage_small
    {
        name="Coffre (Grand)";
        weight=30;
        price_buy=43000;
        class use
        {
            action="['storage_large'] spawn AlysiaClient_fnc_item_chest;";
        };
    };
    class storage_stock: storage_small
    {
        name="Coffre (Stock)";
        weight=35;
        price_buy=50000;
        class use
        {
            action="['storage_stock'] spawn AlysiaClient_fnc_item_chest;";
        };
    };
    
    class barriere
    {
        name="Barrière (fixe)";
        weight=6;
        price_buy=120;
        image="alysia_items_virtual\data\barriere.paa";
        class use
        {
            action="['barriere'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class cone
    {
        name="Cône";
        weight=2;
        price_buy=50;
        image="alysia_items_virtual\data\cone.paa";
        class use
        {
            action="['cone'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class bargate
    {
        name="Barrière (porte)";
        weight=11;
        price_buy=550;
        image="alysia_items_virtual\data\bargate.paa";
        class use
        {
            action="['bargate'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class table_wood
    {
        name="Table en bois";
        weight=9;
        image="alysia_items_virtual\data\table_wood.paa";
        class use
        {
            action="['table_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class chair_wood
    {
        name="Chaise en bois";
        weight=3;
        image="alysia_items_virtual\data\chair_wood.paa";
        class use
        {
            action="['chair_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class tribune_wood
    {
        name="Tribune en bois";
        weight=20;
        image="alysia_items_virtual\data\tribune_wood.paa";
        class use
        {
            action="['tribune_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class bagfence_sand
    {
        name="Sacs de sable";
        weight=10;
        image="alysia_items_virtual\data\bagfence_sand.paa";
        class use
        {
            action="['bagfence_sand'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class antitank_steel
    {
        name="Piège anti-chars";
        weight=19;
        image="alysia_items_virtual\data\antitank_steel.paa";
        class use
        {
            action="['antitank_steel'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };
    class guardshed_wood
    {
        name="Abri en bois";
        weight=13;
        image="alysia_items_virtual\data\guardshed_wood.paa";
        class use
        {
            action="['guardshed_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };

    class spikeStrip
    {
        name="Herse";
        weight=5;
        price_buy=130;
        image="alysia_items_virtual\data\herse.paa";
        class use
        {
            action="['spikeStrip'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };

    class tabac_seed
    {
        name="Graine (tabac)";
        weight=1;
        price_buy=8;
        illegal=1;
        image="alysia_items_virtual\data\graine_tabac.paa";
    };
    class tabac
    {
        name="Tabac";
        weight=2;
        image="alysia_items_virtual\data\tabac.paa";
    };
    class cigare
    {
        name="Cigare";
        weight=2;
        illegal=1;
        image="alysia_items_virtual\data\cigare.paa";
        license="tabac";
        class market
        {
            max=3640;
            min=178;
            affect[]=AFFECT_DRUGS;
        };
    };
    class cigarette
    {
        name="Cigarette";
        weight=2;
        illegal=1;
        image="alysia_items_virtual\data\cigarette.paa";
        license="tabac";
        class market
        {
            max=1274;
            min=27;
            affect[]=AFFECT_DRUGS;
        };
    };

    class objvaleur
    {
        name="Objet de valeur";
        weight=2;
        illegal=1;
        image="alysia_items_virtual\data\objet_de_valeur.paa";
        class market
        {
            max=2100;
            min=266;
            affect[]=AFFECT_ILLEGAL;
        };
    };

    class artefact
    {
        name="Artefact";
        weight=4;
        illegal=1;
        image="alysia_items_virtual\data\artefact.paa";
        class market
        {
            max=1683;
            min=112;
            affect[]=AFFECT_ILLEGAL;
        };
    };
    class artefact_R
    {
        name="Artefact rénové";
        weight=4;
        illegal=1;
        image="alysia_items_virtual\data\artefact_R.paa";
        license="archeologie";
        class market
        {
            max=23717;
            min=739;
            affect[]=AFFECT_ILLEGAL;
        };
    };

    class wood
    {
        name="Buche de bois";
        weight=4;
        image="alysia_items_virtual\data\tas_bois.paa";
    };
    class woodp
    {
        name="Planche";
        weight=2;
        image="alysia_items_virtual\data\planche.paa";
        license="wood";
        class market
        {
            max=189;
            min=21;
            affect[]=AFFECT_PROCESSED;
        };
    };
    class furniture
    {
        name="Meuble";
        weight=6;
        image="alysia_items_virtual\data\meuble.paa";
        license="furniture";
        class market
        {
            max=2044;
            min=490;
            affect[]=AFFECT_PROCESSED;
        };
    };

    class iron
    {
        name="Minerai de fer";
        weight=3;
        image="alysia_items_virtual\data\minerai_fer.paa";
    };
    class ironp
    {
        name="Lingot de fer";
        weight=2;
        image="alysia_items_virtual\data\lingot_fer.paa";
        license="iron";
        class market
        {
            max=560;
            min=40;
            affect[]=AFFECT_MINERAL;
        };
    };
    class steel
    {
        name="Acier";
        weight=3;
        image="alysia_items_virtual\data\steel.paa";
        license="company_foundry";
    };

    class salt
    {
        name="Sel";
        weight=4;
        image="alysia_items_virtual\data\sel.paa";
    };
    class saltp
    {
        name="Sel traité";
        weight=3;
        image="alysia_items_virtual\data\sel_traiter.paa";
        class market
        {
            max=553;
            min=10;
            affect[]=AFFECT_PROCESSED;
        };
    };

    class sand
    {
        name="Sable";
        weight=3;
        image="alysia_items_virtual\data\sable.paa";
    };
    class glass
    {
        name="Verre";
        weight=2;
        image="alysia_items_virtual\data\verre.paa";
        license="sand";
        class market
        {
            max=573;
            min=14;
            affect[]=AFFECT_PROCESSED;
        };
    };
    class seringue
    {
        name="Seringue";
        weight=1;
        price_buy=90;
        price_sell=15;
        image="alysia_items_virtual\data\seringue_vide.paa";
    };

    class copper
    {
        name="Minerai de cuivre";
        weight=3;
        image="alysia_items_virtual\data\minerai_cuivre.paa";
    };
    class copperp
    {
        name="Lingot de cuivre";
        weight=2;
        image="alysia_items_virtual\data\lingot_cuivre.paa";
        license="copper";
        class market
        {
            max=497;
            min=49;
            affect[]=AFFECT_MINERAL;
        };
    };
    
    class baux
    {
        name="Minerai de bauxite";
        weight=3;
        image="alysia_items_virtual\data\minerai_bauxite.paa";
    };
    class alu
    {
        name="Lingot d'aluminium";
        weight=2;
        image="alysia_items_virtual\data\alluminium.paa";
        license="bauxite";
        class market
        {
            max=928;
            min=84;
            affect[]=AFFECT_MINERAL;
        };
    };

    class soufre
    {
        name="Soufre";
        weight=1;
        image="alysia_items_virtual\data\soufre.paa";
        class market
        {
            max=68;
            min=5;
            affect[]=AFFECT_PROCESSED;
        };
    };
    class hsoufre
    {
        name="Hydrate de soufre";
        weight=2;
        illegal=1;
        image="alysia_items_virtual\data\soufre_hydrate.paa";
    };

    class platine
    {
        name="Minerai de platine";
        weight=4;
        image="alysia_items_virtual\data\minerai_platine.paa";
    };
    class platinep
    {
        name="Lingot de platine";
        weight=3;
        image="alysia_items_virtual\data\lingot_platine.paa";
        license="platine";
        class market
        {
            max=1200;
            min=100;
            affect[]=AFFECT_MINERAL;
        };
    };

    class cocaine_seed
    {
        name="Graine (coca)";
        weight=1;
        price_buy=150;
        illegal=1;
        image="alysia_items_virtual\data\graines_coca.paa";
    };
    class cocaine
    {
        name="Feuille de coca";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\coca.paa";
    };
    class cocainep
    {
        name="Cocaïne pure";
        weight=1;
        illegal=1;
        image="alysia_items_virtual\data\cocaine.paa";
    };
    class cocainepc
    {
        name="Cocaïne coupée";
        weight=1;
        illegal=1;
        image="alysia_items_virtual\data\cocaine_coupe.paa";
    };
    class cocainep_bag
    {
        name="Sac de cocaïne pure";
        weight=5;
        illegal=1;
        image="alysia_items_virtual\data\drug_bag.paa";
        class market
        {
            max=10920;
            min=764;
            affect[]=AFFECT_DRUGS;
        };
    };
    class cocainepc_bag
    {
        name="Sac de cocaïne coupée";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\drug_bag.paa";
        class market
        {
            max=5480;
            min=528;
            affect[]=AFFECT_DRUGS;
        };
    };

    class heroin_seed
    {
        name="Graine (pavot)";
        weight=1;
        price_buy=120;
        illegal=1;
        image="alysia_items_virtual\data\graine_pavot.paa";
    };
    class heroin
    {
        name="Fleur de pavot";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\pavot.paa";
    };
    class heroinp
    {
        name="Heroïne pure";
        weight=2;
        illegal=1;
        image="alysia_items_virtual\data\heroine.paa";
    };
    class heroinps
    {
        name="Seringue d'héroïne pure";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\seringue_heroine.paa";
        class market
        {
            max=4480;
            min=280;
            affect[]=AFFECT_DRUGS;
        };
    };

    class meth_seed
    {
        name="Graine (Ephedra)";
        weight=1;
        price_buy=160;
        illegal=1;
        image="alysia_items_virtual\data\graines_ephedra.paa";
    };
    class meth
    {
        name="Feuille d'ephedra";
        weight=4;
        illegal=1;
        image="alysia_items_virtual\data\ephedra.paa";
    };
    class methp
    {
        name="Cristal de Méthamphétamine";
        weight=1;
        illegal=1;
        image="alysia_items_virtual\data\methamphetamine.paa";
    };
    class meth_bag
    {
        name="Sac de cristaux de Méthamphétamine";
        weight=5;
        illegal=1;
        image="alysia_items_virtual\data\drug_bag.paa";
        class market
        {
            max=19292;
            min=528;
            affect[]=AFFECT_DRUGS;
        };
    };

    class cannabis_seed
    {
        name="Graine (cannabis)";
        weight=1;
        price_buy=70;
        illegal=1;
        image="alysia_items_virtual\data\graines_canabis.paa";
    };
    class cannabis
    {
        name="Cannabis";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\canabis.paa";
    };
    class marijuana
    {
        name="Marijuana";
        weight=2;
        illegal=1;
        image="alysia_items_virtual\data\marijuana.paa";
    };
    class marijuana_bag
    {
        name="Sac de Marijuana";
        weight=5;
        illegal=1;
        image="alysia_items_virtual\data\drug_bag.paa";
        class market
        {
            max=9100;
            min=346;
            affect[]=AFFECT_DRUGS;
        };
    };

    class fishingpoles
    {
        name="Filet de pêche";
        weight=1;
        price_buy=100;
        image="alysia_items_virtual\data\filet_peche.paa";
    };

    class bean_seed
    {
        name="Graine (haricot)";
        weight=1;
        price_buy=4;
        image="alysia_items_virtual\data\graine_haricot.paa";
    };
    class bean
    {
        name="Haricot";
        weight=2;
        image="alysia_items_virtual\data\haricot.paa";
        class market
        {
            max=105;
            min=6;
            affect[]=AFFECT_FARM;
        };
    };

    class corn_seed
    {
        name="Graine (maïs)";
        weight=1;
        price_buy=3;
        image="alysia_items_virtual\data\graine_mais.paa";
    };
    class corn
    {
        name="Maïs";
        weight=2;
        image="alysia_items_virtual\data\mais.paa";
        class market
        {
            max=108;
            min=11;
            affect[]=AFFECT_FARM;
        };
    };

    class patate_seed
    {
        name="Patate germée";
        weight=1;
        price_buy=6;
        image="alysia_items_virtual\data\patategerme.paa";
    };
    class patate
    {
        name="Patate";
        weight=2;
        image="alysia_items_virtual\data\patate.paa";
        class market
        {
            max=161;
            min=42;
            affect[]=AFFECT_FARM;
        };
    };

    class wheatseed
    {
        name="Graine (blé)";
        weight=1;
        price_buy=5;
        image="alysia_items_virtual\data\graine_ble.paa";
    };
    class wheat
    {
        name="Blé";
        weight=2;
        image="alysia_items_virtual\data\ble.paa";
        class market
        {
            max=148;
            min=28;
            affect[]=AFFECT_FARM;
        };
    };

    class sunflower_seed
    {
        name="Graine (Tournesol)";
        weight=1;
        price_buy=5;
        buy_license_CIV="company_farming";
        image="alysia_items_virtual\data\sunflower_seed.paa";
    };
    class sunflower
    {
        name="Fleur de tournesol";
        weight=2;
        image="alysia_items_virtual\data\sunflower.paa";
        class market
        {
            max=126;
            min=13;
            affect[]=AFFECT_FARM;
        };
    };
    class huile
    {
        name="Huile de tournesol";
        weight=1;
        image="alysia_items_virtual\data\huile.paa";
    };
    class huile_bottle
    {
        name="Bouteille d'huile de tournesol";
        weight=3;
        image="alysia_items_virtual\data\huile_bottle.paa";
        class market
        {
            max=1057;
            min=56;
            affect[]=AFFECT_FARM;
        };
    };

    class houblon
    {
        name="Houblon";
        weight=1;
        image="alysia_items_virtual\data\houblon.paa";
        price_sell=17;
    };

    class pumpkin_seed
    {
        name="Graine (citrouille)";
        weight=1;
        price_buy=5;
        image="alysia_items_virtual\data\pumpkin_seed.paa";
        buy_license_CIV="company_farming";
    };
    class pumpkin
    {
        name="Citrouille";
        weight=4;
        image="alysia_items_virtual\data\pumpkin.paa";
        price_sell=135;
        class food
        {
            hunger=80;
            sound="eat_biscuit";
        };
    };
    class pumpkin_juice
    {
        name="Jus de citrouille";
        weight=1;
        image="alysia_items_virtual\data\pumpkin_juice.paa";
    };
    class pumpkin_bottle
    {
        name="Bouteille de jus de citrouille";
        weight=2;
        image="alysia_items_virtual\data\pumpkin_bottle.paa";
        class food
        {
            thirst=40;
            sound="drink_water";
            unlimitedRun=180;
        };
    };

    class cotton_seed
    {
        name="Graine (coton)";
        weight=1;
        price_buy=4;
        image="alysia_items_virtual\data\graine_coton.paa";
    };
    class cotton
    {
        name="Coton";
        weight=2;
        image="alysia_items_virtual\data\coton.paa";
        class market
        {
            max=83;
            min=12;
            affect[]=AFFECT_FARM;
        };
    };
    class cottonp
    {
        name="Coton traité";
        weight=1;
        image="alysia_items_virtual\data\boule_coton.paa";
        class market
        {
            max=138;
            min=17;
            affect[]=AFFECT_FARM;
        };
    };
    class tissue
    {
        name="Tissue";
        weight=2;
        image="alysia_items_virtual\data\tissue.paa";
        license="company_clothing";
    };

    class chips
    {
        name="Paquet de chips";
        weight=1;
        price_buy=41;
        image="alysia_items_virtual\data\chips.paa";
        class food
        {
            hunger=20;
            thirst=-10;
            sound="eat_biscuit";
        };
    };
    class chocolat
    {
        name="Barre chocolaté";
        weight=1;
        price_buy=14;
        image="alysia_items_virtual\data\chocolat.paa";
        class food
        {
            hunger=10;
            sound="eat_biscuit";
        };
    };
    class villagoise
    {
        name="Villagoise";
        weight=1;
        price_buy=71;
        image="alysia_items_virtual\data\villageoise.paa";
        class food
        {
            hunger=-5;
            thirst=15;
            sound="drink_wine";
            alcool=0.15;
        };
    };
    class eau50
    {
        name="Bouteille d'eau de 50cl";
        weight=1;
        price_buy=23;
        image="alysia_items_virtual\data\eau50.paa";
        class food
        {
            thirst=15;
            sound="drink_water";
        };
    };
    class cerealbar
    {
        name="Barre de céréale";
        weight=1;
        price_buy=2;
        image="alysia_items_virtual\data\barre_de_cereale.paa";
        class food
        {
            hunger=30;
            sound="eat_biscuit";
        };
    };
    class raisin
    {
        name="Raisin";
        weight=1;
        price_buy=9;
        price_sell =11;
        image="alysia_items_virtual\data\raisin.paa";
        class food
        {
            hunger=10;
            thirst=2;
            sound="eat_biscuit";
        };
    };
    class sparklingwater
    {
        name="Eau gazeuse";
        weight=1;
        price_buy=1;
        image="alysia_items_virtual\data\bouteille_eau_gazeuse.paa";
        class food
        {
            thirst=50;
            sound="drink_soda";
        };
    };
    class prune
    {
        name="Prune";
        weight=1;
        price_buy=7;
        price_sell=8;
        image="alysia_items_virtual\data\prune.paa";
        class food
        {
            hunger=15;
            thirst=5;
            sound="eat_biscuit";
        };
    };
    class sandwich
    {
        name="Sandwich au jambon";
        weight=1;
        price_buy=2;
        image="alysia_items_virtual\data\sandwich_jambon.paa";
        class food
        {
            hunger=40;
            sound="eat_biscuit";
        };
    };
    class donut
    {
        name="Beignet";
        weight=1;
        price_buy=2;
        image="alysia_items_virtual\data\beignet.paa";
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
    };
    class soda
    {
        name="Soda";
        weight=1;
        price_buy=3;
        image="alysia_items_virtual\data\soda.paa";
        class food
        {
            thirst=30;
            sound="drink_soda";
        };
    };
    class water
    {
        name="Bouteille d'eau";
        weight=1;
        price_buy=2;
        image="alysia_items_virtual\data\bouteille_eau.paa";
        class food
        {
            thirst=40;
            sound="drink_water";
        };
    };
    class ragout
    {
        name="Boite de ragout";
        weight=1;
        price_buy=6;
        image="alysia_items_virtual\data\ragout.paa";
        class food
        {
            hunger=40;
            sound="eat_biscuit";
        };
    };
    class kefir
    {
        name="Kéfir";
        weight=1;
        price_buy=1;
        image="alysia_items_virtual\data\kefir.paa";
        class food
        {
            thirst=40;
            sound="drink_water";
        };
    };

    class clay
    {
        name="Argile";
        weight=3;
        image="alysia_items_virtual\data\argile.paa";
    };
    class brique
    {
        name="Brique";
        weight=3;
        image="alysia_items_virtual\data\brique.paa";
        license="company_construction";
        class market
        {
            max=482;
            min=70;
            affect[]=AFFECT_PROCESSED;
        };
    };

    class moule
    {
        name="Moule";
        weight=1;
        price_sell =184;
        image="alysia_items_virtual\data\moule.paa";
    };
    class palourde
    {
        name="Palourde";
        weight=1;
        price_sell =259;
        image="alysia_items_virtual\data\palourde.paa";
    };
    class saintjacques
    {
        name="Coquilles Saint-Jacques";
        weight=1;
        price_sell =364;
        image="alysia_items_virtual\data\saint_jacques.paa";
    };
    class bigorneau
    {
        name="Bigorneau";
        weight=1;
        price_sell =242;
        image="alysia_items_virtual\data\bigorneau.paa";
    };
    class crabe
    {
        name="Crabe";
        weight=1;
        price_sell =282;
        image="alysia_items_virtual\data\crabe.paa";
    };
    class bulot
    {
        name="Bulot";
        weight=1;
        price_sell =236;
        image="alysia_items_virtual\data\bulot.paa";
    };
    class anchois
    {
        name="Anchois";
        weight=1;
        price_sell =248;
        image="alysia_items_virtual\data\anchois.paa";
    };
    class bar
    {
        name="Bar";
        weight=1;
        price_sell =258;
        image="alysia_items_virtual\data\bar.paa";
    };
    class daurade
    {
        name="Daurade";
        weight=1;
        price_sell =248;
        image="alysia_items_virtual\data\daurade.paa";
    };
    class maquereau
    {
        name="Maquereau";
        weight=1;
        price_sell =262;
        image="alysia_items_virtual\data\maquereau.paa";
    };
    class merlu
    {
        name="Merlu";
        weight=1;
        price_sell =248;
        image="alysia_items_virtual\data\merlu.paa";
    };
    class sardine
    {
        name="Sardine";
        weight=1;
        price_sell =147;
        image="alysia_items_virtual\data\sardine.paa";
    };

    class grozdova
    {
        name="Bouteille de Grozdova";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\bouteille_eau_de_vie_raisin.paa";
        class market
        {
            max=1880;
            min=220;
            affect[]=AFFECT_ILLEGAL;
        };
        class food
        {
            alcool=0.55;
            thirst=50;
            sound="drink_wine";
        };
    };
    class slivovica
    {
        name="Bouteille de Slivovica";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\bouteille_eau_de_vie_prune.paa";
        class market
        {
            max=2814;
            min=364;
            affect[]=AFFECT_ILLEGAL;
        };
        class food
        {
            alcool=0.50;
            thirst=40;
            sound="drink_wine";
        };
    };

    class coal
    {
        name="Charbon";
        weight=2;
        image="alysia_items_virtual\data\charbon.paa";
        class market
        {
            max=126;
            min=28;
            affect[]=AFFECT_PROCESSED;
        };
    };

    class sifflet
    {
        name="Sifflet";
        weight=1;
        price_buy=3;
        image="alysia_items_virtual\data\sifflet.paa";
    };
    class alcool_test
    {
        name="Alcootest";
        price_buy=15;
        weight=1;
        image="alysia_items_virtual\data\alcool_test.paa";
    };

    class pierre
    {
        name="Pierre";
        weight=4;
        image="alysia_items_virtual\data\pierre.paa";
    };
    class ciment
    {
        name="Ciment";
        weight=3;
        image="alysia_items_virtual\data\ciment.paa";
        license="company_construction";
        class market
        {
            max=427;
            min=161;
            affect[]=AFFECT_PROCESSED;
        };
    };

    class medova
    {
        name="Bouteille de Medova";
        weight=1;
        price_buy=8;
        illegal=1;
        image="alysia_items_virtual\data\medova.paa";
        class food
        {
            thirst=65;
            hunger=0;
            sound="drink_wine";
            alcool=0.01;
        };
    };
    class cafe
    {
        name="Tasse de café";
        weight=1;
        price_buy=2;
        image="alysia_items_virtual\data\cafe.paa";
        class food
        {
            thirst=40;
            sound="drink_water";
        };
    };
    class ravioli
    {
        name="Ravioli en boite";
        weight=1;
        price_buy=9;
        image="alysia_items_virtual\data\ravioli.paa";
        class food
        {
            hunger=40;
            sound="eat_biscuit";
        };
    };
    class cookie
    {
        name="Cookie";
        weight=1;
        price_buy=2;
        image="alysia_items_virtual\data\cookie.paa";
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
    };
    class petitbeurre
    {
        name="Boîte de petits beurres";
        weight=1;
        price_buy=2;
        image="alysia_items_virtual\data\petitbeurre.paa";
        class food
        {
            hunger=40;
            sound="eat_biscuit";
        };
    };
    class croissant
    {
        name="Croissant";
        weight=1;
        price_buy=1;
        image="alysia_items_virtual\data\croissant.paa";
        class food
        {
            hunger=20;
            sound="eat_biscuit";
        };
    };
    class pizza
    {
        name="Pizza";
        weight=1;
        price_buy=8;
        image="alysia_items_virtual\data\pizza.paa";
        class food
        {
            hunger=70;
            sound="eat_biscuit";
        };
    };

    class oilu
    {
        name="Pétrole";
        weight=10;
        image="alysia_items_virtual\data\petrole.paa";
        store[]={"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
    };
    class sp98
    {
        name="SansPlomb 98";
        weight=1;
        image="alysia_items_virtual\data\sp98.paa";
        license="company_fuel";
        store[]={"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
    };
    class sp95
    {
        name="SansPlomb 95";
        weight=1;
        image="alysia_items_virtual\data\sp95.paa";
        license="company_fuel";
        store[]={"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
    };
    class gazole
    {
        name="Gazole";
        weight=1;
        image="alysia_items_virtual\data\gazole.paa";
        license="company_fuel";
        store[]={"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
    };
    class gpl
    {
        name="GPL";
        weight=1;
        image="alysia_items_virtual\data\gpl.paa";
        license="company_fuel";
        store[]={"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
    };
    class kerosene
    {
        name="Kéroséne";
        weight=3;
        image="alysia_items_virtual\data\kerosene.paa";
        license="company_fuel";
        store[]={"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
    };
    
    class turtle
    {
        name="Viande de tortue";
        weight=3;
        illegal=1;
        image="alysia_items_virtual\data\tortue.paa";
        class market
        {
            max=5278;
            min=728;
            affect[]=AFFECT_ILLEGAL;
        };
    };

    class bouteillevide
    {
        name="Bouteille Vide";
        weight=1;
        image="alysia_items_virtual\data\bouteillevide.paa";
    };

    class frag_1
    {
        name="Fragment (1)";
        weight=1;
        illegal=1;
        image="alysia_items_virtual\data\frag_1.paa";
    };
    class frag_2: frag_1
    {
        name="Fragment (2)";
        image="alysia_items_virtual\data\frag_2.paa";
    };
    class frag_3: frag_1
    {
        name="Fragment (3)";
        image="alysia_items_virtual\data\frag_3.paa";
    };
    class frag_4: frag_1
    {
        name="Fragment (4)";
        image="alysia_items_virtual\data\frag_4.paa";
    };
    class frag_5: frag_1
    {
        name="Fragment (5)";
        image="alysia_items_virtual\data\frag_5.paa";
    };
    class frag_6: frag_1
    {
        name="Fragment (6)";
        image="alysia_items_virtual\data\frag_6.paa";
    };

    class destroy_archeo
    {
        name="Kit (Archélogie)";
        weight=6;
        illegal=1;
        image="alysia_items_virtual\data\boite1.paa";
    };
    class destroy_stand: destroy_archeo
    {
        name="Kit (Infrastructure)";
        image="alysia_items_virtual\data\boite3.paa";
    };
    class destroy_field: destroy_archeo
    {
        name="Kit (Champs)";
        image="alysia_items_virtual\data\boite4.paa";
    };
    class destroy_labo: destroy_archeo
    {
        name="Kit (Laboratoire)";
        image="alysia_items_virtual\data\boite2.paa";
    };

    class buckshot
    {
        name="Chevrotine";
        weight=1;
        image="alysia_items_virtual\data\buckshot.paa";
    };
    class bullet: buckshot
    {
        name="Balle";
        image="alysia_items_virtual\data\bullet.paa";
        weight=0;
    };
    class magazine: buckshot
    {
        name="Chargeur vide";
        image="alysia_items_virtual\data\magazine.paa";
    };
    class barillet: buckshot
    {
        name="Barillet (pièce)";
        image="alysia_items_virtual\data\barillet.paa";
    };
    class canon: buckshot
    {
        name="Canon (pièce)";
        image="alysia_items_virtual\data\canon.paa";
    };
    class crosse_wood: buckshot
    {
        name="Crosse (bois)(pièce)";
        image="alysia_items_virtual\data\crosse_wood.paa";
    };
    class crosse_steel: buckshot
    {
        name="Crosse (acier)(pièce)";
        image="alysia_items_virtual\data\crosse_steel.paa";
    };
    class garde_main_wood: buckshot
    {
        name="Garde-main (bois)(pièce)";
        image="alysia_items_virtual\data\garde_main_wood.paa";
    };
    class garde_main_steel: buckshot
    {
        name="Garde-main (acier)(pièce)";
        image="alysia_items_virtual\data\garde_main_steel.paa";
    };
    class poignee: buckshot
    {
        name="Poignée (pièce)";
        image="alysia_items_virtual\data\poignee.paa";
    };
    class detente: buckshot
    {
        name="Détente (pièce)";
        image="alysia_items_virtual\data\detente.paa";
    };
    class percuteur: buckshot
    {
        name="Percuteur (pièce)";
        image="alysia_items_virtual\data\percuteur.paa";
    };
    class carcasse: buckshot
    {
        name="Carcasse (pièce)";
        image="alysia_items_virtual\data\carcasse.paa";
    };
    class bloc_culasse: buckshot
    {
        name="Bloc culasse (pièce)";
        image="alysia_items_virtual\data\bloc_culasse.paa";
    };
    class marteau: buckshot
    {
        name="Marteau (pièce)";
        image="alysia_items_virtual\data\marteau.paa";
    };
    class culasse: buckshot
    {
        name="Culasse (pièce)";
        image="alysia_items_virtual\data\culasse.paa";
    };

    class lab_marijuana
    {
        name="Laboratoire de marijuana";
        price_buy=95000;
        weight=40;
        illegal=1;
        image="alysia_items_virtual\data\drogue.paa";
        class use
        {
            action="['lab_marijuana'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_meth: lab_marijuana
    {
        name="Laboratoire de methamphetamine";
        price_buy=226000;
        image="alysia_items_virtual\data\drogue.paa";
        class use
        {
            action="['lab_meth'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_cocaine: lab_marijuana
    {
        name="Laboratoire de cocaïne";
        price_buy=110000;
        image="alysia_items_virtual\data\drogue.paa";
        class use
        {
            action="['lab_cocaine'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_heroin: lab_marijuana
    {
        name="Laboratoire d'héroïne";
        price_buy=192000;
        image="alysia_items_virtual\data\drogue.paa";
        class use
        {
            action="['lab_heroin'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_weapon: lab_marijuana
    {
        name="Usine illégale d'armes";
        price_buy=325000;
        image="alysia_items_virtual\data\Arme.paa";
        class use
        {
            action="['lab_weapon'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_clothing: lab_marijuana
    {
        name="Usine illégale d'équipements'";
        price_buy=165000;
        image="alysia_items_virtual\data\Equipement.paa";
        class use
        {
            action="['lab_clothing'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_cigare: lab_marijuana
    {
        name="Usine à cigares";
        price_buy=48000;
        weight=25;
        illegal=1;
        image="alysia_items_virtual\data\lab_cigare.paa";
        class use
        {
            action="['lab_cigare'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_heal: lab_marijuana
    {
        name="Table d'opération illégale";
        price_buy=92000;
        weight=20;
        illegal=1;
        image="alysia_items_virtual\data\lab_heal.paa";
        class use
        {
            action="['lab_heal'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_construction: lab_marijuana
    {
        name="Usine illégale de constructions";
        price_buy=135000;
        weight=20;
        illegal=1;
        image="alysia_items_virtual\data\construction.paa";
        class use
        {
            action="['lab_construction'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_steel: lab_marijuana
    {
        name="Usine illégale d'acier";
        price_buy=210000;
        image="alysia_items_virtual\data\Acier.paa";
        class use
        {
            action="['lab_steel'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };
    class lab_tissue: lab_marijuana
    {
        name="Usine illégale de textile";
        price_buy=180000;
        image="alysia_items_virtual\data\Equipement.paa";
        class use
        {
            action="['lab_tissue'] spawn AlysiaClient_fnc_labo_deploy;";
        };
    };

    class money_transfer
    {
        name="Sac de billets de banque";
        weight=5;
        image="alysia_items_virtual\data\money_transfer.paa";
        buy_license_CIV="company_money_tranfer";
        price_buy=5000;
    };

    class opium
    {
        name="Opium";
        weight=4;
        image="alysia_items_virtual\data\opium.paa";
    };
    class phenylalanine
    {
        name="Phénylalanine";
        weight=2;
        image="alysia_items_virtual\data\phenylalanine.paa";
    };

    class serrure
    {
        name="Serrure neuve";
        weight=2;
        price_buy=1750;
        image="alysia_items_virtual\data\serrure.paa";
        buy_license_CIV="company_construction";
        class use
        {
            action="[] spawn AlysiaClient_fnc_item_serrure;";
        };
    };

    class electric_system
    {
        name="Installation électrique";
        weight=8;
        price_buy=9500;
        image="alysia_items_virtual\data\electric_system.paa";
        buy_license_CIV="company_construction";
        class use
        {
            action="[] spawn AlysiaClient_fnc_item_electricSystem;";
        };
    };

    class horn_milice_1
    {
        name="Sirène 1 (Milice)";
        weight=5;
        price_buy=1000;
        image="alysia_items_virtual\data\sirene.paa";
    };
    class horn_milice_2: horn_milice_1
    {
        name="Sirène 2 (Milice)";
    };
    class horn_garde: horn_milice_1
    {
        name="Sirène (Garde)";
    };
    class horn_samu: horn_milice_1
    {
        name="Sirène (Samu)";
        price_buy=100;
    };

    class scalpel
    {
        name="Scalpel chirurgical";
        weight=1;
        image="alysia_items_virtual\data\scalpel.paa";
    };

    class perqui_north
    {
        name="Mandat de perquisition";
        weight=1;
        price_buy=5000;
        buy_license_CIV="judge";
        image="alysia_items_virtual\data\perqui_north.paa";
        class use
        {
            action="['NORTH','perqui_north',west] spawn AlysiaClient_fnc_item_perquisition;";
        };
    };
    class perqui_south
    {
        name="Ordonnance de fouille";
        weight=1;
        image="alysia_items_virtual\data\perqui_south.paa";
        price_buy=5000;
        buy_license_CIV="central_com";
        class use
        {
            action="['SOUTH','perqui_south',east] spawn AlysiaClient_fnc_item_perquisition;";
        };
    };

    class patron_AK74
    {
        name="Patron AK (5.56/4.45)";
        weight=0;
        price_buy=575000;
        image="alysia_items_virtual\data\patron.paa";
        class use
        {
            action="['patron_AK74'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_M21: patron_AK74
    {
        name="Patron (M14/M21)";
        price_buy=825000;
        class use
        {
            action="['patron_M21'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_CZ: patron_AK74
    {
        name="Patron (CZ)";
        price_buy=439000;
        class use
        {
            action="['patron_CZ'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_sawed: patron_AK74
    {
        name="Patron (Fusil scié)";
        price_buy=210000;
        class use
        {
            action="['patron_sawed'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_AKM: patron_AK74
    {
        name="Patron AK (7.62)";
        price_buy=995000;
        class use
        {
            action="['patron_AKM'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_mosin: patron_AK74
    {
        name="Patron (Mosin)";
        price_buy=260000;
        class use
        {
            action="['patron_mosin'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_NVG: patron_AK74
    {
        name="Patron (NVG)";
        price_buy=115000;
        class use
        {
            action="['patron_NVG'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_deagle: patron_AK74
    {
        name="Patron (Deagle)";
        price_buy=165000;
        class use
        {
            action="['patron_deagle'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_reb_coa: patron_AK74
    {
        name="Patron (Coalition)";
        class use
        {
            action="['patron_reb_coa'] call AlysiaClient_fnc_item_patron;";
        };
    };
    class patron_reb_ace: patron_AK74
    {
        name="Patron (ACE)";
        class use
        {
            action="['patron_reb_ace'] call AlysiaClient_fnc_item_patron;";
        };
    };

    class medoc_rhume
    {
        name="Comprimé de Nurofex";
        weight=1;
        image="alysia_items_virtual\data\medoc_rhume.paa";
        class food
        {
            sound="painkiller_01";
        };
    };
    class medoc_toux_1
    {
        name="Bouteille de Sirop de Tussidax";
        weight=1;
        image="alysia_items_virtual\data\medoc_toux_1.paa";
        class food
        {
            thirst=10;
            sound="drink_water";
        };
    };
    class medoc_toux_2
    {
        name="Comprimé de Padéryx";
        weight=1;
        image="alysia_items_virtual\data\medoc_toux_2.paa";
        class food
        {
            sound="painkiller_01";
        };
    };

    class stethoscope
    {
        name="Stethoscope";
        weight=2;
        image="alysia_items_virtual\data\stethoscope.paa";
        price_buy=1600;
    };

    class brancard
    {
        name="Brancard";
        weight=7;
        image="alysia_items_virtual\data\brancard.paa";
        price_buy=250;
        class use
        {
            action="['brancard'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
        };
    };

    class prison_food
    {
        name="Plateau repas de prison";
        weight=4;
        image="alysia_items_virtual\data\prison_food.paa";
        class food
        {
            hunger=100;
            thirst=80;
            sound="eat_biscuit";
        };
    };
};
