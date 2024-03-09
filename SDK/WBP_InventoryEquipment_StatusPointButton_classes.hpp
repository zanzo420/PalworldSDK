#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0x558 - 0x408)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_StatusPointButton.WBP_InventoryEquipment_StatusPointButton_C
class UWBP_InventoryEquipment_StatusPointButton_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_DecrementButton;                       // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_IncrementButton;                       // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ParamArrow;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Arrow;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_BonusPoint;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Main;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Param;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_Decrement;                  // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_Increment;                  // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, struct FDataTableRowHandle> MagIDMap;                                          // 0x468(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class UTexture2D*>         TextureMap;                                        // 0x4B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  BindStatusPointName;                               // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedIncrement;                                // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CachedPoint;                                       // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdditionalPointForSimulate;                        // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedDecrement;                                // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_StatusPointButton_C* GetDefaultObj();

	void UpdateStatusBuffState(double CallFunc_Get_Base_Parameter_Parameter, double CallFunc_Get_Base_Parameter_Parameter_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void Get_Base_Parameter(bool ShowBaseValue, double* Parameter, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, const struct FGuid& CallFunc_GetPlayerUIDByActor_ReturnValue, const struct FGuid& CallFunc_GetPlayerUIDByActor_ReturnValue_1, int32 CallFunc_GetPlayerEquipmentDefense_ReturnValue, int32 CallFunc_GetPlayerEquipmentHP_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, int32 CallFunc_GetCraftSpeed_ReturnValue, int32 CallFunc_GetDefense_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetShotAttack_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, int32 CallFunc_GetMaxHP_ReturnValue, int32 CallFunc_GetCraftSpeed_withBuff_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Conv_IntToDouble_ReturnValue_4, double CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_GetDefense_withBuff_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_5, int32 CallFunc_GetShotAttack_withBuff_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_6, double CallFunc_SelectFloat_ReturnValue_3, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetSaveParameter_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_7, double CallFunc_SelectFloat_ReturnValue_4, bool K2Node_SwitchName_CmpSuccess, double K2Node_FunctionResult_Parameter_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void ResetSimulate();
	void AddSimulatePoint(int32 SimulatePoint, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetBonusRate(int32 Point, double* Bonus, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Conv_IntToDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Conv_IntToDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, bool K2Node_SwitchName_CmpSuccess, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5);
	void UpdateDecrementButtonDetail(bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void Set_Enable_Simulate_Button(bool IsEnable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_NameName_ReturnValue);
	void Update_Binded_Status_Detail(bool ShowBaseValue, class UMaterial* Temp_object_Variable, class UMaterial* Temp_object_Variable_1, double CallFunc_Get_Base_Parameter_Parameter, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetBonusRate_Bonus, int64 CallFunc_Conv_IntToInt64_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_DoubleToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, class UMaterial* K2Node_Select_Default, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetStatusPoint_ReturnValue);
	void Construct();
	void OnInitialized();
	void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_Decrement_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_InventoryEquipment_StatusPointButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_InventoryEquipment_StatusPointButton(int32 EntryPoint, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnUnhovered__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
	void OnHovered__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
	void OnClickedDecrement__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
	void OnClickedIncrement__DelegateSignature(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
};

}

