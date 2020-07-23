#define ADDCLASSLOADOUT(SIDE,NUM) class TBMod_poppy_##SIDE##_##NUM: All##SIDE {}

class CfgLoadouts
{
    class All
    {
        uniform[] = {"U_C_Protagonist_VR"};
        backpack[] = {};
        vest[] = {};
        headgear[] = {};
        goggles[] = {};
        nvgs[] = {};
        primary[] = {};
        secondary[] = {};
        launcher[] = {};
        binoculars[] = {};
        compass[] = {};
        gps[] = {};
        map[] = {};
        watch[] = {};
        magazines[] = {
            {"SmokeShellGreen", 1}
        };
        items[] = {
            {"ACE_fieldDressing", 4},
            {"ACE_packingBandage", 4},
            {"ACE_elasticBandage", 4},
            {"ACE_quikclot", 4},
            {"ACE_morphine", 1}
        };
        postLoadout = "(group (_this # 0)) enableGunLights 'ForceOn'"; // Ki Taschenlampe
    };

//========================================== ALLOPFOR ==========================================// 
// Afrika Militär
    class Allopfor : All {
        uniform[] = {"rhs_uniform_bdu_erdl","LOP_U_BH_Fatigue_OFI_FWDL","LOP_U_BH_Fatigue_OFI_M81","rhsgref_uniform_woodland"};
		backpack[] = {"UK3CB_B_Alice_K","rhs_6sh46","",""};
        vest[] = {"rhsgref_chestrig","rhsgref_chicom","rhsgref_otv_khaki","rhsgref_TacVest_ERDL","",""};
        headgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhs_ssh68"};
        goggles[] = {"G_Shades_Black","G_Combat","rhs_googles_black","UK3CB_G_Neck_Shemag","","",""};
        nvgs[] = {};
	    primary[] = {{"rhs_weap_m16a4_carryhandle"},{"rhs_weap_m4_carryhandle"}};
        secondary[] = {};
        launcher[] = {};
        binoculars[] = {};
        compass[] = {"ItemCompass"};
        gps[] = {"ItemGPS"};
        map[] = {"ItemMap"};
        watch[] = {"ItemWatch"};
		face[] = {"AfricanHead_01","AfricanHead_02","AfricanHead_03","CamoHead_African_01_F","CamoHead_African_02_F","CamoHead_African_03_F","AfricanHead_01_sick","AfricanHead_02_sick","AfricanHead_03_sick"};
        magazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 6},{"MiniGrenade", 1},{"SmokeShell", 1},{"SmokeShellOrange", 1}};
        items[] = {
            {"ACE_fieldDressing", 4},
            {"ACE_packingBandage", 4},
            {"ACE_elasticBandage", 4},
            {"ACE_quikclot", 4},
            {"ACE_morphine", 1}
        };
        postLoadout = "(group (_this # 0)) enableGunLights 'ForceOn'"; // Ki Taschenlampe
    };
	
//===================================== Poppy OPFOR Units ======================================//

// Offizier	
    class TBMod_poppy_opfor_01 : Allopfor
    {
        uniform[] = {"rhsgref_uniform_TLA_2","LOP_U_BH_Fatigue_OFI_M81","rhsgref_uniform_olive","rhsgref_uniform_olive","rhsgref_uniform_woodland_olive"};
        backpack[] = {"UK3CB_B_O_Radio_Backpack"};
        vest[] = {"V_Rangemaster_belt"};
        headgear[] = {"H_Beret_blk","H_Booniehat_oli","UK3CB_ANA_B_H_Beret_MAR"};
        goggles[] = {"G_Spectacles_Tinted","G_Bandanna_aviator","rhsusf_shemagh_gogg_od","UK3CB_G_Neck_Shemag","",""};
        nvgs[] = {};
        primary[] = {"rhsusf_weap_MP7A2"};
        secondary[] = {"rhs_weap_type94_new"};
        launcher[] = {};
        binoculars[] = {"Binocular"};
        compass[] = {};
        gps[] = {};
        map[] = {};
        watch[] = {};
        magazines[] = {
            {"rhsusf_mag_40Rnd_46x30_JHP", 4},{"rhs_mag_6x8mm_mhp", 2},{"MiniGrenade", 1},{"SmokeShellGreen", 2}};
        items[] = {
            {"ACE_fieldDressing", 4},
            {"ACE_packingBandage", 4},
            {"ACE_elasticBandage", 4},
            {"ACE_quikclot", 4},
            {"ACE_morphine", 1}
        };
        postLoadout = "(group (_this # 0)) enableGunLights 'ForceOn'"; // Ki Taschenlampe
    };
	
// Schütze	
    class TBMod_poppy_opfor_02 : Allopfor
    {
        uniform[] = {"LOP_U_BH_Fatigue_OFI_M81","rhsgref_uniform_woodland"};
        backpack[] = {};
        vest[] = {"rhsgref_otv_khaki","",""};
        headgear[] = {"UK3CB_TKA_I_H_SSh68_Oli"};
        goggles[] = {"G_Spectacles_Tinted","G_Bandanna_aviator","rhsusf_shemagh_gogg_od","UK3CB_G_Neck_Shemag","",""};
        nvgs[] = {};
        primary[] = {"rhs_weap_akm"};
        secondary[] = {};
        launcher[] = {};
        binoculars[] = {"Binocular"};
        compass[] = {};
        gps[] = {};
        map[] = {};
        watch[] = {};
        magazines[] = {
            {"rhs_30Rnd_762x39mm_bakelite_tracer", 8},{"rhs_mag_rgd5", 1},{"rhs_mag_rdg2_black", 2}};
        items[] = {
            {"ACE_fieldDressing", 4},
            {"ACE_packingBandage", 4},
            {"ACE_elasticBandage", 4},
            {"ACE_quikclot", 4},
            {"ACE_morphine", 1}
        };
        postLoadout = "(group (_this # 0)) enableGunLights 'ForceOn'"; // Ki Taschenlampe
    };
