#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Hair007_Implementation.ABP_Player_Hair007_Implementation_C
// (None)

class UClass* UABP_Player_Hair007_Implementation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Hair007_Implementation_C");

	return Clss;
}


// ABP_Player_Hair007_Implementation_C ABP_Player_Hair007_Implementation.Default__ABP_Player_Hair007_Implementation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Hair007_Implementation_C* UABP_Player_Hair007_Implementation_C::GetDefaultObj()
{
	static class UABP_Player_Hair007_Implementation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Hair007_Implementation_C*>(UABP_Player_Hair007_Implementation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Hair007_Implementation.ABP_Player_Hair007_Implementation_C.HairLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   HairLayer                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair007_Implementation_C::HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair007_Implementation_C", "HairLayer");

	Params::UABP_Player_Hair007_Implementation_C_HairLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (HairLayer != nullptr)
		*HairLayer = std::move(Parms.HairLayer);

}


// Function ABP_Player_Hair007_Implementation.ABP_Player_Hair007_Implementation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair007_Implementation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair007_Implementation_C", "AnimGraph");

	Params::UABP_Player_Hair007_Implementation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Hair007_Implementation.ABP_Player_Hair007_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_25A3C88C48DCF168243009BBE6399A41
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair007_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_25A3C88C48DCF168243009BBE6399A41()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair007_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_25A3C88C48DCF168243009BBE6399A41");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair007_Implementation.ABP_Player_Hair007_Implementation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_21EEF29B4FFD91C19A0586A1E1C22178
// (BlueprintEvent)
// Parameters:

void UABP_Player_Hair007_Implementation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_21EEF29B4FFD91C19A0586A1E1C22178()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair007_Implementation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_21EEF29B4FFD91C19A0586A1E1C22178");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair007_Implementation.ABP_Player_Hair007_Implementation_C.ExecuteUbergraph_ABP_Player_Hair007_Implementation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKawaiiPhysicsSettings      K2Node_MakeStruct_KawaiiPhysicsSettings                          (NoDestructor)

void UABP_Player_Hair007_Implementation_C::ExecuteUbergraph_ABP_Player_Hair007_Implementation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair007_Implementation_C", "ExecuteUbergraph_ABP_Player_Hair007_Implementation");

	Params::UABP_Player_Hair007_Implementation_C_ExecuteUbergraph_ABP_Player_Hair007_Implementation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_KawaiiPhysicsSettings = K2Node_MakeStruct_KawaiiPhysicsSettings;

	UObject::ProcessEvent(Func, &Parms);

}

}


