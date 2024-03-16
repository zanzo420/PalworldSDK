#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C
// (None)

class UClass* UABP_M_OldCloth001_Implimentation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_M_OldCloth001_Implimentation_C");

	return Clss;
}


// ABP_M_OldCloth001_Implimentation_C ABP_M_OldCloth001_Implimentation.Default__ABP_M_OldCloth001_Implimentation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_M_OldCloth001_Implimentation_C* UABP_M_OldCloth001_Implimentation_C::GetDefaultObj()
{
	static class UABP_M_OldCloth001_Implimentation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_M_OldCloth001_Implimentation_C*>(UABP_M_OldCloth001_Implimentation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.ClothLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ClothLayer                                                       (Parm, OutParm, NoDestructor)

void UABP_M_OldCloth001_Implimentation_C::ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "ClothLayer");

	Params::UABP_M_OldCloth001_Implimentation_C_ClothLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ClothLayer != nullptr)
		*ClothLayer = std::move(Parms.ClothLayer);

}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_M_OldCloth001_Implimentation_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "AnimGraph");

	Params::UABP_M_OldCloth001_Implimentation_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_9D0AEFDF45B49FDE8B54A3AD6AD26D1A
// (BlueprintEvent)
// Parameters:

void UABP_M_OldCloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_9D0AEFDF45B49FDE8B54A3AD6AD26D1A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_9D0AEFDF45B49FDE8B54A3AD6AD26D1A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_04EA739849D99A1703C0C2899D3D20D3
// (BlueprintEvent)
// Parameters:

void UABP_M_OldCloth001_Implimentation_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_04EA739849D99A1703C0C2899D3D20D3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_AnimGraphNode_KawaiiPhysics_04EA739849D99A1703C0C2899D3D20D3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_M_OldCloth001_Implimentation.ABP_M_OldCloth001_Implimentation_C.ExecuteUbergraph_ABP_M_OldCloth001_Implimentation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKawaiiPhysicsSettings      K2Node_MakeStruct_KawaiiPhysicsSettings                          (NoDestructor)

void UABP_M_OldCloth001_Implimentation_C::ExecuteUbergraph_ABP_M_OldCloth001_Implimentation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_M_OldCloth001_Implimentation_C", "ExecuteUbergraph_ABP_M_OldCloth001_Implimentation");

	Params::UABP_M_OldCloth001_Implimentation_C_ExecuteUbergraph_ABP_M_OldCloth001_Implimentation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_KawaiiPhysicsSettings = K2Node_MakeStruct_KawaiiPhysicsSettings;

	UObject::ProcessEvent(Func, &Parms);

}

}