// Grenadier
    class TBMod_poppy_opfor_03 : Allopfor
    {
        uniform[] = {"rhsgref_uniform_TLA_2","LOP_U_BH_Fatigue_OFI_M81","rhsgref_uniform_olive","rhsgref_uniform_olive","rhsgref_uniform_woodland_olive"};
        backpack[] = {"rhs_6sh46"};
        vest[] = {"UK3CB_TKA_I_V_6Sh92_vog_TKA_Brush"};
        headgear[] = {"rhs_ssh68"};
        goggles[] = {"G_Spectacles_Tinted","G_Bandanna_aviator","rhsusf_shemagh_gogg_od","UK3CB_G_Neck_Shemag","",""};
        nvgs[] = {};
        primary[] = {"rhs_weap_akm_gp25"};
        secondary[] = {};
        launcher[] = {};
        binoculars[] = {"Binocular"};
        compass[] = {};
        gps[] = {};
        map[] = {};
        watch[] = {};
        magazines[] = {
            {"rhs_30Rnd_762x39mm_bakelite_tracer", 10},{"rhs_VOG25", 12},{"rhs_mag_rgd5", 1},{"SmokeShellYellow", 2}};
        items[] = {
            {"ACE_fieldDressing", 4},
            {"ACE_packingBandage", 4},
            {"ACE_elasticBandage", 4},
            {"ACE_quikclot", 4},
            {"ACE_morphine", 1}
        };
        postLoadout = "(group (_this # 0)) enableGunLights 'ForceOn'"; // Ki Taschenlampe
    };
// M249 Short Schütze	
    class TBMod_poppy_opfor_04 : Allopfor
    {
        uniform[] = {"rhsgref_uniform_TLA_2","LOP_U_BH_Fatigue_OFI_M81","rhsgref_uniform_olive","rhsgref_uniform_olive","rhsgref_uniform_woodland_olive"};
        backpack[] = {"UK3CB_B_Alice_K"};
        vest[] = {"UK3CB_TKA_B_V_GA_LITE_WDL"};
        headgear[] = {"rhs_ssh68"};
        goggles[] = {"G_Spectacles_Tinted","G_Bandanna_aviator","rhsusf_shemagh_gogg_od","UK3CB_G_Neck_Shemag","",""};
        nvgs[] = {};
        primary[] = {"rhs_weap_m249_pip_S"};
        secondary[] = {};
        launcher[] = {};
        binoculars[] = {"Binocular"};
        compass[] = {};
        gps[] = {};
        map[] = {};
        watch[] = {};
        magazines[] = {
            {"rhsusf_200rnd_556x45_mixed_box", 4},{"MiniGrenade", 1},{"SmokeShellGreen", 2}};
        items[] = {
            {"ACE_fieldDressing", 4},
            {"ACE_packingBandage", 4},
            {"ACE_elasticBandage", 4},
            {"ACE_quikclot", 4},
            {"ACE_morphine", 1}
        };
        postLoadout = "(group (_this # 0)) enableGunLights 'ForceOn'"; // Ki Taschenlampe
    };
// Schütze Izh18 Gauge
    class TBMod_poppy_opfor_05 : Allopfor
    {
        uniform[] = {"LOP_U_BH_Fatigue_OFI_M81","rhsgref_uniform_woodland"};
        backpack[] = {"rhs_6sh46","",""};
        vest[] = {"rhsgref_otv_khaki","rhsgref_chicom","",""};
        headgear[] = {"UK3CB_H_Beanie_01","LOP_H_Beanie_m81"};
        goggles[] = {"G_Spectacles_Tinted","G_Bandanna_aviator","rhsusf_shemagh_gogg_od","UK3CB_G_Neck_Shemag","",""};
        nvgs[] = {};
        primary[] = {"rhs_weap_Izh18"};
        secondary[] = {};
        launcher[] = {};
        binoculars[] = {"Binocular"};
        compass[] = {};
        gps[] = {};
        map[] = {};
        watch[] = {};
        magazines[] = {
            {"rhsgref_1Rnd_00Buck", 16},{"rhs_mag_rgd5", 1},{"rhs_mag_rdg2_black", 2}};
        items[] = {
            {"ACE_fieldDressing", 4},
            {"ACE_packingBandage", 4},
            {"ACE_elasticBandage", 4},
            {"ACE_quikclot", 4},
            {"ACE_morphine", 1}
        };
        postLoadout = "(group (_this # 0)) enableGunLights 'ForceOn'"; // Ki Taschenlampe
    };

    ADDCLASSLOADOUT(opfor,06);
    ADDCLASSLOADOUT(opfor,07);
    ADDCLASSLOADOUT(opfor,08);
    ADDCLASSLOADOUT(opfor,09);
    ADDCLASSLOADOUT(opfor,10);
};