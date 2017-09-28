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
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t12172576;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t1047617791;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t2847586092;
// UnityEngine.Gyroscope
struct Gyroscope_t4104034833;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1933349550;
// System.Char[]
struct CharU5BU5D_t809251003;
// System.IntPtr[]
struct IntPtrU5BU5D_t1347288922;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t602554595;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t1899774088;
// UnityEngine.Application/LogCallback
struct LogCallback_t2487613373;
// UnityEngine.Events.UnityAction
struct UnityAction_t297797748;
// UnityEngine.ILogger
struct ILogger_t2818434544;
// System.Void
struct Void_t3399060764;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2037210966;
// UnityEngine.Display[]
struct DisplayU5BU5D_t2640665569;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t3174893605;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t440387570;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t2272402934;
// System.AsyncCallback
struct AsyncCallback_t2898653096;
// UnityEngine.Camera
struct Camera_t3214521937;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t790700493;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T827915311_H
#define U3CMODULEU3E_T827915311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t827915311 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T827915311_H
#ifndef DEBUGLOGHANDLER_T2311409409_H
#define DEBUGLOGHANDLER_T2311409409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t2311409409  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T2311409409_H
#ifndef TIME_T2831285614_H
#define TIME_T2831285614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t2831285614  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T2831285614_H
#ifndef SCENEMANAGER_T2909086167_H
#define SCENEMANAGER_T2909086167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t2909086167  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t2909086167_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t12172576 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t1047617791 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t2847586092 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t2909086167_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t12172576 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t12172576 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t12172576 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t2909086167_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t1047617791 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t1047617791 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t1047617791 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t2909086167_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t2847586092 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t2847586092 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t2847586092 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T2909086167_H
#ifndef VALUETYPE_T2714352724_H
#define VALUETYPE_T2714352724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2714352724  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2714352724_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2714352724_marshaled_com
{
};
#endif // VALUETYPE_T2714352724_H
#ifndef CUSTOMYIELDINSTRUCTION_T224762009_H
#define CUSTOMYIELDINSTRUCTION_T224762009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t224762009  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T224762009_H
#ifndef DATAUTILITY_T141407557_H
#define DATAUTILITY_T141407557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t141407557  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T141407557_H
#ifndef CURSOR_T2819465748_H
#define CURSOR_T2819465748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t2819465748  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T2819465748_H
#ifndef GYROSCOPE_T4104034833_H
#define GYROSCOPE_T4104034833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t4104034833  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T4104034833_H
#ifndef SYSTEMINFO_T4252646383_H
#define SYSTEMINFO_T4252646383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t4252646383  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T4252646383_H
#ifndef INPUT_T1910860059_H
#define INPUT_T1910860059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t1910860059  : public RuntimeObject
{
public:

public:
};

struct Input_t1910860059_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t4104034833 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t1910860059_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t4104034833 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t4104034833 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t4104034833 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T1910860059_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T3552985654_H
#define UNHANDLEDEXCEPTIONHANDLER_T3552985654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t3552985654  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t3552985654_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t1933349550 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t3552985654_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t1933349550 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t1933349550 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t1933349550 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T3552985654_H
#ifndef YIELDINSTRUCTION_T975307523_H
#define YIELDINSTRUCTION_T975307523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t975307523  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t975307523_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t975307523_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T975307523_H
#ifndef SCREEN_T1198576479_H
#define SCREEN_T1198576479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t1198576479  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T1198576479_H
#ifndef TEXTWRITER_T96848397_H
#define TEXTWRITER_T96848397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t96848397  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t809251003* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t96848397, ___CoreNewLine_0)); }
	inline CharU5BU5D_t809251003* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t809251003** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t809251003* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t96848397_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t96848397 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t96848397_StaticFields, ___Null_1)); }
	inline TextWriter_t96848397 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t96848397 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t96848397 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T96848397_H
#ifndef EXCEPTION_T2445426262_H
#define EXCEPTION_T2445426262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2445426262  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1347288922* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2445426262 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1347288922* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1347288922** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1347288922* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___inner_exception_1)); }
	inline Exception_t2445426262 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2445426262 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2445426262 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2445426262, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2445426262_H
#ifndef APPLICATION_T4175334953_H
#define APPLICATION_T4175334953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t4175334953  : public RuntimeObject
{
public:

public:
};

