class Enh_FunctionsViewer
{
	idd = 180000;
	movingEnable = true;
	onLoad = "'ONLOAD' spawn Enh_fnc_functionsViewer";
	class ControlsBackground
	{
		DISABLE_BACKGROUND
		class Background: Enh_IGUIBack
		{
			idc = 333;
			x = 0.014375 * safezoneW + safezoneX;
			y = 0.052 * safezoneH + safezoneY;
			w = 0.97125 * safezoneW;
			h = 0.924 * safezoneH;
		};
	};
	class Controls
	{
		class Header: Enh_RscText
		{
			text = $STR_ENH_functionsViewer_header;
			x = 0.014375 * safezoneW + safezoneX;
			y = 0.024 * safezoneH + safezoneY;
			w = 0.951562 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class List: ctrlTree
		{
			idc = 1500;
			idcSearch = 1400;
			x = 0.0209375 * safezoneW + safezoneX;
			y = 0.066 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.854 * safezoneH;
			onTreeSelChanged = "['SELCHANGED',_this] call Enh_fnc_functionsViewer";
		};
		class Search: Enh_RscEdit
		{
			idc = 1400;
			tooltip = $STR_ENH_functionsViewer_search_tooltip;
			x = 0.0209375 * safezoneW + safezoneX;
			y = 0.934 * safezoneH + safezoneY;
			w = 0.164062 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class SearchIcon: ctrlStaticPictureKeepAspect
		{
			text = "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa";
			tooltip = $STR_ENH_functionsViewer_search_tooltip;
			x = 0.185 * safezoneW + safezoneX;
			y = 0.934 * safezoneH + safezoneY;
			w = 0.0196875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RecompileSelected: Enh_RscButton
		{
			idc = 1600;
			text = $STR_ENH_functionsViewer_recompileSeletected_text;
			tooltip = $STR_ENH_functionsViewer_recompileSeletected_tooltip;
			x = 0.723125 * safezoneW + safezoneX;
			y = 0.066 * safezoneH + safezoneY;
			w = 0.124687 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'RECOMPILE_SELECTED' call Enh_fnc_functionsViewer";
		};
		class RecompileAll: Enh_RscButton
		{
			idc = 1601;
			text = $STR_ENH_functionsViewer_recompileAll_text;
			tooltip = $STR_ENH_functionsViewer_recompileAll_tooltip;
			x = 0.854375 * safezoneW + safezoneX;
			y = 0.066 * safezoneH + safezoneY;
			w = 0.124687 * safezoneW;
			h = 0.028 * safezoneH;
			action = "1 call BIS_fnc_recompile; playSound 'FD_Finish_F'";//Indication that it recompiles, button text?
		};
		class Close: Enh_RscButton
		{
			text = "X";
			x = 0.965937 * safezoneW + safezoneX;
			y = 0.024 * safezoneH + safezoneY;
			w = 0.0196875 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'CLOSE' call Enh_fnc_functionsViewer";
		};
		class Copy: Enh_RscButton
		{
			text = $STR_ENH_functionsViewer_copyFunction_text;
			tooltip = $STR_ENH_functionsViewer_copyFunction_tooltip;
			x = 0.591875 * safezoneW + safezoneX;
			y = 0.066 * safezoneH + safezoneY;
			w = 0.124687 * safezoneW;
			h = 0.028 * safezoneH;
			action = "'COPY' call Enh_fnc_functionsViewer";
		};
		class Collapse: Enh_RscButton
		{
			tooltip = $STR_ENH_functionsViewer_collapseAll_text;
			style = "0x02 + 0x30 + 0x800";
			colorBackground[] = {0,0,0,0};
			x = 0.204688 * safezoneW + safezoneX;
			y = 0.934 * safezoneH + safezoneY;
			w = 0.013125 * safezoneW;
			h = 0.028 * safezoneH;
			text = "\a3\3DEN\Data\Displays\Display3DEN\tree_collapse_ca.paa";
			onButtonClick  = "tvCollapseAll (ctrlParent (_this # 0) displayCtrl 1500)";
		};
		class Expand: Enh_RscButton
		{
			tooltip = $STR_ENH_functionsViewer_expandAll_text;
			style = "0x02 + 0x30 + 0x800";
			colorBackground[] = {0,0,0,0};
			x = 0.217813 * safezoneW + safezoneX;
			y = 0.934 * safezoneH + safezoneY;
			w = 0.013125 * safezoneW;
			h = 0.028 * safezoneH;
			text = "\a3\3DEN\Data\Displays\Display3DEN\tree_expand_ca.paa";
			onButtonClick  = "tvExpandAll (ctrlParent (_this # 0) displayCtrl 1500)";
		};
		class Preview: Enh_RscControlsGroup
		{
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.741562 * safezoneW;
			h = 0.812 * safezoneH;
			class controls
			{
				class Code: Enh_RscEdit
				{
					idc = 1401;
					canModify = false;
					x = 0;
					y = 0;
					w = 4;
					h = 2;
					font = "EtelkaMonospacePro";
					shadow = 0;
				};
			};
		};
		class Name: Enh_RscEdit
		{
			idc = 1402;
			tooltip = $STR_ENH_functionsViewer_functionName_tooltip;
			canModify = false;
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.066 * safezoneH + safezoneY;
			w = 0.347813 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class Path: Enh_RscEdit
		{
			idc = 1403;
			tooltip = $STR_ENH_functionsViewer_functionPath_tooltip;
			canModify = false;
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.108 * safezoneH + safezoneY;
			w = 0.741562 * safezoneW;
			h = 0.028 * safezoneH;
		};
	};
};

/* #Nekyjo
$[
	1.063,
	["FunctionViewer",[[0,0,1,1],0.025,0.04,"GUI_GRID"],2,0,0],
	[-2200,"Background",[1,"",["0.014375 * safezoneW + safezoneX","0.052 * safezoneH + safezoneY","0.97125 * safezoneW","0.924 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1401,"Code",[1,"",["0.2375 * safezoneW + safezoneX","0.15 * safezoneH + safezoneY","0.741562 * safezoneW","0.812 * safezoneH"],[-1,-1,-1,-1],[1,1,1,1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"Header",[1,"3den Enhanced Function Viewer",["0.014375 * safezoneW + safezoneX","0.024 * safezoneH + safezoneY","0.951562 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[0.403922,0.545098,0.607843,1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"List",[1,"",["0.0209375 * safezoneW + safezoneX","0.066 * safezoneH + safezoneY","0.21 * safezoneW","0.854 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1400,"Search",[1,"Search...",["0.0209375 * safezoneW + safezoneX","0.934 * safezoneH + safezoneY","0.164062 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"RecompileSelected",[1,"Recompile Selected",["0.723125 * safezoneW + safezoneX","0.066 * safezoneH + safezoneY","0.124687 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[0.403922,0.545098,0.607843,1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"RecompileAll",[1,"Recompile All",["0.854375 * safezoneW + safezoneX","0.066 * safezoneH + safezoneY","0.124687 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[0.403922,0.545098,0.607843,1],"","-1"],[]],
	[1402,"Name",[1,"BIS_fnc_displayName",["0.2375 * safezoneW + safezoneX","0.066 * safezoneH + safezoneY","0.347813 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1403,"Path",[1,"\A3\ui_f\hpp\defineResinclDesign.inc",["0.2375 * safezoneW + safezoneX","0.108 * safezoneH + safezoneY","0.741562 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1200,"",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.185 * safezoneW + safezoneX","0.934 * safezoneH + safezoneY","0.0196875 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1603,"Copy",[1,"Copy",["0.591875 * safezoneW + safezoneX","0.066 * safezoneH + safezoneY","0.124687 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[0.403922,0.545098,0.607843,1],"","-1"],[]],
	[1604,"Collapse",[1,"",["0.204688 * safezoneW + safezoneX","0.934 * safezoneH + safezoneY","0.013125 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1605,"Expand",[1,"",["0.217813 * safezoneW + safezoneX","0.934 * safezoneH + safezoneY","0.013125 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1606,"Close",[1,"X",["0.965937 * safezoneW + safezoneX","0.024 * safezoneH + safezoneY","0.0196875 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/