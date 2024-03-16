#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x548 - 0x430)
// WidgetBlueprintGeneratedClass WBP_OptionSettings.WBP_OptionSettings_C
class UWBP_OptionSettings_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_List_OutToIn;                                  // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_CloseToOpen;                                   // 0x440(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Default;                           // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Settings;                              // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*      WBP_OptionSettings_MenuButton_Game;                // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*      WBP_OptionSettings_MenuButton_Graphic;             // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*      WBP_OptionSettings_MenuButton_Key;                 // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*      WBP_OptionSettings_MenuButton_Other;               // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*      WBP_OptionSettings_MenuButton_Other_1;             // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*      WBP_OptionSettings_MenuButton_Sound;               // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_Tab_C*             WBP_OptionSettings_Tab;                            // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollList;                           // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon_Back;                          // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon_Default;                       // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Switching;                                         // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DefaultActionName;                                 // 0x4AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PreTabActionName;                                  // 0x4B4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextTabActionName;                                 // 0x4BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Graphic_Settings_C*               GraphicSettings;                                   // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Sound_Settings_C*                 AudioSettings;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Key_Settings_C*                   KeySettings;                                       // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Control_Settings_C*               GameSettings;                                      // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Other_Settings_C*                 OtherSettings;                                     // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   SetDefaultMsgID;                                   // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CloseMsgID;                                        // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FDataTableRowHandle>           ControlTabMsgIDs;                                  // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalUIActionBindData                  BackActionBinding;                                 // 0x520(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  DefaultActionBinding;                              // 0x524(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  PreTabActionBinding;                               // 0x528(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  NextTabActionBinding;                              // 0x52C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWidget*                               LastFocus;                                         // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ConflictMsgId;                                     // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_C* GetDefaultObj();

	void Set_Tab_Action(bool Bind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDesiredFocusTarget_Target, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class UWidget* CallFunc_GetDesiredFocusTarget_Target_1, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue_4);
	void Finished_2536FBE94511E5E94401869A3ECF77EC();
	void Finished_412D6FCC467DE29951851EB38295E8FE();
	void Finished_EE961C0249D44ADFCC582DBCE988D50D();
	void Finished_3DF735A247AFD17B1935A8AD119ED44F();
	void Finished_657FDFA04D1EEBEC31C7FAA8DADA417B();
	void Finished_A36E9B0F4ACC421F93D76BA170A1BA11();
	void Finished_05846F744E202D6A15C4A8ABCE740327();
	void Finished_24865DB74E2CDF7AF1AD4D9DBEE2B394();
	void Finished_2034482C493806B667AA82AE6C6A732D();
	void Finished_47188B3742112F703AC219B6DFD31698();
	void Finished_E609EC2649DD5C39B8991FA76989D962();
	void OpenPanel();
	void ClosePanel();
	void Construct();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Graphic_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BackAction();
	void SetDefaultAction();
	void SetDefault(bool Confirmed);
	void ApplySettings(bool Confirmed);
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Sound_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Control_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void PreTab();
	void NextTab();
	void SwitchTabTo(int32 Index);
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Key_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void EmptyEvent(bool bResult);
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_OptionSettings(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& CallFunc_GetTelemetryUserId_ReturnValue, const class FString& CallFunc_GetTelemetrySessionId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Graphic_Settings_C* CallFunc_Create_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, bool K2Node_CustomEvent_Confirmed_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FGuid& CallFunc_Dialog_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, bool K2Node_CustomEvent_Confirmed, const struct FGuid& CallFunc_Dialog_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_Sound_Settings_C* CallFunc_Create_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_3, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_4, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_5, bool CallFunc_IsVisible_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UWBP_Control_Settings_C* CallFunc_Create_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_5, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_5, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_6, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UWidget* CallFunc_GetDesiredFocusTarget_Target, bool CallFunc_IsVisible_ReturnValue_7, bool CallFunc_IsVisible_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_IsVisible_ReturnValue_9, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_1, class UWidget* CallFunc_GetDesiredFocusTarget_Target_1, bool CallFunc_IsVisible_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, int32 K2Node_CustomEvent_Index, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_7, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_7, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_8, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsVisible_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UWBP_Other_Settings_C* CallFunc_Create_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_IsVisible_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_11, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_8, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_9, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, bool CallFunc_IsValid_ReturnValue_9, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_10, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsVisible_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_9, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_Not_PreBool_ReturnValue_10, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class UWBP_Key_Settings_C* CallFunc_Create_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_IsVisible_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_IsVisible_ReturnValue_16, bool CallFunc_IsVisible_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_IsVisible_ReturnValue_18, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsVisible_ReturnValue_19, class UWidget* CallFunc_GetDesiredFocusTarget_Target_2, class UWidget* CallFunc_GetDesiredFocusTarget_Target_3, bool CallFunc_IsVisible_ReturnValue_20, bool CallFunc_IsVisible_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_18, bool CallFunc_Not_PreBool_ReturnValue_11, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_19, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, const struct FGuid& CallFunc_Dialog_ReturnValue_2, bool K2Node_CustomEvent_bResult, bool CallFunc_BooleanOR_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_22, bool CallFunc_IsCanOpenExternalWebSite_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


