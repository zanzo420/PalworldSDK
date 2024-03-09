#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BackWeapon_AssaultRifle.BP_BackWeapon_AssaultRifle_C
// (Actor)

class UClass* ABP_BackWeapon_AssaultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BackWeapon_AssaultRifle_C");

	return Clss;
}


// BP_BackWeapon_AssaultRifle_C BP_BackWeapon_AssaultRifle.Default__BP_BackWeapon_AssaultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BackWeapon_AssaultRifle_C* ABP_BackWeapon_AssaultRifle_C::GetDefaultObj()
{
	static class ABP_BackWeapon_AssaultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BackWeapon_AssaultRifle_C*>(ABP_BackWeapon_AssaultRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


