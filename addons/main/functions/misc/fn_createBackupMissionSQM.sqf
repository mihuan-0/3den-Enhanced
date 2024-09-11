/*
    Author: R3vo

    Date: 2023-09-10
    File: 3denEnhanced\functions\misc\fn_createBackupMissionSQM.sqf

    Description:
    Invokes Pythia function that creates a backup of current mission.sqm fillWeaponsFromPool.

    Parameter(s):
    -

    Return Value:
    BOOLEAN - True on success, false if failed
*/

//Just to be sure
if (!is3DEN) exitWith {false};

//Opt-in via preferences
if !(profileNamespace getVariable ["ENH_EditorPreferences_BackupMissionSQM", false]) exitWith {};

//Check if missionName is in blacklist
private _blacklist = profileNamespace getVariable ["ENH_EditorPreferences_BackupMissionSQMBlacklist", []];
private _isBlacklisted = false;
private _missionName = toLower missionName;

_blacklist apply
{
    _isBlacklisted = _missionName == toLower _x;
};

if _isBlacklisted exitWith {};

//Pythia is needed
if !(isClass (configFile >> "CfgPatches" >> "PY3_Pythia")) exitWith
{
    if (profileNamespace getVariable ["ENH_EditorPreferences_BackupMissionSQM", false]) then
    {
        ["ENH_PythiaMissingForBackup", 1, 10] call BIS_fnc_3DENNotification;
    };
    false
};

if !(fileExists "mission.sqm") exitWith {false};

private _missionRoot = getMissionPath "";
private _backupRoot = profileNamespace getVariable ["ENH_EditorPreferences_BackupMissionSQMPath", ""];
private _prefix = "";

if (_backupRoot == "") then
{
    _backupRoot = _missionRoot + ".enh_mission_sqm_backups";
}
else
{
    //If we dump all backups into one dir, we should add some prefix for convenience
    _prefix = format ["%1.%2_", missionName, worldName]; //"scriptLibrary.VR_"
};

private _sysTimeFormatted = systemTime apply {str _x} joinString "_";

["ENH_Pythia.BackupMissionSQM", [_missionRoot, _backupRoot, _prefix, _sysTimeFormatted]] call (uiNamespace getVariable "py3_fnc_callExtension");

true
