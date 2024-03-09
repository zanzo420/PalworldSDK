#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C
// (None)

class UClass* UWBP_Menu_Pal_Potencial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Menu_Pal_Potencial_C");

	return Clss;
}


// WBP_Menu_Pal_Potencial_C WBP_Menu_Pal_Potencial.Default__WBP_Menu_Pal_Potencial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Menu_Pal_Potencial_C* UWBP_Menu_Pal_Potencial_C::GetDefaultObj()
{
	static class UWBP_Menu_Pal_Potencial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Menu_Pal_Potencial_C*>(UWBP_Menu_Pal_Potencial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.GetRankText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TalentValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RankText                                                         (Parm, OutParm)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Pal_Potencial_C::GetRankText(int32 TalentValue, class FText* RankText, int32 CallFunc_Divide_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_Pal_Potencial_C", "GetRankText");

	Params::UWBP_Menu_Pal_Potencial_C_GetRankText_Params Parms{};

	Parms.TalentValue = TalentValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (RankText != nullptr)
		*RankText = Parms.RankText;

}


// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*TargetParameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetSaveParameter_ReturnValue                            (ConstParm)

void UWBP_Menu_Pal_Potencial_C::SetupByParameter(class UPalIndividualCharacterParameter* TargetParameter, bool CallFunc_IsValid_ReturnValue, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetSaveParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_Pal_Potencial_C", "SetupByParameter");

	Params::UWBP_Menu_Pal_Potencial_C_SetupByParameter_Params Parms{};

	Parms.TargetParameter = TargetParameter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSaveParameter_ReturnValue = CallFunc_GetSaveParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Talent_HP                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Talent_Attack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Talent_Defense                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_Pal_Potencial_C::SetupByNum(int32 Talent_HP, int32 Talent_Attack, int32 Talent_Defense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_Pal_Potencial_C", "SetupByNum");

	Params::UWBP_Menu_Pal_Potencial_C_SetupByNum_Params Parms{};

	Parms.Talent_HP = Talent_HP;
	Parms.Talent_Attack = Talent_Attack;
	Parms.Talent_Defense = Talent_Defense;

	UObject::ProcessEvent(Func, &Parms);

}

}


