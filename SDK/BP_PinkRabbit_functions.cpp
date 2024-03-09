#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PinkRabbit.BP_PinkRabbit_C
// (Actor, Pawn)

class UClass* ABP_PinkRabbit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PinkRabbit_C");

	return Clss;
}


// BP_PinkRabbit_C BP_PinkRabbit.Default__BP_PinkRabbit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PinkRabbit_C* ABP_PinkRabbit_C::GetDefaultObj()
{
	static class ABP_PinkRabbit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PinkRabbit_C*>(ABP_PinkRabbit_C::StaticClass()->DefaultObject);

	return Default;
}

}


