#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x60 - 0x60)
// BlueprintGeneratedClass BP_PalQuestBlock_DetectCraftBase.BP_PalQuestBlock_DetectCraftBase_C
class UBP_PalQuestBlock_DetectCraftBase_C : public UPalQuestBlock_DetectCraft
{
public:

	static class UClass* StaticClass();
	static class UBP_PalQuestBlock_DetectCraftBase_C* GetDefaultObj();

	void GetProgressText(class FText* OutText, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetDescriptionText(class FText* OutText, const struct FDataTableRowHandle& NewLocalVar, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetItemName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