struct Application_t4175334953_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t1899774088 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t2487613373 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t2487613373 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t297797748 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t4175334953_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t1899774088 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t1899774088 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t1899774088 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t4175334953_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t2487613373 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t2487613373 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t2487613373 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t4175334953_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t2487613373 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t2487613373 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t2487613373 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t4175334953_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t297797748 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t297797748 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t297797748 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T4175334953_H
#ifndef RESOURCES_T4114062799_H
#define RESOURCES_T4114062799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t4114062799  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T4114062799_H
#ifndef DEBUG_T3888364155_H
#define DEBUG_T3888364155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t3888364155  : public RuntimeObject
{
public:

public:
};

struct Debug_t3888364155_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t3888364155_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3888364155_H
#ifndef PLAYERPREFS_T2206583890_H
#define PLAYERPREFS_T2206583890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefs
struct  PlayerPrefs_t2206583890  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFS_T2206583890_H
#ifndef RANDOM_T1559982117_H
#define RANDOM_T1559982117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t1559982117  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1559982117_H
#ifndef NOTIFICATIONSERVICES_T2275682316_H
#define NOTIFICATIONSERVICES_T2275682316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.NotificationServices
struct  NotificationServices_t2275682316  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATIONSERVICES_T2275682316_H
#ifndef UNITYLOGWRITER_T54810423_H
#define UNITYLOGWRITER_T54810423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t54810423  : public TextWriter_t96848397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T54810423_H
#ifndef SORTINGLAYER_T1197007728_H
#define SORTINGLAYER_T1197007728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t1197007728 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t1197007728, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T1197007728_H
#ifndef LAYERMASK_T3042172026_H
#define LAYERMASK_T3042172026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3042172026 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3042172026, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3042172026_H
#ifndef VECTOR3_T3541879884_H
#define VECTOR3_T3541879884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3541879884 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3541879884, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3541879884, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3541879884, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3541879884_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3541879884  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3541879884  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3541879884  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3541879884  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3541879884  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3541879884  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3541879884  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3541879884  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3541879884  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3541879884  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3541879884  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3541879884 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3541879884  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___oneVector_5)); }
	inline Vector3_t3541879884  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3541879884 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3541879884  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___upVector_6)); }
	inline Vector3_t3541879884  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3541879884 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3541879884  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___downVector_7)); }
	inline Vector3_t3541879884  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3541879884 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3541879884  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___leftVector_8)); }
	inline Vector3_t3541879884  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3541879884 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3541879884  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___rightVector_9)); }
	inline Vector3_t3541879884  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3541879884 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3541879884  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3541879884  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3541879884 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3541879884  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___backVector_11)); }
	inline Vector3_t3541879884  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3541879884 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3541879884  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3541879884  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3541879884 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3541879884  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3541879884_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3541879884  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3541879884 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3541879884  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3541879884_H
#ifndef QUATERNION_T1777559145_H
#define QUATERNION_T1777559145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1777559145 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1777559145, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1777559145, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1777559145, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1777559145, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1777559145_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1777559145  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1777559145_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1777559145  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1777559145 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1777559145  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1777559145_H
#ifndef MATHF_T111408620_H
#define MATHF_T111408620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t111408620 
{
public:

public:
};

struct Mathf_t111408620_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t111408620_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T111408620_H
#ifndef KEYFRAME_T892059082_H
#define KEYFRAME_T892059082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t892059082 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t892059082, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t892059082, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t892059082, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t892059082, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T892059082_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1184969889_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1184969889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889 
{
public:
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::keyboardType
	uint32_t ___keyboardType_0;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::autocorrection
	uint32_t ___autocorrection_1;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::multiline
	uint32_t ___multiline_2;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::secure
	uint32_t ___secure_3;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::alert
	uint32_t ___alert_4;

public:
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889, ___alert_4)); }
	inline uint32_t get_alert_4() const { return ___alert_4; }
	inline uint32_t* get_address_of_alert_4() { return &___alert_4; }
	inline void set_alert_4(uint32_t value)
	{
		___alert_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1184969889_H
#ifndef MATRIX4X4_T2276848687_H
#define MATRIX4X4_T2276848687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2276848687 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2276848687_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2276848687  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2276848687  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2276848687  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2276848687 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2276848687  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2276848687_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2276848687  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2276848687 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2276848687  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2276848687_H
#ifndef PLAYERPREFSEXCEPTION_T747547626_H
#define PLAYERPREFSEXCEPTION_T747547626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerPrefsException
struct  PlayerPrefsException_t747547626  : public Exception_t2445426262
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPREFSEXCEPTION_T747547626_H
#ifndef WAITFORENDOFFRAME_T2645246188_H
#define WAITFORENDOFFRAME_T2645246188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t2645246188  : public YieldInstruction_t975307523
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T2645246188_H
#ifndef U24ARRAYTYPEU24136_T797927114_H
#define U24ARRAYTYPEU24136_T797927114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t797927114 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t797927114__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T797927114_H
#ifndef U24ARRAYTYPEU24120_T1683268515_H
#define U24ARRAYTYPEU24120_T1683268515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t1683268515 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t1683268515__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T1683268515_H
#ifndef U24ARRAYTYPEU24256_T3625887347_H
#define U24ARRAYTYPEU24256_T3625887347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t3625887347 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t3625887347__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T3625887347_H
#ifndef U24ARRAYTYPEU241024_T3215336524_H
#define U24ARRAYTYPEU241024_T3215336524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3215336524 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t3215336524__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3215336524_H
#ifndef VECTOR2_T3151160755_H
#define VECTOR2_T3151160755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3151160755 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3151160755, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3151160755, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3151160755_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3151160755  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3151160755  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3151160755  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3151160755  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3151160755  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3151160755  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3151160755  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3151160755  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3151160755  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3151160755 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3151160755  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___oneVector_3)); }
	inline Vector2_t3151160755  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3151160755 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3151160755  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___upVector_4)); }
	inline Vector2_t3151160755  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3151160755 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3151160755  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___downVector_5)); }
	inline Vector2_t3151160755  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3151160755 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3151160755  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___leftVector_6)); }
	inline Vector2_t3151160755  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3151160755 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3151160755  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___rightVector_7)); }
	inline Vector2_t3151160755  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3151160755 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3151160755  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3151160755  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3151160755 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3151160755  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3151160755_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3151160755  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3151160755 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3151160755  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3151160755_H
