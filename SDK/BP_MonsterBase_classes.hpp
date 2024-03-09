#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x8F0 - 0x880)
// BlueprintGeneratedClass BP_MonsterBase.BP_MonsterBase_C
class ABP_MonsterBase_C : public APalMonsterCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAbilitySkillParameterComponent*    PalAbilitySkillParameter;                          // 0x888(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMotionWarpingComponent*               MotionWarping;                                     // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalCryComponent_C*                 BP_PalCryComponent;                                // 0x898(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*    PalPartnerSkillParameter;                          // 0x8A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalNavigationInvokerComponent*        PalNavigationInvoker;                              // 0x8A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x8B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   PalFacial;                                         // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionChannel                 CapsuleCollisionChannel;                           // 0x8C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CollisionProfileNameCache;                         // 0x8C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     FlyEffect;                                         // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       EffectiveAttackLogTimer;                           // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInflictDamageEvent;                              // 0x8E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_MonsterBase_C* GetDefaultObj();

	void OnLanded_Proc(class UPalCharacterMovementComponent* Component, const struct FHitResult& Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsPalCharacter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetJumpEffectSpawnLocation_Location, double CallFunc_GetEffectScale_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsFlyPal_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
	void AddEffectivceAttackLog(const struct FPalDeadInfo& Info, class APalCharacter* DeadChar, class APalCharacter* Attacker, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsOtomo_ReturnValue, class FText CallFunc_CreateLogText_outText, const class FString& CallFunc_GetNickName_outName_1, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FGuid& CallFunc_AddLog_ReturnValue);
	void AddTargetDefeatLog(const struct FPalDeadInfo& Info, class APalCharacter* DeadChar, class APalCharacter* Attacker, const struct FPalInstanceID& CallFunc_GetIndividualIDByActor_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_DynamicCast_AsPal_Character_1, bool K2Node_DynamicCast_bSuccess_1, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, const struct FPalInstanceID& CallFunc_GetIndividualIDByActor_ReturnValue_1, bool CallFunc_NotEqual_PalInstanceIDPalInstanceID_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetNickName_outName, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetNickName_outName_1, bool CallFunc_IsOtomo_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_CreateLogText_outText, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FGuid& CallFunc_AddLog_ReturnValue);
	void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent, const TArray<class USceneComponent*>& NewLocalVar_0, class USkeletalMeshComponent* CallFunc_GetHandAttachMesh_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHandAttachMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void GetJumpEffectSpawnLocation(struct FVector* Location, class FName CallFunc_Socket_JumpEffect_ReturnValue, const struct FTransform& CallFunc_GetBodyLocation_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_DoesSocketExist_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalSizeParameterDataRow& CallFunc_FindPalSizeParameter_RowData, bool CallFunc_FindPalSizeParameter_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void GetEffectScale(double* Scale, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalSizeParameterDataRow& CallFunc_FindPalSizeParameter_RowData, bool CallFunc_FindPalSizeParameter_ReturnValue, double K2Node_FunctionResult_Scale_ImplicitCast);
	void PlayJumpSound(const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions);
	void GetFlyEffectAttachOffset(struct FTransform* EffectTransform, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void UpdateFlyEffect(double DeltaTime, bool CallFunc_IsValid_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
	void OnNotifyEnd_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnNotifyBegin_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnInterrupted_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnBlendOut_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnCompleted_098E824D485481E7313DA1A9DC5E74B5(class FName NotifyName);
	void OnLoaded_4AE31D724846BFB2E85A948698F32C16(class UObject* Loaded);
	void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Event_DeadGiftExp(const struct FPalDeadInfo& DeadInfo);
	void SetUpDelegate();
	void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_1_OnLandedDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component, struct FHitResult& Hit);
	void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnFlyDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
	void OnDefeatCharacter(struct FPalDeadInfo& DeadInfo);
	void OnInflictDamage(struct FPalDamageResult& DamageResult);
	void OnInitialized(class APalCharacter* InCharacter);
	void OnUpdateLevelDelegate______0(int32 AddLevel, int32 NowLevel);
	void ExecuteUbergraph_BP_MonsterBase(int32 EntryPoint, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, enum class EPalGeneralMontageType Temp_byte_Variable, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UObject* Temp_object_Variable, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* K2Node_ComponentBoundEvent_component_2, float K2Node_Event_DeltaSeconds, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, class UPalCharacterMovementComponent* K2Node_ComponentBoundEvent_component_1, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class UPalCharacterMovementComponent* K2Node_ComponentBoundEvent_component, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter_1, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue, double CallFunc_GetEffectScale_Scale, const struct FVector& CallFunc_GetJumpEffectSpawnLocation_Location, const struct FPalDeadInfo& K2Node_Event_DeadInfo, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FPalDamageResult& K2Node_Event_DamageResult, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetJumpEffectSpawnLocation_Location_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, double CallFunc_GetEffectScale_Scale_1, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class APalCharacter* K2Node_CustomEvent_InCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue_2, int32 K2Node_CustomEvent_addLevel, int32 K2Node_CustomEvent_nowLevel, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_GetActiveActorFlag_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, enum class EPalGeneralMontageType Temp_byte_Variable_1, double CallFunc_Divide_DoubleDouble_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsRarePal_ReturnValue, bool CallFunc_IsWildNPC_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPalVisualEffectBase* CallFunc_AddVisualEffect_Local_ReturnValue, double CallFunc_UpdateFlyEffect_DeltaTime_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2);
	void OnInflictDamageEvent__DelegateSignature(const struct FPalDamageResult& DamageResult);
};

}


