#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalActionStep_Right_Boss.BP_PalActionStep_Right_Boss_C
// (None)

class UClass* UBP_PalActionStep_Right_Boss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalActionStep_Right_Boss_C");

	return Clss;
}


// BP_PalActionStep_Right_Boss_C BP_PalActionStep_Right_Boss.Default__BP_PalActionStep_Right_Boss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalActionStep_Right_Boss_C* UBP_PalActionStep_Right_Boss_C::GetDefaultObj()
{
	static class UBP_PalActionStep_Right_Boss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalActionStep_Right_Boss_C*>(UBP_PalActionStep_Right_Boss_C::StaticClass()->DefaultObject);

	return Default;
}

}