#ifndef ENUM_T3255881970_H
#define ENUM_T3255881970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3255881970  : public ValueType_t2714352724
{
public:

public:
};

struct Enum_t3255881970_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t809251003* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3255881970_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t809251003* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t809251003** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t809251003* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3255881970_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3255881970_marshaled_com
{
};
#endif // ENUM_T3255881970_H
#ifndef CULLINGGROUPEVENT_T3139459373_H
#define CULLINGGROUPEVENT_T3139459373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t3139459373 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3139459373, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3139459373, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3139459373, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T3139459373_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SCENE_T1538911829_H
#define SCENE_T1538911829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t1538911829 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t1538911829, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T1538911829_H
#ifndef VOID_T3399060764_H
#define VOID_T3399060764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3399060764 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3399060764_H
#ifndef WAITFORSECONDS_T3703775614_H
#define WAITFORSECONDS_T3703775614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3703775614  : public YieldInstruction_t975307523
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3703775614, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3703775614_marshaled_pinvoke : public YieldInstruction_t975307523_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3703775614_marshaled_com : public YieldInstruction_t975307523_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3703775614_H
#ifndef WAITFORFIXEDUPDATE_T218497181_H
#define WAITFORFIXEDUPDATE_T218497181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t218497181  : public YieldInstruction_t975307523
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T218497181_H
#ifndef LOGTYPE_T2081515946_H
#define LOGTYPE_T2081515946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t2081515946 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t2081515946, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T2081515946_H
#ifndef CALENDARIDENTIFIER_T3279089740_H
#define CALENDARIDENTIFIER_T3279089740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarIdentifier
struct  CalendarIdentifier_t3279089740 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarIdentifier::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarIdentifier_t3279089740, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARIDENTIFIER_T3279089740_H
#ifndef LOADSCENEMODE_T2998465609_H
#define LOADSCENEMODE_T2998465609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t2998465609 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t2998465609, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T2998465609_H
#ifndef HIDEFLAGS_T3946053102_H
#define HIDEFLAGS_T3946053102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t3946053102 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t3946053102, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T3946053102_H
#ifndef OBJECT_T3333827647_H
#define OBJECT_T3333827647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3333827647  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3333827647, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3333827647_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3333827647_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3333827647_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3333827647_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3333827647_H
#ifndef NOTIFICATIONTYPE_T4286250573_H
#define NOTIFICATIONTYPE_T4286250573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.NotificationType
struct  NotificationType_t4286250573 
{
public:
	// System.Int32 UnityEngine.iOS.NotificationType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NotificationType_t4286250573, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATIONTYPE_T4286250573_H
#ifndef PLAYSTATE_T117041752_H
#define PLAYSTATE_T117041752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t117041752 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t117041752, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_T117041752_H
#ifndef REMOTENOTIFICATION_T3529823527_H
#define REMOTENOTIFICATION_T3529823527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t3529823527  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t3529823527, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T3529823527_H
#ifndef PLAYABLEHANDLE_T981339592_H
#define PLAYABLEHANDLE_T981339592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t981339592 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t981339592, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t981339592, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T981339592_H
#ifndef DATASTREAMTYPE_T1334466276_H
#define DATASTREAMTYPE_T1334466276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t1334466276 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t1334466276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T1334466276_H
#ifndef PLAYABLEGRAPH_T1397607043_H
#define PLAYABLEGRAPH_T1397607043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t1397607043 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t1397607043, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t1397607043, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T1397607043_H
#ifndef PLAYABLEOUTPUTHANDLE_T2694638297_H
#define PLAYABLEOUTPUTHANDLE_T2694638297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t2694638297 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t2694638297, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t2694638297, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T2694638297_H
#ifndef LOCALNOTIFICATION_T4261012221_H
#define LOCALNOTIFICATION_T4261012221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t4261012221  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t4261012221, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t4261012221_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t4261012221_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T4261012221_H
#ifndef CALENDARUNIT_T2670815532_H
#define CALENDARUNIT_T2670815532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarUnit
struct  CalendarUnit_t2670815532 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarUnit_t2670815532, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARUNIT_T2670815532_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3212539583_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3212539583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3212539583  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t797927114  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t1683268515  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t3625887347  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t3625887347  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t3215336524  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t797927114  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t797927114 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t797927114  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t1683268515  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t1683268515 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t1683268515  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t3625887347  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t3625887347 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t3625887347  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t3625887347  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t3625887347 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t3625887347  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t3215336524  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t3215336524 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t3215336524  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3212539583_H
#ifndef GRADIENT_T78935304_H
#define GRADIENT_T78935304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t78935304  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t78935304, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t78935304_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t78935304_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T78935304_H
#ifndef ASYNCOPERATION_T1402251338_H
#define ASYNCOPERATION_T1402251338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1402251338  : public YieldInstruction_t975307523
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1402251338, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1402251338_marshaled_pinvoke : public YieldInstruction_t975307523_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1402251338_marshaled_com : public YieldInstruction_t975307523_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T1402251338_H
#ifndef COROUTINE_T373339046_H
#define COROUTINE_T373339046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t373339046  : public YieldInstruction_t975307523
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t373339046, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t373339046_marshaled_pinvoke : public YieldInstruction_t975307523_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t373339046_marshaled_com : public YieldInstruction_t975307523_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T373339046_H
#ifndef CULLINGGROUP_T2880624745_H
#define CULLINGGROUP_T2880624745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2880624745  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2037210966 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2880624745, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2880624745, ___m_OnStateChanged_1)); }
	inline StateChanged_t2037210966 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2037210966 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2037210966 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2880624745_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2880624745_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2880624745_H
#ifndef CURSORLOCKMODE_T1557044359_H
#define CURSORLOCKMODE_T1557044359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t1557044359 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t1557044359, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSORLOCKMODE_T1557044359_H
#ifndef DISPLAY_T1237821856_H
#define DISPLAY_T1237821856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1237821856  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1237821856, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1237821856_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2640665569* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1237821856 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t3174893605 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1237821856_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t2640665569* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t2640665569** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t2640665569* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1237821856_StaticFields, ____mainDisplay_2)); }
	inline Display_t1237821856 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1237821856 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1237821856 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1237821856_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t3174893605 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t3174893605 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t3174893605 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1237821856_H
#ifndef INTERNALVERTEXCHANNELTYPE_T1999404984_H
#define INTERNALVERTEXCHANNELTYPE_T1999404984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t1999404984 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t1999404984, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVERTEXCHANNELTYPE_T1999404984_H
#ifndef RECTOFFSET_T3073063129_H
#define RECTOFFSET_T3073063129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t3073063129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t3073063129, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t3073063129, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t3073063129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t3073063129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T3073063129_H
#ifndef TOUCHSCREENKEYBOARD_T803383726_H
#define TOUCHSCREENKEYBOARD_T803383726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t803383726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t803383726, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T803383726_H
#ifndef TOUCHPHASE_T2058990872_H
#define TOUCHPHASE_T2058990872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t2058990872 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t2058990872, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T2058990872_H
#ifndef IMECOMPOSITIONMODE_T777281536_H
#define IMECOMPOSITIONMODE_T777281536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t777281536 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t777281536, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMECOMPOSITIONMODE_T777281536_H
#ifndef DELEGATE_T1575530466_H
#define DELEGATE_T1575530466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1575530466  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t440387570 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1575530466, ___data_8)); }
	inline DelegateData_t440387570 * get_data_8() const { return ___data_8; }
	inline DelegateData_t440387570 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t440387570 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1575530466_H
#ifndef ANIMATIONCURVE_T2588234630_H
#define ANIMATIONCURVE_T2588234630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t2588234630  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2588234630, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2588234630_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2588234630_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T2588234630_H
#ifndef TOUCHTYPE_T4258190605_H
#define TOUCHTYPE_T4258190605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t4258190605 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t4258190605, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T4258190605_H
#ifndef BOUNDS_T3327315561_H
#define BOUNDS_T3327315561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t3327315561 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3541879884  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3541879884  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t3327315561, ___m_Center_0)); }
	inline Vector3_t3541879884  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3541879884 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3541879884  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t3327315561, ___m_Extents_1)); }
	inline Vector3_t3541879884  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3541879884 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3541879884  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T3327315561_H
