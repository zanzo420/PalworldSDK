#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x5D8 - 0x5A8)
// BlueprintGeneratedClass BP_BuildObject_FarmBlockV2_Berries.BP_BuildObject_FarmBlockV2_Berries_C
class ABP_BuildObject_FarmBlockV2_Berries_C : public APalBuildObjectFarmBlockV2
{
public:
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         VirtualMeshCollision;                              // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_FarmBlockV2_Berries_C* GetDefaultObj();

};

}


