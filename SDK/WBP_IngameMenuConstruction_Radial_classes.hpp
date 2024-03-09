#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0x688 - 0x408)
// WidgetBlueprintGeneratedClass WBP_IngameMenuConstruction_Radial.WBP_IngameMenuConstruction_Radial_C
class UWBP_IngameMenuConstruction_Radial_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Demolish;                                      // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Construction;                                  // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_ConstructionToDemolish;                        // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Tab;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonRadialMenuBase_C*           WBP_CommonRadialMenuBase;                          // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_info_C*    WBP_IngameMenuConstruction_info;                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_LR_C*      WBP_IngameMenuConstruction_LR_L;                   // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_LR_C*      WBP_IngameMenuConstruction_LR_R;                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab;                    // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_1;                  // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_2;                  // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_3;                  // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_4;                  // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_5;                  // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_6;                  // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_7;                  // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_8;                  // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_Tab_C*     WBP_IngameMenuConstruction_Tab_9;                  // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon;                               // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    DecideMenuAction;                                  // 0x4A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    PrevTabActionName;                                 // 0x4B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    PrevTabActionName_Mouse;                           // 0x4B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    NextTabActionName;                                 // 0x4C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    NextTabActionName_Mouse;                           // 0x4C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalBuildObjectTypeA, bool>  BuildObjectDataListMap;                            // 0x4D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_InGameMenuBuildModel_C*            Model;                                             // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalBuildObjectTypeA, class UWBP_IngameMenuConstruction_Tab_C*> Tabs;                                              // 0x528(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentPageIndex;                                  // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBuildObjectTypeA              CurrentCategory;                                   // 0x57C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedIndex;                                     // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalBuildObjectData>           CurrentPageObjects;                                // 0x588(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnBuildModeStart;                                  // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalDataTableRowName_UIInputAction    OpenDismantling;                                   // 0x5A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalUIActionBindData>          ActionBindList;                                    // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalDataTableRowName_UIInputAction    PrevCategoryAction;                                // 0x5C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    NextCategoryAction;                                // 0x5C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  Flag_Name;                                         // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalBuildObjectTypeA, struct FPalRadialCatalog> Catalogs;                                          // 0x5D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalBuildObjectTypeA, int32> CatagoryIndex;                                     // 0x628(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPalBuildObjectData>           CurrentNewObjects;                                 // 0x678(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_IngameMenuConstruction_Radial_C* GetDefaultObj();

	void CreateTab_Internal(enum class EPalBuildObjectTypeA TypeA, TMap<enum class EPalBuildObjectTypeA, TSoftObjectPtr<class UTexture2D>> IconMap, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetBuildObjectCategoryAName_outName, TMap<enum class EPalBuildObjectTypeA, TSoftObjectPtr<class UTexture2D>> K2Node_MakeVariable_MakeVariableOutput, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SelectTab(enum class EPalBuildObjectTypeA TypeA, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateTabNewFlag(enum class EPalBuildObjectTypeA TypeA, bool EnableNewFlag, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPalBuildObjectData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Update_New_Flag(bool CallFunc_Get_Selected_Build_Object_Data_ReturnValue, const struct FPalBuildObjectData& CallFunc_Get_Selected_Build_Object_Data_Output, bool CallFunc_Array_RemoveItem_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_IngameMenuConstruction_ItemSlot_C* K2Node_DynamicCast_AsWBP_Ingame_Menu_Construction_Item_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsNewUnlockedBuild_Radial_ReturnValue);
	void OnPrevCategoryAction(TArray<enum class EPalBuildObjectTypeA>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, enum class EPalBuildObjectTypeA CallFunc_Array_Get_Item);
	void OnNextCategoryAction(TArray<enum class EPalBuildObjectTypeA>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, enum class EPalBuildObjectTypeA CallFunc_Array_Get_Item);
	void On_Update_Inventory();
	void SetDisablePlayerAction(bool Disable, class FName FlagName, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Select_Page_and_Index(int32 Page, int32 Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Select_Page_by_Map_Object(class FName MapObjectId, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void Select_Map_Object(class FName MapObjectId, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Find_Selected_Index_By_Map_Object_Name_Page, int32 CallFunc_Find_Selected_Index_By_Map_Object_Name_Index);
	void Find_Selected_Index_By_Map_Object_Name(class FName SelectMapObjectName, int32* Page, int32* Index, bool bPageChanged, int32 SlotIndex, int32 PageIndex, bool CallFunc_NotEqual_NameName_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<enum class EPalBuildObjectTypeA>& CallFunc_Map_Keys_Keys, enum class EPalBuildObjectTypeA CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, TArray<struct FPalBuildObjectDataSetTypeB>& CallFunc_GetBuildObjectDataArrayForTypeAByTypeB_OutArray, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalBuildObjectDataSetTypeB& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FPalBuildObjectData& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Start_Dismantle_Mode(class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CanConstructiBuildObject(const struct FPalBuildObjectData& BuildObjectData, bool* CanConstruct, bool CallFunc_IsExistsMaterialForBuildObject_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool IsExistsMaterialForBuildObject(const struct FPalBuildObjectData& BuildObjectData, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsExistsMaterialForBuildObject_ReturnValue);
	bool Get_Build_Object_Data(int32 Index, struct FPalBuildObjectData* Output, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalBuildObjectData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool Get_Selected_Build_Object_Data(struct FPalBuildObjectData* Output, bool CallFunc_Get_Build_Object_Data_ReturnValue, const struct FPalBuildObjectData& CallFunc_Get_Build_Object_Data_Output);
	void Update_Radial_Menu_Icon(int32 Temp_int_Array_Index_Variable, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, const struct FPalBuildObjectData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_IsNewUnlockedBuild_Radial_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_IngameMenuConstruction_ItemSlot_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas, bool CallFunc_IsValid_ReturnValue);
	void Update_Radial_Menu_Center(class UWBP_IngameMenuConstruction_ItemSlot_C* TmpWidget, const struct FVector2D& CallFunc_GetCanvasSize_ReturnValue, bool CallFunc_Get_Selected_Build_Object_Data_ReturnValue, const struct FPalBuildObjectData& CallFunc_Get_Selected_Build_Object_Data_Output, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsExistsMaterialForBuildObject_ReturnValue, class UWBP_IngameMenuConstruction_ItemSlot_C* CallFunc_Create_ReturnValue);
	void UpdateConstructionInfo(bool CallFunc_Get_Selected_Build_Object_Data_ReturnValue, const struct FPalBuildObjectData& CallFunc_Get_Selected_Build_Object_Data_Output);
	void GetPageCount(int32* PageCount, int32 Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalBuildObjectTypeA>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EPalBuildObjectTypeA CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_GetTabNum_TabNum, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Set_Current_Page_Index(int32 Page, enum class EPalBuildObjectTypeA TmpObjectType, int32 TmpCount, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, TArray<enum class EPalBuildObjectTypeA>& CallFunc_Map_Keys_Keys, int32 CallFunc_GetTabNum_TabNum, enum class EPalBuildObjectTypeA CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Close(class UPalUserWidget* ParentWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void SetupUIInputAction(class UPalUserWidget* ParentWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6);
	void Setup_Page_Num(int32 Count, const TArray<struct FPalBuildObjectDataSetTypeB>& TempDTA, TMap<int32, int32> CatalogMap, TSet<int32> PageSet, TMap<enum class EPalBuildObjectTypeA, int32> PageNum, enum class EPalBuildObjectTypeA TypeA, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, TMap<enum class EPalBuildObjectTypeA, int32> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, const struct FPalBuildObjectDataSetTypeB& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FPalBuildObjectData& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsNewUnlockedBuild_Radial_ReturnValue, const struct FPalRadialCatalog& K2Node_MakeStruct_PalRadialCatalog, TArray<int32>& CallFunc_Set_ToArray_Result, int32 CallFunc_Set_Length_ReturnValue, int32 CallFunc_MinOfIntArray_IndexOfMinValue, int32 CallFunc_MinOfIntArray_MinValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Variable_2, TArray<enum class EPalBuildObjectTypeA>& CallFunc_Map_Keys_Keys, enum class EPalBuildObjectTypeA CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UWBP_IngameMenuConstruction_Tab_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, TArray<struct FPalBuildObjectDataSetTypeB>& CallFunc_GetBuildObjectDataArrayForTypeAByTypeB_OutArray);
	void Setup_Tab(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_IngameMenuConstruction_Tab_C* K2Node_DynamicCast_AsWBP_Ingame_Menu_Construction_Tab, bool K2Node_DynamicCast_bSuccess);
	void SetupLR();
	void CreateModel(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_InGameMenuBuildModel_C* CallFunc_SpawnObject_ReturnValue);
	void Terminate_UIInput_Action(class UPalUserWidget* ParentWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Open(class UPalUserWidget* ParentWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void On_Dicide_Radial_Menu(int32 Index, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_Get_Build_Object_Data_ReturnValue, const struct FPalBuildObjectData& CallFunc_Get_Build_Object_Data_Output, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanConstructiBuildObject_CanConstruct, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, class FName CallFunc_BP_FindRowByMapObjectId_OutRowName, bool CallFunc_BP_FindRowByMapObjectId_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRowByMapObjectId_ReturnValue);
	void On_Current_Page_Changed(enum class EPalBuildObjectTypeA BuildObjectTypeA, int32 Tab, const TArray<struct FPalBuildObjectDataSetTypeB>& Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FPalRadialCatalog& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FPalBuildObjectDataSetTypeB& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalBuildObjectData& CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FPalBuildObjectDataSetTypeB>& CallFunc_GetBuildObjectDataArrayForTypeAByTypeB_OutArray);
	void OnSelectedIndexChanged(int32 NewIndex, int32 PrevIndex);
	void OnPrevTabAction(int32 CallFunc_GetPageCount_PageCount, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnNextTabAction(int32 CallFunc_GetPageCount_PageCount, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnInitialized();
	void Construct();
	void ExecuteUbergraph_WBP_IngameMenuConstruction_Radial(int32 EntryPoint);
	void OnBuildModeStart__DelegateSignature();
};

}


