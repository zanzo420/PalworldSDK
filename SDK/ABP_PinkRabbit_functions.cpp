#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PinkRabbit.ABP_PinkRabbit_C
// (None)

class UClass* UABP_PinkRabbit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PinkRabbit_C");

	return Clss;
}


// ABP_PinkRabbit_C ABP_PinkRabbit.Default__ABP_PinkRabbit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PinkRabbit_C* UABP_PinkRabbit_C::GetDefaultObj()
{
	static class UABP_PinkRabbit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PinkRabbit_C*>(UABP_PinkRabbit_C::StaticClass()->DefaultObject);

	return Default;
}

}


