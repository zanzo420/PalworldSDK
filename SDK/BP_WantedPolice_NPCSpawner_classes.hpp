#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x5E8 - 0x418)
// BlueprintGeneratedClass BP_WantedPolice_NPCSpawner.BP_WantedPolice_NPCSpawner_C
class ABP_WantedPolice_NPCSpawner_C : public ABP_MonoNPCSpawner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         BoxCollision;                                      // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DummyPlayer;                                       // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        SpawnPointNum;                                     // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4841[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SpawnPointRadius;                                  // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RespawnDistance;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       SpawnPoints;                                       // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_NPCAIController_C*                 NPCAIController;                                   // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         OwnerHandle;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         OwnerCharacter;                                    // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWanted;                                          // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4842[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LostSearchTime;                                    // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LostSearchTimer;                                   // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FPalDataTableRowName_PalHumanData> PoliceHumanDataArray;                              // 0x488(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPalIndividualCharacterHandle*         DespawnHandle;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> NPCMap;                                            // 0x4E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> PreNPCMap;                                         // 0x530(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SpawnNum;                                          // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4843[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SpawnHeightOffset;                                 // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalReward;                                       // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CharacterID;                                       // 0x594(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4844[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FloorCheckHeight;                                  // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PoliceLevel;                                       // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RespawnCheckCount;                                 // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RespawnCount;                                      // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4845[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RespawnCheckTimer;                                 // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RespawnCheckTime;                                  // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsForceSpawn;                                      // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4846[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       PreLocations;                                      // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PreTargetReward;                                   // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetReward;                                      // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WantedPolice_NPCSpawner_C* GetDefaultObj();

	void IsPoliceInSight(bool* NoOneInSight, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_NPCAIController_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class ABP_NPCAIController_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckPoliceInSight_InSight);
	void IsOrganizationCitizen(enum class EPalOrganizationType OrganizationType, bool* bCitizen, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HasWeapon(class ABP_NPCAIController_C* NewParam, bool* HasWeapon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, TSubclassOf<class UPalAIActionBase> CallFunc_GetCombatClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void ReporterChangeAction(class APalCharacter* Reporter, class APalCharacter* Criminal, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasWeapon_HasWeapon);
	void CheckReportCriminal(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsCriminalCharacter_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetIndividualCharacterHandleByActor_ReturnValue, TArray<class APalCharacter*>& CallFunc_FindCriminalsInSight_Criminals, bool CallFunc_FindCriminalsInSight_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class EPalOrganizationType CallFunc_GetOrganizationTypeByIndividualHandle_ReturnValue, bool CallFunc_IsOrganizationCitizen_bCitizen, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPalWorldSecuritySystem* CallFunc_GetWorldSecuritySystem_ReturnValue);
	void DespawnPolices(TArray<class UPalIndividualCharacterHandle*>& DespawnHandles, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SpawnPolices(const struct FPalWorldSecurityWantedStateInfo& WantedStateInfo, int32 LastIndex, bool IsFind, const struct FPalWorldSecurityWantedPoliceSettingData& PreUsePoliceData, const struct FPalWorldSecurityWantedPoliceSettingData& UsePoliceData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_NPCAIController_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable, class ABP_NPCAIController_C* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Map_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPalWorldSecuritySystem* CallFunc_GetWorldSecuritySystem_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_GetCrimeIdByCrimeInstanceId_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FPalCrimeMasterData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, TMap<int32, struct FPalWorldSecurityWantedPoliceSettingData> K2Node_Select_Default, TArray<int32>& CallFunc_Map_Keys_Keys, const struct FPalWorldSecurityWantedPoliceSettingData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue, const struct FPalWorldSecurityWantedPoliceSettingData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void GetCombatGunBP(class UBP_AIAction_NPC_Combat_Gun_C** NewParam, bool CallFunc_IsValid_ReturnValue, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UBP_AIAction_NPC_Combat_Gun_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Gun, bool K2Node_DynamicCast_bSuccess);
	void FindSpawnLocation(struct FVector* Location, const struct FVector& PreLocation, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_CheckValidSpawnLocation_Location, bool CallFunc_CheckValidSpawnLocation_IsValid, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FVector& CallFunc_CheckValidSpawnLocation_Location_1, bool CallFunc_CheckValidSpawnLocation_IsValid_1);
	void CheckValidSpawnLocation(const struct FVector& TargetLocation, struct FVector* Location, bool* IsValid, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_2, bool CallFunc_LineTraceSingle_ReturnValue_2, bool CallFunc_CheckRespawn_IsRespawn, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckRespawn_IsRespawn_1, bool CallFunc_Not_PreBool_ReturnValue_1);
	void ReleaseWanted(class UPalWorldSecuritySystem* CallFunc_GetWorldSecuritySystem_ReturnValue);
	void CheckPoliceInSight(class ABP_NPCAIController_C* NPC, bool* InSight, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, class UBP_AIAction_NPC_Combat_Gun_C* CallFunc_GetCombatGunBP_NewParam, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LineTraceToTarget_ForAIAttack_ReturnValue);
	void SetupOwnerAndHandle(class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void IsSelf(class UPalIndividualCharacterHandle* CharacterHandle, bool* IsSelf, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void CheckRespawn(const struct FVector& CheckLocation, bool* IsRespawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void SpawnDelegate(const struct FPalInstanceID& ID, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess);
	void Despawn();
	void Spawn(class ABP_NPCAIController_C* Temp_object_Variable, const struct FVector& CallFunc_FindSpawnLocation_Location, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FGuid& K2Node_MakeStruct_Guid, const struct FNetworkActorSpawnParameters& K2Node_MakeStruct_NetworkActorSpawnParameters, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnNewCharacter_ReturnValue);
	void CorrectPoints(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void ReceiveBeginPlay();
	void BlueprintTick(float DeltaTime);
	void OnInitializedNPC();
	void ChangeCombatMode();
	void OnReleaseWanted(class UPalIndividualCharacterHandle* CriminalHandle);
	void OnWanted(class UPalIndividualCharacterHandle* CriminalHandle, const struct FPalWorldSecurityWantedStateInfo& WantedStateInfo);
	void DebugShowPoints(double DeltaTime);
	void ExecuteUbergraph_BP_WantedPolice_NPCSpawner(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaTime, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsEndInitialize_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UBP_AIAction_CanCombatBase_C* K2Node_DynamicCast_AsBP_AIAction_Can_Combat_Base, bool K2Node_DynamicCast_bSuccess, class UPalWorldSecuritySystem* CallFunc_GetWorldSecuritySystem_ReturnValue, class UPalIndividualCharacterHandle* K2Node_CustomEvent_CriminalHandle_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsSelf_IsSelf, bool CallFunc_IsDead_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPalWorldSecuritySystem* CallFunc_GetWorldSecuritySystem_ReturnValue_1, TArray<class UPalIndividualCharacterHandle*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UBP_AIAction_NPC_Combat_Gun_C* CallFunc_GetCombatGunBP_NewParam, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class ABP_NPCAIController_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_CheckRespawn_IsRespawn, class UPalIndividualCharacterHandle* K2Node_CustomEvent_CriminalHandle, const struct FPalWorldSecurityWantedStateInfo& K2Node_CustomEvent_WantedStateInfo, bool CallFunc_IsSelf_IsSelf_1, double K2Node_CustomEvent_DeltaTime, bool CallFunc_IsValid_ReturnValue_3, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Variable, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_CheckValidSpawnLocation_Location, bool CallFunc_CheckValidSpawnLocation_IsValid, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsPoliceInSight_NoOneInSight, TArray<class UPalIndividualCharacterHandle*>& CallFunc_Map_Keys_Keys_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Map_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UPalIndividualCharacterHandle*>& CallFunc_Map_Keys_Keys_2, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, double CallFunc_DebugShowPoints_DeltaTime_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
};

}


