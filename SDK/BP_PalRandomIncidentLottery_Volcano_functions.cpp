#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentLottery_Volcano.BP_PalRandomIncidentLottery_Volcano_C
// (None)

class UClass* UBP_PalRandomIncidentLottery_Volcano_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentLottery_Volcano_C");

	return Clss;
}


// BP_PalRandomIncidentLottery_Volcano_C BP_PalRandomIncidentLottery_Volcano.Default__BP_PalRandomIncidentLottery_Volcano_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalRandomIncidentLottery_Volcano_C* UBP_PalRandomIncidentLottery_Volcano_C::GetDefaultObj()
{
	static class UBP_PalRandomIncidentLottery_Volcano_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalRandomIncidentLottery_Volcano_C*>(UBP_PalRandomIncidentLottery_Volcano_C::StaticClass()->DefaultObject);

	return Default;
}

}