#ifndef INTERNALSHADERCHANNEL_T3983434094_H
#define INTERNALSHADERCHANNEL_T3983434094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t3983434094 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t3983434094, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSHADERCHANNEL_T3983434094_H
#ifndef TEXTURE_T3526717065_H
#define TEXTURE_T3526717065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3526717065  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3526717065_H
#ifndef MESH_T1810295381_H
#define MESH_T1810295381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t1810295381  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T1810295381_H
#ifndef COMPONENT_T3095829663_H
#define COMPONENT_T3095829663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3095829663  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3095829663_H
#ifndef RESOURCEREQUEST_T1798908587_H
#define RESOURCEREQUEST_T1798908587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t1798908587  : public AsyncOperation_t1402251338
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t1798908587, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t1798908587, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t1798908587_marshaled_pinvoke : public AsyncOperation_t1402251338_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t1798908587_marshaled_com : public AsyncOperation_t1402251338_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T1798908587_H
#ifndef PLAYABLEOUTPUT_T3025497811_H
#define PLAYABLEOUTPUT_T3025497811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t3025497811 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t2694638297  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t3025497811, ___m_Handle_0)); }
	inline PlayableOutputHandle_t2694638297  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t2694638297 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t2694638297  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t3025497811_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t3025497811  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t3025497811_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t3025497811  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t3025497811 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t3025497811  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T3025497811_H
