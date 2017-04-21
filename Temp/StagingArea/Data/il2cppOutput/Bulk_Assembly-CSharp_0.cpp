#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Ball3972794301.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Paddle763152128.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "AssemblyU2DCSharp_Brick1619971827.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "AssemblyU2DCSharp_LoseCollider1155462885.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "AssemblyU2DCSharp_MusicPlayer3223126890.h"

// Ball
struct Ball_t3972794301;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Paddle
struct Paddle_t763152128;
// System.Object
struct Il2CppObject;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// Brick
struct Brick_t1619971827;
// LevelManager
struct LevelManager_t3355282079;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// LoseCollider
struct LoseCollider_t1155462885;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// MusicPlayer
struct MusicPlayer_t3223126890;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisPaddle_t763152128_m1168204893_MethodInfo_var;
extern const uint32_t Ball_Start_m2511773116_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t Ball_Update_m2036524005_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const uint32_t Ball_OnCollisionEnter2D_m417654134_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Brick_t1619971827_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2154845717;
extern const uint32_t Brick_Start_m3679901112_MetadataUsageId;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t Brick_HandleHits_m912065526_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var;
extern const uint32_t Brick_LoadSprites_m1048576086_MetadataUsageId;
extern const uint32_t LevelManager_LoadLevel_m3771066388_MetadataUsageId;
extern const uint32_t LevelManager_LoadNextLevel_m4205287453_MetadataUsageId;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4082968917;
extern const uint32_t LevelManager_QuitRequest_m3014183236_MetadataUsageId;
extern const uint32_t LevelManager_BrickDestroyed_m737389094_MetadataUsageId;
extern const uint32_t LoseCollider_Start_m1808664848_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3929269097;
extern const uint32_t LoseCollider_OnTriggerEnter2D_m554453592_MetadataUsageId;
extern Il2CppClass* MusicPlayer_t3223126890_il2cpp_TypeInfo_var;
extern const uint32_t MusicPlayer_Awake_m2670478726_MetadataUsageId;
extern const MethodInfo* Object_FindObjectOfType_TisBall_t3972794301_m1168048236_MethodInfo_var;
extern const uint32_t Paddle_Start_m1212078847_MetadataUsageId;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t Paddle_MoveWithMouse_m2465844237_MetadataUsageId;
extern const uint32_t Paddle_AutoPlay_m1445803082_MetadataUsageId;

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Sprite_t309593783 * m_Items[1];

public:
	inline Sprite_t309593783 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t309593783 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<Paddle>()
