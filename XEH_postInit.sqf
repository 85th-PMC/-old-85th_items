["loadout", {
    params ["_unit"];
    _unit call ace_medical_fnc_itemCheck;
}, true] call CBA_fnc_addPlayerEventHandler;
