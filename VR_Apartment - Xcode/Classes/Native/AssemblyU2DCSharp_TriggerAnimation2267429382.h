﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriggerAnimation
struct  TriggerAnimation_t2267429382  : public MonoBehaviour_t1158329972
{
public:
	// System.String TriggerAnimation::AnimationName
	String_t* ___AnimationName_2;
	// UnityEngine.Animator TriggerAnimation::stateMachine
	Animator_t69676727 * ___stateMachine_3;
	// System.Boolean TriggerAnimation::created
	bool ___created_4;

public:
	inline static int32_t get_offset_of_AnimationName_2() { return static_cast<int32_t>(offsetof(TriggerAnimation_t2267429382, ___AnimationName_2)); }
	inline String_t* get_AnimationName_2() const { return ___AnimationName_2; }
	inline String_t** get_address_of_AnimationName_2() { return &___AnimationName_2; }
	inline void set_AnimationName_2(String_t* value)
	{
		___AnimationName_2 = value;
		Il2CppCodeGenWriteBarrier(&___AnimationName_2, value);
	}

	inline static int32_t get_offset_of_stateMachine_3() { return static_cast<int32_t>(offsetof(TriggerAnimation_t2267429382, ___stateMachine_3)); }
	inline Animator_t69676727 * get_stateMachine_3() const { return ___stateMachine_3; }
	inline Animator_t69676727 ** get_address_of_stateMachine_3() { return &___stateMachine_3; }
	inline void set_stateMachine_3(Animator_t69676727 * value)
	{
		___stateMachine_3 = value;
		Il2CppCodeGenWriteBarrier(&___stateMachine_3, value);
	}

	inline static int32_t get_offset_of_created_4() { return static_cast<int32_t>(offsetof(TriggerAnimation_t2267429382, ___created_4)); }
	inline bool get_created_4() const { return ___created_4; }
	inline bool* get_address_of_created_4() { return &___created_4; }
	inline void set_created_4(bool value)
	{
		___created_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
