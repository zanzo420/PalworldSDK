#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AssaultRifleCameraShake.BP_AssaultRifleCameraShake_C
// (None)

class UClass* UBP_AssaultRifleCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AssaultRifleCameraShake_C");

	return Clss;
}


// BP_AssaultRifleCameraShake_C BP_AssaultRifleCameraShake.Default__BP_AssaultRifleCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AssaultRifleCameraShake_C* UBP_AssaultRifleCameraShake_C::GetDefaultObj()
{
	static class UBP_AssaultRifleCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AssaultRifleCameraShake_C*>(UBP_AssaultRifleCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


