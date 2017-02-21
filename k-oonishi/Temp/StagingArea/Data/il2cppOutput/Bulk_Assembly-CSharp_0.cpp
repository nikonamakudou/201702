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

// Ball
struct Ball_t2062879;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// Block
struct Block_t64279661;
// UnityEngine.Collision
struct Collision_t2494107688;
// buttonClick
struct buttonClick_t2509462902;
// Racket
struct Racket_t2440227302;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_Ball2062879.h"
#include "AssemblyU2DCSharp_Ball2062879MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_ForceMode2134283300.h"
#include "AssemblyU2DCSharp_Block64279661.h"
#include "AssemblyU2DCSharp_Block64279661MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"
#include "UnityEngine_UnityEngine_Collision2494107688MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_buttonClick2509462902.h"
#include "AssemblyU2DCSharp_buttonClick2509462902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManag2940962239MethodDeclarations.h"
#include "AssemblyU2DCSharp_Racket2440227302.h"
#include "AssemblyU2DCSharp_Racket2440227302MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1158546268 (Ball_t2062879 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((12.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t Ball_Start_m105684060_MetadataUsageId;
extern "C"  void Ball_Start_m105684060 (Ball_t2062879 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m105684060_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_forward_m877665793(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_2();
		Vector3_t4282066566  L_4 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Rigidbody_AddForce_m557267180(L_0, L_4, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Update()
extern "C"  void Ball_Update_m3282058033 (Ball_t2062879 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Block::.ctor()
extern "C"  void Block__ctor_m127180702 (Block_t64279661 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Block::Start()
extern "C"  void Block_Start_m3369285790 (Block_t64279661 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Block::Update()
extern "C"  void Block_Update_m1374496559 (Block_t64279661 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Block::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2062879;
extern const uint32_t Block_OnCollisionEnter_m610756972_MetadataUsageId;
extern "C"  void Block_OnCollisionEnter_m610756972 (Block_t64279661 * __this, Collision_t2494107688 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Block_OnCollisionEnter_m610756972_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t2494107688 * L_0 = ___collision0;
		GameObject_t3674682005 * L_1 = Collision_get_gameObject_m4245316464(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m211612200(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, _stringLiteral2062879, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void buttonClick::.ctor()
extern "C"  void buttonClick__ctor_m2599084725 (buttonClick_t2509462902 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void buttonClick::SelectStage0()
extern Il2CppCodeGenString* _stringLiteral3193741318;
extern const uint32_t buttonClick_SelectStage0_m1005016957_MetadataUsageId;
extern "C"  void buttonClick_SelectStage0_m1005016957 (buttonClick_t2509462902 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (buttonClick_SelectStage0_m1005016957_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, _stringLiteral3193741318, /*hidden argument*/NULL);
		return;
	}
}
// System.Void buttonClick::SelectStage1()
extern Il2CppCodeGenString* _stringLiteral2390489;
extern const uint32_t buttonClick_SelectStage1_m1005017918_MetadataUsageId;
extern "C"  void buttonClick_SelectStage1_m1005017918 (buttonClick_t2509462902 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (buttonClick_SelectStage1_m1005017918_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, _stringLiteral2390489, /*hidden argument*/NULL);
		return;
	}
}
// System.Void buttonClick::SelectStage3()
extern Il2CppCodeGenString* _stringLiteral2615726;
extern const uint32_t buttonClick_SelectStage3_m1005019840_MetadataUsageId;
extern "C"  void buttonClick_SelectStage3_m1005019840 (buttonClick_t2509462902 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (buttonClick_SelectStage3_m1005019840_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, _stringLiteral2615726, /*hidden argument*/NULL);
		return;
	}
}
// System.Void buttonClick::SelectStage4()
extern Il2CppCodeGenString* _stringLiteral67643651;
extern const uint32_t buttonClick_SelectStage4_m1005020801_MetadataUsageId;
extern "C"  void buttonClick_SelectStage4_m1005020801 (buttonClick_t2509462902 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (buttonClick_SelectStage4_m1005020801_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, _stringLiteral67643651, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Racket::.ctor()
extern "C"  void Racket__ctor_m2365996405 (Racket_t2440227302 * __this, const MethodInfo* method)
{
	{
		__this->set_accel_2((1000.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Racket::Start()
extern "C"  void Racket_Start_m1313134197 (Racket_t2440227302 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Racket::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t Racket_Update_m2058306616_MetadataUsageId;
extern "C"  void Racket_Update_m2058306616 (Racket_t2440227302 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Racket_Update_m2058306616_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_right_m2070836824(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxisRaw_m1900207208(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_accel_2();
		Vector3_t4282066566  L_6 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Rigidbody_AddForce_m557267180(L_0, L_6, 1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