#ifndef MULTICASTDELEGATE_T2123728179_H
#define MULTICASTDELEGATE_T2123728179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2123728179  : public Delegate_t1575530466
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2123728179 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2123728179 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2123728179, ___prev_9)); }
	inline MulticastDelegate_t2123728179 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2123728179 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2123728179 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2123728179, ___kpm_next_10)); }
	inline MulticastDelegate_t2123728179 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2123728179 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2123728179 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2123728179_H
#ifndef GAMEOBJECT_T270195900_H
#define GAMEOBJECT_T270195900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t270195900  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T270195900_H
#ifndef SHADER_T87381356_H
#define SHADER_T87381356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t87381356  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T87381356_H
#ifndef PLAYABLE_T3832942723_H
#define PLAYABLE_T3832942723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t3832942723 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t981339592  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t3832942723, ___m_Handle_0)); }
	inline PlayableHandle_t981339592  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t981339592 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t981339592  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t3832942723_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t3832942723  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t3832942723_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t3832942723  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t3832942723 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t3832942723  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T3832942723_H
#ifndef MATERIAL_T1373133983_H
#define MATERIAL_T1373133983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t1373133983  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T1373133983_H
#ifndef ASSETBUNDLE_T1936556313_H
#define ASSETBUNDLE_T1936556313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t1936556313  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T1936556313_H
#ifndef ASSETBUNDLEREQUEST_T599136064_H
#define ASSETBUNDLEREQUEST_T599136064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t599136064  : public AsyncOperation_t1402251338
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t599136064_marshaled_pinvoke : public AsyncOperation_t1402251338_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t599136064_marshaled_com : public AsyncOperation_t1402251338_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T599136064_H
#ifndef TOUCH_T186290056_H
#define TOUCH_T186290056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t186290056 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t3151160755  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t3151160755  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t3151160755  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_Position_1)); }
	inline Vector2_t3151160755  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t3151160755 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t3151160755  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_RawPosition_2)); }
	inline Vector2_t3151160755  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t3151160755 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t3151160755  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_PositionDelta_3)); }
	inline Vector2_t3151160755  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t3151160755 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t3151160755  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t186290056, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T186290056_H
