#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSpawner_Sheets_snow_5_2_SnowGrass.BP_PalSpawner_Sheets_snow_5_2_SnowGrass_C
// (Actor)

class UClass* ABP_PalSpawner_Sheets_snow_5_2_SnowGrass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSpawner_Sheets_snow_5_2_SnowGrass_C");

	return Clss;
}


// BP_PalSpawner_Sheets_snow_5_2_SnowGrass_C BP_PalSpawner_Sheets_snow_5_2_SnowGrass.Default__BP_PalSpawner_Sheets_snow_5_2_SnowGrass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSpawner_Sheets_snow_5_2_SnowGrass_C* ABP_PalSpawner_Sheets_snow_5_2_SnowGrass_C::GetDefaultObj()
{
	static class ABP_PalSpawner_Sheets_snow_5_2_SnowGrass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSpawner_Sheets_snow_5_2_SnowGrass_C*>(ABP_PalSpawner_Sheets_snow_5_2_SnowGrass_C::StaticClass()->DefaultObject);

	return Default;
}

}


