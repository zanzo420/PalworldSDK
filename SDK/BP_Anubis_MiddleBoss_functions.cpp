#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Anubis_MiddleBoss.BP_Anubis_MiddleBoss_C
// (Actor, Pawn)

class UClass* ABP_Anubis_MiddleBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Anubis_MiddleBoss_C");

	return Clss;
}


// BP_Anubis_MiddleBoss_C BP_Anubis_MiddleBoss.Default__BP_Anubis_MiddleBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Anubis_MiddleBoss_C* ABP_Anubis_MiddleBoss_C::GetDefaultObj()
{
	static class ABP_Anubis_MiddleBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Anubis_MiddleBoss_C*>(ABP_Anubis_MiddleBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


