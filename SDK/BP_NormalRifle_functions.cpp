#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NormalRifle.BP_NormalRifle_C
// (Actor)

class UClass* ABP_NormalRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NormalRifle_C");

	return Clss;
}


// BP_NormalRifle_C BP_NormalRifle.Default__BP_NormalRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NormalRifle_C* ABP_NormalRifle_C::GetDefaultObj()
{
	static class ABP_NormalRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NormalRifle_C*>(ABP_NormalRifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NormalRifle.BP_NormalRifle_C.GetDefaultBlurAngle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_NormalRifle_C::GetDefaultBlurAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetDefaultBlurAngle");

	Params::ABP_NormalRifle_C_GetDefaultBlurAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalRifle.BP_NormalRifle_C.PlayEndFireSound_Callback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaying                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::PlayEndFireSound_Callback(bool IsPlaying, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "PlayEndFireSound_Callback");

	Params::ABP_NormalRifle_C_PlayEndFireSound_Callback_Params Parms{};

	Parms.IsPlaying = IsPlaying;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.PlayEndFireSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::PlayEndFireSound(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "PlayEndFireSound");

	Params::ABP_NormalRifle_C_PlayEndFireSound_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.StopFireSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::StopFireSound(const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "StopFireSound");

	Params::ABP_NormalRifle_C_StopFireSound_Params Parms{};

	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.PlayFireSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEmptyMagazine_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::PlayFireSound(bool CallFunc_IsEmptyMagazine_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, bool CallFunc_Not_PreBool_ReturnValue, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "PlayFireSound");

	Params::ABP_NormalRifle_C_PlayFireSound_Params Parms{};

	Parms.CallFunc_IsEmptyMagazine_ReturnValue = CallFunc_IsEmptyMagazine_ReturnValue;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.PlayReloadAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalRifle_C::PlayReloadAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "PlayReloadAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetLeftHandTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_NormalRifle_C::GetLeftHandTransform(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetLeftHandTransform");

	Params::ABP_NormalRifle_C_GetLeftHandTransform_Params Parms{};

	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetAimingBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::GetAimingBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetAimingBlurAngle");

	Params::ABP_NormalRifle_C_GetAimingBlurAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function BP_NormalRifle.BP_NormalRifle_C.Is UseEjectionPort
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUse                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::Is_UseEjectionPort(bool* IsUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "Is UseEjectionPort");

	Params::ABP_NormalRifle_C_Is_UseEjectionPort_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUse != nullptr)
		*IsUse = Parms.IsUse;

}


// Function BP_NormalRifle.BP_NormalRifle_C.GeyEjectionPortTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::GeyEjectionPortTransform(struct FTransform* Transform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GeyEjectionPortTransform");

	Params::ABP_NormalRifle_C_GeyEjectionPortTransform_Params Parms{};

	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetShotAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalRifle_C::GetShotAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetShotAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalRifle.BP_NormalRifle_C.IsUseLeftHandAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_NormalRifle_C::IsUseLeftHandAttach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "IsUseLeftHandAttach");

	Params::ABP_NormalRifle_C_IsUseLeftHandAttach_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetMuzzleRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    Rotator                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NormalRifle_C::GetMuzzleRotator(struct FRotator* Rotator, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetMuzzleRotator");

	Params::ABP_NormalRifle_C_GetMuzzleRotator_Params Parms{};

	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetShootInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetShootInterval");

	Params::ABP_NormalRifle_C_GetShootInterval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetBulletClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetBulletClass");

	Params::ABP_NormalRifle_C_GetBulletClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetMuzzleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::GetMuzzleLocation(struct FVector* MuzzleLocation, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetMuzzleLocation");

	Params::ABP_NormalRifle_C_GetMuzzleLocation_Params Parms{};

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);

}


// Function BP_NormalRifle.BP_NormalRifle_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_NormalRifle_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "GetEquipSocketName");

	Params::ABP_NormalRifle_C_GetEquipSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalRifle.BP_NormalRifle_C.OnReleaseTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalRifle_C::OnReleaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "OnReleaseTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalRifle.BP_NormalRifle_C.OnDetachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DetachActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::OnDetachWeapon(class AActor* DetachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "OnDetachWeapon");

	Params::ABP_NormalRifle_C_OnDetachWeapon_Params Parms{};

	Parms.DetachActor = DetachActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponNotifyType       NotifyType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::_________0(enum class EWeaponNotifyType NotifyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "«¹¿à¤ÙóÈ_0");

	Params::ABP_NormalRifle_C__________0_Params Parms{};

	Parms.NotifyType = NotifyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "ReceiveEndPlay");

	Params::ABP_NormalRifle_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttachActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "OnAttachWeapon");

	Params::ABP_NormalRifle_C_OnAttachWeapon_Params Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalRifle.BP_NormalRifle_C.OnShoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalRifle_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "OnShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalRifle.BP_NormalRifle_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalRifle_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "OnPullTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalRifle.BP_NormalRifle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NormalRifle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalRifle.BP_NormalRifle_C.ExecuteUbergraph_BP_NormalRifle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_detachActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponNotifyType       K2Node_CustomEvent_NotifyType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmptyMagazine_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_attachActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmptyMagazine_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalRifle_C::ExecuteUbergraph_BP_NormalRifle(int32 EntryPoint, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_detachActor, enum class EWeaponNotifyType K2Node_CustomEvent_NotifyType, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsEmptyMagazine_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* K2Node_Event_attachActor, bool CallFunc_IsEmptyMagazine_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalRifle_C", "ExecuteUbergraph_BP_NormalRifle");

	Params::ABP_NormalRifle_C_ExecuteUbergraph_BP_NormalRifle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_detachActor = K2Node_Event_detachActor;
	Parms.K2Node_CustomEvent_NotifyType = K2Node_CustomEvent_NotifyType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsEmptyMagazine_ReturnValue = CallFunc_IsEmptyMagazine_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_attachActor = K2Node_Event_attachActor;
	Parms.CallFunc_IsEmptyMagazine_ReturnValue_1 = CallFunc_IsEmptyMagazine_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


