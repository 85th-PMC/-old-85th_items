class CfgPatches
{
    class 85th_items
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "ace_medical"
        };
        author="85th PMC";
    };
};

class Extended_PostInit_EventHandlers {
    class 85th_items {
        init = "call compile preprocessFileLineNumbers 'XEH_postInit.sqf'";
    };
};

class cfgWeapons
{
	class ItemCore;
	class FirstAidKit: ItemCore
	class 85th_FAK: FirstAidKit
	{
		displayName="(85th) FAK"
	};
	
	class Medikit: ItemCore
	class 85th_Medkit: Medikit
	{
		displayName="85th Medkit"
	};
};
