#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x568 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C
class UWBP_PlayerRadialMenu_C : public UPalUIPlayerRadialMenuBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonRadialMenuBase_C*           WBP_CommonRadialMenuBase;                          // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsAnyRadialMenuOpened;                             // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CameraModifierName;                                // 0x42C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerRadialMenuOpenType         OpenedRadialType;                                  // 0x434(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OtomoIndex;                                        // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    DecideMenuAction;                                  // 0x43C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  Action_Handle;                                     // 0x444(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FeedMsgID;                                         // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FeedWithNameMsgID;                                 // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CareMsgID;                                         // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CareWithNameMsgID;                                 // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteTitleMsgID;                                   // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWBP_IngameMenuConstruction_Radial_C*  ConstructionMenu;                                  // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  InteractDIsableFlagName;                           // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InstructionAttackMsgID;                            // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InstructionAssistMsgID;                            // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InstructionEscapetMsgID;                           // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_0;                                      // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_1;                                      // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_2;                                      // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_3;                                      // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_4;                                      // 0x518(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_5;                                      // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_6;                                      // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EmoteMsgID_7;                                      // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SlaughterMsgID;                                    // 0x558(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_PlayerRadialMenu_C* GetDefaultObj();

	void IsPlayerDying(bool* IsDying, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalStatusBase* CallFunc_GetExecutionStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void IsAnyMenuOpened(bool* IsOpened);
	void SetInteractEnable(bool IsInteractEnable, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void EmptyFunction();
	void HasConstructionMenu(bool* HasMenu, bool CallFunc_IsValid_ReturnValue);
	void IsPlayerRiding(bool* IsRiding, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRiding_ReturnValue);
	void CloseConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C* Menu, int32 FindIndex, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CreateConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C** CreatedWidget, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UWBP_IngameMenuConstruction_Radial_C* CallFunc_Create_ReturnValue);
	void OpenConstructionMenu(class FName SelectMapObjectId, int32 SelectedIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_IsPlayerDying_IsDying, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasConstructionMenu_HasMenu, class UWBP_IngameMenuConstruction_Radial_C* CallFunc_CreateConstructionMenu_createdWidget, bool CallFunc_IsPlayerRiding_IsRiding, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnPressConstructionMenuButton();
	void OnDecidedEmoteMenu(int32 Index, class UClass* EmoteAction, bool K2Node_SwitchInteger_CmpSuccess, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
	void CreateEmoteMenu(class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_2, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_3, class FText CallFunc_GetLocalizedTextFromHandle_Text_4, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_5, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_5, class FText CallFunc_GetLocalizedTextFromHandle_Text_6, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_6);
	void Open_Emote_Menu(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnPlayerRideOn(class AActor* RideActor);
	void OnDecidedInstruction_Care(enum class EPalActionType HumanAction, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_ActionPairStandby_Petting_C* K2Node_DynamicCast_AsBP_Action_Pair_Standby_Petting, bool K2Node_DynamicCast_bSuccess, class UBP_ActionCutPalMeat_Player_C* K2Node_DynamicCast_AsBP_Action_Cut_Pal_Meat_Player, bool K2Node_DynamicCast_bSuccess_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class ABP_MeatCutterKnife_C* K2Node_DynamicCast_AsBP_Meat_Cutter_Knife, bool K2Node_DynamicCast_bSuccess_2, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, bool CallFunc_IsValid_ReturnValue_1, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue);
	void OnDecidedInstruction_Feed(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnDecidedPlayerActionMenu(int32 Index, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess);
	void OnOtomoChanged_Inactivated();
	void OnOtomoChanged_Activated();
	void UnbindPlayerActionMenuEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue);
	void BindPlayerActionMenuEvent(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess);
	void CreateInstructionsAdditionalWidget(class FText InText, class UWBP_PlayerRadialMenu_MenuContent_C** CreatedWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_Create_ReturnValue);
	void OnDamagedPlayer(const struct FPalDamageResult& DamageResult);
	void CloseSetup(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void CloseMenu(class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_HasConstructionMenu_HasMenu);
	void CreatePlayerActionMenu(const struct FDataTableRowHandle& TmpMsgID, const class FString& OtomoNickName, const struct FSlateColor& TextColor_NothingOtomo, class APalCharacter* SpawnedOtomo, bool IsOtomoActivated, class FText CallFunc_GetLocalizedTextFromHandle_Text, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget, class ABP_MeatCutterKnife_C* K2Node_DynamicCast_AsBP_Meat_Cutter_Knife, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_5, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_3, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_6, class FText CallFunc_Format_ReturnValue_1, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_5, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_6, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_7, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_7, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetNickName_outName, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_7);
	void Can_Open_Player_Action_Menu(bool* Result, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStatusBase* CallFunc_GetExecutionStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsExecuting_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRiding_ReturnValue);
	void OpenSetup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void OpenMenu(class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void OpenPlayerActionMenu(bool CallFunc_Can_Open_Player_Action_Menu_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetSpawnedOtomoID_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnPushedAnyWidget(struct FGuid& PushedWidgetID);
	void BindOpenPlayerActionMenu();
	void UnbindOpenPlayerActionMenu();
	void SetupEvent();
	void ExecuteUbergraph_WBP_PlayerRadialMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_4);
};

}

