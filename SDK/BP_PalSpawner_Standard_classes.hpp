#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC5 (0x42D - 0x368)
// BlueprintGeneratedClass BP_PalSpawner_Standard.BP_PalSpawner_Standard_C
class ABP_PalSpawner_Standard_C : public APalNPCSpawnerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  DummyTextRender;                                   // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DummySkeletalMesh;                                 // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SpawnCollision;                                    // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         NotSleepFlag;                                      // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MonsterBase_C*                     TempSpawnedMonster;                                // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;                              // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                       ReturnTerritoryRadius;                             // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WanderingRadius;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BattleStartLocation;                               // 0x3C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       SpawnRadius;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalSpawnerGroupInfo>          SpawnGroupList;                                    // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       RayStartUpOffset;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSpawnerGroupInfo                  TempSpawnGroupInfo;                                // 0x3F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                       WildLifeWalkingAreaRadius;                         // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       DespawnPlusDistance;                               // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoading;                                         // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsWorldLoadComplete;                               // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_4A8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SpawnerName;                                       // 0x424(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalSpawnedCharacterType          SpawnerType;                                       // 0x42C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalSpawner_Standard_C* GetDefaultObj();

	void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles);
	bool IsSuppressedByRandomIncident(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	float GetSpawnPointRadius(float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void BlueprintTick_Despawning(float DeltaTime);
	void BlueprintTick_Spawning(float DeltaTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue, bool CallFunc_IsSpawnDisable_ReturnValue, bool CallFunc_IsNearBaseCamp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Is_Field_Boss_or_Imprisonment_Boss_Spawner(bool* IsTimer, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnDead(const struct FPalDeadInfo& Info, bool CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EPalSpawnedCharacterType CallFunc_GetSpawnedCharacterType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsServer_ReturnValue);
	void OnCaptured(class APalCharacter* SelfPal, class APalCharacter* Attacker, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer, enum class EPalSpawnedCharacterType CallFunc_GetSpawnedCharacterType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsServer_ReturnValue);
	void Lottery_and_Spawn_Reauest(const TArray<class FName>& TempCharaList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LotterySpawnPalListIndex_Success, const struct FPalSpawnerGroupInfo& CallFunc_LotterySpawnPalListIndex_SpawnGroup, int32 CallFunc_Array_Length_ReturnValue, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1);
	void ExistAliveCharacter(bool* Exist, const struct FFixedPoint64& HPZero, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, bool CallFunc_Greater_FixedPoint64FixedPoint64_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	int32 GetMaxMonsterLevel(int32 MaxLevel, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void GetSpawnGroupList(TArray<struct FPalSpawnerGroupInfo>* List);
	void IsWorldPartitionLoadComplete(bool* IsLoading);
	void IsCharacterLoading(bool* IsLoading);
	void GetFixedSpawnInfo(struct FPalSpawnerGroupInfo* Group);
	void CheckIntervalByDistance(double Interval, double Distance, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetNearstPlayerDistance2D_ReturnValue, float CallFunc_SetActorTickInterval_TickInterval_ImplicitCast, double K2Node_VariableSet_Distance_ImplicitCast);
	void BP_PalSpawner_Standard_AutoGenFunc(class AActor* DestroyedActor, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void CheckWorldLoadCompleted(class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UWorldPartitionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWorldPartitionStreamingQuerySource& K2Node_MakeStruct_WorldPartitionStreamingQuerySource, TArray<struct FWorldPartitionStreamingQuerySource>& K2Node_MakeArray_Array, bool CallFunc_IsStreamingCompleted_ReturnValue, float K2Node_MakeStruct_Radius_ImplicitCast);
	void IsAlwaysSpawn(bool* Always, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void LotterySpawnPalListIndex(bool* Success, struct FPalSpawnerGroupInfo* SpawnGroup, const TArray<struct FPalSpawnerGroupInfo>& SpawnAbleGroup, int32 TempWeightPlus, int32 RandomValue, int32 WeightSum, enum class EPalWeatherConditionType CurrentWeather, enum class EPalOneDayTimeType CurrentTime, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, enum class EPalOneDayTimeType CallFunc_GetCurrentDayTimeType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalSpawnerGroupInfo& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void RemoveHandleList(class APalCharacter* Monster, int32 RemoveIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue);
	void DespawnDelegate(const struct FPalInstanceID& ID);
	void Spawn_Delegate(const struct FPalInstanceID& ID, class APalCharacter* SpawnCharacter, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, class UPalNavigationInvokerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Is_Field_Boss_or_Imprisonment_Boss_Spawner_IsTimer, bool CallFunc_IsBossPal_Database_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, enum class EPalSpawnedCharacterType CallFunc_GetSpawnedCharacterType_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_MonsterAIControllerBase_C* K2Node_DynamicCast_AsBP_Monster_AIController_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_NPC_Base_C* K2Node_DynamicCast_AsBP_NPC_Base, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle_1, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ABP_MonsterBase_C* K2Node_DynamicCast_AsBP_Monster_Base, bool K2Node_DynamicCast_bSuccess_3, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_4, class AController* CallFunc_GetController_ReturnValue_3, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class ABP_MonsterAIController_Wild_C* K2Node_DynamicCast_AsBP_Monster_AIController_Wild, bool K2Node_DynamicCast_bSuccess_5);
	void CheckSpawn(double DeltaTime, const TArray<class FName>& TempCharaList, class FName TempCharaName, const struct FVector& PlayerLocation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSpawned_ReturnValue, enum class EPalCheckSpawnResultType CallFunc_CheckSpawnDistance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetDisableBossSpawnerFlag_FromSaveData_ReturnValue, bool CallFunc_IsSpawnDisable_ReturnValue, bool CallFunc_IsNearBaseCamp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Despawn(const TArray<class UPalIndividualCharacterHandle*>& TempHandleList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Spawn(const struct FPalSpawnerGroupInfo& SpawnGroup, int32 RequestNum, int32 SpawnNumSum, const TArray<int32>& SpawnNumList, double Yaw, class UClass* TempAIConClass, int32 TempNum, class FName TempCharaID, int32 Temp_int_Array_Index_Variable, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetSpawnNumRandom_OneTribe_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const struct FPalSpawnerOneTribeInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_GetSpawnLevelRandom_OneTribe_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Variable_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_RandomFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FVector& CallFunc_RandomSpawnLocationByRadiusLineTrace_OutLocation, bool CallFunc_RandomSpawnLocationByRadiusLineTrace_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FGuid& K2Node_MakeStruct_Guid, class FText CallFunc_Conv_NameToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FNetworkActorSpawnParameters& K2Node_MakeStruct_NetworkActorSpawnParameters, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnNewCharacter_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, double K2Node_VariableSet_Yaw_ImplicitCast, float CallFunc_RandomSpawnLocationByRadiusLineTrace_RayStartUpOffset_ImplicitCast, float CallFunc_RandomSpawnLocationByRadiusLineTrace_RayEndDownOffset_ImplicitCast, float CallFunc_RandomSpawnLocationByRadiusLineTrace_Radius_ImplicitCast);
	void ReceiveBeginPlay();
	void _________0();
	void CreateDebugSpawnerGroupInfo(const struct FPalSpawnerGroupInfo& OneGroupInfo);
	void SetAllNPCLocation();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SpawnRequest_ByOutside(bool IsDeleteAliveCharacter);
	void ExecuteUbergraph_BP_PalSpawner_Standard(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FPalSpawnerGroupInfo& K2Node_Event_OneGroupInfo, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_GetSpawnerRadiusByType_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_Event_IsDeleteAliveCharacter, bool CallFunc_ExistAliveCharacter_Exist, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetCheckRadius_DespawnRadius_ImplicitCast);
};

}


