#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x251 (0x251 - 0x0)
// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.GetInteractWidget
struct ABP_MapObject_DroppedCharacter_C_GetInteractWidget_Params
{
public:
	class UPalUserWidget*                        CreatedWidget;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalMapObjectGetModelOutPinType   CallFunc_TryGetConcreteModel_OutputPin;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectConcreteModelBase*        CallFunc_TryGetConcreteModel_ConcreteModel;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickableCharacterModelBase* K2Node_DynamicCast_AsPal_Map_Object_Pickable_Character_Model_Base; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_DroppedPalInfoWIdget_C*           CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter  CallFunc_GetCharacterSaveParameter_ReturnValue;    // 0x38(0x218)(ConstParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.SetActiveFXInLocal
struct ABP_MapObject_DroppedCharacter_C_SetActiveFXInLocal_Params
{
public:
	class UPalMapObjectConcreteModelBase*        ConcreteModel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathDroppedCharacterModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSameGuildInLocalPlayer_ReturnValue;     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.BP_OnSetConcreteModel
struct ABP_MapObject_DroppedCharacter_C_BP_OnSetConcreteModel_Params
{
public:
	class UPalMapObjectConcreteModelBase*        ConcreteModel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.OnNotifiedGuildUpdateInClient
struct ABP_MapObject_DroppedCharacter_C_OnNotifiedGuildUpdateInClient_Params
{
public:
	class UPalMapObjectDeathDroppedCharacterModel* Model;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.ExecuteUbergraph_BP_MapObject_DroppedCharacter
struct ABP_MapObject_DroppedCharacter_C_ExecuteUbergraph_BP_MapObject_DroppedCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectConcreteModelBase*        K2Node_Event_ConcreteModel;                        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathDroppedCharacterModel* K2Node_CustomEvent_Model;                          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathDroppedCharacterModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