#define Object_FindObjectOfType_TisPaddle_t763152128_m1168204893(__this /* static, unused */, method) ((  Paddle_t763152128 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Subtraction_m2407545601 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2884721203 (Il2CppObject * __this /* static, unused */, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2243707579  Rigidbody2D_get_velocity_m3310151195 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Addition_m1389598521 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<LevelManager>()
#define Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(__this /* static, unused */, method) ((  LevelManager_t3355282079 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Brick::HandleHits()
extern "C"  void Brick_HandleHits_m912065526 (Brick_t1619971827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  void AudioSource_PlayClipAtPoint_m1513558507 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::BrickDestroyed()
extern "C"  void LevelManager_BrickDestroyed_m737389094 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m3196903881 (Quaternion_t4030073918 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Brick::LoadSprites()
extern "C"  void Brick_LoadSprites_m1048576086 (Brick_t1619971827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, method) ((  SpriteRenderer_t1209076198 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m617298623 (SpriteRenderer_t1209076198 * __this, Sprite_t309593783 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m393995325 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::get_loadedLevel()
extern "C"  int32_t Application_get_loadedLevel_m3768581785 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern "C"  void Application_LoadLevel_m3450161284 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m4205287453 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m2330762974 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<Ball>()
#define Object_FindObjectOfType_TisBall_t3972794301_m1168048236(__this /* static, unused */, method) ((  Ball_t3972794301 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// System.Void Paddle::MoveWithMouse()
extern "C"  void Paddle_MoveWithMouse_m2465844237 (Paddle_t763152128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Paddle::AutoPlay()
extern "C"  void Paddle_AutoPlay_m1445803082 (Paddle_t763152128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m41137238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m2354025655 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1073530660 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern "C"  void Ball_Start_m2511773116 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m2511773116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Paddle_t763152128 * L_0 = Object_FindObjectOfType_TisPaddle_t763152128_m1168204893(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPaddle_t763152128_m1168204893_MethodInfo_var);
		__this->set_paddle_2(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Paddle_t763152128 * L_3 = __this->get_paddle_2();
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		__this->set_paddleToBallVector_4(L_6);
		return;
	}
}
// System.Void Ball::Update()
extern "C"  void Ball_Update_m2036524005 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Update_m2036524005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_hasStarted_3();
		if (L_0)
		{
			goto IL_005d;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Paddle_t763152128 * L_2 = __this->get_paddle_2();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = __this->get_paddleToBallVector_4();
		Vector3_t2243707580  L_6 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_1, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		__this->set_hasStarted_3((bool)1);
		Rigidbody2D_t502193897 * L_8 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		Vector2_t2243707579  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3067419446(&L_9, (2.0f), (10.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void Ball::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Ball_OnCollisionEnter2D_m417654134 (Ball_t3972794301 * __this, Collision2D_t1539500754 * ___trigger0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_OnCollisionEnter2D_m417654134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		float L_1 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		Vector2__ctor_m3067419446((&V_0), L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_hasStarted_3();
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		AudioSource_t1135106623 * L_3 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		AudioSource_Play_m353744792(L_3, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_4 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		Rigidbody2D_t502193897 * L_5 = L_4;
		Vector2_t2243707579  L_6 = Rigidbody2D_get_velocity_m3310151195(L_5, /*hidden argument*/NULL);
		Vector2_t2243707579  L_7 = V_0;
		Vector2_t2243707579  L_8 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_5, L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void Brick::.ctor()
extern "C"  void Brick__ctor_m4067638188 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Brick::Start()
extern "C"  void Brick_Start_m3679901112 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_Start_m3679901112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_timesHit_6(0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		LevelManager_t3355282079 * L_0 = Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var);
		__this->set_levelManager_7(L_0);
		String_t* L_1 = Component_get_tag_m357168014(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral2154845717, /*hidden argument*/NULL);
		__this->set_isBreakable_8(L_2);
		bool L_3 = __this->get_isBreakable_8();
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_4(((int32_t)((int32_t)L_4+(int32_t)1)));
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		int32_t L_6 = L_5;
		Il2CppObject * L_7 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_6);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Brick::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void Brick_OnCollisionExit2D_m976673468 (Brick_t1619971827 * __this, Collision2D_t1539500754 * ___trigger0, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_isBreakable_8();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Brick_HandleHits_m912065526(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Brick::HandleHits()
extern "C"  void Brick_HandleHits_m912065526 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_HandleHits_m912065526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_timesHit_6();
		__this->set_timesHit_6(((int32_t)((int32_t)L_0+(int32_t)1)));
		AudioClip_t1932558630 * L_1 = __this->get_crack_2();
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_timesHit_6();
		SpriteU5BU5D_t3359083662* L_5 = __this->get_hitSprites_3();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))+(int32_t)1)))))
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_4(((int32_t)((int32_t)L_6-(int32_t)1)));
		LevelManager_t3355282079 * L_7 = __this->get_levelManager_7();
		LevelManager_BrickDestroyed_m737389094(L_7, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_8 = __this->get_explodeParticles_5();
		GameObject_t1756533147 * L_9 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_10 = GameObject_get_transform_m909382139(L_9, /*hidden argument*/NULL);
		Vector3_t2243707580  L_11 = Transform_get_position_m1104419803(L_10, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Quaternion__ctor_m3196903881(&L_12, (-180.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_8, L_11, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		GameObject_t1756533147 * L_13 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0095:
	{
		Brick_LoadSprites_m1048576086(__this, /*hidden argument*/NULL);
	}

IL_009b:
	{
		return;
	}
}
// System.Void Brick::LoadSprites()
extern "C"  void Brick_LoadSprites_m1048576086 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_LoadSprites_m1048576086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_timesHit_6();
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)1));
		SpriteRenderer_t1209076198 * L_1 = Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var);
		SpriteU5BU5D_t3359083662* L_2 = __this->get_hitSprites_3();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		Sprite_t309593783 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		SpriteRenderer_set_sprite_m617298623(L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Brick::.cctor()
extern "C"  void Brick__cctor_m753177089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m3771066388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		Application_LoadLevel_m393995325(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_4(0);
		return;
	}
}
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m4205287453 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadNextLevel_m4205287453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_loadedLevel_m3768581785(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m3450161284(NULL /*static, unused*/, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_4(0);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3014183236 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m3014183236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral4082968917, /*hidden argument*/NULL);
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::BrickDestroyed()
extern "C"  void LevelManager_BrickDestroyed_m737389094 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_BrickDestroyed_m737389094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		LevelManager_LoadNextLevel_m4205287453(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void LoseCollider::.ctor()
extern "C"  void LoseCollider__ctor_m1456583376 (LoseCollider_t1155462885 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoseCollider::Start()
extern "C"  void LoseCollider_Start_m1808664848 (LoseCollider_t1155462885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_Start_m1808664848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		LevelManager_t3355282079 * L_0 = Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var);
		__this->set_levelManager_2(L_0);
		return;
	}
}
// System.Void LoseCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void LoseCollider_OnTriggerEnter2D_m554453592 (LoseCollider_t1155462885 * __this, Collider2D_t646061738 * ___trigger0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_OnTriggerEnter2D_m554453592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LevelManager_t3355282079 * L_0 = __this->get_levelManager_2();
		LevelManager_LoadLevel_m3771066388(L_0, _stringLiteral3929269097, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m3135785557 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Awake()
extern "C"  void MusicPlayer_Awake_m2670478726 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Awake_m2670478726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		MusicPlayer_t3223126890 * L_0 = ((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void MusicPlayer::Update()
extern "C"  void MusicPlayer_Update_m56837000 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m1372585940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Paddle::.ctor()
extern "C"  void Paddle__ctor_m1938928499 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::Start()
extern "C"  void Paddle_Start_m1212078847 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_Start_m1212078847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Ball_t3972794301 * L_0 = Object_FindObjectOfType_TisBall_t3972794301_m1168048236(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBall_t3972794301_m1168048236_MethodInfo_var);
		__this->set_ball_3(L_0);
		return;
	}
}
// System.Void Paddle::Update()
extern "C"  void Paddle_Update_m257590594 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_autoPlay_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Paddle_MoveWithMouse_m2465844237(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		Paddle_AutoPlay_m1445803082(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Paddle::MoveWithMouse()
extern "C"  void Paddle_MoveWithMouse_m2465844237 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_MoveWithMouse_m2465844237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_y_2();
		Vector3__ctor_m2638739322((&V_0), L_2, L_5, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_6 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = (&V_4)->get_x_1();
		int32_t L_8 = Screen_get_width_m41137238(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)((float)L_7/(float)(((float)((float)L_8)))))*(float)(16.0f)));
		float L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_9, (0.0f), (15.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_10);
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = V_0;
		Transform_set_position_m2469242620(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::AutoPlay()
extern "C"  void Paddle_AutoPlay_m1445803082 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_AutoPlay_m1445803082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_y_2();
		Vector3__ctor_m2638739322((&V_0), L_2, L_5, (0.0f), /*hidden argument*/NULL);
		Ball_t3972794301 * L_6 = __this->get_ball_3();
		Transform_t3275118058 * L_7 = Component_get_transform_m2697483695(L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (&V_3)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_9, (0.0f), (15.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_10);
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = V_0;
		Transform_set_position_m2469242620(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
