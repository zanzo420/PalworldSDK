#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Anubis.BP_Anubis_C
// (Actor, Pawn)

class UClass* ABP_Anubis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Anubis_C");

	return Clss;
}


// BP_Anubis_C BP_Anubis.Default__BP_Anubis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Anubis_C* ABP_Anubis_C::GetDefaultObj()
{
	static class ABP_Anubis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Anubis_C*>(ABP_Anubis_C::StaticClass()->DefaultObject);

	return Default;
}

}


