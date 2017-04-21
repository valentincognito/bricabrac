#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// LevelManager
struct LevelManager_t3355282079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoseCollider
struct  LoseCollider_t1155462885  : public MonoBehaviour_t1158329972
{
public:
	// LevelManager LoseCollider::levelManager
	LevelManager_t3355282079 * ___levelManager_2;

public:
	inline static int32_t get_offset_of_levelManager_2() { return static_cast<int32_t>(offsetof(LoseCollider_t1155462885, ___levelManager_2)); }
	inline LevelManager_t3355282079 * get_levelManager_2() const { return ___levelManager_2; }
	inline LevelManager_t3355282079 ** get_address_of_levelManager_2() { return &___levelManager_2; }
	inline void set_levelManager_2(LevelManager_t3355282079 * value)
	{
		___levelManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
