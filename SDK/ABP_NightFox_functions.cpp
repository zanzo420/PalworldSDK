#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_NightFox.ABP_NightFox_C
// (None)

class UClass* UABP_NightFox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_NightFox_C");

	return Clss;
}


// ABP_NightFox_C ABP_NightFox.Default__ABP_NightFox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_NightFox_C* UABP_NightFox_C::GetDefaultObj()
{
	static class UABP_NightFox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_NightFox_C*>(UABP_NightFox_C::StaticClass()->DefaultObject);

	return Default;
}

}


