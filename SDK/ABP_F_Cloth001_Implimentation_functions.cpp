#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_F_Cloth001_Implimentation.ABP_F_Cloth001_Implimentation_C
// (None)

class UClass* UABP_F_Cloth001_Implimentation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_F_Cloth001_Implimentation_C");

	return Clss;
}


// ABP_F_Cloth001_Implimentation_C ABP_F_Cloth001_Implimentation.Default__ABP_F_Cloth001_Implimentation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_F_Cloth001_Implimentation_C* UABP_F_Cloth001_Implimentation_C::GetDefaultObj()
{
	static class UABP_F_Cloth001_Implimentation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_F_Cloth001_Implimentation_C*>(UABP_F_Cloth001_Implimentation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_F_Cloth001_Implimentation.ABP_F_Cloth001_Implimentation_C.ClothLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ClothLayer                                                       (Parm, OutParm, NoDestructor)

void UABP_F_Cloth001_Implimentation_C::ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_Cloth001_Implimentation_C", "ClothLayer");

	Params::UABP_F_Cloth001_Implimentation_C_ClothLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ClothLayer != nullptr)
		*ClothLayer = std::move(Parms.ClothLayer);

}


// Function ABP_F_Cloth001_Implimentation.ABP_F_Cloth001_Implimentation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_F_Cloth001_Implimentation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_Cloth001_Implimentation_C", "AnimGraph");

	Params::UABP_F_Cloth001_Implimentation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_F_Cloth001_Implimentation.ABP_F_Cloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_8A45C6DC49AEE17D684F0E844C5D07AB
// (BlueprintEvent)
// Parameters:

void UABP_F_Cloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_8A45C6DC49AEE17D684F0E844C5D07AB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_Cloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_8A45C6DC49AEE17D684F0E844C5D07AB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_F_Cloth001_Implimentation.ABP_F_Cloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_26B8E1664A61C748422E82AEC71A0B03
// (BlueprintEvent)
// Parameters:

void UABP_F_Cloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_26B8E1664A61C748422E82AEC71A0B03()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_Cloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_26B8E1664A61C748422E82AEC71A0B03");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_F_Cloth001_Implimentation.ABP_F_Cloth001_Implimentation_C.ExecuteUbergraph_ABP_F_Cloth001_Implimentation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKawaiiPhysicsSettings      K2Node_MakeStruct_KawaiiPhysicsSettings                          (NoDestructor)

void UABP_F_Cloth001_Implimentation_C::ExecuteUbergraph_ABP_F_Cloth001_Implimentation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_F_Cloth001_Implimentation_C", "ExecuteUbergraph_ABP_F_Cloth001_Implimentation");

	Params::UABP_F_Cloth001_Implimentation_C_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_KawaiiPhysicsSettings = K2Node_MakeStruct_KawaiiPhysicsSettings;

	UObject::ProcessEvent(Func, &Parms);

}

}


