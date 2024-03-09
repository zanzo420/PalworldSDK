#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E10 (0x4158 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Hair007_Implementation.ABP_Player_Hair007_Implementation_C
class UABP_Player_Hair007_Implementation_C : public UAnimInstance
{
public:
	uint8                                        Pad_3316[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x368(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x388(0x20)(None)
	uint8                                        Pad_3317[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_7;                     // 0x3B0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_6;                     // 0xB40(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_5;                     // 0x12D0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_4;                     // 0x1A60(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_3;                     // 0x21F0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0x2980(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x3110(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x38A0(0x790)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x4030(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x4050(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4118(0x20)(None)
	struct FKawaiiPhysicsSettings                PhysicsSettings;                                   // 0x4138(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                       Alpha;                                             // 0x4150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Hair007_Implementation_C* GetDefaultObj();

	void HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_25A3C88C48DCF168243009BBE6399A41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_21EEF29B4FFD91C19A0586A1E1C22178();
	void ExecuteUbergraph_ABP_Player_Hair007_Implementation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings);
};

}


