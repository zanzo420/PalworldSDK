#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D40 (0x2088 - 0x348)
// AnimBlueprintGeneratedClass ABP_F_Cloth001_Implimentation.ABP_F_Cloth001_Implimentation_C
class UABP_F_Cloth001_Implimentation_C : public UAnimInstance
{
public:
	uint8                                        Pad_5A7F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	uint8                                        Pad_5A80[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0x370(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0xB00(0x790)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x1290(0x520)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x17B0(0x790)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1F40(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1F60(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1F80(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1FA0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2068(0x20)(None)

	static class UClass* StaticClass();
	static class UABP_F_Cloth001_Implimentation_C* GetDefaultObj();

	void ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_8A45C6DC49AEE17D684F0E844C5D07AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_26B8E1664A61C748422E82AEC71A0B03();
	void ExecuteUbergraph_ABP_F_Cloth001_Implimentation(int32 EntryPoint, const struct FKawaiiPhysicsSettings& K2Node_MakeStruct_KawaiiPhysicsSettings);
};

}


