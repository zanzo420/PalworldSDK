#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Talk_NextArrow.WBP_Talk_NextArrow_C
// (None)

class UClass* UWBP_Talk_NextArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Talk_NextArrow_C");

	return Clss;
}


// WBP_Talk_NextArrow_C WBP_Talk_NextArrow.Default__WBP_Talk_NextArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Talk_NextArrow_C* UWBP_Talk_NextArrow_C::GetDefaultObj()
{
	static class UWBP_Talk_NextArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Talk_NextArrow_C*>(UWBP_Talk_NextArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Talk_NextArrow.WBP_Talk_NextArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Talk_NextArrow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Talk_NextArrow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Talk_NextArrow.WBP_Talk_NextArrow_C.ExecuteUbergraph_WBP_Talk_NextArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Talk_NextArrow_C::ExecuteUbergraph_WBP_Talk_NextArrow(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Talk_NextArrow_C", "ExecuteUbergraph_WBP_Talk_NextArrow");

	Params::UWBP_Talk_NextArrow_C_ExecuteUbergraph_WBP_Talk_NextArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


