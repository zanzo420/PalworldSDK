#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x25 (0x25 - 0x0)
// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.GetRankText
struct UWBP_Menu_Pal_Potencial_C_GetRankText_Params
{
public:
	int32                                        TalentValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_561B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RankText;                                          // 0x8(0x18)(Parm, OutParm)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByParameter
struct UWBP_Menu_Pal_Potencial_C_SetupByParameter_Params
{
public:
	class UPalIndividualCharacterParameter*      TargetParameter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_561C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIndividualCharacterSaveParameter  CallFunc_GetSaveParameter_ReturnValue;             // 0x10(0x218)(ConstParm)
};

// 0xC (0xC - 0x0)
// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByNum
struct UWBP_Menu_Pal_Potencial_C_SetupByNum_Params
{
public:
	int32                                        Talent_HP;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Talent_Attack;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Talent_Defense;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


