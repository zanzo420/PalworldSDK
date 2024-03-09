#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Anubis.ABP_Anubis_C
// (None)

class UClass* UABP_Anubis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Anubis_C");

	return Clss;
}


// ABP_Anubis_C ABP_Anubis.Default__ABP_Anubis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Anubis_C* UABP_Anubis_C::GetDefaultObj()
{
	static class UABP_Anubis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Anubis_C*>(UABP_Anubis_C::StaticClass()->DefaultObject);

	return Default;
}

}


