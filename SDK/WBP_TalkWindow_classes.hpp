#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x4BD - 0x448)
// WidgetBlueprintGeneratedClass WBP_TalkWindow.WBP_TalkWindow_C
class UWBP_TalkWindow_C : public UPalTalkWindowWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalRichTextBlock_C*                RichText_Dummy;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Talk_C*                           WBP_Talk;                                          // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        DisplayTextIndex;                                  // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsDisplayingText;                                  // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DisplayTextIdList;                                 // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       TextDisplayTimer;                                  // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRegisteredText;                                  // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_UIInputAction    ProgressTextInputAction_01;                        // 0x4A4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ProgressTextInputAction_02;                        // 0x4AC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ProgressTextInputActionHandle_01;                  // 0x4B4(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  ProgressTextInputActionHandle_02;                  // 0x4B8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsChoiceMode;                                      // 0x4BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_TalkWindow_C* GetDefaultObj();

	void OnTalkerDamage(const struct FPalDamageResult& DamageResult, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalTalkWidgetParameter* K2Node_DynamicCast_AsPal_Talk_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnProgressTextInput();
	void UnregisterInputAction_DisplayingText();
	void RegisterInputAction_DisplayingText(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1);
	void OnTalkWidgetClosed(bool CallFunc_CallCustomFunc_ReturnValue);
	void ProgressText(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Setup_Internal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, bool Temp_bool_Variable, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalTalkWidgetParameter* K2Node_DynamicCast_AsPal_Talk_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_Select_Default, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_ChangeSeqence_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const class FString& CallFunc_GetNickName_outName, bool CallFunc_IsValid_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWBP_TalkSelectButton_C* CallFunc_GetTopChoiceButton_Button);
	void OnCancelAction();
	void SkipText(class FText CallFunc_GetText_ReturnValue);
	void CalculateDisplayingText(class FText CallFunc_GetText_ReturnValue, int32 CallFunc_GetTextLengthWithoutTag_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Left_OutText);
	void Setup_Text(int32 CallFunc_GetTextLengthWithoutTag_ReturnValue, class FText CallFunc_Left_OutText, bool CallFunc_HasArguments_ReturnValue, class FName CallFunc_Array_Get_Item, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_CreateTextAppliedArgments_OutText);
	void Proceed(enum class EPalNPCTalkProceedResult CallFunc_Proceed_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnChoiced(int32 Index, enum class EPalNPCTalkSelectedChoiceResult CallFunc_NotifyChoiceIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowChoice(TArray<class FName>& ChoiceTextIDList, class UWBP_TalkSelectButton_C* CallFunc_GetTopChoiceButton_Button);
	void SetMainTextList(TArray<class FName>& TextIDList, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void Destruct();
	void OnSetup();
	void RequestClose();
	void BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_0_OnChoiced__DelegateSignature(int32 ChoicedIndex);
	void BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void OnCancelEvent();
	void BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_2_OnRequestSkipText__DelegateSignature();
	void ExecuteUbergraph_WBP_TalkWindow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, int32 K2Node_ComponentBoundEvent_ChoicedIndex, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UPalTalkWidgetParameter* K2Node_DynamicCast_AsPal_Talk_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