#ifndef SPRITE_T1014358958_H
#define SPRITE_T1014358958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t1014358958  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T1014358958_H
#ifndef ASSETBUNDLECREATEREQUEST_T2849988111_H
#define ASSETBUNDLECREATEREQUEST_T2849988111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t2849988111  : public AsyncOperation_t1402251338
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T2849988111_H
#ifndef SCRIPTABLEOBJECT_T202868951_H
#define SCRIPTABLEOBJECT_T202868951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t202868951  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t202868951_marshaled_pinvoke : public Object_t3333827647_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t202868951_marshaled_com : public Object_t3333827647_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T202868951_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T3034266332_H
#define FAILEDTOLOADSCRIPTOBJECT_T3034266332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t3034266332  : public Object_t3333827647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3034266332_marshaled_pinvoke : public Object_t3333827647_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3034266332_marshaled_com : public Object_t3333827647_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T3034266332_H
#ifndef LOGCALLBACK_T2487613373_H
#define LOGCALLBACK_T2487613373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t2487613373  : public MulticastDelegate_t2123728179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T2487613373_H
#ifndef LOWMEMORYCALLBACK_T1899774088_H
#define LOWMEMORYCALLBACK_T1899774088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t1899774088  : public MulticastDelegate_t2123728179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T1899774088_H
#ifndef STATECHANGED_T2037210966_H
#define STATECHANGED_T2037210966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2037210966  : public MulticastDelegate_t2123728179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2037210966_H
#ifndef CAMERACALLBACK_T790700493_H
#define CAMERACALLBACK_T790700493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t790700493  : public MulticastDelegate_t2123728179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T790700493_H
#ifndef DISPLAYSUPDATEDDELEGATE_T3174893605_H
#define DISPLAYSUPDATEDDELEGATE_T3174893605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t3174893605  : public MulticastDelegate_t2123728179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T3174893605_H
#ifndef RENDERER_T89203872_H
#define RENDERER_T89203872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t89203872  : public Component_t3095829663
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T89203872_H
#ifndef RENDERTEXTURE_T1624812041_H
#define RENDERTEXTURE_T1624812041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t1624812041  : public Texture_t3526717065
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T1624812041_H
#ifndef TEXTURE2D_T4124411238_H
#define TEXTURE2D_T4124411238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t4124411238  : public Texture_t3526717065
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T4124411238_H
#ifndef BEHAVIOUR_T982393301_H
#define BEHAVIOUR_T982393301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t982393301  : public Component_t3095829663
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T982393301_H
#ifndef CAMERA_T3214521937_H
#define CAMERA_T3214521937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t3214521937  : public Behaviour_t982393301
{
public:

public:
};

