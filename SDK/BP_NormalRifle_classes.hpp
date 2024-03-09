#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x5A0 - 0x571)
// BlueprintGeneratedClass BP_NormalRifle.BP_NormalRifle_C
class ABP_NormalRifle_C : public ABP_AssaultRifleBase_C
{
public:
	uint8                                        Pad_4B60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Weapon;                                            // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewLocalVar_0;                                     // 0x588(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NormalRifle_C* GetDefaultObj();

	float GetDefaultBlurAngle();
	void PlayEndFireSound_Callback(bool IsPlaying, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void PlayEndFireSound(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void StopFireSound(const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void PlayFireSound(bool CallFunc_IsEmptyMagazine_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, bool CallFunc_Not_PreBool_ReturnValue, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void PlayReloadAnimation();
	struct FTransform GetLeftHandTransform(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void GetAimingBlurAngle(double* Angle);
	void Is_UseEjectionPort(bool* IsUse);
	void GeyEjectionPortTransform(struct FTransform* Transform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void GetShotAnimation();
	bool IsUseLeftHandAttach();
	void GetMuzzleRotator(struct FRotator* Rotator, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue);
	void GetShootInterval(double* Time);
	void GetBulletClass(class UClass** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	class FName GetEquipSocketName();
	void OnReleaseTrigger();
	void OnDetachWeapon(class AActor* DetachActor);
	void _________0(enum class EWeaponNotifyType NotifyType);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnAttachWeapon(class AActor* AttachActor);
	void OnShoot();
	void OnPullTrigger();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NormalRifle(int32 EntryPoint, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_detachActor, enum class EWeaponNotifyType K2Node_CustomEvent_NotifyType, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsEmptyMagazine_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* K2Node_Event_attachActor, bool CallFunc_IsEmptyMagazine_ReturnValue_1);
};

}


