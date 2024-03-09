#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A (0x3EA - 0x3B0)
// BlueprintGeneratedClass BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C
class ABP_MapObject_DroppedCharacter_C : public APalMapObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractableCapsule_C*             BP_InteractableCapsule;                            // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_MapObject_DroppedCharacter;                     // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       ReleasePower;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                InteractOther;                                     // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Auto_Picked_Up;                                    // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableInteract;                                   // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapObject_DroppedCharacter_C* GetDefaultObj();

	void GetInteractWidget(class UPalUserWidget** CreatedWidget, enum class EPalMapObjectGetModelOutPinType CallFunc_TryGetConcreteModel_OutputPin, class UPalMapObjectConcreteModelBase* CallFunc_TryGetConcreteModel_ConcreteModel, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalMapObjectPickableCharacterModelBase* K2Node_DynamicCast_AsPal_Map_Object_Pickable_Character_Model_Base, bool K2Node_DynamicCast_bSuccess, class UWBP_DroppedPalInfoWIdget_C* CallFunc_Create_ReturnValue, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetCharacterSaveParameter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalMapObjectDeathDroppedCharacterModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSameGuildInLocalPlayer_ReturnValue);
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathDroppedCharacterModel* Model);
	void ExecuteUbergraph_BP_MapObject_DroppedCharacter(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectDeathDroppedCharacterModel* K2Node_CustomEvent_Model, class UPalMapObjectDeathDroppedCharacterModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model, bool K2Node_DynamicCast_bSuccess);
};

}


