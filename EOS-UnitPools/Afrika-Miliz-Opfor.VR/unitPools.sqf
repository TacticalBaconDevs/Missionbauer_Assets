/*
    Part of the TBMod ( https://github.com/shukari/TBMod )
    Developed by http://tacticalbacon.de
    
    Author:
        bangabob (https://forums.bohemia.net/forums/topic/144150-enemy-occupation-system-eos/)
  
    Complete rewrite and modification:
        shukari

    Info:
        0-10 können selber definiert werden, alles größer 10 ist vom Mod
    
    Der TBMod hat derzeit folgene Factions:
        11 - Russland (Standard im Modul)
*/
private ["_InfPool","_ArmPool","_MotPool","_ACHPool","_CHPool","_stPool","_shipPool","_diverPool","_crewPool","_heliCrew"];

params ["_faction", "_type"];
private _tempArray = [];

switch (_faction) do
{
// Afrikansiche Miliz - EAST
    case 0:
    {
        _InfPool = ["TBMod_poppy_opfor_01","TBMod_poppy_opfor_02","TBMod_poppy_opfor_03","TBMod_poppy_opfor_05","TBMod_poppy_opfor_06","TBMod_poppy_opfor_07","TBMod_poppy_opfor_08",
		            "TBMod_poppy_opfor_09","TBMod_poppy_opfor_10"];
        _ArmPool = ["LOP_AFR_OPF_T72BA"];
        _MotPool = ["LOP_AFR_OPF_BTR60","LOP_AFR_OPF_Offroad","UK3CB_TKM_O_LR_Closed","UK3CB_TKM_O_LR_Open","UK3CB_TKM_O_Ural_Open"];
        _ACHPool = [];
        _CHPool = [];
        _stPool = ["rhsgref_ins_2b14"];
        _shipPool = [];
        _diverPool = ["TBMod_poppy_opfor_01","TBMod_poppy_opfor_02","TBMod_poppy_opfor_05"];
        _crewPool = ["TBMod_poppy_opfor_05","TBMod_poppy_opfor_06","TBMod_poppy_opfor_07","TBMod_poppy_opfor_08"];
        _heliCrew = ["TBMod_poppy_opfor_07","TBMod_poppy_opfor_08"];
    };
// Fraktion - WEST    
    case 1:
    {
        _InfPool = [];
        _ArmPool = [];
        _MotPool = [];
        _ACHPool = [];
        _CHPool = [];
        _stPool = [];
        _shipPool = [];
        _diverPool = [];
        _crewPool = [];
        _heliCrew = [];
    };
// Fraktion - INDEPENT    
    case 2:
    {
        _InfPool = [];
        _ArmPool = [];
        _MotPool = [];
        _ACHPool = [];
        _CHPool = [];
        _stPool = [];
        _shipPool = [];
        _diverPool = [];
        _crewPool = [];
        _heliCrew = [];
    };
 // Fraktion - Civilist  
    case 3:
    {
        _InfPool = [];
        _ArmPool = [];
        _MotPool = [];
        _ACHPool = [];
        _CHPool = [];
        _stPool = [];
        _shipPool = [];
        _diverPool = [];
        _crewPool = [];
        _heliCrew = [];
    };
    
// default {};
};

////////////////////////////////////////////////////////////////////////////////////////

switch (_type) do
{
    case 0:
    {
        for "_i" from 0 to 5 do {_tempArray pushBack (selectRandom _InfPool)};
    };
    
    case 1:
    {
        _tempArray = _diverPool;
    };
    
    // CREATE ARMOUR & CREW
    case 2:
    {
        _tempArray pushBack (selectRandom _ArmPool);
        _tempArray pushBack (selectRandom _crewPool);
    };
    
    // CREATE ATTACK CHOPPER & CREW
    case 3:
    {
        _tempArray pushBack (selectRandom _ACHPool);
        _tempArray pushBack (selectRandom _heliCrew);
    };
    
    // CREATE TRANSPORT CHOPPER & CREW 
    case 4:
    {
        _tempArray pushBack (selectRandom _CHPool);
        _tempArray pushBack (selectRandom _heliCrew);
    };
    
    // CREATE STATIC & CREW
    case 5:
    {
        _tempArray pushBack (selectRandom _stPool);
        _tempArray pushBack (selectRandom _crewPool);
    };
    
    // CREATE TRANSPORT & CREW
    case 7:
    {
        _tempArray pushBack (selectRandom _MotPool);
        _tempArray pushBack (selectRandom _crewPool);
    };
    
    // CREATE BOAT & DIVER CREW
    case 8:
    {
        _tempArray pushBack (selectRandom _shipPool);
        _tempArray pushBack (selectRandom _diverPool);
    };
    
    // CREATE CARGO
    case 9:
    {
        for "_i" from 0 to 4 do {_tempArray pushBack (selectRandom _InfPool)};
    };
    
    // CREATE DIVER CARGO
    case 10:
    {
        for "_i" from 0 to 4 do {_tempArray pushBack (selectRandom _diverPool)}; 
    };
    
    // default {};
};

_tempArray
