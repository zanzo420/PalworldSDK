#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Garm.ABP_Garm_C
// (None)

class UClass* UABP_Garm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Garm_C");

	return Clss;
}


// ABP_Garm_C ABP_Garm.Default__ABP_Garm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Garm_C* UABP_Garm_C::GetDefaultObj()
{
	static class UABP_Garm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Garm_C*>(UABP_Garm_C::StaticClass()->DefaultObject);

	return Default;
}

}


