#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalQuestBlock_TutorialCraftPalSphere.BP_PalQuestBlock_TutorialCraftPalSphere_C
// (None)

class UClass* UBP_PalQuestBlock_TutorialCraftPalSphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalQuestBlock_TutorialCraftPalSphere_C");

	return Clss;
}


// BP_PalQuestBlock_TutorialCraftPalSphere_C BP_PalQuestBlock_TutorialCraftPalSphere.Default__BP_PalQuestBlock_TutorialCraftPalSphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalQuestBlock_TutorialCraftPalSphere_C* UBP_PalQuestBlock_TutorialCraftPalSphere_C::GetDefaultObj()
{
	static class UBP_PalQuestBlock_TutorialCraftPalSphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalQuestBlock_TutorialCraftPalSphere_C*>(UBP_PalQuestBlock_TutorialCraftPalSphere_C::StaticClass()->DefaultObject);

	return Default;
}

}


