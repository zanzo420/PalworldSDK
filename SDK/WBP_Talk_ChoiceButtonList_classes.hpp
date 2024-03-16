#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Talk_ChoiceButtonList.WBP_Talk_ChoiceButtonList_C
class UWBP_Talk_ChoiceButtonList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_Button;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectedChoice;                                  // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Talk_ChoiceButtonList_C* GetDefaultObj();

	void GetButtonByIndex(int32 Index, class UWBP_TalkSelectButton_C** NewParam, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_TalkSelectButton_C* K2Node_DynamicCast_AsWBP_Talk_Select_Button, bool K2Node_DynamicCast_bSuccess);
	void ClearButtons();
	void FocusToIndex(int32 Index, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_TalkSelectButton_C* K2Node_DynamicCast_AsWBP_Talk_Select_Button, bool K2Node_DynamicCast_bSuccess);
	void ShowChoice(TArray<class FName>& ChoiceTextIDList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_TalkSelectButton_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnChoiced(int32 Index);
	void Construct();
	void ExecuteUbergraph_WBP_Talk_ChoiceButtonList(int32 EntryPoint);
	void OnSelectedChoice__DelegateSignature(int32 Index);
};

}


