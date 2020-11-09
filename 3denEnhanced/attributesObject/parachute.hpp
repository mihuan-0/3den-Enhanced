class ENH_Parachute
{
    displayName = $STR_ENH_PARACHUTE_DISPLAYNAME;
    tooltip = $STR_ENH_PARACHUTE_TOOLTIP;
    property = "ENH_parachute";
    control = "Checkbox";
    expression = "if (!is3DEN && _value) then\
    {\
        _this moveInDriver (createVehicle ['Steerable_Parachute_F',getPos _this,[],0,'FLY']);\
    }";
    condition = "objectBrain";
    defaultValue = "false";
};