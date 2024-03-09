#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NightFox.BP_NightFox_C
// (Actor, Pawn)

class UClass* ABP_NightFox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NightFox_C");

	return Clss;
}


// BP_NightFox_C BP_NightFox.Default__BP_NightFox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NightFox_C* ABP_NightFox_C::GetDefaultObj()
{
	static class ABP_NightFox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NightFox_C*>(ABP_NightFox_C::StaticClass()->DefaultObject);

	return Default;
}

}


