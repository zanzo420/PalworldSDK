#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Garm.BP_Garm_C
// (Actor, Pawn)

class UClass* ABP_Garm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Garm_C");

	return Clss;
}


// BP_Garm_C BP_Garm.Default__BP_Garm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Garm_C* ABP_Garm_C::GetDefaultObj()
{
	static class ABP_Garm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Garm_C*>(ABP_Garm_C::StaticClass()->DefaultObject);

	return Default;
}

}


