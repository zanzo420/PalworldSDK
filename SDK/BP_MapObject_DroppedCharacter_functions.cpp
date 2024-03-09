#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C
// (Actor)

class UClass* ABP_MapObject_DroppedCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_DroppedCharacter_C");

	return Clss;
}


// BP_MapObject_DroppedCharacter_C BP_MapObject_DroppedCharacter.Default__BP_MapObject_DroppedCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_DroppedCharacter_C* ABP_MapObject_DroppedCharacter_C::GetDefaultObj()
{
	static class ABP_MapObject_DroppedCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_DroppedCharacter_C*>(ABP_MapObject_DroppedCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.GetInteractWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectGetModelOutPinTypeCallFunc_TryGetConcreteModel_OutputPin                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*CallFunc_TryGetConcreteModel_ConcreteModel                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectPickableCharacterModelBase*K2Node_DynamicCast_AsPal_Map_Object_Pickable_Character_Model_Base(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DroppedPalInfoWIdget_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetCharacterSaveParameter_ReturnValue                   (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DroppedCharacter_C::GetInteractWidget(class UPalUserWidget** CreatedWidget, enum class EPalMapObjectGetModelOutPinType CallFunc_TryGetConcreteModel_OutputPin, class UPalMapObjectConcreteModelBase* CallFunc_TryGetConcreteModel_ConcreteModel, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalMapObjectPickableCharacterModelBase* K2Node_DynamicCast_AsPal_Map_Object_Pickable_Character_Model_Base, bool K2Node_DynamicCast_bSuccess, class UWBP_DroppedPalInfoWIdget_C* CallFunc_Create_ReturnValue, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetCharacterSaveParameter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DroppedCharacter_C", "GetInteractWidget");

	Params::ABP_MapObject_DroppedCharacter_C_GetInteractWidget_Params Parms{};

	Parms.CallFunc_TryGetConcreteModel_OutputPin = CallFunc_TryGetConcreteModel_OutputPin;
	Parms.CallFunc_TryGetConcreteModel_ConcreteModel = CallFunc_TryGetConcreteModel_ConcreteModel;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Pickable_Character_Model_Base = K2Node_DynamicCast_AsPal_Map_Object_Pickable_Character_Model_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCharacterSaveParameter_ReturnValue = CallFunc_GetCharacterSaveParameter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.SetActiveFXInLocal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDeathDroppedCharacterModel*K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSameGuildInLocalPlayer_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DroppedCharacter_C::SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalMapObjectDeathDroppedCharacterModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSameGuildInLocalPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DroppedCharacter_C", "SetActiveFXInLocal");

	Params::ABP_MapObject_DroppedCharacter_C_SetActiveFXInLocal_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model = K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSameGuildInLocalPlayer_ReturnValue = CallFunc_IsSameGuildInLocalPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DroppedCharacter_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DroppedCharacter_C", "BP_OnSetConcreteModel");

	Params::ABP_MapObject_DroppedCharacter_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.OnNotifiedGuildUpdateInClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectDeathDroppedCharacterModel*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DroppedCharacter_C::OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathDroppedCharacterModel* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DroppedCharacter_C", "OnNotifiedGuildUpdateInClient");

	Params::ABP_MapObject_DroppedCharacter_C_OnNotifiedGuildUpdateInClient_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_DroppedCharacter.BP_MapObject_DroppedCharacter_C.ExecuteUbergraph_BP_MapObject_DroppedCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDeathDroppedCharacterModel*K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDeathDroppedCharacterModel*K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DroppedCharacter_C::ExecuteUbergraph_BP_MapObject_DroppedCharacter(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectDeathDroppedCharacterModel* K2Node_CustomEvent_Model, class UPalMapObjectDeathDroppedCharacterModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DroppedCharacter_C", "ExecuteUbergraph_BP_MapObject_DroppedCharacter");

	Params::ABP_MapObject_DroppedCharacter_C_ExecuteUbergraph_BP_MapObject_DroppedCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model = K2Node_DynamicCast_AsPal_Map_Object_Death_Dropped_Character_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


