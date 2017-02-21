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

// Click
struct Click_t65197416;
// TimerCount
struct TimerCount_t3628923114;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_Click65197416.h"
#include "AssemblyU2DUnityScript_Click65197416MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "AssemblyU2DUnityScript_TimerCount3628923114.h"
#include "AssemblyU2DUnityScript_TimerCount3628923114MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices3947355960MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t9039225_m1134020596(__this, method) ((  Text_t9039225 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Click::.ctor()
extern "C"  void Click__ctor_m3640418990 (Click_t65197416 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Click::Main()
extern "C"  void Click_Main_m2803873871 (Click_t65197416 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerCount::.ctor()
extern "C"  void TimerCount__ctor_m3008331814 (TimerCount_t3628923114 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerCount::.cctor()
extern "C"  void TimerCount__cctor_m2581876807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TimerCount::Start()
extern const MethodInfo* Component_GetComponent_TisText_t9039225_m1134020596_MethodInfo_var;
extern const uint32_t TimerCount_Start_m1955469606_MetadataUsageId;
extern "C"  void TimerCount_Start_m1955469606 (TimerCount_t3628923114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TimerCount_Start_m1955469606_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t9039225 * L_0 = Component_GetComponent_TisText_t9039225_m1134020596(__this, /*hidden argument*/Component_GetComponent_TisText_t9039225_m1134020596_MethodInfo_var);
		__this->set_timerText_2(L_0);
		return;
	}
}
// System.Void TimerCount::Update()
extern Il2CppClass* TimerCount_t3628923114_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* RuntimeServices_t3947355960_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral350742015;
extern const uint32_t TimerCount_Update_m495867815_MetadataUsageId;
extern "C"  void TimerCount_Update_m495867815 (TimerCount_t3628923114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TimerCount_Update_m495867815_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimerCount_t3628923114_il2cpp_TypeInfo_var);
		bool L_0 = ((TimerCount_t3628923114_StaticFields*)TimerCount_t3628923114_il2cpp_TypeInfo_var->static_fields)->get_stop_5();
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		float L_1 = __this->get_time_3();
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_3(((float)((float)L_1+(float)L_2)));
		float L_3 = __this->get_time_3();
		__this->set_currentTime_4((((int32_t)((int32_t)L_3))));
		Text_t9039225 * L_4 = __this->get_timerText_2();
		int32_t L_5 = __this->get_currentTime_4();
		int32_t L_6 = L_5;
		Il2CppObject * L_7 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t3947355960_il2cpp_TypeInfo_var);
		String_t* L_8 = RuntimeServices_op_Addition_m3613207904(NULL /*static, unused*/, _stringLiteral350742015, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_8);
	}

IL_0049:
	{
		return;
	}
}
// System.Void TimerCount::Main()
extern "C"  void TimerCount_Main_m3753315287 (TimerCount_t3628923114 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
