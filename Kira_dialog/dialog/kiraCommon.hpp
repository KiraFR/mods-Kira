class Life_RscButtonKiraMenu : life_RscButtonMenu {
	type = 16;
	style = "0x02";
	period = 1.200000;
	periodFocus = 1.200000;
	periodOver = 1.200000;
	shadow = 0;
	shortcuts[] = { };
	textureNoShortcut = "\A3\Ui_f\data\GUI\RscCommon\RscButtonMenuSteam\steam_ca.paa";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {
			255, 255, 255, 0
	};
	colorBackground2[] = {
			255, 255, 255, 0
	};
	colorBackgroundFocused[] = {
			255, 255, 255, 0
	};
	colorDisabled[] = {
			1, 1, 1, 0.250000
	};
	colorDisabledSecondary[] = {
			1, 1, 1, 0.250000
	};
	colorFocused[] = {
			"225/255", "65/255", "65/255", 1
	};
	colorFocusedSecondary[] = {
			"225/255", "65/255", "65/255", 1
	};
	colorText[] = {
			1, 1, 1, 1
	};
	color[] = {
			1, 1, 1, 1
	};
	color2[] = {
			"225/255", "65/255", "65/255", 1
	};
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "Text";
	colorSecondary[] = {
			1, 1, 1, 1
	};
	color2Secondary[] = {
			0, 0, 0, 1
	};
	fontSecondary = "PuristaLight";
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	textSecondary = "";
	soundClick[] = {
			"\A3\ui_f\data\sound\RscButtonMenu\soundClick", 0.090000, 1
	};
	soundEnter[] = {
			"\A3\ui_f\data\sound\RscButtonMenu\soundEnter", 0.090000, 1
	};
	soundEscape[] = {
			"\A3\ui_f\data\sound\RscButtonMenu\soundEscape", 0.090000, 1
	};
	soundPush[] = {
			"\A3\ui_f\data\sound\RscButtonMenu\soundPush", 0.090000, 1
	};
	tooltipColorBox[] = {
			1, 1, 1, 1
	};
	tooltipColorShade[] = {
			0, 0, 0, 0.650000
	};
	tooltipColorText[] = {
			1, 1, 1, 1
	};

	class Attributes 
	{
		align = "center";
	};

	class AttributesImage 
	{
		align = "center";
		color = "#E5E5E5";
		font = "PuristaMedium";
	};

	class ShortcutPos 
	{
		left = 0;
		top = 0;
		h = 1;
		w = 1;
	};
};

class Life_RscButtonKiraMenu1x1 : Life_RscButtonKiraMenu
{
	textureNoShortcut = "";
	text = "";
	class ShortcutPos 
	{
		left = "0";
		top = "0";
		w = "(6 * (0.025)) * 0.5";
		h = "(5 * (0.04)) * 0.5";
	};

	class TextPos 
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(5 * (0.04)) * 0.55";
	};
};

class Life_RscButtonKiraMenu03x03 : Life_RscButtonKiraMenu
{
	textureNoShortcut = "";
	text = "";

	class ShortcutPos 
	{
		left = "0";
		top = "0";
		w = "0.03";
		h = "0.05";
	};

	class TextPos 
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(5 * (0.04)) * 0.55";
	};
};

class Life_RscButtonKiraMenu03x04 : Life_RscButtonKiraMenu
{
	textureNoShortcut = "";
	text = "";

	class ShortcutPos 
	{
		left = "0";
		top = "0";
		w = "0.03";
		h = "0.04";
	};

	class TextPos 
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(5 * (0.04)) * 0.55";
	};
};

class Life_RscButtonKiraMenu04x04 : Life_RscButtonKiraMenu
{
	textureNoShortcut = "";
	text = "";

	class ShortcutPos 
	{
		left = "0";
		top = "0";
		w = "0.05";
		h = "0.07";
	};

	class TextPos 
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(5 * (0.04)) * 0.55";
	};
};

class Life_RscButtonKiraMenu06x06 : Life_RscButtonKiraMenu
{
	textureNoShortcut = "";
	text = "";

	class ShortcutPos 
	{
		left = "0";
		top = "0";
		w = "0.06";
		h = "0.08";
	};

	class TextPos 
	{
		bottom = 0;
		left = 0;
		right = 0;
		top = "(5 * (0.04)) * 0.55";
	};
};