#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TalkWindow.WBP_TalkWindow_C
// (None)

class UClass* UWBP_TalkWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TalkWindow_C");

	return Clss;
}


// WBP_TalkWindow_C WBP_TalkWindow.Default__WBP_TalkWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TalkWindow_C* UWBP_TalkWindow_C::GetDefaultObj()
{
	static class UWBP_TalkWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TalkWindow_C*>(UWBP_TalkWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnTalkerDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTalkWidgetParameter*     K2Node_DynamicCast_AsPal_Talk_Widget_Parameter                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::OnTalkerDamage(const struct FPalDamageResult& DamageResult, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalTalkWidgetParameter* K2Node_DynamicCast_AsPal_Talk_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnTalkerDamage");

	Params::UWBP_TalkWindow_C_OnTalkerDamage_Params Parms{};

	Parms.DamageResult = DamageResult;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Talk_Widget_Parameter = K2Node_DynamicCast_AsPal_Talk_Widget_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnProgressTextInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::OnProgressTextInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnProgressTextInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.UnregisterInputAction_DisplayingText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::UnregisterInputAction_DisplayingText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "UnregisterInputAction_DisplayingText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.RegisterInputAction_DisplayingText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)

void UWBP_TalkWindow_C::RegisterInputAction_DisplayingText(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "RegisterInputAction_DisplayingText");

	Params::UWBP_TalkWindow_C_RegisterInputAction_DisplayingText_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnTalkWidgetClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CallCustomFunc_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::OnTalkWidgetClosed(bool CallFunc_CallCustomFunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnTalkWidgetClosed");

	Params::UWBP_TalkWindow_C_OnTalkWidgetClosed_Params Parms{};

	Parms.CallFunc_CallCustomFunc_ReturnValue = CallFunc_CallCustomFunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.ProgressText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::ProgressText(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "ProgressText");

	Params::UWBP_TalkWindow_C_ProgressText_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.Setup_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTalkWidgetParameter*     K2Node_DynamicCast_AsPal_Talk_Widget_Parameter                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_ChangeSeqence_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_TalkWindow_C::Setup_Internal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, bool Temp_bool_Variable, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalTalkWidgetParameter* K2Node_DynamicCast_AsPal_Talk_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_Select_Default, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_ChangeSeqence_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const class FString& CallFunc_GetNickName_outName, bool CallFunc_IsValid_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "Setup_Internal");

	Params::UWBP_TalkWindow_C_Setup_Internal_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Talk_Widget_Parameter = K2Node_DynamicCast_AsPal_Talk_Widget_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_ChangeSeqence_ReturnValue = CallFunc_ChangeSeqence_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_TalkSelectButton_C*     CallFunc_GetTopChoiceButton_Button                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_TalkWindow_C::BP_GetDesiredFocusTarget(class UWBP_TalkSelectButton_C* CallFunc_GetTopChoiceButton_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_TalkWindow_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopChoiceButton_Button = CallFunc_GetTopChoiceButton_Button;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UWBP_TalkWindow_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnCancelAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.SkipText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UWBP_TalkWindow_C::SkipText(class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "SkipText");

	Params::UWBP_TalkWindow_C_SkipText_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.CalculateDisplayingText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// int32                              CallFunc_GetTextLengthWithoutTag_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Left_OutText                                            (None)

void UWBP_TalkWindow_C::CalculateDisplayingText(class FText CallFunc_GetText_ReturnValue, int32 CallFunc_GetTextLengthWithoutTag_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Left_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "CalculateDisplayingText");

	Params::UWBP_TalkWindow_C_CalculateDisplayingText_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetTextLengthWithoutTag_ReturnValue = CallFunc_GetTextLengthWithoutTag_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Left_OutText = CallFunc_Left_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.Setup Text
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetTextLengthWithoutTag_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Left_OutText                                            (None)
// bool                               CallFunc_HasArguments_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// class FText                        CallFunc_CreateTextAppliedArgments_OutText                       (None)

void UWBP_TalkWindow_C::Setup_Text(int32 CallFunc_GetTextLengthWithoutTag_ReturnValue, class FText CallFunc_Left_OutText, bool CallFunc_HasArguments_ReturnValue, class FName CallFunc_Array_Get_Item, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_CreateTextAppliedArgments_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "Setup Text");

	Params::UWBP_TalkWindow_C_Setup_Text_Params Parms{};

	Parms.CallFunc_GetTextLengthWithoutTag_ReturnValue = CallFunc_GetTextLengthWithoutTag_ReturnValue;
	Parms.CallFunc_Left_OutText = CallFunc_Left_OutText;
	Parms.CallFunc_HasArguments_ReturnValue = CallFunc_HasArguments_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_CreateTextAppliedArgments_OutText = CallFunc_CreateTextAppliedArgments_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.Proceed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalNPCTalkProceedResultCallFunc_Proceed_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::Proceed(enum class EPalNPCTalkProceedResult CallFunc_Proceed_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "Proceed");

	Params::UWBP_TalkWindow_C_Proceed_Params Parms{};

	Parms.CallFunc_Proceed_ReturnValue = CallFunc_Proceed_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnChoiced
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalNPCTalkSelectedChoiceResultCallFunc_NotifyChoiceIndex_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::OnChoiced(int32 Index, enum class EPalNPCTalkSelectedChoiceResult CallFunc_NotifyChoiceIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnChoiced");

	Params::UWBP_TalkWindow_C_OnChoiced_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_NotifyChoiceIndex_ReturnValue = CallFunc_NotifyChoiceIndex_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.ShowChoice
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ChoiceTextIDList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWBP_TalkSelectButton_C*     CallFunc_GetTopChoiceButton_Button                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::ShowChoice(TArray<class FName>& ChoiceTextIDList, class UWBP_TalkSelectButton_C* CallFunc_GetTopChoiceButton_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "ShowChoice");

	Params::UWBP_TalkWindow_C_ShowChoice_Params Parms{};

	Parms.ChoiceTextIDList = ChoiceTextIDList;
	Parms.CallFunc_GetTopChoiceButton_Button = CallFunc_GetTopChoiceButton_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.SetMainTextList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                TextIDList                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::SetMainTextList(TArray<class FName>& TextIDList, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "SetMainTextList");

	Params::UWBP_TalkWindow_C_SetMainTextList_Params Parms{};

	Parms.TextIDList = TextIDList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "Tick");

	Params::UWBP_TalkWindow_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "RequestClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_0_OnChoiced__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              ChoicedIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_0_OnChoiced__DelegateSignature(int32 ChoicedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_0_OnChoiced__DelegateSignature");

	Params::UWBP_TalkWindow_C_BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_0_OnChoiced__DelegateSignature_Params Parms{};

	Parms.ChoicedIndex = ChoicedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.OnCancelEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::OnCancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "OnCancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_2_OnRequestSkipText__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TalkWindow_C::BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_2_OnRequestSkipText__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_2_OnRequestSkipText__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TalkWindow.WBP_TalkWindow_C.ExecuteUbergraph_WBP_TalkWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ChoicedIndex                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTalkWidgetParameter*     K2Node_DynamicCast_AsPal_Talk_Widget_Parameter                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TalkWindow_C::ExecuteUbergraph_WBP_TalkWindow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, int32 K2Node_ComponentBoundEvent_ChoicedIndex, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UPalTalkWidgetParameter* K2Node_DynamicCast_AsPal_Talk_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TalkWindow_C", "ExecuteUbergraph_WBP_TalkWindow");

	Params::UWBP_TalkWindow_C_ExecuteUbergraph_WBP_TalkWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ChoicedIndex = K2Node_ComponentBoundEvent_ChoicedIndex;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Talk_Widget_Parameter = K2Node_DynamicCast_AsPal_Talk_Widget_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


