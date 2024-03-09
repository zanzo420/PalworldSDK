#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x330 (0x738 - 0x408)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C
class UWBP_InventoryEquipment_ItemInfo_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Use;                                           // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_rarity;                                        // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_CommonDetail;                               // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_ItemNum;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_KeyGuide_Use;                               // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_MainParameter;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_SkillInfo;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_SubParameter;                               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_TechPoint;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Horizontal_KeyGuide_Equip;                         // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Horizontal_KeyGuide_LiftHalf;                      // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Horizontal_KeyGuide_LiftOne;                       // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Horizontal_KeyGuide_Move;                          // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Horizontal_KeyGuide_Use;                           // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Durability;                          // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_KeyGuide;                            // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon_TechPoint;                              // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemIcon;                                    // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemIconShadow;                              // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Consumable;                                // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_RarityText;                                // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                RichText_ItemInfo;                                 // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                RichText_ItemName;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_LiftHalf_RightIcon;                        // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_LiftOne_RightIcon;                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_KeyGuide_Equip;                             // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_KeyGuide_Move;                              // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_KeyGuide_Use;                               // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_CTNum;                                        // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Cu;                                           // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_DurableNum;                                   // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Equip;                                        // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_ItemCategory;                                 // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_ItemNumTitle;                                 // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_ItemNumValue;                                 // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_MainParamTitle;                               // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_MainParamValue;                               // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_NowWeight;                                    // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Ra;                                           // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_SubParamTitle;                                // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_SubParamValue;                                // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Tech_PointValue;                              // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_TechPointTitle;                               // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    TextPowerNum;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_ItemInfo_addeffect_C* WBP_InventoryEquipment_ItemInfo_addeffect;         // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_ItemInfo_Caution_C* WBP_InventoryEquipment_ItemInfo_Caution;           // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* WBP_InventoryEquipment_ItemInfo_Tecnology;         // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_PalIcon_C*     WBP_InventoryEquipment_PalIcon;                    // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_StatusElement_C*     WBP_MainMenu_Pal_StatusElement;                    // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon;                               // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon_1;                             // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon;                       // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon_1;                     // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon_2;                     // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon_65;                    // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopSellPrice_C*                  WBP_ShopSellPrice;                                 // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_PalUIItemInfoWindowDIsplayType  NowDisplayType;                                    // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PalUIItemInfoWindowDIsplayType  DefaultDisplayType;                                // 0x5D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalItemTypeA, struct FDataTableRowHandle> MainParamMsgIDMap;                                 // 0x5D8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<enum class EPalItemTypeA, struct FDataTableRowHandle> SubParamMsgIDMap;                                  // 0x628(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                   MainParamShieldOverrideMsgID;                      // 0x678(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FPalDataTableRowName_UIInputAction    UseItem;                                           // 0x688(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUICommonItemInfoDisplayData       CachedDisplayInfo;                                 // 0x690(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FDataTableRowHandle                   EquipMsgID;                                        // 0x6C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   RemoveEquipMsgID;                                  // 0x6D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ItemNumTitleMsgID;                                 // 0x6E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MaskedTechTitleMsgID;                              // 0x6F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MaskedTechDescMsgID;                               // 0x700(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	TArray<struct FDataTableRowHandle>           RarityMsgIDs;                                      // 0x710(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                         IsBossTechPoint;                                   // 0x720(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   NormalMsgId;                                       // 0x728(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_ItemInfo_C* GetDefaultObj();

	void SetupPrice(class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, const struct FPalStaticItemIdAndNum& K2Node_MakeStruct_PalStaticItemIdAndNum, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_CalcItemSellPrice_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	void SetupItemRarity(class FName ItemStaticId, class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Min_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, float CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast);
	void SetupItemDurability(class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxDurability_ReturnValue, float CallFunc_GetDurability_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void Setup_Tech_Mat_Details(const struct FPalTechnologyRecipeUnlockDataTableRow& TechData, bool IsMasked, const TArray<struct FPalStaticItemIdAndNum>& MatDetail, TMap<class FName, int32> MaterialDetails, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_BP_FindRowByMapObjectId_OutRowName, bool CallFunc_BP_FindRowByMapObjectId_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRowByMapObjectId_ReturnValue, class FName CallFunc_Array_Get_Item_2, bool CallFunc_NotEqual_NameName_ReturnValue, TMap<class FName, int32> K2Node_MakeMap_Map, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPalStaticItemIdAndNum& K2Node_MakeStruct_PalStaticItemIdAndNum, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, TMap<class FName, int32> K2Node_MakeMap_Map_1);
	void Get_Display_Technology_Category_Name(class FName TechnologyName, class FText* CategoryText, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, const struct FPalTechnologyRecipeUnlockDataTableRow& CallFunc_GetRecipeTechlonogy_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_GetItemTypeAName_outName, bool CallFunc_Greater_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue, class FText CallFunc_GetBuildObjectCategoryAName_outName);
	void SetupByTechnologyName(class FName TechnologyName, bool IsMasked, class UTexture2D* IconTexture, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, class UTexture2D* Temp_object_Variable, class FText CallFunc_GetTechnologyDescription_OutDescription, class UTexture2D* Temp_object_Variable_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_SelectText_ReturnValue, class FText CallFunc_Get_Display_Technology_Category_Name_CategoryText, bool Temp_bool_Variable_3, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue, const struct FPalTechnologyRecipeUnlockDataTableRow& CallFunc_GetRecipeTechlonogy_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_SelectText_ReturnValue_1, class UTexture2D* K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class FText CallFunc_GetLocalizedText_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue_1, const struct FPalTechnologyRecipeUnlockDataTableRow& CallFunc_GetRecipeTechlonogy_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_3, class FText CallFunc_GetLocalizedText_ReturnValue_2);
	void Is_Equipable_Item(class UPalItemSlot* Slot, bool* IsEquipable, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsEquipSlot_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnUpdateTargetSlot(class UPalItemSlot* Slot);
	void UnbindEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStackCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetupUseableKeyGuide_Internal(class FName StaticItemId, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetupSkillInfo(class FName ItemStaticId, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, bool Temp_bool_Variable, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, class UPalStaticConsumeItemData* K2Node_DynamicCast_AsPal_Static_Consume_Item_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
	void SetupTechDetails(const TArray<struct FPalStaticItemIdAndNum>& MatDetail, TMap<class FName, int32> MaterialDetails, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalStaticItemIdAndNum& K2Node_MakeStruct_PalStaticItemIdAndNum, int32 CallFunc_Array_Add_ReturnValue, class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, TMap<class FName, int32> K2Node_MakeMap_Map);
	void SetupKeyGuide(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool Temp_bool_Variable_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLift_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Is_Equipable_Item_IsEquipable, bool CallFunc_IsEquipSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, class FText CallFunc_GetLocalizedTextFromHandle_Text, int32 CallFunc_GetStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_3);
	void HideAdditionalText();
	void SetImportanyAdditionalText(class FText Text);
	void SetSimpleAdditionalText(class FText Text);
	void Setup_Parameter(class UPalStaticItemDataBase* TmpDisplayStaticItemData, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class FName CallFunc_GetPassiveSkill_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Glider_Item_Base, bool K2Node_ClassDynamicCast_bSuccess, class FText CallFunc_GetPassiveSkillName_outName, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, class UPalStaticArmorItemData* K2Node_DynamicCast_AsPal_Static_Armor_Item_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetHPValue_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue_1, int32 CallFunc_GetShieldValue_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Capture_Prism, bool K2Node_ClassDynamicCast_bSuccess_1, int32 CallFunc_GetDefenseValue_ReturnValue, int32 CallFunc_GetCaptureLevelBySphereType_ReturnValue, class UPalStaticConsumeItemData* K2Node_DynamicCast_AsPal_Static_Consume_Item_Data, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetRestoreSanity_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetRestoreSatiety_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPalStaticWeaponItemData* K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data, bool K2Node_DynamicCast_bSuccess_2, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue_2, class UClass* K2Node_ClassDynamicCast_AsPal_Weapon_Base, bool K2Node_ClassDynamicCast_bSuccess_2, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetItemName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, int32 CallFunc_CountItemNum_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetItemTypeAName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1);
	void Setup_Item_Weight(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void SetupItemNum(class FText CallFunc_Conv_IntToText_ReturnValue);
	void HideMainParameter();
	void SetupItemDescription(class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, class FText CallFunc_GetItemDescription_outName, class FText CallFunc_GetItemDescription_outName_1, bool CallFunc_IsValid_ReturnValue);
	void Setup_Item_Name(class FName ItemStaticId, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetItemName_outName, class UPalMasterDataTableAccess_ItemRecipe* CallFunc_GetItemRecipeDataTableAccess_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalItemRecipe& CallFunc_BP_FindRow_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_GetItemTypeAName_outName, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FPalItemId& CallFunc_GetItemId_ReturnValue);
	void Set_Pal_Gear_Icon(class FName ItemId, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Setup_Item_Icon(const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetupByDisplayInfo(const struct FPalUICommonItemInfoDisplayData& DisplayInfo, class UPalItemIDManager* ItemIDManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void Set_Main_Param_Text(class FText Text);
	void SetMainParamValue(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue);
	void HideSubParameter();
	void SetSubParamText(class FText Text);
	void ChangeDisplayMode(enum class E_PalUIItemInfoWindowDIsplayType DisplayType, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	void SetSubParamValue(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
};

}


