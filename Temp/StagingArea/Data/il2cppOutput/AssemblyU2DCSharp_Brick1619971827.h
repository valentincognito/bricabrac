#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// LevelManager
struct LevelManager_t3355282079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Brick
struct  Brick_t1619971827  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip Brick::crack
	AudioClip_t1932558630 * ___crack_2;
	// UnityEngine.Sprite[] Brick::hitSprites
	SpriteU5BU5D_t3359083662* ___hitSprites_3;
	// System.Int32 Brick::timesHit
	int32_t ___timesHit_5;
	// LevelManager Brick::levelManager
	LevelManager_t3355282079 * ___levelManager_6;
	// System.Boolean Brick::isBreakable
	bool ___isBreakable_7;

public:
	inline static int32_t get_offset_of_crack_2() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___crack_2)); }
	inline AudioClip_t1932558630 * get_crack_2() const { return ___crack_2; }
	inline AudioClip_t1932558630 ** get_address_of_crack_2() { return &___crack_2; }
	inline void set_crack_2(AudioClip_t1932558630 * value)
	{
		___crack_2 = value;
		Il2CppCodeGenWriteBarrier(&___crack_2, value);
	}

	inline static int32_t get_offset_of_hitSprites_3() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___hitSprites_3)); }
	inline SpriteU5BU5D_t3359083662* get_hitSprites_3() const { return ___hitSprites_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_hitSprites_3() { return &___hitSprites_3; }
	inline void set_hitSprites_3(SpriteU5BU5D_t3359083662* value)
	{
		___hitSprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprites_3, value);
	}

	inline static int32_t get_offset_of_timesHit_5() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___timesHit_5)); }
	inline int32_t get_timesHit_5() const { return ___timesHit_5; }
	inline int32_t* get_address_of_timesHit_5() { return &___timesHit_5; }
	inline void set_timesHit_5(int32_t value)
	{
		___timesHit_5 = value;
	}

	inline static int32_t get_offset_of_levelManager_6() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___levelManager_6)); }
	inline LevelManager_t3355282079 * get_levelManager_6() const { return ___levelManager_6; }
	inline LevelManager_t3355282079 ** get_address_of_levelManager_6() { return &___levelManager_6; }
	inline void set_levelManager_6(LevelManager_t3355282079 * value)
	{
		___levelManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_6, value);
	}

	inline static int32_t get_offset_of_isBreakable_7() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___isBreakable_7)); }
	inline bool get_isBreakable_7() const { return ___isBreakable_7; }
	inline bool* get_address_of_isBreakable_7() { return &___isBreakable_7; }
	inline void set_isBreakable_7(bool value)
	{
		___isBreakable_7 = value;
	}
};

struct Brick_t1619971827_StaticFields
{
public:
	// System.Int32 Brick::breakableCount
	int32_t ___breakableCount_4;

public:
	inline static int32_t get_offset_of_breakableCount_4() { return static_cast<int32_t>(offsetof(Brick_t1619971827_StaticFields, ___breakableCount_4)); }
	inline int32_t get_breakableCount_4() const { return ___breakableCount_4; }
	inline int32_t* get_address_of_breakableCount_4() { return &___breakableCount_4; }
	inline void set_breakableCount_4(int32_t value)
	{
		___breakableCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
