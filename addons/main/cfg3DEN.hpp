class Cfg3DEN
{
  class Notifications
  {
    class ENH_DataCopied
    {
      isWarning = 0;
      text = "$STR_A3_RSCDISPLAYARSENAL_MESSAGE_CLIPBOARD";
    };
    class ENH_ActionPerformed
    {
      isWarning = 0;
      text = "$STR_ENH_MAIN_NOTIFICATIONS_ACTIONPERFORMED";
    };
    class ENH_NoEntitiesSelected
    {
      isWarning = 1;
      text = "$STR_ENH_MAIN_NOTIFICATIONS_NOENTITIESSELECTED";
    };
    class ENH_NoEntitiesWithInventorySelected
    {
      isWarning = 1;
      text = "$STR_ENH_MAIN_NOTIFICATIONS_NOENTITIESWITHINVENTORYSELECTED";
    };
    class ENH_GetPythiaMod_Warning
    {
      isWarning = 1;
      text = "$STR_ENH_MAIN_NOTIFICATIONS_GETPYTHIA";
    };
    class ENH_PythiaMissingForBackup
    {
      isWarning = 1;
      text = "$STR_ENH_MAIN_NOTIFICATIONS_BACKUP_FAILED";
    };
  };
  class EventHandlers
  {
    class ENH
    {
      init = "call ENH_fnc_EH_init";
      onTerrainNew = "call ENH_fnc_EH_onTerrainNew";
      onMissionPreviewEnd = "call ENH_fnc_EH_onMissionPreviewEnd";
      onMissionLoad = "call ENH_fnc_EH_onMissionLoad";
      onMissionNew = "call ENH_fnc_EH_onMissionNew";
      onMissionPreview = "call ENH_fnc_EH_onMissionPreview";
      onMissionSave = "call ENH_fnc_createBackupMissionSQM";
      onMissionAutoSave = "call ENH_fnc_createBackupMissionSQM";
    };
  };
  class Attributes
  {
    //Base class templates
    class Default; //Empty template with pre-defined width and single line height
    class Title: Default
    {
      class Controls
      {
        class Title;
      };
    };
    //Increase height of edit attribute controls
    class Edit;
    class EditMulti3: Edit
    {
      class Controls
      {
        class Value;
        class Background;
        class Title;
      };
    };
    class EditCodeMulti3: EditMulti3
    {
      class Controls
      {
        class Value;
        class Background;
        class Title;
      };
    };
    class EditMulti5: EditMulti3
    {
      h = QUOTE((5 + 20 * 3.5) * GRID_H);
      class Controls: Controls
      {
        class Background: Background
        {
          h = QUOTE((20 * 3.5 + 0.6 * 5) * GRID_H);
        };
        class Value: Value
        {
          h = QUOTE(20 * 3.5 * GRID_H - 1 * GRID_H);
        };
        class Title: Title
        {
          h = QUOTE((20 * 3.5 + 1 * 5) * GRID_H);
        };
      };
    };
    class EditCodeMulti5: EditCodeMulti3
    {
      h = QUOTE((5 + 20 * 3.5) * GRID_H);
      class Controls: Controls
      {
        class Background: Background
        {
          h = QUOTE((20 * 3.5 + 0.6 * 5) * GRID_H);
        };
        class Value: Value
        {
          h = QUOTE(20 * 3.5 * GRID_H - 1 * GRID_H);
        };
        class Title: Title
        {
          h = QUOTE((20 * 3.5 + 1 * 5) * GRID_H);
        };
      };
    };
    #include "controls\SPR.hpp"
    #include "controls\advancedDamage.hpp"
    #include "controls\airdrop.hpp"
    #include "controls\ambientAnimations.hpp"
    #include "controls\ambientFlyby.hpp"
    #include "controls\dynamicSkill.hpp"
    #include "controls\establishingShot.hpp"
    #include "controls\groupMarker.hpp"
    #include "controls\holdAction.hpp"
    #include "controls\introText.hpp"
    #include "controls\mapIndicators.hpp"
    #include "controls\missionEndingCasualties.hpp"
    #include "controls\subCategoryNoHeader_Fixed.hpp"
    #include "controls\sliderMulti120.hpp"
  };
  class Mission
  {
    class Preferences
    {
      class AttributeCategories
      {
        class Camera
        {
          class Attributes
          {
            #include "attributesEditor\dynamicViewDistance.hpp"
          };
        };
        class Saving
        {
          class Attributes
          {
            #include "attributesEditor\backupMissionSQM.hpp"
          };
        };
        #include "attributesEditor\interface.hpp"
        #include "attributesEditor\debugOptions.hpp"
      };
    };
    class Intel
    {
      class AttributeCategories
      {
        #include "attributesMission\timeMultiplier.hpp"
        #include "attributesMission\visualSettings.hpp"
      };
    };
    class Scenario
    {
      class AttributeCategories
      {
        #include "attributesMission\airdrop.hpp"
        #include "attributesMission\ambientFlyby.hpp"
        #include "attributesMission\briefings.hpp"
        #include "attributesMission\establishingShot.hpp"
        #include "attributesMission\introText.hpp"
        #include "attributesMission\missionEnding.hpp"
        #include "attributesMission\volume.hpp"
        #include "attributesMission\SPR.hpp"
        class Misc
        {
          class Attributes
          {
            #include "attributesMission\addObjectsToZeus.hpp"
            #include "attributesMission\mapIndicators.hpp"
          };
        };
      };
    };
    class Multiplayer
    {
      class AttributeCategories
      {
        #include "attributesMission\dynamicGroups.hpp"
        #include "attributesMission\dynamicSkill.hpp"
        class Respawn
        {
          class Attributes
          {
            #include "attributesMission\respawnTickets.hpp"
            #include "attributesMission\saveLoadout.hpp"
          };
        };
      };
    };
  };
  class Group
  {
    class AttributeCategories
    {
      #include "attributesGroup\groupMarker.hpp"
      class State
      {
        class Attributes
        {
          #include "attributesGroup\taskPatrol.hpp"
        };
      };
    };
  };
  class Object
  {
    class AttributeCategories
    {
      #include "attributesObject\advancedDamage.hpp"
      #include "attributesObject\ambientAnimations.hpp"
      #include "attributesObject\AI.hpp"
      #include "attributesObject\unitTraits.hpp"
      #include "attributesObject\holdAction.hpp"
      class StateSpecial
      {
        class Attributes
        {
          #include "attributesObject\setCaptive.hpp"
          #include "attributesObject\allowSprint.hpp"
          #include "attributesObject\forceWalk.hpp"
          #include "attributesObject\makeHostage.hpp"
          #include "attributesObject\parachute.hpp"
          #include "attributesObject\enableHeadlights.hpp"
          #include "attributesObject\allowCrewInImmobile.hpp"
          #include "attributesObject\engineOn.hpp"
          #include "attributesObject\disableNVGE.hpp"
          #include "attributesObject\disableTIE.hpp"
          #include "attributesObject\limitSpeed.hpp"
          #include "attributesObject\doStop.hpp"
          #include "attributesObject\removeFromRemainsCollector.hpp"
          #include "attributesObject\SPRTickets.hpp"
        };
      };
      class Transformation
      {
        class Attributes
        {
          #include "attributesObject\objectScale.hpp"
          #include "attributesObject\setMass.hpp"
        };
      };
      class Inventory
      {
        class Attributes
        {
          #include "attributesObject\addGunLight.hpp"
          #include "attributesObject\arsenal.hpp"
        };
      };
      class State
      {
        class Attributes
        {
          #include "attributesObject\featureType.hpp"
          #include "attributesObject\forceFlag.hpp"
        };
      };
    };
  };
  class Marker
  {
    class AttributeCategories
    {
      class Transformation
      {
        class Attributes
        {
          class Position
          {
            tooltip = "$STR_3DEN_OBJECT_ATTRIBUTE_POSITION_TOOLTIP";
            control = "EditXYZ";
          };
          #include "attributesMarker\markerDrawPriority.hpp"
        };
      };
      #include "attributesMarker\markerHideOnStart.hpp"
    };
  };
};