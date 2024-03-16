#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2F0 - 0x290)
// BlueprintGeneratedClass BP_PPSkyCreatorCharacterLighting.BP_PPSkyCreatorCharacterLighting_C
class ABP_PPSkyCreatorCharacterLighting_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APPSkyCreator>          SkyCreator;                                        // 0x2A0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                       Sun_Emissive_Intensity;                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Moon_Emissive_Intensity;                           // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APPSkyCreator*                         Sky_creator;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Light_intensity;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PPSkyCreatorCharacterLighting_C* GetDefaultObj();

	void OnLoaded_406982714B2B2A9091DBB5A252BA6489(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PPSkyCreatorCharacterLighting(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue, class UObject* Temp_object_Variable, class APPSkyCreator* K2Node_DynamicCast_AsPPSky_Creator, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_FClamp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
};

}


