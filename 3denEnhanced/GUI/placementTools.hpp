#define POS_X_TEXT GRID_W
#define POS_X_VALUE 32 * GRID_W
#define WIDTH_TEXT 23 * GRID_W
#define WIDTH_VALUE 25 * GRID_W
#define WIDTH_HEADER 56 * GRID_W

class ENH_PlacementToolsGroup: ctrlControlsGroup
{
  idc = IDC_PLACEMENTTOOLS;
  onLoad = "[ctrlParent (_this#0), 'onLoad'] call ENH_fnc_placementTools";
  onUnload = "[ctrlParent (_this#0), 'onUnload'] call ENH_fnc_placementTools";
  x = safezoneX + 2 * GRID_W;
  y = WINDOW_TOPAbs + 2 * CTRL_DEFAULT_H + 3 * GRID_H;
  w = 58 * GRID_W;
  h = WINDOW_HAbs - 5 * CTRL_DEFAULT_H;
  class Controls
  {
    //ControlsBackground
    class Header: ctrlStaticTitle
    {
      text = "$STR_ENH_FOLDER_PLACEMENTTOOLS";
      x = 0;
      y = 0;
      w = 58 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class Background: ctrlStaticBackground
    {
      x = 0;
      y = CTRL_DEFAULT_H;
      w = 58 * GRID_W;
      h = 18 * CTRL_DEFAULT_H + 20 * GRID_H;
    };
    class Footer: ctrlStaticFooter
    {
      x = 0;
      y = 18 * CTRL_DEFAULT_H + 18 * GRID_H;
      w = 58 * GRID_W;
      h = CTRL_DEFAULT_H + 2 * GRID_H;
    };
    class CircularHeader: ctrlStaticFooter
    {
      text = "$STR_ENH_PLACEMENTTOOLS_CIRCULAR_HEADER";
      x = POS_X_TEXT;
      y = CTRL_DEFAULT_H + GRID_H;
      w = WIDTH_HEADER;
      h = CTRL_DEFAULT_H;
    };
    //Controls
    class Radius: ctrlStatic
    {
      text = "$STR_ENH_PLACEMENTTOOLS_RADIUS";
      x = POS_X_TEXT;
      y = 2 * CTRL_DEFAULT_H + 2 * GRID_H;
      w = WIDTH_TEXT;
      h = CTRL_DEFAULT_H;
    };
    class RadiusValue: ctrlEdit
    {
      idc = IDC_PLACEMENTTOOLS_RADIUS;
      x = POS_X_VALUE;
      y = 2 * CTRL_DEFAULT_H + 2 * GRID_H;
      w = WIDTH_VALUE;
      h = CTRL_DEFAULT_H;
    };
    class InitialAngle: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_INITIALANGLE";
      y = 3 * CTRL_DEFAULT_H + 3 * GRID_H;
    };
    class InitialAngleValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_INITIALANGLE;
      y = 3 * CTRL_DEFAULT_H + 3 * GRID_H;
    };
    class CentralAngle: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_CENTRALANGLE";
      y = 4 * CTRL_DEFAULT_H + 4 * GRID_H;
    };
    class CentralAngleValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_CENTRALANGLE;
      y = 4 * CTRL_DEFAULT_H + 4 * GRID_H;
    };
    class LineHeader: CircularHeader
    {
      text = "$STR_ENH_PLACEMENTTOOLS_LINEPATTERN_HEADER";
      y = 5 * CTRL_DEFAULT_H + 5 * GRID_H;
    };
    class Spacing: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_SPACING";
      y = 6 * CTRL_DEFAULT_H + 6 * GRID_H;
    };
    class SpacingValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_SPACING;
      y = 6 * CTRL_DEFAULT_H + 6 * GRID_H;
    };
    class SpacingDirection: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_DIRECTION";
      y = 7 * CTRL_DEFAULT_H + 7 * GRID_H;
    };
    class SpacingDirectionValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_SPACINGDIRECTION;
      y = 7 * CTRL_DEFAULT_H + 7 * GRID_H;
    };
    class GridHeader: CircularHeader
    {
      text = "$STR_ENH_PLACEMENTTOOLS_GRID_HEADER";
      y = 8 * CTRL_DEFAULT_H + 8 * GRID_H;
    };
    class NumColumns: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_NUMCOLUMNS";
      y = 9 * CTRL_DEFAULT_H + 9 * GRID_H;
    };
    class NumColumsValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_NUMCOLUMNS;
      y = 9 * CTRL_DEFAULT_H + 9 * GRID_H;
    };
    class SpaceX: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_SPACINGX";
      y = 10 * CTRL_DEFAULT_H + 10 * GRID_H;
    };
    class SpaceXValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_SPACEX;
      y = 10 * CTRL_DEFAULT_H + 10 * GRID_H;
    };
    class SpaceY: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_SPACINGY";
      y = 11 * CTRL_DEFAULT_H + 11 * GRID_H;
    };
    class SpaceYValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_SPACEY;
      y = 11 * CTRL_DEFAULT_H + 11 * GRID_H;
    };
    class FillAreaHeader: CircularHeader
    {
      text = "$STR_ENH_PLACEMENTTOOLS_FILLAREA_HEADER";
      y = 12 * CTRL_DEFAULT_H + 12 * GRID_H;
    };
    class A: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_A";
      y = 13 * CTRL_DEFAULT_H + 13 * GRID_H;
    };
    class AValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_A;
      y = 13 * CTRL_DEFAULT_H + 13 * GRID_H;
    };
    class B: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_B";
      y = 14 * CTRL_DEFAULT_H + 14 * GRID_H;
    };
    class BValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_B;
      y = 14 * CTRL_DEFAULT_H + 14 * GRID_H;
    };
    class OrientationHeader: CircularHeader
    {
      text = "$STR_ENH_PLACEMENTTOOLS_ORIENTATION";
      y = 15 * CTRL_DEFAULT_H + 15 * GRID_H;
    };
    class Direction: Radius
    {
      text = "$STR_ENH_PLACEMENTTOOLS_DIRECTION";
      y = 16 * CTRL_DEFAULT_H + 16 * GRID_H;
    };
    class DirectionValue: RadiusValue
    {
      idc = IDC_PLACEMENTTOOLS_ORIENTATION;
      y = 16 * CTRL_DEFAULT_H + 16 * GRID_H;
    };
      class RandomOrientaton: ctrlButton
    {
      idc = IDC_PLACEMENTTOOLS_RANDOMORIENTATION;
      text = "$STR_ENH_TOOLS_PLACEMENTTOOLS_RANDOM";
      x = POS_X_VALUE;
      y = 17 * CTRL_DEFAULT_H + 17 * GRID_H;
      w = WIDTH_VALUE;
      h = CTRL_DEFAULT_H;
    };
    class ReverseOrientation: RandomOrientaton
    {
      idc = IDC_PLACEMENTTOOLS_REVERSEORIENTATION;
      text = "$STR_ENH_TOOLS_PLACEMENTTOOLS_REVERSE";
      x = POS_X_TEXT;
      y = 17 * CTRL_DEFAULT_H + 17 * GRID_H;
    };
 /*    class CenterHeader: CircularHeader
    {
      text = "$STR_ENH_PLACEMENTTOOLS_ORIGIN";
      y = 19 * CTRL_DEFAULT_H + 19 * GRID_H;
    }; */
    /* class TitleX: ctrlStatic
    {
      text = "X";
      style = 2;
      shadow = 0;
      x = 0;
      y = 20 * CTRL_DEFAULT_H + 20 * GRID_H;
      w = 5 * GRID_W;
      h = CTRL_DEFAULT_H;
      colorBackground[] = {COLOR_POSX_RGBA};
    };
    class ValueX: ctrlEdit
    {
      idc = IDC_PLACEMENTTOOLS_CENTERX;
      text = "0";
      x = 5 * GRID_W;
      y = 20 * CTRL_DEFAULT_H + 20 * GRID_H;
      w = 26 * GRID_W;
      h = CTRL_DEFAULT_H;
    };
    class TitleY: TitleX
    {
      text = "Y";
      x = 31 * GRID_W;
      y = 20 * CTRL_DEFAULT_H + 20 * GRID_H;
      colorBackground[] = {COLOR_POSY_RGBA};
    };
    class ValueY: ValueX
    {
      idc = IDC_PLACEMENTTOOLS_CENTERY;
      x = 36 * GRID_W;
      y = 20 * CTRL_DEFAULT_H + 20 * GRID_H;
    }; */
    class Close: ctrlButtonClose
    {
      x = POS_X_VALUE;
      y = 18 * CTRL_DEFAULT_H + 19 * GRID_H;
      w = WIDTH_VALUE;
      h = CTRL_DEFAULT_H;
      onButtonClick = "ctrlDelete ctrlParentControlsGroup (_this#0)";
    };
  };
};