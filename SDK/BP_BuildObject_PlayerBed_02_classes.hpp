#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x5A8 - 0x580)
// BlueprintGeneratedClass BP_BuildObject_PlayerBed_02.BP_BuildObject_PlayerBed_02_C
class ABP_BuildObject_PlayerBed_02_C : public APalBuildObject
{
public:
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_PlayerBed_02_C* GetDefaultObj();

	void OpenMenu();
};

}