struct Camera_t3214521937_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t790700493 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t790700493 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t790700493 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t3214521937_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t790700493 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t790700493 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t790700493 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t3214521937_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t790700493 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t790700493 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t790700493 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t3214521937_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t790700493 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t790700493 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t790700493 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T3214521937_H
#ifndef GUIELEMENT_T628573458_H
#define GUIELEMENT_T628573458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t628573458  : public Behaviour_t982393301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T628573458_H
#ifndef GUILAYER_T3592633824_H
#define GUILAYER_T3592633824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t3592633824  : public Behaviour_t982393301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T3592633824_H
#ifndef SPRITERENDERER_T2923962562_H
#define SPRITERENDERER_T2923962562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t2923962562  : public Renderer_t89203872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T2923962562_H
#ifndef MONOBEHAVIOUR_T1102136887_H
#define MONOBEHAVIOUR_T1102136887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1102136887  : public Behaviour_t982393301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1102136887_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (U3CPrivateImplementationDetailsU3E_t3212539583), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1203[12] = 
{
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D7_7(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D8_8(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D9_9(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D10_10(),
	U3CPrivateImplementationDetailsU3E_t3212539583_StaticFields::get_offset_of_U24U24fieldU2D11_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (U24ArrayTypeU24136_t797927114)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t797927114 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (U24ArrayTypeU24120_t1683268515)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t1683268515 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (U24ArrayTypeU24256_t3625887347)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t3625887347 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (U24ArrayTypeU241024_t3215336524)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3215336524 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (U3CModuleU3E_t827915311), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (Application_t4175334953), -1, sizeof(Application_t4175334953_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1209[4] = 
{
	Application_t4175334953_StaticFields::get_offset_of_lowMemory_0(),
	Application_t4175334953_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t4175334953_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t4175334953_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (LowMemoryCallback_t1899774088), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (LogCallback_t2487613373), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (AssetBundleCreateRequest_t2849988111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (AssetBundleRequest_t599136064), sizeof(AssetBundleRequest_t599136064_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (AssetBundle_t1936556313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (AsyncOperation_t1402251338), sizeof(AsyncOperation_t1402251338_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1215[1] = 
{
	AsyncOperation_t1402251338::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (SystemInfo_t4252646383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (WaitForSeconds_t3703775614), sizeof(WaitForSeconds_t3703775614_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1217[1] = 
{
	WaitForSeconds_t3703775614::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (WaitForFixedUpdate_t218497181), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (WaitForEndOfFrame_t2645246188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (CustomYieldInstruction_t224762009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (Coroutine_t373339046), sizeof(Coroutine_t373339046_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1221[1] = 
{
	Coroutine_t373339046::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (ScriptableObject_t202868951), sizeof(ScriptableObject_t202868951_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (FailedToLoadScriptObject_t3034266332), sizeof(FailedToLoadScriptObject_t3034266332_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (Behaviour_t982393301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (Camera_t3214521937), -1, sizeof(Camera_t3214521937_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1225[3] = 
{
	Camera_t3214521937_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t3214521937_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t3214521937_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (CameraCallback_t790700493), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (Component_t3095829663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (UnhandledExceptionHandler_t3552985654), -1, sizeof(UnhandledExceptionHandler_t3552985654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1228[1] = 
{
	UnhandledExceptionHandler_t3552985654_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (CullingGroupEvent_t3139459373)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t3139459373 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1229[3] = 
{
	CullingGroupEvent_t3139459373::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3139459373::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3139459373::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (CullingGroup_t2880624745), sizeof(CullingGroup_t2880624745_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1230[2] = 
{
	CullingGroup_t2880624745::get_offset_of_m_Ptr_0(),
	CullingGroup_t2880624745::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (StateChanged_t2037210966), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (CursorLockMode_t1557044359)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1232[4] = 
{
	CursorLockMode_t1557044359::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (Cursor_t2819465748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (DebugLogHandler_t2311409409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (Debug_t3888364155), -1, sizeof(Debug_t3888364155_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1235[1] = 
{
	Debug_t3888364155_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (Display_t1237821856), -1, sizeof(Display_t1237821856_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1236[4] = 
{
	Display_t1237821856::get_offset_of_nativeDisplay_0(),
	Display_t1237821856_StaticFields::get_offset_of_displays_1(),
	Display_t1237821856_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t1237821856_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (DisplaysUpdatedDelegate_t3174893605), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (GameObject_t270195900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (Gradient_t78935304), sizeof(Gradient_t78935304_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1239[1] = 
{
	Gradient_t78935304::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (Renderer_t89203872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (Screen_t1198576479), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (RectOffset_t3073063129), sizeof(RectOffset_t3073063129_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1242[2] = 
{
	RectOffset_t3073063129::get_offset_of_m_Ptr_0(),
	RectOffset_t3073063129::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (GUIElement_t628573458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (GUILayer_t3592633824), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1245[5] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1184969889::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (TouchScreenKeyboard_t803383726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1246[1] = 
{
	TouchScreenKeyboard_t803383726::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (TouchPhase_t2058990872)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1247[6] = 
{
	TouchPhase_t2058990872::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (IMECompositionMode_t777281536)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1248[4] = 
{
	IMECompositionMode_t777281536::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (TouchType_t4258190605)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1249[4] = 
{
	TouchType_t4258190605::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (Touch_t186290056)+ sizeof (RuntimeObject), sizeof(Touch_t186290056 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[14] = 
{
	Touch_t186290056::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t186290056::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (Gyroscope_t4104034833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (Input_t1910860059), -1, sizeof(Input_t1910860059_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1252[1] = 
{
	Input_t1910860059_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (LayerMask_t3042172026)+ sizeof (RuntimeObject), sizeof(LayerMask_t3042172026 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1253[1] = 
{
	LayerMask_t3042172026::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (Vector3_t3541879884)+ sizeof (RuntimeObject), sizeof(Vector3_t3541879884 ), sizeof(Vector3_t3541879884_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1254[14] = 
{
	0,
	Vector3_t3541879884::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3541879884::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3541879884::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3541879884_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t3541879884_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t3541879884_StaticFields::get_offset_of_upVector_6(),
	Vector3_t3541879884_StaticFields::get_offset_of_downVector_7(),
	Vector3_t3541879884_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t3541879884_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t3541879884_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t3541879884_StaticFields::get_offset_of_backVector_11(),
	Vector3_t3541879884_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t3541879884_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (Quaternion_t1777559145)+ sizeof (RuntimeObject), sizeof(Quaternion_t1777559145 ), sizeof(Quaternion_t1777559145_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1255[6] = 
{
	Quaternion_t1777559145::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1777559145::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1777559145::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1777559145::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1777559145_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (Matrix4x4_t2276848687)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t2276848687 ), sizeof(Matrix4x4_t2276848687_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1256[18] = 
{
	Matrix4x4_t2276848687::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2276848687_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t2276848687_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (Bounds_t3327315561)+ sizeof (RuntimeObject), sizeof(Bounds_t3327315561 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1257[2] = 
{
	Bounds_t3327315561::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t3327315561::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (Mathf_t111408620)+ sizeof (RuntimeObject), sizeof(Mathf_t111408620 ), sizeof(Mathf_t111408620_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1258[1] = 
{
	Mathf_t111408620_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (Keyframe_t892059082)+ sizeof (RuntimeObject), sizeof(Keyframe_t892059082 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1259[4] = 
{
	Keyframe_t892059082::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t892059082::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t892059082::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t892059082::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (AnimationCurve_t2588234630), sizeof(AnimationCurve_t2588234630_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1260[1] = 
{
	AnimationCurve_t2588234630::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (Mesh_t1810295381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (InternalShaderChannel_t3983434094)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1262[9] = 
{
	InternalShaderChannel_t3983434094::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (InternalVertexChannelType_t1999404984)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1263[3] = 
{
	InternalVertexChannelType_t1999404984::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (MonoBehaviour_t1102136887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (PlayerPrefsException_t747547626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (PlayerPrefs_t2206583890), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (Random_t1559982117), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (ResourceRequest_t1798908587), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1268[2] = 
{
	ResourceRequest_t1798908587::get_offset_of_m_Path_1(),
	ResourceRequest_t1798908587::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (Resources_t4114062799), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (Shader_t87381356), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (Material_t1373133983), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (SortingLayer_t1197007728)+ sizeof (RuntimeObject), sizeof(SortingLayer_t1197007728 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1272[1] = 
{
	SortingLayer_t1197007728::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (Sprite_t1014358958), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (SpriteRenderer_t2923962562), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (DataUtility_t141407557), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (Texture_t3526717065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (Texture2D_t4124411238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (RenderTexture_t1624812041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (Time_t2831285614), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (HideFlags_t3946053102)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[10] = 
{
	HideFlags_t3946053102::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (Object_t3333827647), sizeof(Object_t3333827647_marshaled_pinvoke), sizeof(Object_t3333827647_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1281[2] = 
{
	Object_t3333827647::get_offset_of_m_CachedPtr_0(),
	Object_t3333827647_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (UnityLogWriter_t54810423), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (YieldInstruction_t975307523), sizeof(YieldInstruction_t975307523_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (PlayState_t117041752)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1284[3] = 
{
	PlayState_t117041752::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (PlayableHandle_t981339592)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t981339592 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[2] = 
{
	PlayableHandle_t981339592::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t981339592::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (Playable_t3832942723)+ sizeof (RuntimeObject), sizeof(Playable_t3832942723 ), sizeof(Playable_t3832942723_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1286[2] = 
{
	Playable_t3832942723::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t3832942723_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (DataStreamType_t1334466276)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1287[5] = 
{
	DataStreamType_t1334466276::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (PlayableGraph_t1397607043)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t1397607043 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1288[2] = 
{
	PlayableGraph_t1397607043::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t1397607043::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (PlayableOutputHandle_t2694638297)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t2694638297 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1289[2] = 
{
	PlayableOutputHandle_t2694638297::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t2694638297::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (PlayableOutput_t3025497811)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t3025497811 ), sizeof(PlayableOutput_t3025497811_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1290[2] = 
{
	PlayableOutput_t3025497811::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t3025497811_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (CalendarIdentifier_t3279089740)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1291[12] = 
{
	CalendarIdentifier_t3279089740::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (CalendarUnit_t2670815532)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1292[12] = 
{
	CalendarUnit_t2670815532::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (LocalNotification_t4261012221), -1, sizeof(LocalNotification_t4261012221_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1293[2] = 
{
	LocalNotification_t4261012221::get_offset_of_notificationWrapper_0(),
	LocalNotification_t4261012221_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (RemoteNotification_t3529823527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1294[1] = 
{
	RemoteNotification_t3529823527::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (NotificationType_t4286250573)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1295[5] = 
{
	NotificationType_t4286250573::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (NotificationServices_t2275682316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (Scene_t1538911829)+ sizeof (RuntimeObject), sizeof(Scene_t1538911829 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1297[1] = 
{
	Scene_t1538911829::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (LoadSceneMode_t2998465609)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1298[3] = 
{
	LoadSceneMode_t2998465609::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (SceneManager_t2909086167), -1, sizeof(SceneManager_t2909086167_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1299[3] = 
{
	SceneManager_t2909086167_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t2909086167_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t2909086167_StaticFields::get_offset_of_activeSceneChanged_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
