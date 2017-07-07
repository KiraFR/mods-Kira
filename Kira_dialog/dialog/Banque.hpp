class Life_AccountReq {
	idd = 11000;
	name= "life_AccountRequest";
	movingEnable = false;
	enableSimulation = true;

	class controlsBackground
	{
		class BackGround: Life_RscText
		{
			idc = -1;
			x = 0.075;
			y = 0.08;
			w = 0.85;
			h = 0.82;
			colorBackground[] = {-1,-1,-1,0.5};
		};
		class BackGroundTitle: Life_RscText
		{
			idc = -1;
			text = "Création de compte en banque";
			x = 0.075;
			y = 0.08;
			w = 0.85;
			h = 0.04;
			colorBackground[] = {0,0.49,0.49,1};
		};
};

class controls {
		class NameAccount: Life_RscText
		{
			idc = 11006;
			text = "Nom du compte :";
			x = 0.103662;
			y = 0.190101;
			w = 0.55;
			h = 0.06;
		};
		class AccoutNAMEENTER: Life_RscEdit
		{
			idc = 11007;
			x = 0.1125;
			y = 0.26;
			w = 0.7625;
			h = 0.04;
			colorBackground[] = {-1,-1,-1,1};
			colorActive[] = {-1,-1,-1,1};
		};
		class EnterCheck: Life_Checkbox
		{
			idc = 11005;
			x = 0.1125;
			y = 0.64;
			w = 0.0375;
			h = 0.04;
		};
		class Rules: Life_RscStructuredText
		{
			idc = 11001;
			text = "Si , vous devez creer un compte entreprise vous devez avoir ete autoriser par les administrations , si ce n'est pas le cas tout votre argent present sur ce compte lors de la mise en arret , sera garder et transfere dans un compte gouvernemental , de plus un proces verbal sera engage , avec l'obligation de payer une amende avec le montant qu'il y avait sur le compte .";
			x = 0.1125;
			y = 0.35;
			w = 0.7625;
			h = 0.25;
			colorBackground[] = {-1,-1,-1,1};
		};
		class TextCheckB: Life_RscText
		{
			idc = 11004;
			text = "Entreprise";
			x = 0.15;
			y = 0.64;
			w = 0.12;
			h = 0.04;
		};
		class ButtonSum: Life_RscButtonMenu
		{
			idc = 11002;
			text = "Soumettre le compte";
				onButtonClick = "2 spawn life_fnc_requestAccount;";
			x = 0.525;
			y = 0.8;
			w = 0.3625;
			h = 0.06;
		};
	};
};
