#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerCount
struct  TimerCount_t3628923114  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text TimerCount::timerText
	Text_t9039225 * ___timerText_2;
	// System.Single TimerCount::time
	float ___time_3;
	// System.Int32 TimerCount::currentTime
	int32_t ___currentTime_4;

public:
	inline static int32_t get_offset_of_timerText_2() { return static_cast<int32_t>(offsetof(TimerCount_t3628923114, ___timerText_2)); }
	inline Text_t9039225 * get_timerText_2() const { return ___timerText_2; }
	inline Text_t9039225 ** get_address_of_timerText_2() { return &___timerText_2; }
	inline void set_timerText_2(Text_t9039225 * value)
	{
		___timerText_2 = value;
		Il2CppCodeGenWriteBarrier(&___timerText_2, value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(TimerCount_t3628923114, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_currentTime_4() { return static_cast<int32_t>(offsetof(TimerCount_t3628923114, ___currentTime_4)); }
	inline int32_t get_currentTime_4() const { return ___currentTime_4; }
	inline int32_t* get_address_of_currentTime_4() { return &___currentTime_4; }
	inline void set_currentTime_4(int32_t value)
	{
		___currentTime_4 = value;
	}
};

struct TimerCount_t3628923114_StaticFields
{
public:
	// System.Boolean TimerCount::stop
	bool ___stop_5;

public:
	inline static int32_t get_offset_of_stop_5() { return static_cast<int32_t>(offsetof(TimerCount_t3628923114_StaticFields, ___stop_5)); }
	inline bool get_stop_5() const { return ___stop_5; }
	inline bool* get_address_of_stop_5() { return &___stop_5; }
	inline void set_stop_5(bool value)
	{
		___stop_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
