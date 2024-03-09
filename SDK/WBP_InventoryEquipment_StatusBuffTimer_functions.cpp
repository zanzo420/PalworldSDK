#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_StatusBuffTimer.WBP_InventoryEquipment_StatusBuffTimer_C
// (None)

class UClass* UWBP_InventoryEquipment_StatusBuffTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_StatusBuffTimer_C");

	return Clss;
}


// WBP_InventoryEquipment_StatusBuffTimer_C WBP_InventoryEquipment_StatusBuffTimer.Default__WBP_InventoryEquipment_StatusBuffTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_StatusBuffTimer_C* UWBP_InventoryEquipment_StatusBuffTimer_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_StatusBuffTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_StatusBuffTimer_C*>(UWBP_InventoryEquipment_StatusBuffTimer_C::StaticClass()->DefaultObject);

	return Default;
}

}


