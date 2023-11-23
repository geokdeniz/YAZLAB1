#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D;
struct Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68;
struct Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9;
struct Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039;
struct ICollection_1_t8FB60992B47448632B1EEB7A74B90108C562F2CC;
struct ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC;
struct IEnumerable_1_t4F8C07463B69A85908EBE7EFF801B9EF72745890;
struct IEnumerator_1_t1CD9FC547A31FA58D1F5039A8E21570908A48045;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IList_1_tF892A4189DF4D0870C278FE344AD94F2418F3745;
struct KeyCollection_t5B69BEBB7A0F4BAF6231CBB90361D604D657179C;
struct KeyCollection_t573D55BA4DF0C6279CB4E1DEF4A14BE189E53EBD;
struct List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB;
struct List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476;
struct Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9;
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
struct ValueCollection_tD2D9F4A88C4E6E536FB7E0F0F30DC6F4774CC887;
struct ValueCollection_tEB81803BA6476FE23F5B39953A507866A58FD861;
struct EntryU5BU5D_t7E0231C50D3EBC9120F7765D03F79DE1D5E644F1;
struct EntryU5BU5D_tDC88A16220F6FD36D1F5BB3A85FB7AAE46F3EEC5;
struct TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LogItemU5BU5D_t3CFBD0E62C77623194F7481BE97284856B93D609;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142;
struct OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6;
struct PointU5BU5D_t6C341700E2DC67458602AC160A79B983DE6EB9E8;
struct RegionPointerU5BU5D_tE3B62F90D75C638CFEDB5097362AEBB856AC11A4;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0;
struct VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA;
struct Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5;
struct Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IMesh_t0B867BAF4EAEE78396666AE5BEE8D4EB51CC4DE4;
struct IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93;
struct Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7;
struct LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF;
struct Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Point_tD9D7844991974E103C098D90590516DC77D65AF2;
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
struct Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61;
struct RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7;
struct Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0;
struct TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F;
struct TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26;
struct TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29;
struct Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D;
struct VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D;
struct U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9;
struct Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412;

IL2CPP_EXTERN_C RuntimeClass* Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3629981044B583577D35ABBCA202E1858A28540D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4F8C07463B69A85908EBE7EFF801B9EF72745890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1CD9FC547A31FA58D1F5039A8E21570908A48045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t654A98D961D5287E7A9044BBEFF8B75507002473_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tF892A4189DF4D0870C278FE344AD94F2418F3745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tD9D7844991974E103C098D90590516DC77D65AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral148EDDF6555695DFC66299136A88027385790545;
IL2CPP_EXTERN_C String_t* _stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D;
IL2CPP_EXTERN_C String_t* _stringLiteral545555946B54695BF600E149072998C05ECCF2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral950A1778E213AC1D3E8C01967A940E21CDE3CFB0;
IL2CPP_EXTERN_C String_t* _stringLiteral994013803E971E60E26CE68C10AB1A1CD114F986;
IL2CPP_EXTERN_C String_t* _stringLiteralC336876A413E1AA69317ECC900705FD5E0D1455D;
IL2CPP_EXTERN_C String_t* _stringLiteralC381049E38E1A72EDE3A68C5E9D6A2D49DB56B60;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3B233FB1C2B41D56812CB0C84222E02544D1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2BF2B4DB9A6864C148643E8D70302A401ED7E95;
IL2CPP_EXTERN_C String_t* _stringLiteralEEB112D48D4A2067876B4B3DFE16DD5B4159EE6F;
IL2CPP_EXTERN_C String_t* _stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848;
IL2CPP_EXTERN_C String_t* _stringLiteralFD37145E9B85A36F668B89A07A975BD7A1DE79E2;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisTriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_m0A1D926C719973A67FF1F11C9676313BFD73F3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m242F202630910A2E40087522B54C1736D3703287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m21014E3F7613D9969589ABFF5138C7721988CB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m63C1BFB06BDF5FE6E59BC60E9049F5F1BC866AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m4A1B5F9B359EB5DA41A9F78C15D9C70364206EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m071A83AB004592E003F1ABDC27528F3F296666F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3BBA22A444B359FA229782AE284F8D4643AEC39D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC7328951EEF61D7496206B721600C0374F41BB99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mesh_TransferNodes_m729ADB3D4B4D06C7EE2B597FD94F3E1E2674D61D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m5F4CB7B738AAACCE387090E68733E20650C052A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m326EE2888179AF3D77FE762798B56C433230A07A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7264693A8EFF79ACA35AC5D7CABEC58B3DC285F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m78894FE569B83AA9EAC9C1793BED09D5EA632B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m9C6ADBC3D0AFFC7A85FD13D38BC691C10C852A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrianglePool_Add_m9F233F7A4056F8837D8878AF342786AF10CCCF04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrianglePool_Remove_mA88708E2DA9EA2E6C39D95D70C19A5AA344E8B32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSampleU3Ed__11_System_Collections_IEnumerator_Reset_m0D27F24373F9E98D43D905F93EC7BA471BD7DFFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_0_m1D8C9A637AEAFC79C4AC62442968A996033F974A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__0_1_mCF03935E91335DC697F2AF46DC5D63D7D9C7FF43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__2_0_mD5C7D648BD65EA7DCAE7504B34C6B1CAB0F2BE95_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142;
struct OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6;
struct TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0;
struct VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t6FA9D42792E156DA7FEFB58F6264981AB07837DF 
{
};
struct Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7E0231C50D3EBC9120F7765D03F79DE1D5E644F1* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5B69BEBB7A0F4BAF6231CBB90361D604D657179C* ____keys;
	ValueCollection_tD2D9F4A88C4E6E536FB7E0F0F30DC6F4774CC887* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDC88A16220F6FD36D1F5BB3A85FB7AAE46F3EEC5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t573D55BA4DF0C6279CB4E1DEF4A14BE189E53EBD* ____keys;
	ValueCollection_tEB81803BA6476FE23F5B39953A507866A58FD861* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867  : public RuntimeObject
{
	LogItemU5BU5D_t3CFBD0E62C77623194F7481BE97284856B93D609* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB  : public RuntimeObject
{
	PointU5BU5D_t6C341700E2DC67458602AC160A79B983DE6EB9E8* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970  : public RuntimeObject
{
	RegionPointerU5BU5D_tE3B62F90D75C638CFEDB5097362AEBB856AC11A4* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476  : public RuntimeObject
{
	OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9  : public RuntimeObject
{
	TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ValueCollection_tEB81803BA6476FE23F5B39953A507866A58FD861  : public RuntimeObject
{
	Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* ____dictionary;
};
struct Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5  : public RuntimeObject
{
	bool ___poly;
	bool ___quality;
	bool ___convex;
	bool ___boundaryMarkers;
	double ___minAngle;
	double ___maxAngle;
	double ___maxArea;
	bool ___useSegments;
	double ___goodAngle;
	double ___maxGoodAngle;
	double ___offconstant;
};
struct Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80  : public RuntimeObject
{
	Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* ___U3CPredicatesU3Ek__BackingField;
	Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* ___U3CTrianglePoolU3Ek__BackingField;
	Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* ___U3CRandomSourceU3Ek__BackingField;
};
struct Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432  : public RuntimeObject
{
	RuntimeObject* ___predicates;
	bool ___UseDwyer;
	VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___sortarray;
	Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* ___mesh;
};
struct Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7  : public RuntimeObject
{
	List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867* ___data;
};
struct Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D  : public RuntimeObject
{
	RuntimeObject* ___predicates;
	Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* ___logger;
	Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476* ___flipstack;
	TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* ___triangles;
	Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D* ___subsegs;
	Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* ___vertices;
	int32_t ___hash_vtx;
	List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB* ___holes;
	List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970* ___regions;
	Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61* ___bounds;
	int32_t ___invertices;
	int32_t ___undeads;
	int32_t ___mesh_dim;
	int32_t ___hullsize;
	int32_t ___steinerleft;
	TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F* ___locator;
	Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* ___behavior;
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___dummytri;
	SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* ___dummysub;
};
struct Point_tD9D7844991974E103C098D90590516DC77D65AF2  : public RuntimeObject
{
	int32_t ___id;
	int32_t ___label;
	double ___x;
	double ___y;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61  : public RuntimeObject
{
	double ___xmin;
	double ___ymin;
	double ___xmax;
	double ___ymax;
};
struct RegionPointer_t4D09B9D967EACD11AD4E902701FFBA532CC8E6B9  : public RuntimeObject
{
};
struct RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8  : public RuntimeObject
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___fin1;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___fin2;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___abdet;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___axbc;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___axxbc;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___aybc;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ayybc;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___adet;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___bxca;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___bxxca;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___byca;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___byyca;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___bdet;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___cxab;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___cxxab;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___cyab;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___cyyab;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___cdet;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp8;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp16a;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp16b;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp16c;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp32a;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp32b;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp48;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___temp64;
};
struct Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7  : public RuntimeObject
{
	int32_t ___hash;
	OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* ___subsegs;
	VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___vertices;
	OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* ___triangles;
	int32_t ___boundary;
};
struct Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0  : public RuntimeObject
{
	int32_t ___hash;
	int32_t ___id;
	OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* ___neighbors;
	VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___vertices;
	OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* ___subsegs;
	int32_t ___label;
	double ___area;
	bool ___infected;
};
struct TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F  : public RuntimeObject
{
	TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29* ___sampler;
	Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* ___mesh;
	RuntimeObject* ___predicates;
};
struct TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26  : public RuntimeObject
{
	int32_t ___size;
	int32_t ___count;
	TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* ___pool;
	Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* ___stack;
};
struct TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29  : public RuntimeObject
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random;
	Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* ___mesh;
	int32_t ___samples;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE  : public RuntimeObject
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand;
	VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___points;
};
struct U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D  : public RuntimeObject
{
};
struct U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* ___U3CU3E4__this;
	int32_t ___k;
	int32_t ___U3CU3E3__k;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___U3CU3E3__random;
	int32_t ___U3CcountU3E5__2;
};
struct Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412  : public RuntimeObject
{
	int32_t ___count;
	TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* ___pool;
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___current;
	int32_t ___index;
	int32_t ___offset;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Osub_t021137B718448D59923AD442251BEDE243B7ECE0 
{
	SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* ___seg;
	int32_t ___orient;
};
struct Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_pinvoke
{
	SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* ___seg;
	int32_t ___orient;
};
struct Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_com
{
	SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* ___seg;
	int32_t ___orient;
};
struct Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 
{
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___tri;
	int32_t ___orient;
};
struct Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_pinvoke
{
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___tri;
	int32_t ___orient;
};
struct Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_com
{
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___tri;
	int32_t ___orient;
};
struct Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D  : public Point_tD9D7844991974E103C098D90590516DC77D65AF2
{
	int32_t ___hash;
	int32_t ___type;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF  : public RuntimeObject
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time;
	int32_t ___level;
	String_t* ___message;
	String_t* ___details;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160  : public MulticastDelegate_t
{
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9  : public MulticastDelegate_t
{
};
struct Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039  : public MulticastDelegate_t
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867_StaticFields
{
	LogItemU5BU5D_t3CFBD0E62C77623194F7481BE97284856B93D609* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB_StaticFields
{
	PointU5BU5D_t6C341700E2DC67458602AC160A79B983DE6EB9E8* ___s_emptyArray;
};
struct List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970_StaticFields
{
	RegionPointerU5BU5D_tE3B62F90D75C638CFEDB5097362AEBB856AC11A4* ___s_emptyArray;
};
struct Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_StaticFields
{
	bool ___U3CNoExactU3Ek__BackingField;
};
struct Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_StaticFields
{
	bool ___U3CVerboseU3Ek__BackingField;
	Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* ___instance;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields
{
	RuntimeObject* ___creationLock;
	RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* ____default;
	double ___epsilon;
	double ___splitter;
	double ___resulterrbound;
	double ___ccwerrboundA;
	double ___ccwerrboundB;
	double ___ccwerrboundC;
	double ___iccerrboundA;
	double ___iccerrboundB;
	double ___iccerrboundC;
};
struct Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields
{
	int64_t ___InCircleCount;
	int64_t ___InCircleAdaptCount;
	int64_t ___CounterClockwiseCount;
	int64_t ___CounterClockwiseAdaptCount;
	int64_t ___Orient3dCount;
	int64_t ___HyperbolaCount;
	int64_t ___CircumcenterCount;
	int64_t ___CircleTopCount;
	int64_t ___RelocationCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___plus1Mod3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minus1Mod3;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields
{
	U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* ___U3CU3E9;
	Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* ___U3CU3E9__0_0;
	Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* ___U3CU3E9__0_1;
	Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* ___U3CU3E9__2_0;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___plus1Mod3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minus1Mod3;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142  : public RuntimeArray
{
	ALIGN_FIELD (8) Osub_t021137B718448D59923AD442251BEDE243B7ECE0 m_Items[1];

	inline Osub_t021137B718448D59923AD442251BEDE243B7ECE0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Osub_t021137B718448D59923AD442251BEDE243B7ECE0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Osub_t021137B718448D59923AD442251BEDE243B7ECE0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___seg), (void*)NULL);
	}
	inline Osub_t021137B718448D59923AD442251BEDE243B7ECE0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Osub_t021137B718448D59923AD442251BEDE243B7ECE0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Osub_t021137B718448D59923AD442251BEDE243B7ECE0 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___seg), (void*)NULL);
	}
};
struct OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6  : public RuntimeArray
{
	ALIGN_FIELD (8) Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 m_Items[1];

	inline Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tri), (void*)NULL);
	}
	inline Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tri), (void*)NULL);
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0  : public RuntimeArray
{
	ALIGN_FIELD (8) Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* m_Items[1];

	inline Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE  : public RuntimeArray
{
	ALIGN_FIELD (8) TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* m_Items[1];

	inline TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* m_Items[1];

	inline Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m78894FE569B83AA9EAC9C1793BED09D5EA632B8B_gshared (Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m25F8C6095172E75DEE8A43E857889659DFC4DCE9_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_Update_m501C518E5D5D5B5E9450CF93F8EA19FEC14CBF83 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* Log_get_Instance_m51B55BACA0FE280A5D543E20FB1D1044E4F292DD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warning_mCA06B5AB008E60237F59B57632C7488B394D99AD (Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* __this, String_t* ___0_message, String_t* ___1_details, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_Poly_mD0F8B91B347E55E51EF5C6923B75930FB136C768_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_Quality_mD3B41A309FF03A090757F6F5CEBB054D1BC11D42_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_Convex_m789187058403856EA7ACCF71604D824A328B566A_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MinAngle_mE4A7981E927474981B472F51145031C4A783E210_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MaxAngle_mE6A300F98A9FBC8161F1C427376DE4BF8BCCB804_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_m4419DB750F2DAEB455C710829DCDC5DE2147FA3F (Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Func_1__ctor_m7EC02F20D00A51E54AFAFA8A9AAC7BFF84CEAF93 (Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m72C8357AF5609A2150BED9ED85F5A3E6D4EF840E (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* ___0_predicates, Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* ___1_trianglePool, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_Predicates_m0B661EF6339D4AA58D064A484ABFE3BB1C220C22_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_TrianglePool_m9495BAAD74D5DF18605052BC024710291B0A5AA4_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* ___0_value, const RuntimeMethod* method) ;
inline void Func_1__ctor_m1F6CAD6ED0A1FCA64D92B6D037743B703C4C0EC4 (Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_RandomSource_m203915F9F68522C9B58C902DFC5ABBDF46B6AA3B_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m778E0306B8AEEBFFB041B8F8C67049DF26C48109 (U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* RobustPredicates_get_Default_m3265FE6D57B4AA3D1BCCE5230684ED67FB6B8578 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool__ctor_m7725BDC9C1B3AEDBC52E65A054793CE99CDBD943 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m940DA4E7372D5A08E3F2690CC689C69EC3D1AE6D (Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m071A83AB004592E003F1ABDC27528F3F296666F2 (List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogItem__ctor_m3D7A8EAE10B72F2F12BD711C9E8804E5BFFF9D1E (LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF* __this, int32_t ___0_level, String_t* ___1_message, String_t* ___2_details, const RuntimeMethod* method) ;
inline void List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_inline (List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867* __this, LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867*, LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline ValueCollection_tEB81803BA6476FE23F5B39953A507866A58FD861* Dictionary_2_get_Values_m4A1B5F9B359EB5DA41A9F78C15D9C70364206EB5 (Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tEB81803BA6476FE23F5B39953A507866A58FD861* (*) (Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSegment__ctor_m999C9CBAAB99296C70836DEB8C73B7316B301F9E (SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_m147CFD45282D21024F2E525E653C8FEDA44E5601 (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Initialize_m6DC89F10F7AFC51122F96DF0629C3AB153B2B3A2 (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior__ctor_mB1EEDBB5B9D30839BA7E45537429AD561704B994 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, bool ___0_quality, double ___1_minAngle, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m21014E3F7613D9969589ABFF5138C7721988CB13 (Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m63C1BFB06BDF5FE6E59BC60E9049F5F1BC866AF8 (Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* Configuration_get_TrianglePool_mA5E6B1A688AD5DB25E7CFC0D848E1BC6373B8AE6_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) ;
inline TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* Func_1_Invoke_mA0B468DAD0483E6838B9508F6459B3F52AA3B334_inline (Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* __this, const RuntimeMethod* method)
{
	return ((  TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* (*) (Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
inline void Stack_1__ctor_m78894FE569B83AA9EAC9C1793BED09D5EA632B8B (Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476*, const RuntimeMethod*))Stack_1__ctor_m78894FE569B83AA9EAC9C1793BED09D5EA632B8B_gshared)(__this, method);
}
inline void List_1__ctor_mC7328951EEF61D7496206B721600C0374F41BB99 (List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1__ctor_m3BBA22A444B359FA229782AE284F8D4643AEC39D (List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* Configuration_get_Predicates_m1600AFDB5D569A2D0391588C66AD759B6B84C002_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) ;
inline RuntimeObject* Func_1_Invoke_m6C6CC022F85F99F7553FE19BF8F8454B013551F5_inline (Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* Configuration_get_RandomSource_m8F3C7EF0109F4ED55F322CA1B7DD2621F0C9DADB_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) ;
inline Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* Func_1_Invoke_m5746D6F331CA3815619BE1B25219AE47DD5C2A59_inline (Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* __this, const RuntimeMethod* method)
{
	return ((  Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* (*) (Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator__ctor_mF2C005195D13BAFF91E2290504027EF6DF2C7C71 (TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F* __this, Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* ___0_mesh, RuntimeObject* ___1_predicates, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___2_random, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_TransferNodes_m729ADB3D4B4D06C7EE2B597FD94F3E1E2674D61D (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, RuntimeObject* ___0_points, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m1DF6D4DDA6EF107A3D35C8763A6A0DC90DBE1916 (Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m85C77CCCFEE35DA870481BBB41148D0D9961190E (Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* __this, String_t* ___0_message, String_t* ___1_details, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m242F202630910A2E40087522B54C1736D3703287 (Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* __this, int32_t ___0_key, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68*, int32_t, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_Expand_m75E7259EAA1A46767050383841A6B2978357EAB2 (Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* TrianglePool_Get_m3D80052DB2C64EB526874C5E15CF25B6977895D3 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Kill_m6FE3894E428744D4E7DE83CF449C041053B6045C (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_tri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Release_m63F982F11B32F7BF5662E2274D8686ADE8B07369 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_triangle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates__ctor_m24406078CAB821C991BDA03B0AB7DA2D8E429897 (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates_AllocateWorkspace_m0029D102DA7E013E4F0B4A82DD98509161759EE9 (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_NoExact_mC43C76012324A8E187CBAD28C6D2D93D25E30BD1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_CounterClockwiseAdapt_m06897DE50282B36BA8617C612FE984071925967F (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_pa, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_pb, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___2_pc, double ___3_detsum, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_InCircleAdapt_m52EEB7B22B35CE09E7B8C1B9C929489A7FDAC15F (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_pa, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_pb, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___2_pc, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___3_pd, double ___4_permanent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_Estimate_mE0D0EC6F6EDEF9EDC029E9076B485BFB38FEF604 (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, int32_t ___0_elen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, int32_t ___0_elen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_e, int32_t ___2_flen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_f, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___4_h, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, int32_t ___0_elen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_e, double ___2_b, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_h, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_m2E6F416BBEC7C587CF6C0641B1B50A3864A1566B (TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29* __this, Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* ___0_mesh, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_random, const RuntimeMethod* method) ;
inline void Stack_1__ctor_m9C6ADBC3D0AFFC7A85FD13D38BC691C10C852A87 (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9*, int32_t, const RuntimeMethod*))Stack_1__ctor_m25F8C6095172E75DEE8A43E857889659DFC4DCE9_gshared)(__this, ___0_capacity, method);
}
inline int32_t Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_inline (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
inline Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* Stack_1_Pop_m326EE2888179AF3D77FE762798B56C433230A07A (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* __this, const RuntimeMethod* method)
{
	return ((  Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* (*) (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Cleanup_m2F753AB4B7C5F02DB9DAA7EE05BDD6704AEB8889 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_triangle, const RuntimeMethod* method) ;
inline void Array_Resize_TisTriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_m0A1D926C719973A67FF1F11C9676313BFD73F3C0 (TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
inline void Stack_1_Push_m7264693A8EFF79ACA35AC5D7CABEC58B3DC285F1 (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9*, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__11__ctor_m77D824639541E2D01700820A4562FCFC57F3C6E1 (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void Stack_1_Clear_m5F4CB7B738AAACCE387090E68733E20650C052A5 (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_GetEnumerator_m26E99643357FC5C6684925B38BB9716D744A99A1 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAB7AE3A573F8A8D66ADDA534345A4071B62B7ED5 (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* __this, TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrianglePool_get_Count_m26D028D3F8FEF8E5A5115D892C39FBE38698FD7B (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__11_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m9F1F3C8D0BD2FA726008D33CBCD2B2F02FDDBCBA (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_Sample_m0C9E5D0A294510BBE6291B7C1D72B9A611F37401 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, int32_t ___0_k, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_random, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_GetEnumerator_m444D480D98CDF4B92B65A491FB7E2070FE5BA635 (TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Osub_ToString_m795F8541799CAD7C12B36AB39494E554748DB632 (Osub_t021137B718448D59923AD442251BEDE243B7ECE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Otri_ToString_m55FC9F8BD283FC4F48F3680A49CD76ABCFE628CB (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_Equals_m7221848291C0AEE5F9B70C3D0438453FED3ABAD3 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dissolve_mC2CFB2CB8E221F95F7798562909989647CE76725 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_dummy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___0_Seed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter__ctor_mB799A73AF95596F40A3BC129B03CCD8AAD32C233 (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___0_points, int32_t ___1_seed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_QuickSort_mBFF9F9F4194438847DAB59A61BA1041CB22D463A (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_AlternateAxes_m43C21D4276F0C81E3114326A584F0A42B99127A7 (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_axis, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianX_m00B54326A53CBA9B35D8E84F8981137401371CB7 (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_median, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianY_mEFB8EEF377F9527A7424A41EE7CED9DFBF004FDD (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_median, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mB808D1717405B7736D7E661CD47645BC158D792F (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* ___0_config, RuntimeObject* ___1_points, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Sort_m7454D94BCC9FC4D1ADEF46E017DB9BACE52D3966 (VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___0_array, int32_t ___1_seed, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Log_get_Verbose_m31AF16B244E9393DD7F12128A0A2D2D84FC7A487_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Alternate_m568F2CDF8DC8E74AE50B42B15B698FDF4630618D (VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___0_array, int32_t ___1_length, int32_t ___2_seed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dwyer_DivconqRecurse_m3AFA0BDE63A27BC108FA4500E3FE2C875F854A89 (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_axis, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___3_farleft, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___4_farright, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dwyer_RemoveGhosts_mED741362AD5A736E9523926C3EC4F56D52EA3489 (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_startghost, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6 (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_newotri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_mCC91FD96F4D37CAAB1E21C38690972BFA3973DD1 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_a, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Inequality_mF293075D4AC1E575838281A8962722D85F843979 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_a, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dwyer_MergeHulls_m07954ACCA79C76A96B0C754C28338560C9E6EF0B (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_farleft, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___1_innerleft, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___2_innerright, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___3_farright, int32_t ___4_axis, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_TriangleDealloc_m17D9BEE05F496D0946C260F36B8900758A4B4438 (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_dyingtriangle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mD57E392C2EF42D9FA7B7147D93FD8F7A7D852581 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_mA3310F1FF7876DA2FC7F37B822E6DD66410565C1 (double ___0_val1, double ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_m7BAC743E1752A51F258BB82DEBDD13E7C6D3ED26 (double ___0_val1, double ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m72772F6D0497CAB7193E2F87DC3992E96734E764 (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* __this, double ___0_x, double ___1_y, int32_t ___2_mark, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m03169E8ED49987D9E108A94831CE631B6BA6E4DF (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, double ___0_x, double ___1_y, int32_t ___2_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior__ctor_mB1EEDBB5B9D30839BA7E45537429AD561704B994 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, bool ___0_quality, double ___1_minAngle, const RuntimeMethod* method) 
{
	{
		__this->___boundaryMarkers = (bool)1;
		__this->___maxArea = (-1.0);
		__this->___useSegments = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___0_quality;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		__this->___quality = (bool)1;
		double L_1 = ___1_minAngle;
		__this->___minAngle = L_1;
		Behavior_Update_m501C518E5D5D5B5E9450CF93F8EA19FEC14CBF83(__this, NULL);
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior_Update_m501C518E5D5D5B5E9450CF93F8EA19FEC14CBF83 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral994013803E971E60E26CE68C10AB1A1CD114F986);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC336876A413E1AA69317ECC900705FD5E0D1455D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3B233FB1C2B41D56812CB0C84222E02544D1BE);
		s_Il2CppMethodInitialized = true;
	}
	Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* G_B10_0 = NULL;
	Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* G_B8_0 = NULL;
	Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* G_B11_1 = NULL;
	{
		__this->___quality = (bool)1;
		double L_0 = __this->___minAngle;
		if ((((double)L_0) < ((double)(0.0))))
		{
			goto IL_0029;
		}
	}
	{
		double L_1 = __this->___minAngle;
		if ((!(((double)L_1) > ((double)(60.0)))))
		{
			goto IL_0053;
		}
	}

IL_0029:
	{
		__this->___minAngle = (0.0);
		__this->___quality = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_2;
		L_2 = Log_get_Instance_m51B55BACA0FE280A5D543E20FB1D1044E4F292DD_inline(NULL);
		NullCheck(L_2);
		Log_Warning_mCA06B5AB008E60237F59B57632C7488B394D99AD(L_2, _stringLiteral994013803E971E60E26CE68C10AB1A1CD114F986, _stringLiteralCA3B233FB1C2B41D56812CB0C84222E02544D1BE, NULL);
	}

IL_0053:
	{
		double L_3 = __this->___maxAngle;
		if ((((double)L_3) == ((double)(0.0))))
		{
			goto IL_00b0;
		}
	}
	{
		double L_4 = __this->___maxAngle;
		if ((((double)L_4) < ((double)(60.0))))
		{
			goto IL_0086;
		}
	}
	{
		double L_5 = __this->___maxAngle;
		if ((!(((double)L_5) > ((double)(180.0)))))
		{
			goto IL_00b0;
		}
	}

IL_0086:
	{
		__this->___maxAngle = (0.0);
		__this->___quality = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_6;
		L_6 = Log_get_Instance_m51B55BACA0FE280A5D543E20FB1D1044E4F292DD_inline(NULL);
		NullCheck(L_6);
		Log_Warning_mCA06B5AB008E60237F59B57632C7488B394D99AD(L_6, _stringLiteralC336876A413E1AA69317ECC900705FD5E0D1455D, _stringLiteralCA3B233FB1C2B41D56812CB0C84222E02544D1BE, NULL);
	}

IL_00b0:
	{
		bool L_7;
		L_7 = Behavior_get_Poly_mD0F8B91B347E55E51EF5C6923B75930FB136C768_inline(__this, NULL);
		if (L_7)
		{
			G_B10_0 = __this;
			goto IL_00c9;
		}
		G_B8_0 = __this;
	}
	{
		bool L_8;
		L_8 = Behavior_get_Quality_mD3B41A309FF03A090757F6F5CEBB054D1BC11D42_inline(__this, NULL);
		if (L_8)
		{
			G_B10_0 = G_B8_0;
			goto IL_00c9;
		}
		G_B9_0 = G_B8_0;
	}
	{
		bool L_9;
		L_9 = Behavior_get_Convex_m789187058403856EA7ACCF71604D824A328B566A_inline(__this, NULL);
		G_B11_0 = ((int32_t)(L_9));
		G_B11_1 = G_B9_0;
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_00ca:
	{
		NullCheck(G_B11_1);
		G_B11_1->___useSegments = (bool)G_B11_0;
		double L_10;
		L_10 = Behavior_get_MinAngle_mE4A7981E927474981B472F51145031C4A783E210_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = cos(((double)(((double)il2cpp_codegen_multiply(L_10, (3.1415926535897931)))/(180.0))));
		__this->___goodAngle = L_11;
		double L_12;
		L_12 = Behavior_get_MaxAngle_mE6A300F98A9FBC8161F1C427376DE4BF8BCCB804_inline(__this, NULL);
		double L_13;
		L_13 = cos(((double)(((double)il2cpp_codegen_multiply(L_12, (3.1415926535897931)))/(180.0))));
		__this->___maxGoodAngle = L_13;
		double L_14 = __this->___goodAngle;
		if ((!(((double)L_14) == ((double)(1.0)))))
		{
			goto IL_013b;
		}
	}
	{
		__this->___offconstant = (0.0);
		goto IL_0171;
	}

IL_013b:
	{
		double L_15 = __this->___goodAngle;
		double L_16 = __this->___goodAngle;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = sqrt(((double)(((double)il2cpp_codegen_add((1.0), L_15))/((double)il2cpp_codegen_subtract((1.0), L_16)))));
		__this->___offconstant = ((double)il2cpp_codegen_multiply((0.47499999999999998), L_17));
	}

IL_0171:
	{
		double L_18 = __this->___goodAngle;
		double L_19 = __this->___goodAngle;
		__this->___goodAngle = ((double)il2cpp_codegen_multiply(L_18, L_19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_NoExact_mC43C76012324A8E187CBAD28C6D2D93D25E30BD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_StaticFields*)il2cpp_codegen_static_fields_for(Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_il2cpp_TypeInfo_var))->___U3CNoExactU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_Quality_mD3B41A309FF03A090757F6F5CEBB054D1BC11D42 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___quality;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Behavior_get_MinAngle_mE4A7981E927474981B472F51145031C4A783E210 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___minAngle;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Behavior_get_MaxAngle_mE6A300F98A9FBC8161F1C427376DE4BF8BCCB804 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___maxAngle;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_Poly_mD0F8B91B347E55E51EF5C6923B75930FB136C768 (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___poly;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_Convex_m789187058403856EA7ACCF71604D824A328B566A (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___convex;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m1EB10F6C8DAA21CF0C894EF9EB8D9F60426852E9 (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__0_0_m1D8C9A637AEAFC79C4AC62442968A996033F974A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__0_1_mCF03935E91335DC697F2AF46DC5D63D7D9C7FF43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* G_B2_0 = NULL;
	Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* G_B2_1 = NULL;
	Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* G_B1_0 = NULL;
	Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* G_B1_1 = NULL;
	Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* G_B4_0 = NULL;
	Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* G_B4_1 = NULL;
	Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* G_B4_2 = NULL;
	Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* G_B3_0 = NULL;
	Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* G_B3_1 = NULL;
	Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* G_B3_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_0 = ((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__0_0;
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* L_2 = ((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_3 = (Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160*)il2cpp_codegen_object_new(Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160_il2cpp_TypeInfo_var);
		Func_1__ctor_m4419DB750F2DAEB455C710829DCDC5DE2147FA3F(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__0_0_m1D8C9A637AEAFC79C4AC62442968A996033F974A_RuntimeMethod_var), NULL);
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_4 = L_3;
		((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__0_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__0_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_5 = ((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__0_1;
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			goto IL_003f;
		}
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* L_7 = ((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_8 = (Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039*)il2cpp_codegen_object_new(Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039_il2cpp_TypeInfo_var);
		Func_1__ctor_m7EC02F20D00A51E54AFAFA8A9AAC7BFF84CEAF93(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__0_1_mCF03935E91335DC697F2AF46DC5D63D7D9C7FF43_RuntimeMethod_var), NULL);
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_9 = L_8;
		((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__0_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_003f:
	{
		Configuration__ctor_m72C8357AF5609A2150BED9ED85F5A3E6D4EF840E(G_B4_2, G_B4_1, G_B4_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m72C8357AF5609A2150BED9ED85F5A3E6D4EF840E (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* ___0_predicates, Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* ___1_trianglePool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__2_0_mD5C7D648BD65EA7DCAE7504B34C6B1CAB0F2BE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* G_B2_0 = NULL;
	Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* G_B2_1 = NULL;
	Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* G_B1_0 = NULL;
	Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_0 = ___0_predicates;
		Configuration_set_Predicates_m0B661EF6339D4AA58D064A484ABFE3BB1C220C22_inline(__this, L_0, NULL);
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_1 = ___1_trianglePool;
		Configuration_set_TrianglePool_m9495BAAD74D5DF18605052BC024710291B0A5AA4_inline(__this, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_2 = ((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__2_0;
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0034;
		}
		G_B1_0 = L_3;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* L_4 = ((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_5 = (Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9*)il2cpp_codegen_object_new(Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9_il2cpp_TypeInfo_var);
		Func_1__ctor_m1F6CAD6ED0A1FCA64D92B6D037743B703C4C0EC4(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__2_0_mD5C7D648BD65EA7DCAE7504B34C6B1CAB0F2BE95_RuntimeMethod_var), NULL);
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_6 = L_5;
		((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__2_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9__2_0), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0034:
	{
		NullCheck(G_B2_1);
		Configuration_set_RandomSource_m203915F9F68522C9B58C902DFC5ABBDF46B6AA3B_inline(G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* Configuration_get_Predicates_m1600AFDB5D569A2D0391588C66AD759B6B84C002 (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) 
{
	{
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_0 = __this->___U3CPredicatesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_Predicates_m0B661EF6339D4AA58D064A484ABFE3BB1C220C22 (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_0 = ___0_value;
		__this->___U3CPredicatesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPredicatesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* Configuration_get_TrianglePool_mA5E6B1A688AD5DB25E7CFC0D848E1BC6373B8AE6 (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_0 = __this->___U3CTrianglePoolU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_TrianglePool_m9495BAAD74D5DF18605052BC024710291B0A5AA4 (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_0 = ___0_value;
		__this->___U3CTrianglePoolU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrianglePoolU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* Configuration_get_RandomSource_m8F3C7EF0109F4ED55F322CA1B7DD2621F0C9DADB (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) 
{
	{
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_0 = __this->___U3CRandomSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_set_RandomSource_m203915F9F68522C9B58C902DFC5ABBDF46B6AA3B (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_0 = ___0_value;
		__this->___U3CRandomSourceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRandomSourceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF6B3552DBBD482347C94075122EC37F7E7DA0124 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* L_0 = (U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D*)il2cpp_codegen_object_new(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m778E0306B8AEEBFFB041B8F8C67049DF26C48109(L_0, NULL);
		((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m778E0306B8AEEBFFB041B8F8C67049DF26C48109 (U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__0_0_m1D8C9A637AEAFC79C4AC62442968A996033F974A (U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* L_0;
		L_0 = RobustPredicates_get_Default_m3265FE6D57B4AA3D1BCCE5230684ED67FB6B8578(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* U3CU3Ec_U3C_ctorU3Eb__0_1_mCF03935E91335DC697F2AF46DC5D63D7D9C7FF43 (U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_0 = (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26*)il2cpp_codegen_object_new(TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26_il2cpp_TypeInfo_var);
		TrianglePool__ctor_m7725BDC9C1B3AEDBC52E65A054793CE99CDBD943(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* U3CU3Ec_U3C_ctorU3Eb__2_0_mD5C7D648BD65EA7DCAE7504B34C6B1CAB0F2BE95 (U3CU3Ec_tFAF1A81C69771EDE3CC81A5E09471013CC630A9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogItem__ctor_m3D7A8EAE10B72F2F12BD711C9E8804E5BFFF9D1E (LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF* __this, int32_t ___0_level, String_t* ___1_message, String_t* ___2_details, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___time = L_0;
		int32_t L_1 = ___0_level;
		__this->___level = L_1;
		String_t* L_2 = ___1_message;
		__this->___message = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)L_2);
		String_t* L_3 = ___2_details;
		__this->___details = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___details), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_get_Verbose_m31AF16B244E9393DD7F12128A0A2D2D84FC7A487 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		bool L_0 = ((Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_StaticFields*)il2cpp_codegen_static_fields_for(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var))->___U3CVerboseU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__cctor_m61AE4B56648EC050402561F442B2F818A34B12AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_0 = (Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7*)il2cpp_codegen_object_new(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		Log__ctor_m940DA4E7372D5A08E3F2690CC689C69EC3D1AE6D(L_0, NULL);
		((Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_StaticFields*)il2cpp_codegen_static_fields_for(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var))->___instance = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_StaticFields*)il2cpp_codegen_static_fields_for(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var))->___instance), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m940DA4E7372D5A08E3F2690CC689C69EC3D1AE6D (Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m071A83AB004592E003F1ABDC27528F3F296666F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867* L_0 = (List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867*)il2cpp_codegen_object_new(List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867_il2cpp_TypeInfo_var);
		List_1__ctor_m071A83AB004592E003F1ABDC27528F3F296666F2(L_0, List_1__ctor_m071A83AB004592E003F1ABDC27528F3F296666F2_RuntimeMethod_var);
		__this->___data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* Log_get_Instance_m51B55BACA0FE280A5D543E20FB1D1044E4F292DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_0 = ((Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_StaticFields*)il2cpp_codegen_static_fields_for(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var))->___instance;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warning_mCA06B5AB008E60237F59B57632C7488B394D99AD (Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* __this, String_t* ___0_message, String_t* ___1_details, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867* L_0 = __this->___data;
		String_t* L_1 = ___0_message;
		String_t* L_2 = ___1_details;
		LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF* L_3 = (LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF*)il2cpp_codegen_object_new(LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF_il2cpp_TypeInfo_var);
		LogItem__ctor_m3D7A8EAE10B72F2F12BD711C9E8804E5BFFF9D1E(L_3, 1, L_1, L_2, NULL);
		NullCheck(L_0);
		List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_inline(L_0, L_3, List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m85C77CCCFEE35DA870481BBB41148D0D9961190E (Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* __this, String_t* ___0_message, String_t* ___1_details, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t18DA74054F97720DE0F8762999BE3EE3306EC867* L_0 = __this->___data;
		String_t* L_1 = ___0_message;
		String_t* L_2 = ___1_details;
		LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF* L_3 = (LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF*)il2cpp_codegen_object_new(LogItem_t2D214503CD080FC7541724D9A4E7E1DF5760B1BF_il2cpp_TypeInfo_var);
		LogItem__ctor_m3D7A8EAE10B72F2F12BD711C9E8804E5BFFF9D1E(L_3, 2, L_1, L_2, NULL);
		NullCheck(L_0);
		List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_inline(L_0, L_3, List_1_Add_mD1D43EA3E225469E860EB5B2319ACC098E122600_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mesh_get_Vertices_m619EF02519DC5F95B7886457B864898FC6BAFB8D (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m4A1B5F9B359EB5DA41A9F78C15D9C70364206EB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* L_0 = __this->___vertices;
		NullCheck(L_0);
		ValueCollection_tEB81803BA6476FE23F5B39953A507866A58FD861* L_1;
		L_1 = Dictionary_2_get_Values_m4A1B5F9B359EB5DA41A9F78C15D9C70364206EB5(L_0, Dictionary_2_get_Values_m4A1B5F9B359EB5DA41A9F78C15D9C70364206EB5_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mesh_get_Triangles_m0BDEAD70EF2FB9B07825304B11ECFDC205440E19 (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, const RuntimeMethod* method) 
{
	{
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_0 = __this->___triangles;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Initialize_m6DC89F10F7AFC51122F96DF0629C3AB153B2B3A2 (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_0 = (SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7*)il2cpp_codegen_object_new(SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7_il2cpp_TypeInfo_var);
		SubSegment__ctor_m999C9CBAAB99296C70836DEB8C73B7316B301F9E(L_0, NULL);
		__this->___dummysub = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dummysub), (void*)L_0);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_1 = __this->___dummysub;
		NullCheck(L_1);
		L_1->___hash = (-1);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_2 = __this->___dummysub;
		NullCheck(L_2);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_3 = L_2->___subsegs;
		NullCheck(L_3);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_4 = __this->___dummysub;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___seg = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___seg), (void*)L_4);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_5 = __this->___dummysub;
		NullCheck(L_5);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_6 = L_5->___subsegs;
		NullCheck(L_6);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_7 = __this->___dummysub;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___seg = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___seg), (void*)L_7);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_8 = (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)il2cpp_codegen_object_new(Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0_il2cpp_TypeInfo_var);
		Triangle__ctor_m147CFD45282D21024F2E525E653C8FEDA44E5601(L_8, NULL);
		__this->___dummytri = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dummytri), (void*)L_8);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_9 = __this->___dummytri;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_10 = __this->___dummytri;
		int32_t L_11 = (-1);
		V_0 = L_11;
		NullCheck(L_10);
		L_10->___id = L_11;
		int32_t L_12 = V_0;
		NullCheck(L_9);
		L_9->___hash = L_12;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_13 = __this->___dummytri;
		NullCheck(L_13);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_14 = L_13->___neighbors;
		NullCheck(L_14);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_15 = __this->___dummytri;
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tri = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tri), (void*)L_15);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_16 = __this->___dummytri;
		NullCheck(L_16);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_17 = L_16->___neighbors;
		NullCheck(L_17);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_18 = __this->___dummytri;
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___tri = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___tri), (void*)L_18);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_19 = __this->___dummytri;
		NullCheck(L_19);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_20 = L_19->___neighbors;
		NullCheck(L_20);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_21 = __this->___dummytri;
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___tri = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___tri), (void*)L_21);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_22 = __this->___dummytri;
		NullCheck(L_22);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_23 = L_22->___subsegs;
		NullCheck(L_23);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_24 = __this->___dummysub;
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___seg = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___seg), (void*)L_24);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_25 = __this->___dummytri;
		NullCheck(L_25);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_26 = L_25->___subsegs;
		NullCheck(L_26);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_27 = __this->___dummysub;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___seg = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___seg), (void*)L_27);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_28 = __this->___dummytri;
		NullCheck(L_28);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_29 = L_28->___subsegs;
		NullCheck(L_29);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_30 = __this->___dummysub;
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___seg = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___seg), (void*)L_30);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mB808D1717405B7736D7E661CD47645BC158D792F (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* ___0_config, RuntimeObject* ___1_points, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m21014E3F7613D9969589ABFF5138C7721988CB13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m63C1BFB06BDF5FE6E59BC60E9049F5F1BC866AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3BBA22A444B359FA229782AE284F8D4643AEC39D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC7328951EEF61D7496206B721600C0374F41BB99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m78894FE569B83AA9EAC9C1793BED09D5EA632B8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_0;
		L_0 = Log_get_Instance_m51B55BACA0FE280A5D543E20FB1D1044E4F292DD_inline(NULL);
		__this->___logger = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logger), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Mesh_Initialize_m6DC89F10F7AFC51122F96DF0629C3AB153B2B3A2(__this, NULL);
		Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* L_1 = (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5*)il2cpp_codegen_object_new(Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_il2cpp_TypeInfo_var);
		Behavior__ctor_mB1EEDBB5B9D30839BA7E45537429AD561704B994(L_1, (bool)0, (20.0), NULL);
		__this->___behavior = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___behavior), (void*)L_1);
		RuntimeObject* L_2 = ___1_points;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC_il2cpp_TypeInfo_var, L_2);
		Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* L_4 = (Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68*)il2cpp_codegen_object_new(Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m21014E3F7613D9969589ABFF5138C7721988CB13(L_4, L_3, Dictionary_2__ctor_m21014E3F7613D9969589ABFF5138C7721988CB13_RuntimeMethod_var);
		__this->___vertices = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices), (void*)L_4);
		Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D* L_5 = (Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D*)il2cpp_codegen_object_new(Dictionary_2_t517E4AF8E499D9A0BC37CF8F7FF66D4E4C757C5D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m63C1BFB06BDF5FE6E59BC60E9049F5F1BC866AF8(L_5, Dictionary_2__ctor_m63C1BFB06BDF5FE6E59BC60E9049F5F1BC866AF8_RuntimeMethod_var);
		__this->___subsegs = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subsegs), (void*)L_5);
		Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* L_6 = ___0_config;
		NullCheck(L_6);
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_7;
		L_7 = Configuration_get_TrianglePool_mA5E6B1A688AD5DB25E7CFC0D848E1BC6373B8AE6_inline(L_6, NULL);
		NullCheck(L_7);
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_8;
		L_8 = Func_1_Invoke_mA0B468DAD0483E6838B9508F6459B3F52AA3B334_inline(L_7, NULL);
		__this->___triangles = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles), (void*)L_8);
		Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476* L_9 = (Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476*)il2cpp_codegen_object_new(Stack_1_t5D48C608FED67648E51F0B948136ED744F2E2476_il2cpp_TypeInfo_var);
		Stack_1__ctor_m78894FE569B83AA9EAC9C1793BED09D5EA632B8B(L_9, Stack_1__ctor_m78894FE569B83AA9EAC9C1793BED09D5EA632B8B_RuntimeMethod_var);
		__this->___flipstack = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___flipstack), (void*)L_9);
		List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB* L_10 = (List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB*)il2cpp_codegen_object_new(List_1_tD732201ED557A480950C2BDB194F84D5362D5EDB_il2cpp_TypeInfo_var);
		List_1__ctor_mC7328951EEF61D7496206B721600C0374F41BB99(L_10, List_1__ctor_mC7328951EEF61D7496206B721600C0374F41BB99_RuntimeMethod_var);
		__this->___holes = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___holes), (void*)L_10);
		List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970* L_11 = (List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970*)il2cpp_codegen_object_new(List_1_t57934DC836D756F840776FDDCF58EC4B7C5B8970_il2cpp_TypeInfo_var);
		List_1__ctor_m3BBA22A444B359FA229782AE284F8D4643AEC39D(L_11, List_1__ctor_m3BBA22A444B359FA229782AE284F8D4643AEC39D_RuntimeMethod_var);
		__this->___regions = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regions), (void*)L_11);
		__this->___steinerleft = (-1);
		Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* L_12 = ___0_config;
		NullCheck(L_12);
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_13;
		L_13 = Configuration_get_Predicates_m1600AFDB5D569A2D0391588C66AD759B6B84C002_inline(L_12, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = Func_1_Invoke_m6C6CC022F85F99F7553FE19BF8F8454B013551F5_inline(L_13, NULL);
		__this->___predicates = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicates), (void*)L_14);
		RuntimeObject* L_15 = __this->___predicates;
		Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* L_16 = ___0_config;
		NullCheck(L_16);
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_17;
		L_17 = Configuration_get_RandomSource_m8F3C7EF0109F4ED55F322CA1B7DD2621F0C9DADB_inline(L_16, NULL);
		NullCheck(L_17);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_18;
		L_18 = Func_1_Invoke_m5746D6F331CA3815619BE1B25219AE47DD5C2A59_inline(L_17, NULL);
		TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F* L_19 = (TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F*)il2cpp_codegen_object_new(TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F_il2cpp_TypeInfo_var);
		TriangleLocator__ctor_mF2C005195D13BAFF91E2290504027EF6DF2C7C71(L_19, __this, L_15, L_18, NULL);
		__this->___locator = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___locator), (void*)L_19);
		RuntimeObject* L_20 = ___1_points;
		Mesh_TransferNodes_m729ADB3D4B4D06C7EE2B597FD94F3E1E2674D61D(__this, L_20, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_TransferNodes_m729ADB3D4B4D06C7EE2B597FD94F3E1E2674D61D (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, RuntimeObject* ___0_points, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m242F202630910A2E40087522B54C1736D3703287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3629981044B583577D35ABBCA202E1858A28540D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t654A98D961D5287E7A9044BBEFF8B75507002473_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tF892A4189DF4D0870C278FE344AD94F2418F3745_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject* L_0 = ___0_points;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC_il2cpp_TypeInfo_var, L_0);
		__this->___invertices = L_1;
		__this->___mesh_dim = 2;
		Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61* L_2 = (Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61*)il2cpp_codegen_object_new(Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61_il2cpp_TypeInfo_var);
		Rectangle__ctor_m1DF6D4DDA6EF107A3D35C8763A6A0DC90DBE1916(L_2, NULL);
		__this->___bounds = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bounds), (void*)L_2);
		int32_t L_3 = __this->___invertices;
		if ((((int32_t)L_3) >= ((int32_t)3)))
		{
			goto IL_0047;
		}
	}
	{
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_4 = __this->___logger;
		NullCheck(L_4);
		Log_Error_m85C77CCCFEE35DA870481BBB41148D0D9961190E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral950A1778E213AC1D3E8C01967A940E21CDE3CFB0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral545555946B54695BF600E149072998C05ECCF2FF)), NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral950A1778E213AC1D3E8C01967A940E21CDE3CFB0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mesh_TransferNodes_m729ADB3D4B4D06C7EE2B597FD94F3E1E2674D61D_RuntimeMethod_var)));
	}

IL_0047:
	{
		RuntimeObject* L_6 = ___0_points;
		NullCheck(L_6);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_7;
		L_7 = InterfaceFuncInvoker1< Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*, int32_t >::Invoke(0, IList_1_tF892A4189DF4D0870C278FE344AD94F2418F3745_il2cpp_TypeInfo_var, L_6, 0);
		NullCheck(L_7);
		int32_t L_8 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_7)->___id;
		RuntimeObject* L_9 = ___0_points;
		NullCheck(L_9);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_10;
		L_10 = InterfaceFuncInvoker1< Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*, int32_t >::Invoke(0, IList_1_tF892A4189DF4D0870C278FE344AD94F2418F3745_il2cpp_TypeInfo_var, L_9, 1);
		NullCheck(L_10);
		int32_t L_11 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_10)->___id;
		V_0 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		RuntimeObject* L_12 = ___0_points;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t3629981044B583577D35ABBCA202E1858A28540D_il2cpp_TypeInfo_var, L_12);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e7:
			{
				{
					RuntimeObject* L_14 = V_1;
					if (!L_14)
					{
						goto IL_00f0;
					}
				}
				{
					RuntimeObject* L_15 = V_1;
					NullCheck(L_15);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
				}

IL_00f0:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00dd_1;
			}

IL_006e_1:
			{
				RuntimeObject* L_16 = V_1;
				NullCheck(L_16);
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_17;
				L_17 = InterfaceFuncInvoker0< Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* >::Invoke(0, IEnumerator_1_t654A98D961D5287E7A9044BBEFF8B75507002473_il2cpp_TypeInfo_var, L_16);
				V_2 = L_17;
				bool L_18 = V_0;
				if (!L_18)
				{
					goto IL_009f_1;
				}
			}
			{
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_19 = V_2;
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_20 = V_2;
				NullCheck(L_20);
				int32_t L_21 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_20)->___id;
				NullCheck(L_19);
				L_19->___hash = L_21;
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_22 = V_2;
				NullCheck(L_22);
				int32_t L_23 = L_22->___hash;
				int32_t L_24 = __this->___hash_vtx;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_25;
				L_25 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, NULL);
				__this->___hash_vtx = L_25;
				goto IL_00bf_1;
			}

IL_009f_1:
			{
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_26 = V_2;
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_27 = V_2;
				int32_t L_28 = __this->___hash_vtx;
				V_3 = L_28;
				int32_t L_29 = V_3;
				__this->___hash_vtx = ((int32_t)il2cpp_codegen_add(L_29, 1));
				int32_t L_30 = V_3;
				int32_t L_31 = L_30;
				V_3 = L_31;
				NullCheck(L_27);
				((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_27)->___id = L_31;
				int32_t L_32 = V_3;
				NullCheck(L_26);
				L_26->___hash = L_32;
			}

IL_00bf_1:
			{
				Dictionary_2_t61F1B648DE42650822ACB084106605DE94B14F68* L_33 = __this->___vertices;
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_34 = V_2;
				NullCheck(L_34);
				int32_t L_35 = L_34->___hash;
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_36 = V_2;
				NullCheck(L_33);
				Dictionary_2_Add_m242F202630910A2E40087522B54C1736D3703287(L_33, L_35, L_36, Dictionary_2_Add_m242F202630910A2E40087522B54C1736D3703287_RuntimeMethod_var);
				Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61* L_37 = __this->___bounds;
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_38 = V_2;
				NullCheck(L_37);
				Rectangle_Expand_m75E7259EAA1A46767050383841A6B2978357EAB2(L_37, L_38, NULL);
			}

IL_00dd_1:
			{
				RuntimeObject* L_39 = V_1;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_00f1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6 (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_newotri, const RuntimeMethod* method) 
{
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* V_0 = NULL;
	{
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_0 = __this->___triangles;
		NullCheck(L_0);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1;
		L_1 = TrianglePool_Get_m3D80052DB2C64EB526874C5E15CF25B6977895D3(L_0, NULL);
		V_0 = L_1;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_2 = V_0;
		NullCheck(L_2);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_3 = L_2->___subsegs;
		NullCheck(L_3);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_4 = __this->___dummysub;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___seg = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___seg), (void*)L_4);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_5 = V_0;
		NullCheck(L_5);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_6 = L_5->___subsegs;
		NullCheck(L_6);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_7 = __this->___dummysub;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___seg = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___seg), (void*)L_7);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_8 = V_0;
		NullCheck(L_8);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_9 = L_8->___subsegs;
		NullCheck(L_9);
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_10 = __this->___dummysub;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___seg = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___seg), (void*)L_10);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_11 = V_0;
		NullCheck(L_11);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_12 = L_11->___neighbors;
		NullCheck(L_12);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_13 = __this->___dummytri;
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tri = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tri), (void*)L_13);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_14 = V_0;
		NullCheck(L_14);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_15 = L_14->___neighbors;
		NullCheck(L_15);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_16 = __this->___dummytri;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___tri = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___tri), (void*)L_16);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_17 = V_0;
		NullCheck(L_17);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_18 = L_17->___neighbors;
		NullCheck(L_18);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_19 = __this->___dummytri;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___tri = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___tri), (void*)L_19);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_20 = ___0_newotri;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_21 = V_0;
		L_20->___tri = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___tri), (void*)L_21);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_22 = ___0_newotri;
		L_22->___orient = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_TriangleDealloc_m17D9BEE05F496D0946C260F36B8900758A4B4438 (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_dyingtriangle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = ___0_dyingtriangle;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Kill_m6FE3894E428744D4E7DE83CF449C041053B6045C(L_0, NULL);
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_1 = __this->___triangles;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_2 = ___0_dyingtriangle;
		NullCheck(L_1);
		TrianglePool_Release_m63F982F11B32F7BF5662E2274D8686ADE8B07369(L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* RobustPredicates_get_Default_m3265FE6D57B4AA3D1BCCE5230684ED67FB6B8578 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* L_0 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->____default;
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___creationLock;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0033;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0033:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
				RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* L_5 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->____default;
				if (L_5)
				{
					goto IL_0028_1;
				}
			}
			{
				RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* L_6 = (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8*)il2cpp_codegen_object_new(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
				RobustPredicates__ctor_m24406078CAB821C991BDA03B0AB7DA2D8E429897(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
				((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->____default = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->____default), (void*)L_6);
			}

IL_0028_1:
			{
				goto IL_0034;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* L_7 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->____default;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates__cctor_mE38B6546BD6C8AC599159320AD874C9233808AB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___creationLock = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___creationLock), (void*)L_0);
		V_3 = (bool)1;
		V_0 = (0.5);
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon = (1.0);
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter = (1.0);
		V_1 = (1.0);
	}

IL_003c:
	{
		double L_1 = V_1;
		V_2 = L_1;
		double L_2 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_3 = V_0;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon = ((double)il2cpp_codegen_multiply(L_2, L_3));
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		double L_5 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter = ((double)il2cpp_codegen_multiply(L_5, (2.0)));
	}

IL_0061:
	{
		bool L_6 = V_3;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		double L_7 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		V_1 = ((double)il2cpp_codegen_add((1.0), L_7));
		double L_8 = V_1;
		if ((((double)L_8) == ((double)(1.0))))
		{
			goto IL_0086;
		}
	}
	{
		double L_9 = V_1;
		double L_10 = V_2;
		if ((!(((double)L_9) == ((double)L_10))))
		{
			goto IL_003c;
		}
	}

IL_0086:
	{
		double L_11 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter = ((double)il2cpp_codegen_add(L_11, (1.0)));
		double L_12 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_13 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___resulterrbound = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((3.0), ((double)il2cpp_codegen_multiply((8.0), L_12)))), L_13));
		double L_14 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_15 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___ccwerrboundA = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((3.0), ((double)il2cpp_codegen_multiply((16.0), L_14)))), L_15));
		double L_16 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_17 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___ccwerrboundB = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((2.0), ((double)il2cpp_codegen_multiply((12.0), L_16)))), L_17));
		double L_18 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_19 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_20 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___ccwerrboundC = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((9.0), ((double)il2cpp_codegen_multiply((64.0), L_18)))), L_19)), L_20));
		double L_21 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_22 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___iccerrboundA = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((10.0), ((double)il2cpp_codegen_multiply((96.0), L_21)))), L_22));
		double L_23 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_24 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___iccerrboundB = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((4.0), ((double)il2cpp_codegen_multiply((48.0), L_23)))), L_24));
		double L_25 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_26 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		double L_27 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___epsilon;
		((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___iccerrboundC = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((44.0), ((double)il2cpp_codegen_multiply((576.0), L_25)))), L_26)), L_27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates__ctor_m24406078CAB821C991BDA03B0AB7DA2D8E429897 (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RobustPredicates_AllocateWorkspace_m0029D102DA7E013E4F0B4A82DD98509161759EE9(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_CounterClockwise_m02C7692C626DA3BA536C2D1C9866F02B146C852E (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_pa, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_pb, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___2_pc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CounterClockwiseCount;
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CounterClockwiseCount = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_1 = ___0_pa;
		NullCheck(L_1);
		double L_2 = L_1->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_3 = ___2_pc;
		NullCheck(L_3);
		double L_4 = L_3->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_5 = ___1_pb;
		NullCheck(L_5);
		double L_6 = L_5->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_7 = ___2_pc;
		NullCheck(L_7);
		double L_8 = L_7->___y;
		V_0 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_2, L_4)), ((double)il2cpp_codegen_subtract(L_6, L_8))));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_9 = ___0_pa;
		NullCheck(L_9);
		double L_10 = L_9->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_11 = ___2_pc;
		NullCheck(L_11);
		double L_12 = L_11->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_13 = ___1_pb;
		NullCheck(L_13);
		double L_14 = L_13->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_15 = ___2_pc;
		NullCheck(L_15);
		double L_16 = L_15->___x;
		V_1 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_10, L_12)), ((double)il2cpp_codegen_subtract(L_14, L_16))));
		double L_17 = V_0;
		double L_18 = V_1;
		V_2 = ((double)il2cpp_codegen_subtract(L_17, L_18));
		bool L_19;
		L_19 = Behavior_get_NoExact_mC43C76012324A8E187CBAD28C6D2D93D25E30BD1_inline(NULL);
		if (!L_19)
		{
			goto IL_0052;
		}
	}
	{
		double L_20 = V_2;
		return L_20;
	}

IL_0052:
	{
		double L_21 = V_0;
		if ((!(((double)L_21) > ((double)(0.0)))))
		{
			goto IL_0072;
		}
	}
	{
		double L_22 = V_1;
		if ((!(((double)L_22) <= ((double)(0.0)))))
		{
			goto IL_006c;
		}
	}
	{
		double L_23 = V_2;
		return L_23;
	}

IL_006c:
	{
		double L_24 = V_0;
		double L_25 = V_1;
		V_3 = ((double)il2cpp_codegen_add(L_24, L_25));
		goto IL_0095;
	}

IL_0072:
	{
		double L_26 = V_0;
		if ((!(((double)L_26) < ((double)(0.0)))))
		{
			goto IL_0093;
		}
	}
	{
		double L_27 = V_1;
		if ((!(((double)L_27) >= ((double)(0.0)))))
		{
			goto IL_008c;
		}
	}
	{
		double L_28 = V_2;
		return L_28;
	}

IL_008c:
	{
		double L_29 = V_0;
		double L_30 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(((-L_29)), L_30));
		goto IL_0095;
	}

IL_0093:
	{
		double L_31 = V_2;
		return L_31;
	}

IL_0095:
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_32 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___ccwerrboundA;
		double L_33 = V_3;
		V_4 = ((double)il2cpp_codegen_multiply(L_32, L_33));
		double L_34 = V_2;
		double L_35 = V_4;
		if ((((double)L_34) >= ((double)L_35)))
		{
			goto IL_00a9;
		}
	}
	{
		double L_36 = V_2;
		double L_37 = V_4;
		if ((!(((double)((-L_36))) >= ((double)L_37))))
		{
			goto IL_00ab;
		}
	}

IL_00a9:
	{
		double L_38 = V_2;
		return L_38;
	}

IL_00ab:
	{
		il2cpp_codegen_runtime_class_init_inline(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var);
		int64_t L_39 = ((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CounterClockwiseAdaptCount;
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CounterClockwiseAdaptCount = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)1)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_40 = ___0_pa;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_41 = ___1_pb;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_42 = ___2_pc;
		double L_43 = V_3;
		double L_44;
		L_44 = RobustPredicates_CounterClockwiseAdapt_m06897DE50282B36BA8617C612FE984071925967F(__this, L_40, L_41, L_42, L_43, NULL);
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_InCircle_m04F74D69BC5694EEF2B3ABFCC93F75FA882F3357 (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_pa, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_pb, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___2_pc, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___3_pd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var);
		int64_t L_0 = ((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___InCircleCount;
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___InCircleCount = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_1 = ___0_pa;
		NullCheck(L_1);
		double L_2 = L_1->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_3 = ___3_pd;
		NullCheck(L_3);
		double L_4 = L_3->___x;
		V_0 = ((double)il2cpp_codegen_subtract(L_2, L_4));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_5 = ___1_pb;
		NullCheck(L_5);
		double L_6 = L_5->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_7 = ___3_pd;
		NullCheck(L_7);
		double L_8 = L_7->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_9 = ___2_pc;
		NullCheck(L_9);
		double L_10 = L_9->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_11 = ___3_pd;
		NullCheck(L_11);
		double L_12 = L_11->___x;
		V_1 = ((double)il2cpp_codegen_subtract(L_10, L_12));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_13 = ___0_pa;
		NullCheck(L_13);
		double L_14 = L_13->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_15 = ___3_pd;
		NullCheck(L_15);
		double L_16 = L_15->___y;
		V_2 = ((double)il2cpp_codegen_subtract(L_14, L_16));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_17 = ___1_pb;
		NullCheck(L_17);
		double L_18 = L_17->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_19 = ___3_pd;
		NullCheck(L_19);
		double L_20 = L_19->___y;
		V_3 = ((double)il2cpp_codegen_subtract(L_18, L_20));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_21 = ___2_pc;
		NullCheck(L_21);
		double L_22 = L_21->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_23 = ___3_pd;
		NullCheck(L_23);
		double L_24 = L_23->___y;
		V_4 = ((double)il2cpp_codegen_subtract(L_22, L_24));
		double L_25 = ((double)il2cpp_codegen_subtract(L_6, L_8));
		double L_26 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(L_25, L_26));
		double L_27 = V_1;
		double L_28 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply(L_27, L_28));
		double L_29 = V_0;
		double L_30 = V_0;
		double L_31 = V_2;
		double L_32 = V_2;
		V_11 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_29, L_30)), ((double)il2cpp_codegen_multiply(L_31, L_32))));
		double L_33 = V_1;
		double L_34 = V_2;
		V_7 = ((double)il2cpp_codegen_multiply(L_33, L_34));
		double L_35 = V_0;
		double L_36 = V_4;
		V_8 = ((double)il2cpp_codegen_multiply(L_35, L_36));
		double L_37 = L_25;
		double L_38 = L_37;
		double L_39 = V_3;
		double L_40 = V_3;
		V_12 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_38, L_38)), ((double)il2cpp_codegen_multiply(L_39, L_40))));
		double L_41 = V_0;
		double L_42 = V_3;
		V_9 = ((double)il2cpp_codegen_multiply(L_41, L_42));
		double L_43 = V_2;
		V_10 = ((double)il2cpp_codegen_multiply(L_37, L_43));
		double L_44 = V_1;
		double L_45 = V_1;
		double L_46 = V_4;
		double L_47 = V_4;
		V_13 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_44, L_45)), ((double)il2cpp_codegen_multiply(L_46, L_47))));
		double L_48 = V_11;
		double L_49 = V_5;
		double L_50 = V_6;
		double L_51 = V_12;
		double L_52 = V_7;
		double L_53 = V_8;
		double L_54 = V_13;
		double L_55 = V_9;
		double L_56 = V_10;
		V_14 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_48, ((double)il2cpp_codegen_subtract(L_49, L_50)))), ((double)il2cpp_codegen_multiply(L_51, ((double)il2cpp_codegen_subtract(L_52, L_53)))))), ((double)il2cpp_codegen_multiply(L_54, ((double)il2cpp_codegen_subtract(L_55, L_56))))));
		bool L_57;
		L_57 = Behavior_get_NoExact_mC43C76012324A8E187CBAD28C6D2D93D25E30BD1_inline(NULL);
		if (!L_57)
		{
			goto IL_00c9;
		}
	}
	{
		double L_58 = V_14;
		return L_58;
	}

IL_00c9:
	{
		double L_59 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_60;
		L_60 = fabs(L_59);
		double L_61 = V_6;
		double L_62;
		L_62 = fabs(L_61);
		double L_63 = V_11;
		double L_64 = V_7;
		double L_65;
		L_65 = fabs(L_64);
		double L_66 = V_8;
		double L_67;
		L_67 = fabs(L_66);
		double L_68 = V_12;
		double L_69 = V_9;
		double L_70;
		L_70 = fabs(L_69);
		double L_71 = V_10;
		double L_72;
		L_72 = fabs(L_71);
		double L_73 = V_13;
		V_15 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_60, L_62)), L_63)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_65, L_67)), L_68)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_70, L_72)), L_73))));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_74 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___iccerrboundA;
		double L_75 = V_15;
		V_16 = ((double)il2cpp_codegen_multiply(L_74, L_75));
		double L_76 = V_14;
		double L_77 = V_16;
		if ((((double)L_76) > ((double)L_77)))
		{
			goto IL_011a;
		}
	}
	{
		double L_78 = V_14;
		double L_79 = V_16;
		if ((!(((double)((-L_78))) > ((double)L_79))))
		{
			goto IL_011d;
		}
	}

IL_011a:
	{
		double L_80 = V_14;
		return L_80;
	}

IL_011d:
	{
		il2cpp_codegen_runtime_class_init_inline(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var);
		int64_t L_81 = ((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___InCircleAdaptCount;
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___InCircleAdaptCount = ((int64_t)il2cpp_codegen_add(L_81, ((int64_t)1)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_82 = ___0_pa;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_83 = ___1_pb;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_84 = ___2_pc;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_85 = ___3_pd;
		double L_86 = V_15;
		double L_87;
		L_87 = RobustPredicates_InCircleAdapt_m52EEB7B22B35CE09E7B8C1B9C929489A7FDAC15F(__this, L_82, L_83, L_84, L_85, L_86, NULL);
		return L_87;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, int32_t ___0_elen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_e, int32_t ___2_flen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_f, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___4_h, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___1_e;
		NullCheck(L_0);
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_9 = L_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___3_f;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_10 = L_5;
		int32_t L_6 = 0;
		V_7 = L_6;
		V_6 = L_6;
		double L_7 = V_10;
		double L_8 = V_9;
		double L_9 = V_10;
		double L_10 = V_9;
		if ((!(((uint32_t)((((double)L_7) > ((double)L_8))? 1 : 0)) == ((uint32_t)((((double)L_9) > ((double)((-L_10))))? 1 : 0)))))
		{
			goto IL_0030;
		}
	}
	{
		double L_11 = V_9;
		V_0 = L_11;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = ___1_e;
		int32_t L_13 = V_6;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		V_6 = L_14;
		NullCheck(L_12);
		int32_t L_15 = L_14;
		double L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_9 = L_16;
		goto IL_003f;
	}

IL_0030:
	{
		double L_17 = V_10;
		V_0 = L_17;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = ___3_f;
		int32_t L_19 = V_7;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		V_7 = L_20;
		NullCheck(L_18);
		int32_t L_21 = L_20;
		double L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
	}

IL_003f:
	{
		V_8 = 0;
		int32_t L_23 = V_6;
		int32_t L_24 = ___0_elen;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_25 = V_7;
		int32_t L_26 = ___2_flen;
		if ((((int32_t)L_25) >= ((int32_t)L_26)))
		{
			goto IL_0184;
		}
	}
	{
		double L_27 = V_10;
		double L_28 = V_9;
		double L_29 = V_10;
		double L_30 = V_9;
		if ((!(((uint32_t)((((double)L_27) > ((double)L_28))? 1 : 0)) == ((uint32_t)((((double)L_29) > ((double)((-L_30))))? 1 : 0)))))
		{
			goto IL_007d;
		}
	}
	{
		double L_31 = V_9;
		double L_32 = V_0;
		V_1 = ((double)((double)il2cpp_codegen_add(L_31, L_32)));
		double L_33 = V_1;
		double L_34 = V_9;
		V_3 = ((double)il2cpp_codegen_subtract(L_33, L_34));
		double L_35 = V_0;
		double L_36 = V_3;
		V_2 = ((double)il2cpp_codegen_subtract(L_35, L_36));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = ___1_e;
		int32_t L_38 = V_6;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_6 = L_39;
		NullCheck(L_37);
		int32_t L_40 = L_39;
		double L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_9 = L_41;
		goto IL_0098;
	}

IL_007d:
	{
		double L_42 = V_10;
		double L_43 = V_0;
		V_1 = ((double)((double)il2cpp_codegen_add(L_42, L_43)));
		double L_44 = V_1;
		double L_45 = V_10;
		V_3 = ((double)il2cpp_codegen_subtract(L_44, L_45));
		double L_46 = V_0;
		double L_47 = V_3;
		V_2 = ((double)il2cpp_codegen_subtract(L_46, L_47));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48 = ___3_f;
		int32_t L_49 = V_7;
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		V_7 = L_50;
		NullCheck(L_48);
		int32_t L_51 = L_50;
		double L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_10 = L_52;
	}

IL_0098:
	{
		double L_53 = V_1;
		V_0 = L_53;
		double L_54 = V_2;
		if ((((double)L_54) == ((double)(0.0))))
		{
			goto IL_0133;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = ___4_h;
		int32_t L_56 = V_8;
		int32_t L_57 = L_56;
		V_8 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		double L_58 = V_2;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (double)L_58);
		goto IL_0133;
	}

IL_00b6:
	{
		double L_59 = V_10;
		double L_60 = V_9;
		double L_61 = V_10;
		double L_62 = V_9;
		if ((!(((uint32_t)((((double)L_59) > ((double)L_60))? 1 : 0)) == ((uint32_t)((((double)L_61) > ((double)((-L_62))))? 1 : 0)))))
		{
			goto IL_00f0;
		}
	}
	{
		double L_63 = V_0;
		double L_64 = V_9;
		V_1 = ((double)((double)il2cpp_codegen_add(L_63, L_64)));
		double L_65 = V_1;
		double L_66 = V_0;
		V_3 = ((double)((double)il2cpp_codegen_subtract(L_65, L_66)));
		double L_67 = V_1;
		double L_68 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract(L_67, L_68));
		double L_69 = V_9;
		double L_70 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract(L_69, L_70));
		double L_71 = V_0;
		double L_72 = V_4;
		double L_73 = V_5;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_71, L_72)), L_73));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_74 = ___1_e;
		int32_t L_75 = V_6;
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		V_6 = L_76;
		NullCheck(L_74);
		int32_t L_77 = L_76;
		double L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_9 = L_78;
		goto IL_011a;
	}

IL_00f0:
	{
		double L_79 = V_0;
		double L_80 = V_10;
		V_1 = ((double)((double)il2cpp_codegen_add(L_79, L_80)));
		double L_81 = V_1;
		double L_82 = V_0;
		V_3 = ((double)((double)il2cpp_codegen_subtract(L_81, L_82)));
		double L_83 = V_1;
		double L_84 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract(L_83, L_84));
		double L_85 = V_10;
		double L_86 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract(L_85, L_86));
		double L_87 = V_0;
		double L_88 = V_4;
		double L_89 = V_5;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_87, L_88)), L_89));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = ___3_f;
		int32_t L_91 = V_7;
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		V_7 = L_92;
		NullCheck(L_90);
		int32_t L_93 = L_92;
		double L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_10 = L_94;
	}

IL_011a:
	{
		double L_95 = V_1;
		V_0 = L_95;
		double L_96 = V_2;
		if ((((double)L_96) == ((double)(0.0))))
		{
			goto IL_0133;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_97 = ___4_h;
		int32_t L_98 = V_8;
		int32_t L_99 = L_98;
		V_8 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		double L_100 = V_2;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (double)L_100);
	}

IL_0133:
	{
		int32_t L_101 = V_6;
		int32_t L_102 = ___0_elen;
		if ((((int32_t)L_101) >= ((int32_t)L_102)))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_103 = V_7;
		int32_t L_104 = ___2_flen;
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0184;
	}

IL_0142:
	{
		double L_105 = V_0;
		double L_106 = V_9;
		V_1 = ((double)((double)il2cpp_codegen_add(L_105, L_106)));
		double L_107 = V_1;
		double L_108 = V_0;
		V_3 = ((double)((double)il2cpp_codegen_subtract(L_107, L_108)));
		double L_109 = V_1;
		double L_110 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract(L_109, L_110));
		double L_111 = V_9;
		double L_112 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract(L_111, L_112));
		double L_113 = V_0;
		double L_114 = V_4;
		double L_115 = V_5;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_113, L_114)), L_115));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_116 = ___1_e;
		int32_t L_117 = V_6;
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		V_6 = L_118;
		NullCheck(L_116);
		int32_t L_119 = L_118;
		double L_120 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_9 = L_120;
		double L_121 = V_1;
		V_0 = L_121;
		double L_122 = V_2;
		if ((((double)L_122) == ((double)(0.0))))
		{
			goto IL_0184;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_123 = ___4_h;
		int32_t L_124 = V_8;
		int32_t L_125 = L_124;
		V_8 = ((int32_t)il2cpp_codegen_add(L_125, 1));
		double L_126 = V_2;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (double)L_126);
	}

IL_0184:
	{
		int32_t L_127 = V_6;
		int32_t L_128 = ___0_elen;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_0142;
		}
	}
	{
		goto IL_01ce;
	}

IL_018b:
	{
		double L_129 = V_0;
		double L_130 = V_10;
		V_1 = ((double)((double)il2cpp_codegen_add(L_129, L_130)));
		double L_131 = V_1;
		double L_132 = V_0;
		V_3 = ((double)((double)il2cpp_codegen_subtract(L_131, L_132)));
		double L_133 = V_1;
		double L_134 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract(L_133, L_134));
		double L_135 = V_10;
		double L_136 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract(L_135, L_136));
		double L_137 = V_0;
		double L_138 = V_4;
		double L_139 = V_5;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_137, L_138)), L_139));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_140 = ___3_f;
		int32_t L_141 = V_7;
		int32_t L_142 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		V_7 = L_142;
		NullCheck(L_140);
		int32_t L_143 = L_142;
		double L_144 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_10 = L_144;
		double L_145 = V_1;
		V_0 = L_145;
		double L_146 = V_2;
		if ((((double)L_146) == ((double)(0.0))))
		{
			goto IL_01ce;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_147 = ___4_h;
		int32_t L_148 = V_8;
		int32_t L_149 = L_148;
		V_8 = ((int32_t)il2cpp_codegen_add(L_149, 1));
		double L_150 = V_2;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (double)L_150);
	}

IL_01ce:
	{
		int32_t L_151 = V_7;
		int32_t L_152 = ___2_flen;
		if ((((int32_t)L_151) < ((int32_t)L_152)))
		{
			goto IL_018b;
		}
	}
	{
		double L_153 = V_0;
		if ((!(((double)L_153) == ((double)(0.0)))))
		{
			goto IL_01e3;
		}
	}
	{
		int32_t L_154 = V_8;
		if (L_154)
		{
			goto IL_01ee;
		}
	}

IL_01e3:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_155 = ___4_h;
		int32_t L_156 = V_8;
		int32_t L_157 = L_156;
		V_8 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		double L_158 = V_0;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(L_157), (double)L_158);
	}

IL_01ee:
	{
		int32_t L_159 = V_8;
		return L_159;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, int32_t ___0_elen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_e, double ___2_b, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_0 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1 = ___2_b;
		double L_2 = ((double)((double)il2cpp_codegen_multiply(L_0, L_1)));
		double L_3 = ___2_b;
		V_11 = ((double)((double)il2cpp_codegen_subtract(L_2, L_3)));
		double L_4 = V_11;
		V_14 = ((double)il2cpp_codegen_subtract(L_2, L_4));
		double L_5 = ___2_b;
		double L_6 = V_14;
		V_15 = ((double)il2cpp_codegen_subtract(L_5, L_6));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___1_e;
		NullCheck(L_7);
		int32_t L_8 = 0;
		double L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___2_b;
		V_0 = ((double)((double)il2cpp_codegen_multiply(L_9, L_10)));
		double L_11 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = ___1_e;
		NullCheck(L_12);
		int32_t L_13 = 0;
		double L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		double L_15 = ((double)((double)il2cpp_codegen_multiply(L_11, L_14)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = ___1_e;
		NullCheck(L_16);
		int32_t L_17 = 0;
		double L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_11 = ((double)((double)il2cpp_codegen_subtract(L_15, L_18)));
		double L_19 = V_11;
		V_12 = ((double)il2cpp_codegen_subtract(L_15, L_19));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = ___1_e;
		NullCheck(L_20);
		int32_t L_21 = 0;
		double L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		double L_23 = V_12;
		V_13 = ((double)il2cpp_codegen_subtract(L_22, L_23));
		double L_24 = V_0;
		double L_25 = V_12;
		double L_26 = V_14;
		double L_27 = V_13;
		double L_28 = V_14;
		double L_29 = V_12;
		double L_30 = V_15;
		V_16 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_24, ((double)il2cpp_codegen_multiply(L_25, L_26)))), ((double)il2cpp_codegen_multiply(L_27, L_28)))), ((double)il2cpp_codegen_multiply(L_29, L_30))));
		double L_31 = V_13;
		double L_32 = V_15;
		double L_33 = V_16;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_31, L_32)), L_33));
		V_6 = 0;
		double L_34 = V_2;
		if ((((double)L_34) == ((double)(0.0))))
		{
			goto IL_0077;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = ___3_h;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		double L_38 = V_2;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (double)L_38);
	}

IL_0077:
	{
		V_5 = 1;
		goto IL_012a;
	}

IL_007f:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = ___1_e;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		double L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_7 = L_42;
		double L_43 = V_7;
		double L_44 = ___2_b;
		V_3 = ((double)((double)il2cpp_codegen_multiply(L_43, L_44)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_45 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_46 = V_7;
		double L_47 = ((double)((double)il2cpp_codegen_multiply(L_45, L_46)));
		double L_48 = V_7;
		V_11 = ((double)((double)il2cpp_codegen_subtract(L_47, L_48)));
		double L_49 = V_11;
		V_12 = ((double)il2cpp_codegen_subtract(L_47, L_49));
		double L_50 = V_7;
		double L_51 = V_12;
		V_13 = ((double)il2cpp_codegen_subtract(L_50, L_51));
		double L_52 = V_3;
		double L_53 = V_12;
		double L_54 = V_14;
		double L_55 = V_13;
		double L_56 = V_14;
		double L_57 = V_12;
		double L_58 = V_15;
		V_16 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_52, ((double)il2cpp_codegen_multiply(L_53, L_54)))), ((double)il2cpp_codegen_multiply(L_55, L_56)))), ((double)il2cpp_codegen_multiply(L_57, L_58))));
		double L_59 = V_13;
		double L_60 = V_15;
		double L_61 = V_16;
		V_4 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_59, L_60)), L_61));
		double L_62 = V_0;
		double L_63 = V_4;
		V_1 = ((double)((double)il2cpp_codegen_add(L_62, L_63)));
		double L_64 = V_1;
		double L_65 = V_0;
		V_8 = ((double)((double)il2cpp_codegen_subtract(L_64, L_65)));
		double L_66 = V_1;
		double L_67 = V_8;
		V_9 = ((double)il2cpp_codegen_subtract(L_66, L_67));
		double L_68 = V_4;
		double L_69 = V_8;
		V_10 = ((double)il2cpp_codegen_subtract(L_68, L_69));
		double L_70 = V_0;
		double L_71 = V_9;
		double L_72 = V_10;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_70, L_71)), L_72));
		double L_73 = V_2;
		if ((((double)L_73) == ((double)(0.0))))
		{
			goto IL_00fe;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_74 = ___3_h;
		int32_t L_75 = V_6;
		int32_t L_76 = L_75;
		V_6 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		double L_77 = V_2;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (double)L_77);
	}

IL_00fe:
	{
		double L_78 = V_3;
		double L_79 = V_1;
		V_0 = ((double)((double)il2cpp_codegen_add(L_78, L_79)));
		double L_80 = V_0;
		double L_81 = V_3;
		V_8 = ((double)il2cpp_codegen_subtract(L_80, L_81));
		double L_82 = V_1;
		double L_83 = V_8;
		V_2 = ((double)il2cpp_codegen_subtract(L_82, L_83));
		double L_84 = V_2;
		if ((((double)L_84) == ((double)(0.0))))
		{
			goto IL_0124;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_85 = ___3_h;
		int32_t L_86 = V_6;
		int32_t L_87 = L_86;
		V_6 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		double L_88 = V_2;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (double)L_88);
	}

IL_0124:
	{
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_012a:
	{
		int32_t L_90 = V_5;
		int32_t L_91 = ___0_elen;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_007f;
		}
	}
	{
		double L_92 = V_0;
		if ((!(((double)L_92) == ((double)(0.0)))))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_93 = V_6;
		if (L_93)
		{
			goto IL_014d;
		}
	}

IL_0142:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_94 = ___3_h;
		int32_t L_95 = V_6;
		int32_t L_96 = L_95;
		V_6 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		double L_97 = V_0;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (double)L_97);
	}

IL_014d:
	{
		int32_t L_98 = V_6;
		return L_98;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_Estimate_mE0D0EC6F6EDEF9EDC029E9076B485BFB38FEF604 (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, int32_t ___0_elen, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_e, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___1_e;
		NullCheck(L_0);
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		V_1 = 1;
		goto IL_0012;
	}

IL_0008:
	{
		double L_3 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___1_e;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		double L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((double)il2cpp_codegen_add(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___0_elen;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		double L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_CounterClockwiseAdapt_m06897DE50282B36BA8617C612FE984071925967F (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_pa, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_pb, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___2_pc, double ___3_detsum, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_13 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_14 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_15 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_16 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_17 = NULL;
	double V_18 = 0.0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	double V_22 = 0.0;
	double V_23 = 0.0;
	double V_24 = 0.0;
	double V_25 = 0.0;
	double V_26 = 0.0;
	double V_27 = 0.0;
	double V_28 = 0.0;
	double V_29 = 0.0;
	double V_30 = 0.0;
	double V_31 = 0.0;
	double V_32 = 0.0;
	double V_33 = 0.0;
	double V_34 = 0.0;
	double V_35 = 0.0;
	double V_36 = 0.0;
	double V_37 = 0.0;
	double G_B10_0 = 0.0;
	double G_B10_1 = 0.0;
	double G_B9_0 = 0.0;
	double G_B9_1 = 0.0;
	double G_B11_0 = 0.0;
	double G_B11_1 = 0.0;
	double G_B11_2 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_13 = L_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_14 = L_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_15 = L_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		V_16 = L_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_17 = L_4;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_5 = ___0_pa;
		NullCheck(L_5);
		double L_6 = L_5->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_7 = ___2_pc;
		NullCheck(L_7);
		double L_8 = L_7->___x;
		V_0 = ((double)((double)il2cpp_codegen_subtract(L_6, L_8)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_9 = ___1_pb;
		NullCheck(L_9);
		double L_10 = L_9->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_11 = ___2_pc;
		NullCheck(L_11);
		double L_12 = L_11->___x;
		V_2 = ((double)((double)il2cpp_codegen_subtract(L_10, L_12)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_13 = ___0_pa;
		NullCheck(L_13);
		double L_14 = L_13->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_15 = ___2_pc;
		NullCheck(L_15);
		double L_16 = L_15->___y;
		V_1 = ((double)((double)il2cpp_codegen_subtract(L_14, L_16)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_17 = ___1_pb;
		NullCheck(L_17);
		double L_18 = L_17->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_19 = ___2_pc;
		NullCheck(L_19);
		double L_20 = L_19->___y;
		V_3 = ((double)((double)il2cpp_codegen_subtract(L_18, L_20)));
		double L_21 = V_0;
		double L_22 = V_3;
		V_8 = ((double)((double)il2cpp_codegen_multiply(L_21, L_22)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_23 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_24 = V_0;
		double L_25 = ((double)((double)il2cpp_codegen_multiply(L_23, L_24)));
		double L_26 = V_0;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_25, L_26)));
		double L_27 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_25, L_27));
		double L_28 = V_0;
		double L_29 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_28, L_29));
		double L_30 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_31 = V_3;
		double L_32 = ((double)((double)il2cpp_codegen_multiply(L_30, L_31)));
		double L_33 = V_3;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_32, L_33)));
		double L_34 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_32, L_34));
		double L_35 = V_3;
		double L_36 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_35, L_36));
		double L_37 = V_8;
		double L_38 = V_31;
		double L_39 = V_33;
		double L_40 = V_32;
		double L_41 = V_33;
		double L_42 = V_31;
		double L_43 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_37, ((double)il2cpp_codegen_multiply(L_38, L_39)))), ((double)il2cpp_codegen_multiply(L_40, L_41)))), ((double)il2cpp_codegen_multiply(L_42, L_43))));
		double L_44 = V_32;
		double L_45 = V_34;
		double L_46 = V_35;
		double L_47 = V_1;
		double L_48 = V_2;
		V_9 = ((double)((double)il2cpp_codegen_multiply(L_47, L_48)));
		double L_49 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_50 = V_1;
		double L_51 = ((double)((double)il2cpp_codegen_multiply(L_49, L_50)));
		double L_52 = V_1;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_51, L_52)));
		double L_53 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_51, L_53));
		double L_54 = V_1;
		double L_55 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_54, L_55));
		double L_56 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_57 = V_2;
		double L_58 = ((double)((double)il2cpp_codegen_multiply(L_56, L_57)));
		double L_59 = V_2;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_58, L_59)));
		double L_60 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_58, L_60));
		double L_61 = V_2;
		double L_62 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_61, L_62));
		double L_63 = V_9;
		double L_64 = V_31;
		double L_65 = V_33;
		double L_66 = V_32;
		double L_67 = V_33;
		double L_68 = V_31;
		double L_69 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_63, ((double)il2cpp_codegen_multiply(L_64, L_65)))), ((double)il2cpp_codegen_multiply(L_66, L_67)))), ((double)il2cpp_codegen_multiply(L_68, L_69))));
		double L_70 = V_32;
		double L_71 = V_34;
		double L_72 = V_35;
		V_10 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_70, L_71)), L_72));
		double L_73 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_44, L_45)), L_46));
		double L_74 = V_10;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_73, L_74)));
		double L_75 = L_73;
		double L_76 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_75, L_76)));
		double L_77 = V_36;
		double L_78 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_77, L_78));
		double L_79 = V_26;
		double L_80 = V_10;
		V_28 = ((double)il2cpp_codegen_subtract(L_79, L_80));
		double L_81 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_75, L_81));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_82 = V_13;
		double L_83 = V_29;
		double L_84 = V_28;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_83, L_84)));
		double L_85 = V_8;
		double L_86 = V_36;
		V_37 = ((double)((double)il2cpp_codegen_add(L_85, L_86)));
		double L_87 = V_37;
		double L_88 = V_8;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_87, L_88)));
		double L_89 = V_37;
		double L_90 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_89, L_90));
		double L_91 = V_36;
		double L_92 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_91, L_92));
		double L_93 = V_8;
		double L_94 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_93, L_94));
		double L_95 = V_29;
		double L_96 = V_28;
		double L_97 = ((double)il2cpp_codegen_add(L_95, L_96));
		double L_98 = V_9;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_97, L_98)));
		double L_99 = L_97;
		double L_100 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_99, L_100)));
		double L_101 = V_36;
		double L_102 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_101, L_102));
		double L_103 = V_26;
		double L_104 = V_9;
		V_28 = ((double)il2cpp_codegen_subtract(L_103, L_104));
		double L_105 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_99, L_105));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_106 = V_13;
		double L_107 = V_29;
		double L_108 = V_28;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_107, L_108)));
		double L_109 = V_37;
		double L_110 = V_36;
		V_18 = ((double)((double)il2cpp_codegen_add(L_109, L_110)));
		double L_111 = V_18;
		double L_112 = V_37;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_111, L_112)));
		double L_113 = V_18;
		double L_114 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_113, L_114));
		double L_115 = V_36;
		double L_116 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_115, L_116));
		double L_117 = V_37;
		double L_118 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_117, L_118));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_119 = V_13;
		double L_120 = V_29;
		double L_121 = V_28;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_120, L_121)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_122 = V_13;
		double L_123 = V_18;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_123);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_124 = V_13;
		double L_125;
		L_125 = RobustPredicates_Estimate_mE0D0EC6F6EDEF9EDC029E9076B485BFB38FEF604(__this, 4, L_124, NULL);
		V_11 = L_125;
		double L_126 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___ccwerrboundB;
		double L_127 = ___3_detsum;
		V_12 = ((double)il2cpp_codegen_multiply(L_126, L_127));
		double L_128 = V_11;
		double L_129 = V_12;
		if ((((double)L_128) >= ((double)L_129)))
		{
			goto IL_01e8;
		}
	}
	{
		double L_130 = V_11;
		double L_131 = V_12;
		if ((!(((double)((-L_130))) >= ((double)L_131))))
		{
			goto IL_01eb;
		}
	}

IL_01e8:
	{
		double L_132 = V_11;
		return L_132;
	}

IL_01eb:
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_133 = ___0_pa;
		NullCheck(L_133);
		double L_134 = L_133->___x;
		double L_135 = V_0;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_134, L_135)));
		double L_136 = V_0;
		double L_137 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_136, L_137));
		double L_138 = V_26;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_139 = ___2_pc;
		NullCheck(L_139);
		double L_140 = L_139->___x;
		V_28 = ((double)il2cpp_codegen_subtract(L_138, L_140));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_141 = ___0_pa;
		NullCheck(L_141);
		double L_142 = L_141->___x;
		double L_143 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_142, L_143));
		double L_144 = V_29;
		double L_145 = V_28;
		V_4 = ((double)il2cpp_codegen_add(L_144, L_145));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_146 = ___1_pb;
		NullCheck(L_146);
		double L_147 = L_146->___x;
		double L_148 = V_2;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_147, L_148)));
		double L_149 = V_2;
		double L_150 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_149, L_150));
		double L_151 = V_26;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_152 = ___2_pc;
		NullCheck(L_152);
		double L_153 = L_152->___x;
		V_28 = ((double)il2cpp_codegen_subtract(L_151, L_153));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_154 = ___1_pb;
		NullCheck(L_154);
		double L_155 = L_154->___x;
		double L_156 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_155, L_156));
		double L_157 = V_29;
		double L_158 = V_28;
		V_6 = ((double)il2cpp_codegen_add(L_157, L_158));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_159 = ___0_pa;
		NullCheck(L_159);
		double L_160 = L_159->___y;
		double L_161 = V_1;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_160, L_161)));
		double L_162 = V_1;
		double L_163 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_162, L_163));
		double L_164 = V_26;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_165 = ___2_pc;
		NullCheck(L_165);
		double L_166 = L_165->___y;
		V_28 = ((double)il2cpp_codegen_subtract(L_164, L_166));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_167 = ___0_pa;
		NullCheck(L_167);
		double L_168 = L_167->___y;
		double L_169 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_168, L_169));
		double L_170 = V_29;
		double L_171 = V_28;
		V_5 = ((double)il2cpp_codegen_add(L_170, L_171));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_172 = ___1_pb;
		NullCheck(L_172);
		double L_173 = L_172->___y;
		double L_174 = V_3;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_173, L_174)));
		double L_175 = V_3;
		double L_176 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_175, L_176));
		double L_177 = V_26;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_178 = ___2_pc;
		NullCheck(L_178);
		double L_179 = L_178->___y;
		V_28 = ((double)il2cpp_codegen_subtract(L_177, L_179));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_180 = ___1_pb;
		NullCheck(L_180);
		double L_181 = L_180->___y;
		double L_182 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_181, L_182));
		double L_183 = V_29;
		double L_184 = V_28;
		V_7 = ((double)il2cpp_codegen_add(L_183, L_184));
		double L_185 = V_4;
		if ((!(((double)L_185) == ((double)(0.0)))))
		{
			goto IL_02da;
		}
	}
	{
		double L_186 = V_5;
		if ((!(((double)L_186) == ((double)(0.0)))))
		{
			goto IL_02da;
		}
	}
	{
		double L_187 = V_6;
		if ((!(((double)L_187) == ((double)(0.0)))))
		{
			goto IL_02da;
		}
	}
	{
		double L_188 = V_7;
		if ((!(((double)L_188) == ((double)(0.0)))))
		{
			goto IL_02da;
		}
	}
	{
		double L_189 = V_11;
		return L_189;
	}

IL_02da:
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_190 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___ccwerrboundC;
		double L_191 = ___3_detsum;
		double L_192 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___resulterrbound;
		double L_193 = V_11;
		if ((((double)L_193) >= ((double)(0.0))))
		{
			G_B10_0 = L_192;
			G_B10_1 = ((double)il2cpp_codegen_multiply(L_190, L_191));
			goto IL_02f9;
		}
		G_B9_0 = L_192;
		G_B9_1 = ((double)il2cpp_codegen_multiply(L_190, L_191));
	}
	{
		double L_194 = V_11;
		G_B11_0 = ((-L_194));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_02fb;
	}

IL_02f9:
	{
		double L_195 = V_11;
		G_B11_0 = L_195;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_02fb:
	{
		V_12 = ((double)il2cpp_codegen_add(G_B11_2, ((double)il2cpp_codegen_multiply(G_B11_1, G_B11_0))));
		double L_196 = V_11;
		double L_197 = V_0;
		double L_198 = V_7;
		double L_199 = V_3;
		double L_200 = V_4;
		double L_201 = V_1;
		double L_202 = V_6;
		double L_203 = V_2;
		double L_204 = V_5;
		V_11 = ((double)il2cpp_codegen_add(L_196, ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_197, L_198)), ((double)il2cpp_codegen_multiply(L_199, L_200)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_201, L_202)), ((double)il2cpp_codegen_multiply(L_203, L_204))))))));
		double L_205 = V_11;
		double L_206 = V_12;
		if ((((double)L_205) >= ((double)L_206)))
		{
			goto IL_0324;
		}
	}
	{
		double L_207 = V_11;
		double L_208 = V_12;
		if ((!(((double)((-L_207))) >= ((double)L_208))))
		{
			goto IL_0327;
		}
	}

IL_0324:
	{
		double L_209 = V_11;
		return L_209;
	}

IL_0327:
	{
		double L_210 = V_4;
		double L_211 = V_3;
		V_23 = ((double)((double)il2cpp_codegen_multiply(L_210, L_211)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_212 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_213 = V_4;
		double L_214 = ((double)((double)il2cpp_codegen_multiply(L_212, L_213)));
		double L_215 = V_4;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_214, L_215)));
		double L_216 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_214, L_216));
		double L_217 = V_4;
		double L_218 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_217, L_218));
		double L_219 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_220 = V_3;
		double L_221 = ((double)((double)il2cpp_codegen_multiply(L_219, L_220)));
		double L_222 = V_3;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_221, L_222)));
		double L_223 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_221, L_223));
		double L_224 = V_3;
		double L_225 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_224, L_225));
		double L_226 = V_23;
		double L_227 = V_31;
		double L_228 = V_33;
		double L_229 = V_32;
		double L_230 = V_33;
		double L_231 = V_31;
		double L_232 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_226, ((double)il2cpp_codegen_multiply(L_227, L_228)))), ((double)il2cpp_codegen_multiply(L_229, L_230)))), ((double)il2cpp_codegen_multiply(L_231, L_232))));
		double L_233 = V_32;
		double L_234 = V_34;
		double L_235 = V_35;
		double L_236 = V_5;
		double L_237 = V_2;
		V_24 = ((double)((double)il2cpp_codegen_multiply(L_236, L_237)));
		double L_238 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_239 = V_5;
		double L_240 = ((double)((double)il2cpp_codegen_multiply(L_238, L_239)));
		double L_241 = V_5;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_240, L_241)));
		double L_242 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_240, L_242));
		double L_243 = V_5;
		double L_244 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_243, L_244));
		double L_245 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_246 = V_2;
		double L_247 = ((double)((double)il2cpp_codegen_multiply(L_245, L_246)));
		double L_248 = V_2;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_247, L_248)));
		double L_249 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_247, L_249));
		double L_250 = V_2;
		double L_251 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_250, L_251));
		double L_252 = V_24;
		double L_253 = V_31;
		double L_254 = V_33;
		double L_255 = V_32;
		double L_256 = V_33;
		double L_257 = V_31;
		double L_258 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_252, ((double)il2cpp_codegen_multiply(L_253, L_254)))), ((double)il2cpp_codegen_multiply(L_255, L_256)))), ((double)il2cpp_codegen_multiply(L_257, L_258))));
		double L_259 = V_32;
		double L_260 = V_34;
		double L_261 = V_35;
		V_25 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_259, L_260)), L_261));
		double L_262 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_233, L_234)), L_235));
		double L_263 = V_25;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_262, L_263)));
		double L_264 = L_262;
		double L_265 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_264, L_265)));
		double L_266 = V_36;
		double L_267 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_266, L_267));
		double L_268 = V_26;
		double L_269 = V_25;
		V_28 = ((double)il2cpp_codegen_subtract(L_268, L_269));
		double L_270 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_264, L_270));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_271 = V_14;
		double L_272 = V_29;
		double L_273 = V_28;
		NullCheck(L_271);
		(L_271)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_272, L_273)));
		double L_274 = V_23;
		double L_275 = V_36;
		V_37 = ((double)((double)il2cpp_codegen_add(L_274, L_275)));
		double L_276 = V_37;
		double L_277 = V_23;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_276, L_277)));
		double L_278 = V_37;
		double L_279 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_278, L_279));
		double L_280 = V_36;
		double L_281 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_280, L_281));
		double L_282 = V_23;
		double L_283 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_282, L_283));
		double L_284 = V_29;
		double L_285 = V_28;
		double L_286 = ((double)il2cpp_codegen_add(L_284, L_285));
		double L_287 = V_24;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_286, L_287)));
		double L_288 = L_286;
		double L_289 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_288, L_289)));
		double L_290 = V_36;
		double L_291 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_290, L_291));
		double L_292 = V_26;
		double L_293 = V_24;
		V_28 = ((double)il2cpp_codegen_subtract(L_292, L_293));
		double L_294 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_288, L_294));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_295 = V_14;
		double L_296 = V_29;
		double L_297 = V_28;
		NullCheck(L_295);
		(L_295)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_296, L_297)));
		double L_298 = V_37;
		double L_299 = V_36;
		V_22 = ((double)((double)il2cpp_codegen_add(L_298, L_299)));
		double L_300 = V_22;
		double L_301 = V_37;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_300, L_301)));
		double L_302 = V_22;
		double L_303 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_302, L_303));
		double L_304 = V_36;
		double L_305 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_304, L_305));
		double L_306 = V_37;
		double L_307 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_306, L_307));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_308 = V_14;
		double L_309 = V_29;
		double L_310 = V_28;
		NullCheck(L_308);
		(L_308)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_309, L_310)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_311 = V_14;
		double L_312 = V_22;
		NullCheck(L_311);
		(L_311)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_312);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_313 = V_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_314 = V_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_315 = V_15;
		int32_t L_316;
		L_316 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, 4, L_313, 4, L_314, L_315, NULL);
		V_19 = L_316;
		double L_317 = V_0;
		double L_318 = V_7;
		V_23 = ((double)((double)il2cpp_codegen_multiply(L_317, L_318)));
		double L_319 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_320 = V_0;
		double L_321 = ((double)((double)il2cpp_codegen_multiply(L_319, L_320)));
		double L_322 = V_0;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_321, L_322)));
		double L_323 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_321, L_323));
		double L_324 = V_0;
		double L_325 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_324, L_325));
		double L_326 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_327 = V_7;
		double L_328 = ((double)((double)il2cpp_codegen_multiply(L_326, L_327)));
		double L_329 = V_7;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_328, L_329)));
		double L_330 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_328, L_330));
		double L_331 = V_7;
		double L_332 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_331, L_332));
		double L_333 = V_23;
		double L_334 = V_31;
		double L_335 = V_33;
		double L_336 = V_32;
		double L_337 = V_33;
		double L_338 = V_31;
		double L_339 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_333, ((double)il2cpp_codegen_multiply(L_334, L_335)))), ((double)il2cpp_codegen_multiply(L_336, L_337)))), ((double)il2cpp_codegen_multiply(L_338, L_339))));
		double L_340 = V_32;
		double L_341 = V_34;
		double L_342 = V_35;
		double L_343 = V_1;
		double L_344 = V_6;
		V_24 = ((double)((double)il2cpp_codegen_multiply(L_343, L_344)));
		double L_345 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_346 = V_1;
		double L_347 = ((double)((double)il2cpp_codegen_multiply(L_345, L_346)));
		double L_348 = V_1;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_347, L_348)));
		double L_349 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_347, L_349));
		double L_350 = V_1;
		double L_351 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_350, L_351));
		double L_352 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_353 = V_6;
		double L_354 = ((double)((double)il2cpp_codegen_multiply(L_352, L_353)));
		double L_355 = V_6;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_354, L_355)));
		double L_356 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_354, L_356));
		double L_357 = V_6;
		double L_358 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_357, L_358));
		double L_359 = V_24;
		double L_360 = V_31;
		double L_361 = V_33;
		double L_362 = V_32;
		double L_363 = V_33;
		double L_364 = V_31;
		double L_365 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_359, ((double)il2cpp_codegen_multiply(L_360, L_361)))), ((double)il2cpp_codegen_multiply(L_362, L_363)))), ((double)il2cpp_codegen_multiply(L_364, L_365))));
		double L_366 = V_32;
		double L_367 = V_34;
		double L_368 = V_35;
		V_25 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_366, L_367)), L_368));
		double L_369 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_340, L_341)), L_342));
		double L_370 = V_25;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_369, L_370)));
		double L_371 = L_369;
		double L_372 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_371, L_372)));
		double L_373 = V_36;
		double L_374 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_373, L_374));
		double L_375 = V_26;
		double L_376 = V_25;
		V_28 = ((double)il2cpp_codegen_subtract(L_375, L_376));
		double L_377 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_371, L_377));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_378 = V_14;
		double L_379 = V_29;
		double L_380 = V_28;
		NullCheck(L_378);
		(L_378)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_379, L_380)));
		double L_381 = V_23;
		double L_382 = V_36;
		V_37 = ((double)((double)il2cpp_codegen_add(L_381, L_382)));
		double L_383 = V_37;
		double L_384 = V_23;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_383, L_384)));
		double L_385 = V_37;
		double L_386 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_385, L_386));
		double L_387 = V_36;
		double L_388 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_387, L_388));
		double L_389 = V_23;
		double L_390 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_389, L_390));
		double L_391 = V_29;
		double L_392 = V_28;
		double L_393 = ((double)il2cpp_codegen_add(L_391, L_392));
		double L_394 = V_24;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_393, L_394)));
		double L_395 = L_393;
		double L_396 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_395, L_396)));
		double L_397 = V_36;
		double L_398 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_397, L_398));
		double L_399 = V_26;
		double L_400 = V_24;
		V_28 = ((double)il2cpp_codegen_subtract(L_399, L_400));
		double L_401 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_395, L_401));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_402 = V_14;
		double L_403 = V_29;
		double L_404 = V_28;
		NullCheck(L_402);
		(L_402)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_403, L_404)));
		double L_405 = V_37;
		double L_406 = V_36;
		V_22 = ((double)((double)il2cpp_codegen_add(L_405, L_406)));
		double L_407 = V_22;
		double L_408 = V_37;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_407, L_408)));
		double L_409 = V_22;
		double L_410 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_409, L_410));
		double L_411 = V_36;
		double L_412 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_411, L_412));
		double L_413 = V_37;
		double L_414 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_413, L_414));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_415 = V_14;
		double L_416 = V_29;
		double L_417 = V_28;
		NullCheck(L_415);
		(L_415)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_416, L_417)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_418 = V_14;
		double L_419 = V_22;
		NullCheck(L_418);
		(L_418)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_419);
		int32_t L_420 = V_19;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_421 = V_15;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_422 = V_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_423 = V_16;
		int32_t L_424;
		L_424 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_420, L_421, 4, L_422, L_423, NULL);
		V_20 = L_424;
		double L_425 = V_4;
		double L_426 = V_7;
		V_23 = ((double)((double)il2cpp_codegen_multiply(L_425, L_426)));
		double L_427 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_428 = V_4;
		double L_429 = ((double)((double)il2cpp_codegen_multiply(L_427, L_428)));
		double L_430 = V_4;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_429, L_430)));
		double L_431 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_429, L_431));
		double L_432 = V_4;
		double L_433 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_432, L_433));
		double L_434 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_435 = V_7;
		double L_436 = ((double)((double)il2cpp_codegen_multiply(L_434, L_435)));
		double L_437 = V_7;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_436, L_437)));
		double L_438 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_436, L_438));
		double L_439 = V_7;
		double L_440 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_439, L_440));
		double L_441 = V_23;
		double L_442 = V_31;
		double L_443 = V_33;
		double L_444 = V_32;
		double L_445 = V_33;
		double L_446 = V_31;
		double L_447 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_441, ((double)il2cpp_codegen_multiply(L_442, L_443)))), ((double)il2cpp_codegen_multiply(L_444, L_445)))), ((double)il2cpp_codegen_multiply(L_446, L_447))));
		double L_448 = V_32;
		double L_449 = V_34;
		double L_450 = V_35;
		double L_451 = V_5;
		double L_452 = V_6;
		V_24 = ((double)((double)il2cpp_codegen_multiply(L_451, L_452)));
		double L_453 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_454 = V_5;
		double L_455 = ((double)((double)il2cpp_codegen_multiply(L_453, L_454)));
		double L_456 = V_5;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_455, L_456)));
		double L_457 = V_30;
		V_31 = ((double)il2cpp_codegen_subtract(L_455, L_457));
		double L_458 = V_5;
		double L_459 = V_31;
		V_32 = ((double)il2cpp_codegen_subtract(L_458, L_459));
		double L_460 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_461 = V_6;
		double L_462 = ((double)((double)il2cpp_codegen_multiply(L_460, L_461)));
		double L_463 = V_6;
		V_30 = ((double)((double)il2cpp_codegen_subtract(L_462, L_463)));
		double L_464 = V_30;
		V_33 = ((double)il2cpp_codegen_subtract(L_462, L_464));
		double L_465 = V_6;
		double L_466 = V_33;
		V_34 = ((double)il2cpp_codegen_subtract(L_465, L_466));
		double L_467 = V_24;
		double L_468 = V_31;
		double L_469 = V_33;
		double L_470 = V_32;
		double L_471 = V_33;
		double L_472 = V_31;
		double L_473 = V_34;
		V_35 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_467, ((double)il2cpp_codegen_multiply(L_468, L_469)))), ((double)il2cpp_codegen_multiply(L_470, L_471)))), ((double)il2cpp_codegen_multiply(L_472, L_473))));
		double L_474 = V_32;
		double L_475 = V_34;
		double L_476 = V_35;
		V_25 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_474, L_475)), L_476));
		double L_477 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_448, L_449)), L_450));
		double L_478 = V_25;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_477, L_478)));
		double L_479 = L_477;
		double L_480 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_479, L_480)));
		double L_481 = V_36;
		double L_482 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_481, L_482));
		double L_483 = V_26;
		double L_484 = V_25;
		V_28 = ((double)il2cpp_codegen_subtract(L_483, L_484));
		double L_485 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_479, L_485));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_486 = V_14;
		double L_487 = V_29;
		double L_488 = V_28;
		NullCheck(L_486);
		(L_486)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_487, L_488)));
		double L_489 = V_23;
		double L_490 = V_36;
		V_37 = ((double)((double)il2cpp_codegen_add(L_489, L_490)));
		double L_491 = V_37;
		double L_492 = V_23;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_491, L_492)));
		double L_493 = V_37;
		double L_494 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_493, L_494));
		double L_495 = V_36;
		double L_496 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_495, L_496));
		double L_497 = V_23;
		double L_498 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_497, L_498));
		double L_499 = V_29;
		double L_500 = V_28;
		double L_501 = ((double)il2cpp_codegen_add(L_499, L_500));
		double L_502 = V_24;
		V_36 = ((double)((double)il2cpp_codegen_subtract(L_501, L_502)));
		double L_503 = L_501;
		double L_504 = V_36;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_503, L_504)));
		double L_505 = V_36;
		double L_506 = V_26;
		V_27 = ((double)il2cpp_codegen_add(L_505, L_506));
		double L_507 = V_26;
		double L_508 = V_24;
		V_28 = ((double)il2cpp_codegen_subtract(L_507, L_508));
		double L_509 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_503, L_509));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_510 = V_14;
		double L_511 = V_29;
		double L_512 = V_28;
		NullCheck(L_510);
		(L_510)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_511, L_512)));
		double L_513 = V_37;
		double L_514 = V_36;
		V_22 = ((double)((double)il2cpp_codegen_add(L_513, L_514)));
		double L_515 = V_22;
		double L_516 = V_37;
		V_26 = ((double)((double)il2cpp_codegen_subtract(L_515, L_516)));
		double L_517 = V_22;
		double L_518 = V_26;
		V_27 = ((double)il2cpp_codegen_subtract(L_517, L_518));
		double L_519 = V_36;
		double L_520 = V_26;
		V_28 = ((double)il2cpp_codegen_subtract(L_519, L_520));
		double L_521 = V_37;
		double L_522 = V_27;
		V_29 = ((double)il2cpp_codegen_subtract(L_521, L_522));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_523 = V_14;
		double L_524 = V_29;
		double L_525 = V_28;
		NullCheck(L_523);
		(L_523)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_524, L_525)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_526 = V_14;
		double L_527 = V_22;
		NullCheck(L_526);
		(L_526)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_527);
		int32_t L_528 = V_20;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_529 = V_16;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_530 = V_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_531 = V_17;
		int32_t L_532;
		L_532 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_528, L_529, 4, L_530, L_531, NULL);
		V_21 = L_532;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_533 = V_17;
		int32_t L_534 = V_21;
		NullCheck(L_533);
		int32_t L_535 = ((int32_t)il2cpp_codegen_subtract(L_534, 1));
		double L_536 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_535));
		return L_536;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RobustPredicates_InCircleAdapt_m52EEB7B22B35CE09E7B8C1B9C929489A7FDAC15F (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_pa, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_pb, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___2_pc, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___3_pd, double ___4_permanent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_17 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_18 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_19 = NULL;
	double V_20 = 0.0;
	double V_21 = 0.0;
	double V_22 = 0.0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_39 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_40 = NULL;
	int32_t V_41 = 0;
	double V_42 = 0.0;
	double V_43 = 0.0;
	double V_44 = 0.0;
	double V_45 = 0.0;
	double V_46 = 0.0;
	double V_47 = 0.0;
	double V_48 = 0.0;
	double V_49 = 0.0;
	double V_50 = 0.0;
	double V_51 = 0.0;
	double V_52 = 0.0;
	double V_53 = 0.0;
	double V_54 = 0.0;
	double V_55 = 0.0;
	double V_56 = 0.0;
	double V_57 = 0.0;
	double V_58 = 0.0;
	double V_59 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_60 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_61 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_62 = NULL;
	double V_63 = 0.0;
	double V_64 = 0.0;
	double V_65 = 0.0;
	double V_66 = 0.0;
	double V_67 = 0.0;
	double V_68 = 0.0;
	double V_69 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_70 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_71 = NULL;
	double V_72 = 0.0;
	double V_73 = 0.0;
	int32_t V_74 = 0;
	int32_t V_75 = 0;
	int32_t V_76 = 0;
	int32_t V_77 = 0;
	int32_t V_78 = 0;
	int32_t V_79 = 0;
	int32_t V_80 = 0;
	int32_t V_81 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_82 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_83 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_84 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_85 = NULL;
	int32_t V_86 = 0;
	int32_t V_87 = 0;
	int32_t V_88 = 0;
	int32_t V_89 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_90 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_91 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_92 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_93 = NULL;
	int32_t V_94 = 0;
	int32_t V_95 = 0;
	int32_t V_96 = 0;
	int32_t V_97 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_98 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_99 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_100 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_101 = NULL;
	int32_t V_102 = 0;
	int32_t V_103 = 0;
	int32_t V_104 = 0;
	int32_t V_105 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_106 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_107 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_108 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_109 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_110 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_111 = NULL;
	int32_t V_112 = 0;
	int32_t V_113 = 0;
	int32_t V_114 = 0;
	int32_t V_115 = 0;
	int32_t V_116 = 0;
	int32_t V_117 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_118 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_119 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_120 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_121 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_122 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_123 = NULL;
	int32_t V_124 = 0;
	int32_t V_125 = 0;
	int32_t V_126 = 0;
	int32_t V_127 = 0;
	int32_t V_128 = 0;
	int32_t V_129 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_130 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_131 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_132 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_133 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_134 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_135 = NULL;
	int32_t V_136 = 0;
	int32_t V_137 = 0;
	int32_t V_138 = 0;
	int32_t V_139 = 0;
	int32_t V_140 = 0;
	int32_t V_141 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_142 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_143 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_144 = NULL;
	int32_t V_145 = 0;
	int32_t V_146 = 0;
	int32_t V_147 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_148 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_149 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_150 = NULL;
	int32_t V_151 = 0;
	int32_t V_152 = 0;
	int32_t V_153 = 0;
	double V_154 = 0.0;
	double V_155 = 0.0;
	double V_156 = 0.0;
	double V_157 = 0.0;
	double V_158 = 0.0;
	double V_159 = 0.0;
	double V_160 = 0.0;
	double V_161 = 0.0;
	double V_162 = 0.0;
	double V_163 = 0.0;
	double V_164 = 0.0;
	double V_165 = 0.0;
	double V_166 = 0.0;
	double V_167 = 0.0;
	double V_168 = 0.0;
	double V_169 = 0.0;
	double V_170 = 0.0;
	double G_B12_0 = 0.0;
	double G_B12_1 = 0.0;
	double G_B11_0 = 0.0;
	double G_B11_1 = 0.0;
	double G_B13_0 = 0.0;
	double G_B13_1 = 0.0;
	double G_B13_2 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_17 = L_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_18 = L_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_19 = L_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_60 = L_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_61 = L_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_62 = L_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_70 = L_6;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)5);
		V_71 = L_7;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_82 = L_8;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_83 = L_9;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_84 = L_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_85 = L_11;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_90 = L_12;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_91 = L_13;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_92 = L_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_93 = L_15;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_98 = L_16;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_99 = L_17;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_100 = L_18;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_101 = L_19;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_106 = L_20;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_107 = L_21;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_108 = L_22;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_109 = L_23;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_110 = L_24;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_111 = L_25;
		V_112 = 0;
		V_113 = 0;
		V_114 = 0;
		V_115 = 0;
		V_116 = 0;
		V_117 = 0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_26 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_118 = L_26;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_27 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_119 = L_27;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_28 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_120 = L_28;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_121 = L_29;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_30 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_122 = L_30;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_31 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_123 = L_31;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_130 = L_32;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_33 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_131 = L_33;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_34 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_132 = L_34;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_133 = L_35;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_134 = L_36;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_135 = L_37;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_38 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_142 = L_38;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_143 = L_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		V_144 = L_40;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_41 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_148 = L_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_149 = L_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_43 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_150 = L_43;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_44 = ___0_pa;
		NullCheck(L_44);
		double L_45 = L_44->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_46 = ___3_pd;
		NullCheck(L_46);
		double L_47 = L_46->___x;
		V_0 = ((double)((double)il2cpp_codegen_subtract(L_45, L_47)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_48 = ___1_pb;
		NullCheck(L_48);
		double L_49 = L_48->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_50 = ___3_pd;
		NullCheck(L_50);
		double L_51 = L_50->___x;
		V_1 = ((double)((double)il2cpp_codegen_subtract(L_49, L_51)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_52 = ___2_pc;
		NullCheck(L_52);
		double L_53 = L_52->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_54 = ___3_pd;
		NullCheck(L_54);
		double L_55 = L_54->___x;
		V_2 = ((double)((double)il2cpp_codegen_subtract(L_53, L_55)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_56 = ___0_pa;
		NullCheck(L_56);
		double L_57 = L_56->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_58 = ___3_pd;
		NullCheck(L_58);
		double L_59 = L_58->___y;
		V_3 = ((double)((double)il2cpp_codegen_subtract(L_57, L_59)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_60 = ___1_pb;
		NullCheck(L_60);
		double L_61 = L_60->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_62 = ___3_pd;
		NullCheck(L_62);
		double L_63 = L_62->___y;
		V_4 = ((double)((double)il2cpp_codegen_subtract(L_61, L_63)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_64 = ___2_pc;
		NullCheck(L_64);
		double L_65 = L_64->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_66 = ___3_pd;
		NullCheck(L_66);
		double L_67 = L_66->___y;
		V_5 = ((double)((double)il2cpp_codegen_subtract(L_65, L_67)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_68 = ___0_pa;
		NullCheck(L_68);
		double L_69 = L_68->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_70 = ___3_pd;
		NullCheck(L_70);
		double L_71 = L_70->___x;
		V_0 = ((double)((double)il2cpp_codegen_subtract(L_69, L_71)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_72 = ___1_pb;
		NullCheck(L_72);
		double L_73 = L_72->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_74 = ___3_pd;
		NullCheck(L_74);
		double L_75 = L_74->___x;
		V_1 = ((double)((double)il2cpp_codegen_subtract(L_73, L_75)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_76 = ___2_pc;
		NullCheck(L_76);
		double L_77 = L_76->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_78 = ___3_pd;
		NullCheck(L_78);
		double L_79 = L_78->___x;
		V_2 = ((double)((double)il2cpp_codegen_subtract(L_77, L_79)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_80 = ___0_pa;
		NullCheck(L_80);
		double L_81 = L_80->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_82 = ___3_pd;
		NullCheck(L_82);
		double L_83 = L_82->___y;
		V_3 = ((double)((double)il2cpp_codegen_subtract(L_81, L_83)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_84 = ___1_pb;
		NullCheck(L_84);
		double L_85 = L_84->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_86 = ___3_pd;
		NullCheck(L_86);
		double L_87 = L_86->___y;
		V_4 = ((double)((double)il2cpp_codegen_subtract(L_85, L_87)));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_88 = ___2_pc;
		NullCheck(L_88);
		double L_89 = L_88->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_90 = ___3_pd;
		NullCheck(L_90);
		double L_91 = L_90->___y;
		V_5 = ((double)((double)il2cpp_codegen_subtract(L_89, L_91)));
		double L_92 = V_1;
		double L_93 = V_5;
		V_8 = ((double)((double)il2cpp_codegen_multiply(L_92, L_93)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_94 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_95 = V_1;
		double L_96 = ((double)((double)il2cpp_codegen_multiply(L_94, L_95)));
		double L_97 = V_1;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_96, L_97)));
		double L_98 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_96, L_98));
		double L_99 = V_1;
		double L_100 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_99, L_100));
		double L_101 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_102 = V_5;
		double L_103 = ((double)((double)il2cpp_codegen_multiply(L_101, L_102)));
		double L_104 = V_5;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_103, L_104)));
		double L_105 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_103, L_105));
		double L_106 = V_5;
		double L_107 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_106, L_107));
		double L_108 = V_8;
		double L_109 = V_163;
		double L_110 = V_165;
		double L_111 = V_164;
		double L_112 = V_165;
		double L_113 = V_163;
		double L_114 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_108, ((double)il2cpp_codegen_multiply(L_109, L_110)))), ((double)il2cpp_codegen_multiply(L_111, L_112)))), ((double)il2cpp_codegen_multiply(L_113, L_114))));
		double L_115 = V_164;
		double L_116 = V_166;
		double L_117 = V_167;
		double L_118 = V_2;
		double L_119 = V_4;
		V_9 = ((double)((double)il2cpp_codegen_multiply(L_118, L_119)));
		double L_120 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_121 = V_2;
		double L_122 = ((double)((double)il2cpp_codegen_multiply(L_120, L_121)));
		double L_123 = V_2;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_122, L_123)));
		double L_124 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_122, L_124));
		double L_125 = V_2;
		double L_126 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_125, L_126));
		double L_127 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_128 = V_4;
		double L_129 = ((double)((double)il2cpp_codegen_multiply(L_127, L_128)));
		double L_130 = V_4;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_129, L_130)));
		double L_131 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_129, L_131));
		double L_132 = V_4;
		double L_133 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_132, L_133));
		double L_134 = V_9;
		double L_135 = V_163;
		double L_136 = V_165;
		double L_137 = V_164;
		double L_138 = V_165;
		double L_139 = V_163;
		double L_140 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_134, ((double)il2cpp_codegen_multiply(L_135, L_136)))), ((double)il2cpp_codegen_multiply(L_137, L_138)))), ((double)il2cpp_codegen_multiply(L_139, L_140))));
		double L_141 = V_164;
		double L_142 = V_166;
		double L_143 = V_167;
		V_14 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_141, L_142)), L_143));
		double L_144 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_115, L_116)), L_117));
		double L_145 = V_14;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_144, L_145)));
		double L_146 = L_144;
		double L_147 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_146, L_147)));
		double L_148 = V_168;
		double L_149 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_148, L_149));
		double L_150 = V_158;
		double L_151 = V_14;
		V_160 = ((double)il2cpp_codegen_subtract(L_150, L_151));
		double L_152 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_146, L_152));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_153 = V_17;
		double L_154 = V_161;
		double L_155 = V_160;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_154, L_155)));
		double L_156 = V_8;
		double L_157 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_156, L_157)));
		double L_158 = V_169;
		double L_159 = V_8;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_158, L_159)));
		double L_160 = V_169;
		double L_161 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_160, L_161));
		double L_162 = V_168;
		double L_163 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_162, L_163));
		double L_164 = V_8;
		double L_165 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_164, L_165));
		double L_166 = V_161;
		double L_167 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_166, L_167));
		double L_168 = V_170;
		double L_169 = V_9;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_168, L_169)));
		double L_170 = V_170;
		double L_171 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_170, L_171)));
		double L_172 = V_168;
		double L_173 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_172, L_173));
		double L_174 = V_158;
		double L_175 = V_9;
		V_160 = ((double)il2cpp_codegen_subtract(L_174, L_175));
		double L_176 = V_170;
		double L_177 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_176, L_177));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_178 = V_17;
		double L_179 = V_161;
		double L_180 = V_160;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_179, L_180)));
		double L_181 = V_169;
		double L_182 = V_168;
		V_20 = ((double)((double)il2cpp_codegen_add(L_181, L_182)));
		double L_183 = V_20;
		double L_184 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_183, L_184)));
		double L_185 = V_20;
		double L_186 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_185, L_186));
		double L_187 = V_168;
		double L_188 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_187, L_188));
		double L_189 = V_169;
		double L_190 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_189, L_190));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_191 = V_17;
		double L_192 = V_161;
		double L_193 = V_160;
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_192, L_193)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_194 = V_17;
		double L_195 = V_20;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_195);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_196 = V_17;
		double L_197 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_198 = __this->___axbc;
		int32_t L_199;
		L_199 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_196, L_197, L_198, NULL);
		V_23 = L_199;
		int32_t L_200 = V_23;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_201 = __this->___axbc;
		double L_202 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_203 = __this->___axxbc;
		int32_t L_204;
		L_204 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_200, L_201, L_202, L_203, NULL);
		V_24 = L_204;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_205 = V_17;
		double L_206 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_207 = __this->___aybc;
		int32_t L_208;
		L_208 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_205, L_206, L_207, NULL);
		V_25 = L_208;
		int32_t L_209 = V_25;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_210 = __this->___aybc;
		double L_211 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_212 = __this->___ayybc;
		int32_t L_213;
		L_213 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_209, L_210, L_211, L_212, NULL);
		V_26 = L_213;
		int32_t L_214 = V_24;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_215 = __this->___axxbc;
		int32_t L_216 = V_26;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_217 = __this->___ayybc;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_218 = __this->___adet;
		int32_t L_219;
		L_219 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_214, L_215, L_216, L_217, L_218, NULL);
		V_27 = L_219;
		double L_220 = V_2;
		double L_221 = V_3;
		V_10 = ((double)((double)il2cpp_codegen_multiply(L_220, L_221)));
		double L_222 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_223 = V_2;
		double L_224 = ((double)((double)il2cpp_codegen_multiply(L_222, L_223)));
		double L_225 = V_2;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_224, L_225)));
		double L_226 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_224, L_226));
		double L_227 = V_2;
		double L_228 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_227, L_228));
		double L_229 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_230 = V_3;
		double L_231 = ((double)((double)il2cpp_codegen_multiply(L_229, L_230)));
		double L_232 = V_3;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_231, L_232)));
		double L_233 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_231, L_233));
		double L_234 = V_3;
		double L_235 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_234, L_235));
		double L_236 = V_10;
		double L_237 = V_163;
		double L_238 = V_165;
		double L_239 = V_164;
		double L_240 = V_165;
		double L_241 = V_163;
		double L_242 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_236, ((double)il2cpp_codegen_multiply(L_237, L_238)))), ((double)il2cpp_codegen_multiply(L_239, L_240)))), ((double)il2cpp_codegen_multiply(L_241, L_242))));
		double L_243 = V_164;
		double L_244 = V_166;
		double L_245 = V_167;
		double L_246 = V_0;
		double L_247 = V_5;
		V_11 = ((double)((double)il2cpp_codegen_multiply(L_246, L_247)));
		double L_248 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_249 = V_0;
		double L_250 = ((double)((double)il2cpp_codegen_multiply(L_248, L_249)));
		double L_251 = V_0;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_250, L_251)));
		double L_252 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_250, L_252));
		double L_253 = V_0;
		double L_254 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_253, L_254));
		double L_255 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_256 = V_5;
		double L_257 = ((double)((double)il2cpp_codegen_multiply(L_255, L_256)));
		double L_258 = V_5;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_257, L_258)));
		double L_259 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_257, L_259));
		double L_260 = V_5;
		double L_261 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_260, L_261));
		double L_262 = V_11;
		double L_263 = V_163;
		double L_264 = V_165;
		double L_265 = V_164;
		double L_266 = V_165;
		double L_267 = V_163;
		double L_268 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_262, ((double)il2cpp_codegen_multiply(L_263, L_264)))), ((double)il2cpp_codegen_multiply(L_265, L_266)))), ((double)il2cpp_codegen_multiply(L_267, L_268))));
		double L_269 = V_164;
		double L_270 = V_166;
		double L_271 = V_167;
		V_15 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_269, L_270)), L_271));
		double L_272 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_243, L_244)), L_245));
		double L_273 = V_15;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_272, L_273)));
		double L_274 = L_272;
		double L_275 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_274, L_275)));
		double L_276 = V_168;
		double L_277 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_276, L_277));
		double L_278 = V_158;
		double L_279 = V_15;
		V_160 = ((double)il2cpp_codegen_subtract(L_278, L_279));
		double L_280 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_274, L_280));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_281 = V_18;
		double L_282 = V_161;
		double L_283 = V_160;
		NullCheck(L_281);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_282, L_283)));
		double L_284 = V_10;
		double L_285 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_284, L_285)));
		double L_286 = V_169;
		double L_287 = V_10;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_286, L_287)));
		double L_288 = V_169;
		double L_289 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_288, L_289));
		double L_290 = V_168;
		double L_291 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_290, L_291));
		double L_292 = V_10;
		double L_293 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_292, L_293));
		double L_294 = V_161;
		double L_295 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_294, L_295));
		double L_296 = V_170;
		double L_297 = V_11;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_296, L_297)));
		double L_298 = V_170;
		double L_299 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_298, L_299)));
		double L_300 = V_168;
		double L_301 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_300, L_301));
		double L_302 = V_158;
		double L_303 = V_11;
		V_160 = ((double)il2cpp_codegen_subtract(L_302, L_303));
		double L_304 = V_170;
		double L_305 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_304, L_305));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_306 = V_18;
		double L_307 = V_161;
		double L_308 = V_160;
		NullCheck(L_306);
		(L_306)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_307, L_308)));
		double L_309 = V_169;
		double L_310 = V_168;
		V_21 = ((double)((double)il2cpp_codegen_add(L_309, L_310)));
		double L_311 = V_21;
		double L_312 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_311, L_312)));
		double L_313 = V_21;
		double L_314 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_313, L_314));
		double L_315 = V_168;
		double L_316 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_315, L_316));
		double L_317 = V_169;
		double L_318 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_317, L_318));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_319 = V_18;
		double L_320 = V_161;
		double L_321 = V_160;
		NullCheck(L_319);
		(L_319)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_320, L_321)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_322 = V_18;
		double L_323 = V_21;
		NullCheck(L_322);
		(L_322)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_323);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_324 = V_18;
		double L_325 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_326 = __this->___bxca;
		int32_t L_327;
		L_327 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_324, L_325, L_326, NULL);
		V_28 = L_327;
		int32_t L_328 = V_28;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_329 = __this->___bxca;
		double L_330 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_331 = __this->___bxxca;
		int32_t L_332;
		L_332 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_328, L_329, L_330, L_331, NULL);
		V_29 = L_332;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_333 = V_18;
		double L_334 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_335 = __this->___byca;
		int32_t L_336;
		L_336 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_333, L_334, L_335, NULL);
		V_30 = L_336;
		int32_t L_337 = V_30;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_338 = __this->___byca;
		double L_339 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_340 = __this->___byyca;
		int32_t L_341;
		L_341 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_337, L_338, L_339, L_340, NULL);
		V_31 = L_341;
		int32_t L_342 = V_29;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_343 = __this->___bxxca;
		int32_t L_344 = V_31;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_345 = __this->___byyca;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_346 = __this->___bdet;
		int32_t L_347;
		L_347 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_342, L_343, L_344, L_345, L_346, NULL);
		V_32 = L_347;
		double L_348 = V_0;
		double L_349 = V_4;
		V_12 = ((double)((double)il2cpp_codegen_multiply(L_348, L_349)));
		double L_350 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_351 = V_0;
		double L_352 = ((double)((double)il2cpp_codegen_multiply(L_350, L_351)));
		double L_353 = V_0;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_352, L_353)));
		double L_354 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_352, L_354));
		double L_355 = V_0;
		double L_356 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_355, L_356));
		double L_357 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_358 = V_4;
		double L_359 = ((double)((double)il2cpp_codegen_multiply(L_357, L_358)));
		double L_360 = V_4;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_359, L_360)));
		double L_361 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_359, L_361));
		double L_362 = V_4;
		double L_363 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_362, L_363));
		double L_364 = V_12;
		double L_365 = V_163;
		double L_366 = V_165;
		double L_367 = V_164;
		double L_368 = V_165;
		double L_369 = V_163;
		double L_370 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_364, ((double)il2cpp_codegen_multiply(L_365, L_366)))), ((double)il2cpp_codegen_multiply(L_367, L_368)))), ((double)il2cpp_codegen_multiply(L_369, L_370))));
		double L_371 = V_164;
		double L_372 = V_166;
		double L_373 = V_167;
		double L_374 = V_1;
		double L_375 = V_3;
		V_13 = ((double)((double)il2cpp_codegen_multiply(L_374, L_375)));
		double L_376 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_377 = V_1;
		double L_378 = ((double)((double)il2cpp_codegen_multiply(L_376, L_377)));
		double L_379 = V_1;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_378, L_379)));
		double L_380 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_378, L_380));
		double L_381 = V_1;
		double L_382 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_381, L_382));
		double L_383 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_384 = V_3;
		double L_385 = ((double)((double)il2cpp_codegen_multiply(L_383, L_384)));
		double L_386 = V_3;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_385, L_386)));
		double L_387 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_385, L_387));
		double L_388 = V_3;
		double L_389 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_388, L_389));
		double L_390 = V_13;
		double L_391 = V_163;
		double L_392 = V_165;
		double L_393 = V_164;
		double L_394 = V_165;
		double L_395 = V_163;
		double L_396 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_390, ((double)il2cpp_codegen_multiply(L_391, L_392)))), ((double)il2cpp_codegen_multiply(L_393, L_394)))), ((double)il2cpp_codegen_multiply(L_395, L_396))));
		double L_397 = V_164;
		double L_398 = V_166;
		double L_399 = V_167;
		V_16 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_397, L_398)), L_399));
		double L_400 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_371, L_372)), L_373));
		double L_401 = V_16;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_400, L_401)));
		double L_402 = L_400;
		double L_403 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_402, L_403)));
		double L_404 = V_168;
		double L_405 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_404, L_405));
		double L_406 = V_158;
		double L_407 = V_16;
		V_160 = ((double)il2cpp_codegen_subtract(L_406, L_407));
		double L_408 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_402, L_408));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_409 = V_19;
		double L_410 = V_161;
		double L_411 = V_160;
		NullCheck(L_409);
		(L_409)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_410, L_411)));
		double L_412 = V_12;
		double L_413 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_412, L_413)));
		double L_414 = V_169;
		double L_415 = V_12;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_414, L_415)));
		double L_416 = V_169;
		double L_417 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_416, L_417));
		double L_418 = V_168;
		double L_419 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_418, L_419));
		double L_420 = V_12;
		double L_421 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_420, L_421));
		double L_422 = V_161;
		double L_423 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_422, L_423));
		double L_424 = V_170;
		double L_425 = V_13;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_424, L_425)));
		double L_426 = V_170;
		double L_427 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_426, L_427)));
		double L_428 = V_168;
		double L_429 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_428, L_429));
		double L_430 = V_158;
		double L_431 = V_13;
		V_160 = ((double)il2cpp_codegen_subtract(L_430, L_431));
		double L_432 = V_170;
		double L_433 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_432, L_433));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_434 = V_19;
		double L_435 = V_161;
		double L_436 = V_160;
		NullCheck(L_434);
		(L_434)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_435, L_436)));
		double L_437 = V_169;
		double L_438 = V_168;
		V_22 = ((double)((double)il2cpp_codegen_add(L_437, L_438)));
		double L_439 = V_22;
		double L_440 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_439, L_440)));
		double L_441 = V_22;
		double L_442 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_441, L_442));
		double L_443 = V_168;
		double L_444 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_443, L_444));
		double L_445 = V_169;
		double L_446 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_445, L_446));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_447 = V_19;
		double L_448 = V_161;
		double L_449 = V_160;
		NullCheck(L_447);
		(L_447)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_448, L_449)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_450 = V_19;
		double L_451 = V_22;
		NullCheck(L_450);
		(L_450)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_451);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_452 = V_19;
		double L_453 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_454 = __this->___cxab;
		int32_t L_455;
		L_455 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_452, L_453, L_454, NULL);
		V_33 = L_455;
		int32_t L_456 = V_33;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_457 = __this->___cxab;
		double L_458 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_459 = __this->___cxxab;
		int32_t L_460;
		L_460 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_456, L_457, L_458, L_459, NULL);
		V_34 = L_460;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_461 = V_19;
		double L_462 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_463 = __this->___cyab;
		int32_t L_464;
		L_464 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_461, L_462, L_463, NULL);
		V_35 = L_464;
		int32_t L_465 = V_35;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_466 = __this->___cyab;
		double L_467 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_468 = __this->___cyyab;
		int32_t L_469;
		L_469 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_465, L_466, L_467, L_468, NULL);
		V_36 = L_469;
		int32_t L_470 = V_34;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_471 = __this->___cxxab;
		int32_t L_472 = V_36;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_473 = __this->___cyyab;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_474 = __this->___cdet;
		int32_t L_475;
		L_475 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_470, L_471, L_472, L_473, L_474, NULL);
		V_37 = L_475;
		int32_t L_476 = V_27;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_477 = __this->___adet;
		int32_t L_478 = V_32;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_479 = __this->___bdet;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_480 = __this->___abdet;
		int32_t L_481;
		L_481 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_476, L_477, L_478, L_479, L_480, NULL);
		V_38 = L_481;
		int32_t L_482 = V_38;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_483 = __this->___abdet;
		int32_t L_484 = V_37;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_485 = __this->___cdet;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_486 = __this->___fin1;
		int32_t L_487;
		L_487 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_482, L_483, L_484, L_485, L_486, NULL);
		V_41 = L_487;
		int32_t L_488 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_489 = __this->___fin1;
		double L_490;
		L_490 = RobustPredicates_Estimate_mE0D0EC6F6EDEF9EDC029E9076B485BFB38FEF604(__this, L_488, L_489, NULL);
		V_6 = L_490;
		double L_491 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___iccerrboundB;
		double L_492 = ___4_permanent;
		V_7 = ((double)il2cpp_codegen_multiply(L_491, L_492));
		double L_493 = V_6;
		double L_494 = V_7;
		if ((((double)L_493) >= ((double)L_494)))
		{
			goto IL_0835;
		}
	}
	{
		double L_495 = V_6;
		double L_496 = V_7;
		if ((!(((double)((-L_495))) >= ((double)L_496))))
		{
			goto IL_0838;
		}
	}

IL_0835:
	{
		double L_497 = V_6;
		return L_497;
	}

IL_0838:
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_498 = ___0_pa;
		NullCheck(L_498);
		double L_499 = L_498->___x;
		double L_500 = V_0;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_499, L_500)));
		double L_501 = V_0;
		double L_502 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_501, L_502));
		double L_503 = V_158;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_504 = ___3_pd;
		NullCheck(L_504);
		double L_505 = L_504->___x;
		V_160 = ((double)il2cpp_codegen_subtract(L_503, L_505));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_506 = ___0_pa;
		NullCheck(L_506);
		double L_507 = L_506->___x;
		double L_508 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_507, L_508));
		double L_509 = V_161;
		double L_510 = V_160;
		V_42 = ((double)il2cpp_codegen_add(L_509, L_510));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_511 = ___0_pa;
		NullCheck(L_511);
		double L_512 = L_511->___y;
		double L_513 = V_3;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_512, L_513)));
		double L_514 = V_3;
		double L_515 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_514, L_515));
		double L_516 = V_158;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_517 = ___3_pd;
		NullCheck(L_517);
		double L_518 = L_517->___y;
		V_160 = ((double)il2cpp_codegen_subtract(L_516, L_518));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_519 = ___0_pa;
		NullCheck(L_519);
		double L_520 = L_519->___y;
		double L_521 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_520, L_521));
		double L_522 = V_161;
		double L_523 = V_160;
		V_45 = ((double)il2cpp_codegen_add(L_522, L_523));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_524 = ___1_pb;
		NullCheck(L_524);
		double L_525 = L_524->___x;
		double L_526 = V_1;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_525, L_526)));
		double L_527 = V_1;
		double L_528 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_527, L_528));
		double L_529 = V_158;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_530 = ___3_pd;
		NullCheck(L_530);
		double L_531 = L_530->___x;
		V_160 = ((double)il2cpp_codegen_subtract(L_529, L_531));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_532 = ___1_pb;
		NullCheck(L_532);
		double L_533 = L_532->___x;
		double L_534 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_533, L_534));
		double L_535 = V_161;
		double L_536 = V_160;
		V_43 = ((double)il2cpp_codegen_add(L_535, L_536));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_537 = ___1_pb;
		NullCheck(L_537);
		double L_538 = L_537->___y;
		double L_539 = V_4;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_538, L_539)));
		double L_540 = V_4;
		double L_541 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_540, L_541));
		double L_542 = V_158;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_543 = ___3_pd;
		NullCheck(L_543);
		double L_544 = L_543->___y;
		V_160 = ((double)il2cpp_codegen_subtract(L_542, L_544));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_545 = ___1_pb;
		NullCheck(L_545);
		double L_546 = L_545->___y;
		double L_547 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_546, L_547));
		double L_548 = V_161;
		double L_549 = V_160;
		V_46 = ((double)il2cpp_codegen_add(L_548, L_549));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_550 = ___2_pc;
		NullCheck(L_550);
		double L_551 = L_550->___x;
		double L_552 = V_2;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_551, L_552)));
		double L_553 = V_2;
		double L_554 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_553, L_554));
		double L_555 = V_158;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_556 = ___3_pd;
		NullCheck(L_556);
		double L_557 = L_556->___x;
		V_160 = ((double)il2cpp_codegen_subtract(L_555, L_557));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_558 = ___2_pc;
		NullCheck(L_558);
		double L_559 = L_558->___x;
		double L_560 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_559, L_560));
		double L_561 = V_161;
		double L_562 = V_160;
		V_44 = ((double)il2cpp_codegen_add(L_561, L_562));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_563 = ___2_pc;
		NullCheck(L_563);
		double L_564 = L_563->___y;
		double L_565 = V_5;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_564, L_565)));
		double L_566 = V_5;
		double L_567 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_566, L_567));
		double L_568 = V_158;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_569 = ___3_pd;
		NullCheck(L_569);
		double L_570 = L_569->___y;
		V_160 = ((double)il2cpp_codegen_subtract(L_568, L_570));
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_571 = ___2_pc;
		NullCheck(L_571);
		double L_572 = L_571->___y;
		double L_573 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_572, L_573));
		double L_574 = V_161;
		double L_575 = V_160;
		V_47 = ((double)il2cpp_codegen_add(L_574, L_575));
		double L_576 = V_42;
		if ((!(((double)L_576) == ((double)(0.0)))))
		{
			goto IL_09a7;
		}
	}
	{
		double L_577 = V_43;
		if ((!(((double)L_577) == ((double)(0.0)))))
		{
			goto IL_09a7;
		}
	}
	{
		double L_578 = V_44;
		if ((!(((double)L_578) == ((double)(0.0)))))
		{
			goto IL_09a7;
		}
	}
	{
		double L_579 = V_45;
		if ((!(((double)L_579) == ((double)(0.0)))))
		{
			goto IL_09a7;
		}
	}
	{
		double L_580 = V_46;
		if ((!(((double)L_580) == ((double)(0.0)))))
		{
			goto IL_09a7;
		}
	}
	{
		double L_581 = V_47;
		if ((!(((double)L_581) == ((double)(0.0)))))
		{
			goto IL_09a7;
		}
	}
	{
		double L_582 = V_6;
		return L_582;
	}

IL_09a7:
	{
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_583 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___iccerrboundC;
		double L_584 = ___4_permanent;
		double L_585 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___resulterrbound;
		double L_586 = V_6;
		if ((((double)L_586) >= ((double)(0.0))))
		{
			G_B12_0 = L_585;
			G_B12_1 = ((double)il2cpp_codegen_multiply(L_583, L_584));
			goto IL_09c6;
		}
		G_B11_0 = L_585;
		G_B11_1 = ((double)il2cpp_codegen_multiply(L_583, L_584));
	}
	{
		double L_587 = V_6;
		G_B13_0 = ((-L_587));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_09c8;
	}

IL_09c6:
	{
		double L_588 = V_6;
		G_B13_0 = L_588;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_09c8:
	{
		V_7 = ((double)il2cpp_codegen_add(G_B13_2, ((double)il2cpp_codegen_multiply(G_B13_1, G_B13_0))));
		double L_589 = V_6;
		double L_590 = V_0;
		double L_591 = V_0;
		double L_592 = V_3;
		double L_593 = V_3;
		double L_594 = V_1;
		double L_595 = V_47;
		double L_596 = V_5;
		double L_597 = V_43;
		double L_598 = V_4;
		double L_599 = V_44;
		double L_600 = V_2;
		double L_601 = V_46;
		double L_602 = V_0;
		double L_603 = V_42;
		double L_604 = V_3;
		double L_605 = V_45;
		double L_606 = V_1;
		double L_607 = V_5;
		double L_608 = V_4;
		double L_609 = V_2;
		double L_610 = V_1;
		double L_611 = V_1;
		double L_612 = V_4;
		double L_613 = V_4;
		double L_614 = V_2;
		double L_615 = V_45;
		double L_616 = V_3;
		double L_617 = V_44;
		double L_618 = V_5;
		double L_619 = V_42;
		double L_620 = V_0;
		double L_621 = V_47;
		double L_622 = V_1;
		double L_623 = V_43;
		double L_624 = V_4;
		double L_625 = V_46;
		double L_626 = V_2;
		double L_627 = V_3;
		double L_628 = V_5;
		double L_629 = V_0;
		double L_630 = V_2;
		double L_631 = V_2;
		double L_632 = V_5;
		double L_633 = V_5;
		double L_634 = V_0;
		double L_635 = V_46;
		double L_636 = V_4;
		double L_637 = V_42;
		double L_638 = V_3;
		double L_639 = V_43;
		double L_640 = V_1;
		double L_641 = V_45;
		double L_642 = V_2;
		double L_643 = V_44;
		double L_644 = V_5;
		double L_645 = V_47;
		double L_646 = V_0;
		double L_647 = V_4;
		double L_648 = V_3;
		double L_649 = V_1;
		V_6 = ((double)il2cpp_codegen_add(L_589, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_590, L_591)), ((double)il2cpp_codegen_multiply(L_592, L_593)))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_594, L_595)), ((double)il2cpp_codegen_multiply(L_596, L_597)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_598, L_599)), ((double)il2cpp_codegen_multiply(L_600, L_601)))))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_602, L_603)), ((double)il2cpp_codegen_multiply(L_604, L_605)))))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_606, L_607)), ((double)il2cpp_codegen_multiply(L_608, L_609)))))))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_610, L_611)), ((double)il2cpp_codegen_multiply(L_612, L_613)))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_614, L_615)), ((double)il2cpp_codegen_multiply(L_616, L_617)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_618, L_619)), ((double)il2cpp_codegen_multiply(L_620, L_621)))))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_622, L_623)), ((double)il2cpp_codegen_multiply(L_624, L_625)))))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_626, L_627)), ((double)il2cpp_codegen_multiply(L_628, L_629)))))))))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_630, L_631)), ((double)il2cpp_codegen_multiply(L_632, L_633)))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_634, L_635)), ((double)il2cpp_codegen_multiply(L_636, L_637)))), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_638, L_639)), ((double)il2cpp_codegen_multiply(L_640, L_641)))))))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_642, L_643)), ((double)il2cpp_codegen_multiply(L_644, L_645)))))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_646, L_647)), ((double)il2cpp_codegen_multiply(L_648, L_649))))))))))));
		double L_650 = V_6;
		double L_651 = V_7;
		if ((((double)L_650) >= ((double)L_651)))
		{
			goto IL_0a93;
		}
	}
	{
		double L_652 = V_6;
		double L_653 = V_7;
		if ((!(((double)((-L_652))) >= ((double)L_653))))
		{
			goto IL_0a96;
		}
	}

IL_0a93:
	{
		double L_654 = V_6;
		return L_654;
	}

IL_0a96:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_655 = __this->___fin1;
		V_39 = L_655;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_656 = __this->___fin2;
		V_40 = L_656;
		double L_657 = V_43;
		if ((!(((double)L_657) == ((double)(0.0)))))
		{
			goto IL_0add;
		}
	}
	{
		double L_658 = V_46;
		if ((!(((double)L_658) == ((double)(0.0)))))
		{
			goto IL_0add;
		}
	}
	{
		double L_659 = V_44;
		if ((!(((double)L_659) == ((double)(0.0)))))
		{
			goto IL_0add;
		}
	}
	{
		double L_660 = V_47;
		if ((((double)L_660) == ((double)(0.0))))
		{
			goto IL_0c11;
		}
	}

IL_0add:
	{
		double L_661 = V_0;
		double L_662 = V_0;
		V_48 = ((double)((double)il2cpp_codegen_multiply(L_661, L_662)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_663 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_664 = V_0;
		double L_665 = ((double)((double)il2cpp_codegen_multiply(L_663, L_664)));
		double L_666 = V_0;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_665, L_666)));
		double L_667 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_665, L_667));
		double L_668 = V_0;
		double L_669 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_668, L_669));
		double L_670 = V_48;
		double L_671 = V_163;
		double L_672 = V_163;
		double L_673 = V_163;
		double L_674 = V_163;
		double L_675 = V_164;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_670, ((double)il2cpp_codegen_multiply(L_671, L_672)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_673, L_674)), L_675))));
		double L_676 = V_164;
		double L_677 = V_164;
		double L_678 = V_167;
		V_54 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_676, L_677)), L_678));
		double L_679 = V_3;
		double L_680 = V_3;
		V_49 = ((double)((double)il2cpp_codegen_multiply(L_679, L_680)));
		double L_681 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_682 = V_3;
		double L_683 = ((double)((double)il2cpp_codegen_multiply(L_681, L_682)));
		double L_684 = V_3;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_683, L_684)));
		double L_685 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_683, L_685));
		double L_686 = V_3;
		double L_687 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_686, L_687));
		double L_688 = V_49;
		double L_689 = V_163;
		double L_690 = V_163;
		double L_691 = V_163;
		double L_692 = V_163;
		double L_693 = V_164;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_688, ((double)il2cpp_codegen_multiply(L_689, L_690)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_691, L_692)), L_693))));
		double L_694 = V_164;
		double L_695 = V_164;
		double L_696 = V_167;
		V_55 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_694, L_695)), L_696));
		double L_697 = V_54;
		double L_698 = V_55;
		V_168 = ((double)((double)il2cpp_codegen_add(L_697, L_698)));
		double L_699 = V_168;
		double L_700 = V_54;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_699, L_700)));
		double L_701 = V_168;
		double L_702 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_701, L_702));
		double L_703 = V_55;
		double L_704 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_703, L_704));
		double L_705 = V_54;
		double L_706 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_705, L_706));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_707 = V_60;
		double L_708 = V_161;
		double L_709 = V_160;
		NullCheck(L_707);
		(L_707)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_708, L_709)));
		double L_710 = V_48;
		double L_711 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_710, L_711)));
		double L_712 = V_169;
		double L_713 = V_48;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_712, L_713)));
		double L_714 = V_169;
		double L_715 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_714, L_715));
		double L_716 = V_168;
		double L_717 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_716, L_717));
		double L_718 = V_48;
		double L_719 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_718, L_719));
		double L_720 = V_161;
		double L_721 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_720, L_721));
		double L_722 = V_170;
		double L_723 = V_49;
		V_168 = ((double)((double)il2cpp_codegen_add(L_722, L_723)));
		double L_724 = V_168;
		double L_725 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_724, L_725)));
		double L_726 = V_168;
		double L_727 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_726, L_727));
		double L_728 = V_49;
		double L_729 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_728, L_729));
		double L_730 = V_170;
		double L_731 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_730, L_731));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_732 = V_60;
		double L_733 = V_161;
		double L_734 = V_160;
		NullCheck(L_732);
		(L_732)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_733, L_734)));
		double L_735 = V_169;
		double L_736 = V_168;
		V_63 = ((double)((double)il2cpp_codegen_add(L_735, L_736)));
		double L_737 = V_63;
		double L_738 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_737, L_738)));
		double L_739 = V_63;
		double L_740 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_739, L_740));
		double L_741 = V_168;
		double L_742 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_741, L_742));
		double L_743 = V_169;
		double L_744 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_743, L_744));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_745 = V_60;
		double L_746 = V_161;
		double L_747 = V_160;
		NullCheck(L_745);
		(L_745)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_746, L_747)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_748 = V_60;
		double L_749 = V_63;
		NullCheck(L_748);
		(L_748)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_749);
	}

IL_0c11:
	{
		double L_750 = V_44;
		if ((!(((double)L_750) == ((double)(0.0)))))
		{
			goto IL_0c48;
		}
	}
	{
		double L_751 = V_47;
		if ((!(((double)L_751) == ((double)(0.0)))))
		{
			goto IL_0c48;
		}
	}
	{
		double L_752 = V_42;
		if ((!(((double)L_752) == ((double)(0.0)))))
		{
			goto IL_0c48;
		}
	}
	{
		double L_753 = V_45;
		if ((((double)L_753) == ((double)(0.0))))
		{
			goto IL_0d81;
		}
	}

IL_0c48:
	{
		double L_754 = V_1;
		double L_755 = V_1;
		V_50 = ((double)((double)il2cpp_codegen_multiply(L_754, L_755)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_756 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_757 = V_1;
		double L_758 = ((double)((double)il2cpp_codegen_multiply(L_756, L_757)));
		double L_759 = V_1;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_758, L_759)));
		double L_760 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_758, L_760));
		double L_761 = V_1;
		double L_762 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_761, L_762));
		double L_763 = V_50;
		double L_764 = V_163;
		double L_765 = V_163;
		double L_766 = V_163;
		double L_767 = V_163;
		double L_768 = V_164;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_763, ((double)il2cpp_codegen_multiply(L_764, L_765)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_766, L_767)), L_768))));
		double L_769 = V_164;
		double L_770 = V_164;
		double L_771 = V_167;
		V_56 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_769, L_770)), L_771));
		double L_772 = V_4;
		double L_773 = V_4;
		V_51 = ((double)((double)il2cpp_codegen_multiply(L_772, L_773)));
		double L_774 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_775 = V_4;
		double L_776 = ((double)((double)il2cpp_codegen_multiply(L_774, L_775)));
		double L_777 = V_4;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_776, L_777)));
		double L_778 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_776, L_778));
		double L_779 = V_4;
		double L_780 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_779, L_780));
		double L_781 = V_51;
		double L_782 = V_163;
		double L_783 = V_163;
		double L_784 = V_163;
		double L_785 = V_163;
		double L_786 = V_164;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_781, ((double)il2cpp_codegen_multiply(L_782, L_783)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_784, L_785)), L_786))));
		double L_787 = V_164;
		double L_788 = V_164;
		double L_789 = V_167;
		V_57 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_787, L_788)), L_789));
		double L_790 = V_56;
		double L_791 = V_57;
		V_168 = ((double)((double)il2cpp_codegen_add(L_790, L_791)));
		double L_792 = V_168;
		double L_793 = V_56;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_792, L_793)));
		double L_794 = V_168;
		double L_795 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_794, L_795));
		double L_796 = V_57;
		double L_797 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_796, L_797));
		double L_798 = V_56;
		double L_799 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_798, L_799));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_800 = V_61;
		double L_801 = V_161;
		double L_802 = V_160;
		NullCheck(L_800);
		(L_800)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_801, L_802)));
		double L_803 = V_50;
		double L_804 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_803, L_804)));
		double L_805 = V_169;
		double L_806 = V_50;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_805, L_806)));
		double L_807 = V_169;
		double L_808 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_807, L_808));
		double L_809 = V_168;
		double L_810 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_809, L_810));
		double L_811 = V_50;
		double L_812 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_811, L_812));
		double L_813 = V_161;
		double L_814 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_813, L_814));
		double L_815 = V_170;
		double L_816 = V_51;
		V_168 = ((double)((double)il2cpp_codegen_add(L_815, L_816)));
		double L_817 = V_168;
		double L_818 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_817, L_818)));
		double L_819 = V_168;
		double L_820 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_819, L_820));
		double L_821 = V_51;
		double L_822 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_821, L_822));
		double L_823 = V_170;
		double L_824 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_823, L_824));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_825 = V_61;
		double L_826 = V_161;
		double L_827 = V_160;
		NullCheck(L_825);
		(L_825)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_826, L_827)));
		double L_828 = V_169;
		double L_829 = V_168;
		V_64 = ((double)((double)il2cpp_codegen_add(L_828, L_829)));
		double L_830 = V_64;
		double L_831 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_830, L_831)));
		double L_832 = V_64;
		double L_833 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_832, L_833));
		double L_834 = V_168;
		double L_835 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_834, L_835));
		double L_836 = V_169;
		double L_837 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_836, L_837));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_838 = V_61;
		double L_839 = V_161;
		double L_840 = V_160;
		NullCheck(L_838);
		(L_838)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_839, L_840)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_841 = V_61;
		double L_842 = V_64;
		NullCheck(L_841);
		(L_841)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_842);
	}

IL_0d81:
	{
		double L_843 = V_42;
		if ((!(((double)L_843) == ((double)(0.0)))))
		{
			goto IL_0db8;
		}
	}
	{
		double L_844 = V_45;
		if ((!(((double)L_844) == ((double)(0.0)))))
		{
			goto IL_0db8;
		}
	}
	{
		double L_845 = V_43;
		if ((!(((double)L_845) == ((double)(0.0)))))
		{
			goto IL_0db8;
		}
	}
	{
		double L_846 = V_46;
		if ((((double)L_846) == ((double)(0.0))))
		{
			goto IL_0ef1;
		}
	}

IL_0db8:
	{
		double L_847 = V_2;
		double L_848 = V_2;
		V_52 = ((double)((double)il2cpp_codegen_multiply(L_847, L_848)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_849 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_850 = V_2;
		double L_851 = ((double)((double)il2cpp_codegen_multiply(L_849, L_850)));
		double L_852 = V_2;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_851, L_852)));
		double L_853 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_851, L_853));
		double L_854 = V_2;
		double L_855 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_854, L_855));
		double L_856 = V_52;
		double L_857 = V_163;
		double L_858 = V_163;
		double L_859 = V_163;
		double L_860 = V_163;
		double L_861 = V_164;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_856, ((double)il2cpp_codegen_multiply(L_857, L_858)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_859, L_860)), L_861))));
		double L_862 = V_164;
		double L_863 = V_164;
		double L_864 = V_167;
		V_58 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_862, L_863)), L_864));
		double L_865 = V_5;
		double L_866 = V_5;
		V_53 = ((double)((double)il2cpp_codegen_multiply(L_865, L_866)));
		double L_867 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_868 = V_5;
		double L_869 = ((double)((double)il2cpp_codegen_multiply(L_867, L_868)));
		double L_870 = V_5;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_869, L_870)));
		double L_871 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_869, L_871));
		double L_872 = V_5;
		double L_873 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_872, L_873));
		double L_874 = V_53;
		double L_875 = V_163;
		double L_876 = V_163;
		double L_877 = V_163;
		double L_878 = V_163;
		double L_879 = V_164;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_874, ((double)il2cpp_codegen_multiply(L_875, L_876)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_877, L_878)), L_879))));
		double L_880 = V_164;
		double L_881 = V_164;
		double L_882 = V_167;
		V_59 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_880, L_881)), L_882));
		double L_883 = V_58;
		double L_884 = V_59;
		V_168 = ((double)((double)il2cpp_codegen_add(L_883, L_884)));
		double L_885 = V_168;
		double L_886 = V_58;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_885, L_886)));
		double L_887 = V_168;
		double L_888 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_887, L_888));
		double L_889 = V_59;
		double L_890 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_889, L_890));
		double L_891 = V_58;
		double L_892 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_891, L_892));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_893 = V_62;
		double L_894 = V_161;
		double L_895 = V_160;
		NullCheck(L_893);
		(L_893)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_894, L_895)));
		double L_896 = V_52;
		double L_897 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_896, L_897)));
		double L_898 = V_169;
		double L_899 = V_52;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_898, L_899)));
		double L_900 = V_169;
		double L_901 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_900, L_901));
		double L_902 = V_168;
		double L_903 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_902, L_903));
		double L_904 = V_52;
		double L_905 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_904, L_905));
		double L_906 = V_161;
		double L_907 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_906, L_907));
		double L_908 = V_170;
		double L_909 = V_53;
		V_168 = ((double)((double)il2cpp_codegen_add(L_908, L_909)));
		double L_910 = V_168;
		double L_911 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_910, L_911)));
		double L_912 = V_168;
		double L_913 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_912, L_913));
		double L_914 = V_53;
		double L_915 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_914, L_915));
		double L_916 = V_170;
		double L_917 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_916, L_917));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_918 = V_62;
		double L_919 = V_161;
		double L_920 = V_160;
		NullCheck(L_918);
		(L_918)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_919, L_920)));
		double L_921 = V_169;
		double L_922 = V_168;
		V_65 = ((double)((double)il2cpp_codegen_add(L_921, L_922)));
		double L_923 = V_65;
		double L_924 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_923, L_924)));
		double L_925 = V_65;
		double L_926 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_925, L_926));
		double L_927 = V_168;
		double L_928 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_927, L_928));
		double L_929 = V_169;
		double L_930 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_929, L_930));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_931 = V_62;
		double L_932 = V_161;
		double L_933 = V_160;
		NullCheck(L_931);
		(L_931)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_932, L_933)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_934 = V_62;
		double L_935 = V_65;
		NullCheck(L_934);
		(L_934)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_935);
	}

IL_0ef1:
	{
		double L_936 = V_42;
		if ((((double)L_936) == ((double)(0.0))))
		{
			goto IL_0fce;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_937 = V_17;
		double L_938 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_939 = V_106;
		int32_t L_940;
		L_940 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_937, L_938, L_939, NULL);
		V_112 = L_940;
		int32_t L_941 = V_112;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_942 = V_106;
		double L_943 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_944 = __this->___temp16a;
		int32_t L_945;
		L_945 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_941, L_942, ((double)il2cpp_codegen_multiply((2.0), L_943)), L_944, NULL);
		V_75 = L_945;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_946 = V_62;
		double L_947 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_948 = V_83;
		int32_t L_949;
		L_949 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_946, L_947, L_948, NULL);
		V_87 = L_949;
		int32_t L_950 = V_87;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_951 = V_83;
		double L_952 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_953 = __this->___temp16b;
		int32_t L_954;
		L_954 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_950, L_951, L_952, L_953, NULL);
		V_76 = L_954;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_955 = V_61;
		double L_956 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_957 = V_82;
		int32_t L_958;
		L_958 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_955, L_956, L_957, NULL);
		V_86 = L_958;
		int32_t L_959 = V_86;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_960 = V_82;
		double L_961 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_962 = __this->___temp16c;
		int32_t L_963;
		L_963 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_959, L_960, ((-L_961)), L_962, NULL);
		V_77 = L_963;
		int32_t L_964 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_965 = __this->___temp16a;
		int32_t L_966 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_967 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_968 = __this->___temp32a;
		int32_t L_969;
		L_969 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_964, L_965, L_966, L_967, L_968, NULL);
		V_78 = L_969;
		int32_t L_970 = V_77;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_971 = __this->___temp16c;
		int32_t L_972 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_973 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_974 = __this->___temp48;
		int32_t L_975;
		L_975 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_970, L_971, L_972, L_973, L_974, NULL);
		V_80 = L_975;
		int32_t L_976 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_977 = V_39;
		int32_t L_978 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_979 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_980 = V_40;
		int32_t L_981;
		L_981 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_976, L_977, L_978, L_979, L_980, NULL);
		V_41 = L_981;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_982 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_983 = V_40;
		V_39 = L_983;
		V_40 = L_982;
	}

IL_0fce:
	{
		double L_984 = V_45;
		if ((((double)L_984) == ((double)(0.0))))
		{
			goto IL_10a9;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_985 = V_17;
		double L_986 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_987 = V_107;
		int32_t L_988;
		L_988 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_985, L_986, L_987, NULL);
		V_113 = L_988;
		int32_t L_989 = V_113;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_990 = V_107;
		double L_991 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_992 = __this->___temp16a;
		int32_t L_993;
		L_993 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_989, L_990, ((double)il2cpp_codegen_multiply((2.0), L_991)), L_992, NULL);
		V_75 = L_993;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_994 = V_61;
		double L_995 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_996 = V_84;
		int32_t L_997;
		L_997 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_994, L_995, L_996, NULL);
		V_88 = L_997;
		int32_t L_998 = V_88;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_999 = V_84;
		double L_1000 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1001 = __this->___temp16b;
		int32_t L_1002;
		L_1002 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_998, L_999, L_1000, L_1001, NULL);
		V_76 = L_1002;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1003 = V_62;
		double L_1004 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1005 = V_85;
		int32_t L_1006;
		L_1006 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1003, L_1004, L_1005, NULL);
		V_89 = L_1006;
		int32_t L_1007 = V_89;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1008 = V_85;
		double L_1009 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1010 = __this->___temp16c;
		int32_t L_1011;
		L_1011 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1007, L_1008, ((-L_1009)), L_1010, NULL);
		V_77 = L_1011;
		int32_t L_1012 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1013 = __this->___temp16a;
		int32_t L_1014 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1015 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1016 = __this->___temp32a;
		int32_t L_1017;
		L_1017 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1012, L_1013, L_1014, L_1015, L_1016, NULL);
		V_78 = L_1017;
		int32_t L_1018 = V_77;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1019 = __this->___temp16c;
		int32_t L_1020 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1021 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1022 = __this->___temp48;
		int32_t L_1023;
		L_1023 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1018, L_1019, L_1020, L_1021, L_1022, NULL);
		V_80 = L_1023;
		int32_t L_1024 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1025 = V_39;
		int32_t L_1026 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1027 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1028 = V_40;
		int32_t L_1029;
		L_1029 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1024, L_1025, L_1026, L_1027, L_1028, NULL);
		V_41 = L_1029;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1030 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1031 = V_40;
		V_39 = L_1031;
		V_40 = L_1030;
	}

IL_10a9:
	{
		double L_1032 = V_43;
		if ((((double)L_1032) == ((double)(0.0))))
		{
			goto IL_1185;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1033 = V_18;
		double L_1034 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1035 = V_108;
		int32_t L_1036;
		L_1036 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1033, L_1034, L_1035, NULL);
		V_114 = L_1036;
		int32_t L_1037 = V_114;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1038 = V_108;
		double L_1039 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1040 = __this->___temp16a;
		int32_t L_1041;
		L_1041 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1037, L_1038, ((double)il2cpp_codegen_multiply((2.0), L_1039)), L_1040, NULL);
		V_75 = L_1041;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1042 = V_60;
		double L_1043 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1044 = V_90;
		int32_t L_1045;
		L_1045 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1042, L_1043, L_1044, NULL);
		V_94 = L_1045;
		int32_t L_1046 = V_94;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1047 = V_90;
		double L_1048 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1049 = __this->___temp16b;
		int32_t L_1050;
		L_1050 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1046, L_1047, L_1048, L_1049, NULL);
		V_76 = L_1050;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1051 = V_62;
		double L_1052 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1053 = V_91;
		int32_t L_1054;
		L_1054 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1051, L_1052, L_1053, NULL);
		V_95 = L_1054;
		int32_t L_1055 = V_95;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1056 = V_91;
		double L_1057 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1058 = __this->___temp16c;
		int32_t L_1059;
		L_1059 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1055, L_1056, ((-L_1057)), L_1058, NULL);
		V_77 = L_1059;
		int32_t L_1060 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1061 = __this->___temp16a;
		int32_t L_1062 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1063 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1064 = __this->___temp32a;
		int32_t L_1065;
		L_1065 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1060, L_1061, L_1062, L_1063, L_1064, NULL);
		V_78 = L_1065;
		int32_t L_1066 = V_77;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1067 = __this->___temp16c;
		int32_t L_1068 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1069 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1070 = __this->___temp48;
		int32_t L_1071;
		L_1071 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1066, L_1067, L_1068, L_1069, L_1070, NULL);
		V_80 = L_1071;
		int32_t L_1072 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1073 = V_39;
		int32_t L_1074 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1075 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1076 = V_40;
		int32_t L_1077;
		L_1077 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1072, L_1073, L_1074, L_1075, L_1076, NULL);
		V_41 = L_1077;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1078 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1079 = V_40;
		V_39 = L_1079;
		V_40 = L_1078;
	}

IL_1185:
	{
		double L_1080 = V_46;
		if ((((double)L_1080) == ((double)(0.0))))
		{
			goto IL_1261;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1081 = V_18;
		double L_1082 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1083 = V_109;
		int32_t L_1084;
		L_1084 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1081, L_1082, L_1083, NULL);
		V_115 = L_1084;
		int32_t L_1085 = V_115;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1086 = V_109;
		double L_1087 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1088 = __this->___temp16a;
		int32_t L_1089;
		L_1089 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1085, L_1086, ((double)il2cpp_codegen_multiply((2.0), L_1087)), L_1088, NULL);
		V_75 = L_1089;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1090 = V_62;
		double L_1091 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1092 = V_93;
		int32_t L_1093;
		L_1093 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1090, L_1091, L_1092, NULL);
		V_97 = L_1093;
		int32_t L_1094 = V_97;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1095 = V_93;
		double L_1096 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1097 = __this->___temp16b;
		int32_t L_1098;
		L_1098 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1094, L_1095, L_1096, L_1097, NULL);
		V_76 = L_1098;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1099 = V_60;
		double L_1100 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1101 = V_92;
		int32_t L_1102;
		L_1102 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1099, L_1100, L_1101, NULL);
		V_96 = L_1102;
		int32_t L_1103 = V_96;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1104 = V_92;
		double L_1105 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1106 = __this->___temp16c;
		int32_t L_1107;
		L_1107 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1103, L_1104, ((-L_1105)), L_1106, NULL);
		V_77 = L_1107;
		int32_t L_1108 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1109 = __this->___temp16a;
		int32_t L_1110 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1111 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1112 = __this->___temp32a;
		int32_t L_1113;
		L_1113 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1108, L_1109, L_1110, L_1111, L_1112, NULL);
		V_78 = L_1113;
		int32_t L_1114 = V_77;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1115 = __this->___temp16c;
		int32_t L_1116 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1117 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1118 = __this->___temp48;
		int32_t L_1119;
		L_1119 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1114, L_1115, L_1116, L_1117, L_1118, NULL);
		V_80 = L_1119;
		int32_t L_1120 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1121 = V_39;
		int32_t L_1122 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1123 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1124 = V_40;
		int32_t L_1125;
		L_1125 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1120, L_1121, L_1122, L_1123, L_1124, NULL);
		V_41 = L_1125;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1126 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1127 = V_40;
		V_39 = L_1127;
		V_40 = L_1126;
	}

IL_1261:
	{
		double L_1128 = V_44;
		if ((((double)L_1128) == ((double)(0.0))))
		{
			goto IL_133d;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1129 = V_19;
		double L_1130 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1131 = V_110;
		int32_t L_1132;
		L_1132 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1129, L_1130, L_1131, NULL);
		V_116 = L_1132;
		int32_t L_1133 = V_116;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1134 = V_110;
		double L_1135 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1136 = __this->___temp16a;
		int32_t L_1137;
		L_1137 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1133, L_1134, ((double)il2cpp_codegen_multiply((2.0), L_1135)), L_1136, NULL);
		V_75 = L_1137;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1138 = V_61;
		double L_1139 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1140 = V_99;
		int32_t L_1141;
		L_1141 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1138, L_1139, L_1140, NULL);
		V_103 = L_1141;
		int32_t L_1142 = V_103;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1143 = V_99;
		double L_1144 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1145 = __this->___temp16b;
		int32_t L_1146;
		L_1146 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1142, L_1143, L_1144, L_1145, NULL);
		V_76 = L_1146;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1147 = V_60;
		double L_1148 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1149 = V_98;
		int32_t L_1150;
		L_1150 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1147, L_1148, L_1149, NULL);
		V_102 = L_1150;
		int32_t L_1151 = V_102;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1152 = V_98;
		double L_1153 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1154 = __this->___temp16c;
		int32_t L_1155;
		L_1155 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1151, L_1152, ((-L_1153)), L_1154, NULL);
		V_77 = L_1155;
		int32_t L_1156 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1157 = __this->___temp16a;
		int32_t L_1158 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1159 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1160 = __this->___temp32a;
		int32_t L_1161;
		L_1161 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1156, L_1157, L_1158, L_1159, L_1160, NULL);
		V_78 = L_1161;
		int32_t L_1162 = V_77;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1163 = __this->___temp16c;
		int32_t L_1164 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1165 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1166 = __this->___temp48;
		int32_t L_1167;
		L_1167 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1162, L_1163, L_1164, L_1165, L_1166, NULL);
		V_80 = L_1167;
		int32_t L_1168 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1169 = V_39;
		int32_t L_1170 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1171 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1172 = V_40;
		int32_t L_1173;
		L_1173 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1168, L_1169, L_1170, L_1171, L_1172, NULL);
		V_41 = L_1173;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1174 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1175 = V_40;
		V_39 = L_1175;
		V_40 = L_1174;
	}

IL_133d:
	{
		double L_1176 = V_47;
		if ((((double)L_1176) == ((double)(0.0))))
		{
			goto IL_1419;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1177 = V_19;
		double L_1178 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1179 = V_111;
		int32_t L_1180;
		L_1180 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1177, L_1178, L_1179, NULL);
		V_117 = L_1180;
		int32_t L_1181 = V_117;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1182 = V_111;
		double L_1183 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1184 = __this->___temp16a;
		int32_t L_1185;
		L_1185 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1181, L_1182, ((double)il2cpp_codegen_multiply((2.0), L_1183)), L_1184, NULL);
		V_75 = L_1185;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1186 = V_60;
		double L_1187 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1188 = V_100;
		int32_t L_1189;
		L_1189 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1186, L_1187, L_1188, NULL);
		V_104 = L_1189;
		int32_t L_1190 = V_104;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1191 = V_100;
		double L_1192 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1193 = __this->___temp16b;
		int32_t L_1194;
		L_1194 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1190, L_1191, L_1192, L_1193, NULL);
		V_76 = L_1194;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1195 = V_61;
		double L_1196 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1197 = V_101;
		int32_t L_1198;
		L_1198 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1195, L_1196, L_1197, NULL);
		V_105 = L_1198;
		int32_t L_1199 = V_105;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1200 = V_101;
		double L_1201 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1202 = __this->___temp16c;
		int32_t L_1203;
		L_1203 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1199, L_1200, ((-L_1201)), L_1202, NULL);
		V_77 = L_1203;
		int32_t L_1204 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1205 = __this->___temp16a;
		int32_t L_1206 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1207 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1208 = __this->___temp32a;
		int32_t L_1209;
		L_1209 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1204, L_1205, L_1206, L_1207, L_1208, NULL);
		V_78 = L_1209;
		int32_t L_1210 = V_77;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1211 = __this->___temp16c;
		int32_t L_1212 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1213 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1214 = __this->___temp48;
		int32_t L_1215;
		L_1215 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1210, L_1211, L_1212, L_1213, L_1214, NULL);
		V_80 = L_1215;
		int32_t L_1216 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1217 = V_39;
		int32_t L_1218 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1219 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1220 = V_40;
		int32_t L_1221;
		L_1221 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1216, L_1217, L_1218, L_1219, L_1220, NULL);
		V_41 = L_1221;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1222 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1223 = V_40;
		V_39 = L_1223;
		V_40 = L_1222;
	}

IL_1419:
	{
		double L_1224 = V_42;
		if ((!(((double)L_1224) == ((double)(0.0)))))
		{
			goto IL_1436;
		}
	}
	{
		double L_1225 = V_45;
		if ((((double)L_1225) == ((double)(0.0))))
		{
			goto IL_1c3d;
		}
	}

IL_1436:
	{
		double L_1226 = V_43;
		if ((!(((double)L_1226) == ((double)(0.0)))))
		{
			goto IL_146d;
		}
	}
	{
		double L_1227 = V_46;
		if ((!(((double)L_1227) == ((double)(0.0)))))
		{
			goto IL_146d;
		}
	}
	{
		double L_1228 = V_44;
		if ((!(((double)L_1228) == ((double)(0.0)))))
		{
			goto IL_146d;
		}
	}
	{
		double L_1229 = V_47;
		if ((((double)L_1229) == ((double)(0.0))))
		{
			goto IL_18f8;
		}
	}

IL_146d:
	{
		double L_1230 = V_43;
		double L_1231 = V_5;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_1230, L_1231)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_1232 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1233 = V_43;
		double L_1234 = ((double)((double)il2cpp_codegen_multiply(L_1232, L_1233)));
		double L_1235 = V_43;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1234, L_1235)));
		double L_1236 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1234, L_1236));
		double L_1237 = V_43;
		double L_1238 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1237, L_1238));
		double L_1239 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1240 = V_5;
		double L_1241 = ((double)((double)il2cpp_codegen_multiply(L_1239, L_1240)));
		double L_1242 = V_5;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1241, L_1242)));
		double L_1243 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1241, L_1243));
		double L_1244 = V_5;
		double L_1245 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1244, L_1245));
		double L_1246 = V_66;
		double L_1247 = V_163;
		double L_1248 = V_165;
		double L_1249 = V_164;
		double L_1250 = V_165;
		double L_1251 = V_163;
		double L_1252 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1246, ((double)il2cpp_codegen_multiply(L_1247, L_1248)))), ((double)il2cpp_codegen_multiply(L_1249, L_1250)))), ((double)il2cpp_codegen_multiply(L_1251, L_1252))));
		double L_1253 = V_164;
		double L_1254 = V_166;
		double L_1255 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1253, L_1254)), L_1255));
		double L_1256 = V_1;
		double L_1257 = V_47;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_1256, L_1257)));
		double L_1258 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1259 = V_1;
		double L_1260 = ((double)((double)il2cpp_codegen_multiply(L_1258, L_1259)));
		double L_1261 = V_1;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1260, L_1261)));
		double L_1262 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1260, L_1262));
		double L_1263 = V_1;
		double L_1264 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1263, L_1264));
		double L_1265 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1266 = V_47;
		double L_1267 = ((double)((double)il2cpp_codegen_multiply(L_1265, L_1266)));
		double L_1268 = V_47;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1267, L_1268)));
		double L_1269 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1267, L_1269));
		double L_1270 = V_47;
		double L_1271 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1270, L_1271));
		double L_1272 = V_67;
		double L_1273 = V_163;
		double L_1274 = V_165;
		double L_1275 = V_164;
		double L_1276 = V_165;
		double L_1277 = V_163;
		double L_1278 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1272, ((double)il2cpp_codegen_multiply(L_1273, L_1274)))), ((double)il2cpp_codegen_multiply(L_1275, L_1276)))), ((double)il2cpp_codegen_multiply(L_1277, L_1278))));
		double L_1279 = V_164;
		double L_1280 = V_166;
		double L_1281 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1279, L_1280)), L_1281));
		double L_1282 = V_68;
		double L_1283 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1282, L_1283)));
		double L_1284 = V_168;
		double L_1285 = V_68;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1284, L_1285)));
		double L_1286 = V_168;
		double L_1287 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1286, L_1287));
		double L_1288 = V_69;
		double L_1289 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1288, L_1289));
		double L_1290 = V_68;
		double L_1291 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1290, L_1291));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1292 = V_70;
		double L_1293 = V_161;
		double L_1294 = V_160;
		NullCheck(L_1292);
		(L_1292)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_1293, L_1294)));
		double L_1295 = V_66;
		double L_1296 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_1295, L_1296)));
		double L_1297 = V_169;
		double L_1298 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1297, L_1298)));
		double L_1299 = V_169;
		double L_1300 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1299, L_1300));
		double L_1301 = V_168;
		double L_1302 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1301, L_1302));
		double L_1303 = V_66;
		double L_1304 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1303, L_1304));
		double L_1305 = V_161;
		double L_1306 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_1305, L_1306));
		double L_1307 = V_170;
		double L_1308 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1307, L_1308)));
		double L_1309 = V_168;
		double L_1310 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1309, L_1310)));
		double L_1311 = V_168;
		double L_1312 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1311, L_1312));
		double L_1313 = V_67;
		double L_1314 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1313, L_1314));
		double L_1315 = V_170;
		double L_1316 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1315, L_1316));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1317 = V_70;
		double L_1318 = V_161;
		double L_1319 = V_160;
		NullCheck(L_1317);
		(L_1317)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_1318, L_1319)));
		double L_1320 = V_169;
		double L_1321 = V_168;
		V_72 = ((double)((double)il2cpp_codegen_add(L_1320, L_1321)));
		double L_1322 = V_72;
		double L_1323 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1322, L_1323)));
		double L_1324 = V_72;
		double L_1325 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1324, L_1325));
		double L_1326 = V_168;
		double L_1327 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1326, L_1327));
		double L_1328 = V_169;
		double L_1329 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1328, L_1329));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1330 = V_70;
		double L_1331 = V_161;
		double L_1332 = V_160;
		NullCheck(L_1330);
		(L_1330)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_1331, L_1332)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1333 = V_70;
		double L_1334 = V_72;
		NullCheck(L_1333);
		(L_1333)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1334);
		double L_1335 = V_4;
		V_157 = ((-L_1335));
		double L_1336 = V_44;
		double L_1337 = V_157;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_1336, L_1337)));
		double L_1338 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1339 = V_44;
		double L_1340 = ((double)((double)il2cpp_codegen_multiply(L_1338, L_1339)));
		double L_1341 = V_44;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1340, L_1341)));
		double L_1342 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1340, L_1342));
		double L_1343 = V_44;
		double L_1344 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1343, L_1344));
		double L_1345 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1346 = V_157;
		double L_1347 = ((double)((double)il2cpp_codegen_multiply(L_1345, L_1346)));
		double L_1348 = V_157;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1347, L_1348)));
		double L_1349 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1347, L_1349));
		double L_1350 = V_157;
		double L_1351 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1350, L_1351));
		double L_1352 = V_66;
		double L_1353 = V_163;
		double L_1354 = V_165;
		double L_1355 = V_164;
		double L_1356 = V_165;
		double L_1357 = V_163;
		double L_1358 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1352, ((double)il2cpp_codegen_multiply(L_1353, L_1354)))), ((double)il2cpp_codegen_multiply(L_1355, L_1356)))), ((double)il2cpp_codegen_multiply(L_1357, L_1358))));
		double L_1359 = V_164;
		double L_1360 = V_166;
		double L_1361 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1359, L_1360)), L_1361));
		double L_1362 = V_46;
		V_157 = ((-L_1362));
		double L_1363 = V_2;
		double L_1364 = V_157;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_1363, L_1364)));
		double L_1365 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1366 = V_2;
		double L_1367 = ((double)((double)il2cpp_codegen_multiply(L_1365, L_1366)));
		double L_1368 = V_2;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1367, L_1368)));
		double L_1369 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1367, L_1369));
		double L_1370 = V_2;
		double L_1371 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1370, L_1371));
		double L_1372 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1373 = V_157;
		double L_1374 = ((double)((double)il2cpp_codegen_multiply(L_1372, L_1373)));
		double L_1375 = V_157;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1374, L_1375)));
		double L_1376 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1374, L_1376));
		double L_1377 = V_157;
		double L_1378 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1377, L_1378));
		double L_1379 = V_67;
		double L_1380 = V_163;
		double L_1381 = V_165;
		double L_1382 = V_164;
		double L_1383 = V_165;
		double L_1384 = V_163;
		double L_1385 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1379, ((double)il2cpp_codegen_multiply(L_1380, L_1381)))), ((double)il2cpp_codegen_multiply(L_1382, L_1383)))), ((double)il2cpp_codegen_multiply(L_1384, L_1385))));
		double L_1386 = V_164;
		double L_1387 = V_166;
		double L_1388 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1386, L_1387)), L_1388));
		double L_1389 = V_68;
		double L_1390 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1389, L_1390)));
		double L_1391 = V_168;
		double L_1392 = V_68;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1391, L_1392)));
		double L_1393 = V_168;
		double L_1394 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1393, L_1394));
		double L_1395 = V_69;
		double L_1396 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1395, L_1396));
		double L_1397 = V_68;
		double L_1398 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1397, L_1398));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1399 = V_71;
		double L_1400 = V_161;
		double L_1401 = V_160;
		NullCheck(L_1399);
		(L_1399)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_1400, L_1401)));
		double L_1402 = V_66;
		double L_1403 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_1402, L_1403)));
		double L_1404 = V_169;
		double L_1405 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1404, L_1405)));
		double L_1406 = V_169;
		double L_1407 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1406, L_1407));
		double L_1408 = V_168;
		double L_1409 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1408, L_1409));
		double L_1410 = V_66;
		double L_1411 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1410, L_1411));
		double L_1412 = V_161;
		double L_1413 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_1412, L_1413));
		double L_1414 = V_170;
		double L_1415 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1414, L_1415)));
		double L_1416 = V_168;
		double L_1417 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1416, L_1417)));
		double L_1418 = V_168;
		double L_1419 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1418, L_1419));
		double L_1420 = V_67;
		double L_1421 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1420, L_1421));
		double L_1422 = V_170;
		double L_1423 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1422, L_1423));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1424 = V_71;
		double L_1425 = V_161;
		double L_1426 = V_160;
		NullCheck(L_1424);
		(L_1424)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_1425, L_1426)));
		double L_1427 = V_169;
		double L_1428 = V_168;
		V_73 = ((double)((double)il2cpp_codegen_add(L_1427, L_1428)));
		double L_1429 = V_73;
		double L_1430 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1429, L_1430)));
		double L_1431 = V_73;
		double L_1432 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1431, L_1432));
		double L_1433 = V_168;
		double L_1434 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1433, L_1434));
		double L_1435 = V_169;
		double L_1436 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1435, L_1436));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1437 = V_71;
		double L_1438 = V_161;
		double L_1439 = V_160;
		NullCheck(L_1437);
		(L_1437)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_1438, L_1439)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1440 = V_71;
		double L_1441 = V_73;
		NullCheck(L_1440);
		(L_1440)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1441);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1442 = V_70;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1443 = V_71;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1444 = V_143;
		int32_t L_1445;
		L_1445 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, 4, L_1442, 4, L_1443, L_1444, NULL);
		V_146 = L_1445;
		double L_1446 = V_43;
		double L_1447 = V_47;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_1446, L_1447)));
		double L_1448 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1449 = V_43;
		double L_1450 = ((double)((double)il2cpp_codegen_multiply(L_1448, L_1449)));
		double L_1451 = V_43;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1450, L_1451)));
		double L_1452 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1450, L_1452));
		double L_1453 = V_43;
		double L_1454 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1453, L_1454));
		double L_1455 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1456 = V_47;
		double L_1457 = ((double)((double)il2cpp_codegen_multiply(L_1455, L_1456)));
		double L_1458 = V_47;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1457, L_1458)));
		double L_1459 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1457, L_1459));
		double L_1460 = V_47;
		double L_1461 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1460, L_1461));
		double L_1462 = V_66;
		double L_1463 = V_163;
		double L_1464 = V_165;
		double L_1465 = V_164;
		double L_1466 = V_165;
		double L_1467 = V_163;
		double L_1468 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1462, ((double)il2cpp_codegen_multiply(L_1463, L_1464)))), ((double)il2cpp_codegen_multiply(L_1465, L_1466)))), ((double)il2cpp_codegen_multiply(L_1467, L_1468))));
		double L_1469 = V_164;
		double L_1470 = V_166;
		double L_1471 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1469, L_1470)), L_1471));
		double L_1472 = V_44;
		double L_1473 = V_46;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_1472, L_1473)));
		double L_1474 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1475 = V_44;
		double L_1476 = ((double)((double)il2cpp_codegen_multiply(L_1474, L_1475)));
		double L_1477 = V_44;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1476, L_1477)));
		double L_1478 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1476, L_1478));
		double L_1479 = V_44;
		double L_1480 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1479, L_1480));
		double L_1481 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1482 = V_46;
		double L_1483 = ((double)((double)il2cpp_codegen_multiply(L_1481, L_1482)));
		double L_1484 = V_46;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1483, L_1484)));
		double L_1485 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1483, L_1485));
		double L_1486 = V_46;
		double L_1487 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1486, L_1487));
		double L_1488 = V_67;
		double L_1489 = V_163;
		double L_1490 = V_165;
		double L_1491 = V_164;
		double L_1492 = V_165;
		double L_1493 = V_163;
		double L_1494 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1488, ((double)il2cpp_codegen_multiply(L_1489, L_1490)))), ((double)il2cpp_codegen_multiply(L_1491, L_1492)))), ((double)il2cpp_codegen_multiply(L_1493, L_1494))));
		double L_1495 = V_164;
		double L_1496 = V_166;
		double L_1497 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1495, L_1496)), L_1497));
		double L_1498 = V_68;
		double L_1499 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_1498, L_1499)));
		double L_1500 = V_68;
		double L_1501 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1500, L_1501)));
		double L_1502 = V_168;
		double L_1503 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_1502, L_1503));
		double L_1504 = V_158;
		double L_1505 = V_69;
		V_160 = ((double)il2cpp_codegen_subtract(L_1504, L_1505));
		double L_1506 = V_68;
		double L_1507 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1506, L_1507));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1508 = V_149;
		double L_1509 = V_161;
		double L_1510 = V_160;
		NullCheck(L_1508);
		(L_1508)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_1509, L_1510)));
		double L_1511 = V_66;
		double L_1512 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_1511, L_1512)));
		double L_1513 = V_169;
		double L_1514 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1513, L_1514)));
		double L_1515 = V_169;
		double L_1516 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1515, L_1516));
		double L_1517 = V_168;
		double L_1518 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1517, L_1518));
		double L_1519 = V_66;
		double L_1520 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1519, L_1520));
		double L_1521 = V_161;
		double L_1522 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_1521, L_1522));
		double L_1523 = V_170;
		double L_1524 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_1523, L_1524)));
		double L_1525 = V_170;
		double L_1526 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1525, L_1526)));
		double L_1527 = V_168;
		double L_1528 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_1527, L_1528));
		double L_1529 = V_158;
		double L_1530 = V_67;
		V_160 = ((double)il2cpp_codegen_subtract(L_1529, L_1530));
		double L_1531 = V_170;
		double L_1532 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1531, L_1532));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1533 = V_149;
		double L_1534 = V_161;
		double L_1535 = V_160;
		NullCheck(L_1533);
		(L_1533)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_1534, L_1535)));
		double L_1536 = V_169;
		double L_1537 = V_168;
		V_155 = ((double)((double)il2cpp_codegen_add(L_1536, L_1537)));
		double L_1538 = V_155;
		double L_1539 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1538, L_1539)));
		double L_1540 = V_155;
		double L_1541 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1540, L_1541));
		double L_1542 = V_168;
		double L_1543 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1542, L_1543));
		double L_1544 = V_169;
		double L_1545 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1544, L_1545));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1546 = V_149;
		double L_1547 = V_161;
		double L_1548 = V_160;
		NullCheck(L_1546);
		(L_1546)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_1547, L_1548)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1549 = V_149;
		double L_1550 = V_155;
		NullCheck(L_1549);
		(L_1549)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1550);
		V_152 = 4;
		goto IL_1918;
	}

IL_18f8:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1551 = V_143;
		NullCheck(L_1551);
		(L_1551)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_146 = 1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1552 = V_149;
		NullCheck(L_1552);
		(L_1552)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_152 = 1;
	}

IL_1918:
	{
		double L_1553 = V_42;
		if ((((double)L_1553) == ((double)(0.0))))
		{
			goto IL_1b01;
		}
	}
	{
		int32_t L_1554 = V_112;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1555 = V_106;
		double L_1556 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1557 = __this->___temp16a;
		int32_t L_1558;
		L_1558 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1554, L_1555, L_1556, L_1557, NULL);
		V_75 = L_1558;
		int32_t L_1559 = V_146;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1560 = V_143;
		double L_1561 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1562 = V_118;
		int32_t L_1563;
		L_1563 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1559, L_1560, L_1561, L_1562, NULL);
		V_124 = L_1563;
		int32_t L_1564 = V_124;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1565 = V_118;
		double L_1566 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1567 = __this->___temp32a;
		int32_t L_1568;
		L_1568 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1564, L_1565, ((double)il2cpp_codegen_multiply((2.0), L_1566)), L_1567, NULL);
		V_78 = L_1568;
		int32_t L_1569 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1570 = __this->___temp16a;
		int32_t L_1571 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1572 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1573 = __this->___temp48;
		int32_t L_1574;
		L_1574 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1569, L_1570, L_1571, L_1572, L_1573, NULL);
		V_80 = L_1574;
		int32_t L_1575 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1576 = V_39;
		int32_t L_1577 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1578 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1579 = V_40;
		int32_t L_1580;
		L_1580 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1575, L_1576, L_1577, L_1578, L_1579, NULL);
		V_41 = L_1580;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1581 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1582 = V_40;
		V_39 = L_1582;
		V_40 = L_1581;
		double L_1583 = V_46;
		if ((((double)L_1583) == ((double)(0.0))))
		{
			goto IL_19fb;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1584 = V_62;
		double L_1585 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1586 = __this->___temp8;
		int32_t L_1587;
		L_1587 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1584, L_1585, L_1586, NULL);
		V_74 = L_1587;
		int32_t L_1588 = V_74;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1589 = __this->___temp8;
		double L_1590 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1591 = __this->___temp16a;
		int32_t L_1592;
		L_1592 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1588, L_1589, L_1590, L_1591, NULL);
		V_75 = L_1592;
		int32_t L_1593 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1594 = V_39;
		int32_t L_1595 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1596 = __this->___temp16a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1597 = V_40;
		int32_t L_1598;
		L_1598 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1593, L_1594, L_1595, L_1596, L_1597, NULL);
		V_41 = L_1598;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1599 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1600 = V_40;
		V_39 = L_1600;
		V_40 = L_1599;
	}

IL_19fb:
	{
		double L_1601 = V_47;
		if ((((double)L_1601) == ((double)(0.0))))
		{
			goto IL_1a52;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1602 = V_61;
		double L_1603 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1604 = __this->___temp8;
		int32_t L_1605;
		L_1605 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_1602, ((-L_1603)), L_1604, NULL);
		V_74 = L_1605;
		int32_t L_1606 = V_74;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1607 = __this->___temp8;
		double L_1608 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1609 = __this->___temp16a;
		int32_t L_1610;
		L_1610 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1606, L_1607, L_1608, L_1609, NULL);
		V_75 = L_1610;
		int32_t L_1611 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1612 = V_39;
		int32_t L_1613 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1614 = __this->___temp16a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1615 = V_40;
		int32_t L_1616;
		L_1616 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1611, L_1612, L_1613, L_1614, L_1615, NULL);
		V_41 = L_1616;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1617 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1618 = V_40;
		V_39 = L_1618;
		V_40 = L_1617;
	}

IL_1a52:
	{
		int32_t L_1619 = V_124;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1620 = V_118;
		double L_1621 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1622 = __this->___temp32a;
		int32_t L_1623;
		L_1623 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1619, L_1620, L_1621, L_1622, NULL);
		V_78 = L_1623;
		int32_t L_1624 = V_152;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1625 = V_149;
		double L_1626 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1627 = V_130;
		int32_t L_1628;
		L_1628 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1624, L_1625, L_1626, L_1627, NULL);
		V_136 = L_1628;
		int32_t L_1629 = V_136;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1630 = V_130;
		double L_1631 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1632 = __this->___temp16a;
		int32_t L_1633;
		L_1633 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1629, L_1630, ((double)il2cpp_codegen_multiply((2.0), L_1631)), L_1632, NULL);
		V_75 = L_1633;
		int32_t L_1634 = V_136;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1635 = V_130;
		double L_1636 = V_42;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1637 = __this->___temp16b;
		int32_t L_1638;
		L_1638 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1634, L_1635, L_1636, L_1637, NULL);
		V_76 = L_1638;
		int32_t L_1639 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1640 = __this->___temp16a;
		int32_t L_1641 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1642 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1643 = __this->___temp32b;
		int32_t L_1644;
		L_1644 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1639, L_1640, L_1641, L_1642, L_1643, NULL);
		V_79 = L_1644;
		int32_t L_1645 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1646 = __this->___temp32a;
		int32_t L_1647 = V_79;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1648 = __this->___temp32b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1649 = __this->___temp64;
		int32_t L_1650;
		L_1650 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1645, L_1646, L_1647, L_1648, L_1649, NULL);
		V_81 = L_1650;
		int32_t L_1651 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1652 = V_39;
		int32_t L_1653 = V_81;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1654 = __this->___temp64;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1655 = V_40;
		int32_t L_1656;
		L_1656 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1651, L_1652, L_1653, L_1654, L_1655, NULL);
		V_41 = L_1656;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1657 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1658 = V_40;
		V_39 = L_1658;
		V_40 = L_1657;
	}

IL_1b01:
	{
		double L_1659 = V_45;
		if ((((double)L_1659) == ((double)(0.0))))
		{
			goto IL_1c3d;
		}
	}
	{
		int32_t L_1660 = V_113;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1661 = V_107;
		double L_1662 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1663 = __this->___temp16a;
		int32_t L_1664;
		L_1664 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1660, L_1661, L_1662, L_1663, NULL);
		V_75 = L_1664;
		int32_t L_1665 = V_146;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1666 = V_143;
		double L_1667 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1668 = V_119;
		int32_t L_1669;
		L_1669 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1665, L_1666, L_1667, L_1668, NULL);
		V_125 = L_1669;
		int32_t L_1670 = V_125;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1671 = V_119;
		double L_1672 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1673 = __this->___temp32a;
		int32_t L_1674;
		L_1674 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1670, L_1671, ((double)il2cpp_codegen_multiply((2.0), L_1672)), L_1673, NULL);
		V_78 = L_1674;
		int32_t L_1675 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1676 = __this->___temp16a;
		int32_t L_1677 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1678 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1679 = __this->___temp48;
		int32_t L_1680;
		L_1680 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1675, L_1676, L_1677, L_1678, L_1679, NULL);
		V_80 = L_1680;
		int32_t L_1681 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1682 = V_39;
		int32_t L_1683 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1684 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1685 = V_40;
		int32_t L_1686;
		L_1686 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1681, L_1682, L_1683, L_1684, L_1685, NULL);
		V_41 = L_1686;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1687 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1688 = V_40;
		V_39 = L_1688;
		V_40 = L_1687;
		int32_t L_1689 = V_125;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1690 = V_119;
		double L_1691 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1692 = __this->___temp32a;
		int32_t L_1693;
		L_1693 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1689, L_1690, L_1691, L_1692, NULL);
		V_78 = L_1693;
		int32_t L_1694 = V_152;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1695 = V_149;
		double L_1696 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1697 = V_131;
		int32_t L_1698;
		L_1698 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1694, L_1695, L_1696, L_1697, NULL);
		V_137 = L_1698;
		int32_t L_1699 = V_137;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1700 = V_131;
		double L_1701 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1702 = __this->___temp16a;
		int32_t L_1703;
		L_1703 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1699, L_1700, ((double)il2cpp_codegen_multiply((2.0), L_1701)), L_1702, NULL);
		V_75 = L_1703;
		int32_t L_1704 = V_137;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1705 = V_131;
		double L_1706 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1707 = __this->___temp16b;
		int32_t L_1708;
		L_1708 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_1704, L_1705, L_1706, L_1707, NULL);
		V_76 = L_1708;
		int32_t L_1709 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1710 = __this->___temp16a;
		int32_t L_1711 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1712 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1713 = __this->___temp32b;
		int32_t L_1714;
		L_1714 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1709, L_1710, L_1711, L_1712, L_1713, NULL);
		V_79 = L_1714;
		int32_t L_1715 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1716 = __this->___temp32a;
		int32_t L_1717 = V_79;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1718 = __this->___temp32b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1719 = __this->___temp64;
		int32_t L_1720;
		L_1720 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1715, L_1716, L_1717, L_1718, L_1719, NULL);
		V_81 = L_1720;
		int32_t L_1721 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1722 = V_39;
		int32_t L_1723 = V_81;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1724 = __this->___temp64;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1725 = V_40;
		int32_t L_1726;
		L_1726 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_1721, L_1722, L_1723, L_1724, L_1725, NULL);
		V_41 = L_1726;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1727 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1728 = V_40;
		V_39 = L_1728;
		V_40 = L_1727;
	}

IL_1c3d:
	{
		double L_1729 = V_43;
		if ((!(((double)L_1729) == ((double)(0.0)))))
		{
			goto IL_1c5a;
		}
	}
	{
		double L_1730 = V_46;
		if ((((double)L_1730) == ((double)(0.0))))
		{
			goto IL_245f;
		}
	}

IL_1c5a:
	{
		double L_1731 = V_44;
		if ((!(((double)L_1731) == ((double)(0.0)))))
		{
			goto IL_1c91;
		}
	}
	{
		double L_1732 = V_47;
		if ((!(((double)L_1732) == ((double)(0.0)))))
		{
			goto IL_1c91;
		}
	}
	{
		double L_1733 = V_42;
		if ((!(((double)L_1733) == ((double)(0.0)))))
		{
			goto IL_1c91;
		}
	}
	{
		double L_1734 = V_45;
		if ((((double)L_1734) == ((double)(0.0))))
		{
			goto IL_2118;
		}
	}

IL_1c91:
	{
		double L_1735 = V_44;
		double L_1736 = V_3;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_1735, L_1736)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_1737 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1738 = V_44;
		double L_1739 = ((double)((double)il2cpp_codegen_multiply(L_1737, L_1738)));
		double L_1740 = V_44;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1739, L_1740)));
		double L_1741 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1739, L_1741));
		double L_1742 = V_44;
		double L_1743 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1742, L_1743));
		double L_1744 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1745 = V_3;
		double L_1746 = ((double)((double)il2cpp_codegen_multiply(L_1744, L_1745)));
		double L_1747 = V_3;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1746, L_1747)));
		double L_1748 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1746, L_1748));
		double L_1749 = V_3;
		double L_1750 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1749, L_1750));
		double L_1751 = V_66;
		double L_1752 = V_163;
		double L_1753 = V_165;
		double L_1754 = V_164;
		double L_1755 = V_165;
		double L_1756 = V_163;
		double L_1757 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1751, ((double)il2cpp_codegen_multiply(L_1752, L_1753)))), ((double)il2cpp_codegen_multiply(L_1754, L_1755)))), ((double)il2cpp_codegen_multiply(L_1756, L_1757))));
		double L_1758 = V_164;
		double L_1759 = V_166;
		double L_1760 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1758, L_1759)), L_1760));
		double L_1761 = V_2;
		double L_1762 = V_45;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_1761, L_1762)));
		double L_1763 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1764 = V_2;
		double L_1765 = ((double)((double)il2cpp_codegen_multiply(L_1763, L_1764)));
		double L_1766 = V_2;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1765, L_1766)));
		double L_1767 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1765, L_1767));
		double L_1768 = V_2;
		double L_1769 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1768, L_1769));
		double L_1770 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1771 = V_45;
		double L_1772 = ((double)((double)il2cpp_codegen_multiply(L_1770, L_1771)));
		double L_1773 = V_45;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1772, L_1773)));
		double L_1774 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1772, L_1774));
		double L_1775 = V_45;
		double L_1776 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1775, L_1776));
		double L_1777 = V_67;
		double L_1778 = V_163;
		double L_1779 = V_165;
		double L_1780 = V_164;
		double L_1781 = V_165;
		double L_1782 = V_163;
		double L_1783 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1777, ((double)il2cpp_codegen_multiply(L_1778, L_1779)))), ((double)il2cpp_codegen_multiply(L_1780, L_1781)))), ((double)il2cpp_codegen_multiply(L_1782, L_1783))));
		double L_1784 = V_164;
		double L_1785 = V_166;
		double L_1786 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1784, L_1785)), L_1786));
		double L_1787 = V_68;
		double L_1788 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1787, L_1788)));
		double L_1789 = V_168;
		double L_1790 = V_68;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1789, L_1790)));
		double L_1791 = V_168;
		double L_1792 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1791, L_1792));
		double L_1793 = V_69;
		double L_1794 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1793, L_1794));
		double L_1795 = V_68;
		double L_1796 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1795, L_1796));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1797 = V_70;
		double L_1798 = V_161;
		double L_1799 = V_160;
		NullCheck(L_1797);
		(L_1797)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_1798, L_1799)));
		double L_1800 = V_66;
		double L_1801 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_1800, L_1801)));
		double L_1802 = V_169;
		double L_1803 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1802, L_1803)));
		double L_1804 = V_169;
		double L_1805 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1804, L_1805));
		double L_1806 = V_168;
		double L_1807 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1806, L_1807));
		double L_1808 = V_66;
		double L_1809 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1808, L_1809));
		double L_1810 = V_161;
		double L_1811 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_1810, L_1811));
		double L_1812 = V_170;
		double L_1813 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1812, L_1813)));
		double L_1814 = V_168;
		double L_1815 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1814, L_1815)));
		double L_1816 = V_168;
		double L_1817 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1816, L_1817));
		double L_1818 = V_67;
		double L_1819 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1818, L_1819));
		double L_1820 = V_170;
		double L_1821 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1820, L_1821));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1822 = V_70;
		double L_1823 = V_161;
		double L_1824 = V_160;
		NullCheck(L_1822);
		(L_1822)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_1823, L_1824)));
		double L_1825 = V_169;
		double L_1826 = V_168;
		V_72 = ((double)((double)il2cpp_codegen_add(L_1825, L_1826)));
		double L_1827 = V_72;
		double L_1828 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1827, L_1828)));
		double L_1829 = V_72;
		double L_1830 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1829, L_1830));
		double L_1831 = V_168;
		double L_1832 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1831, L_1832));
		double L_1833 = V_169;
		double L_1834 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1833, L_1834));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1835 = V_70;
		double L_1836 = V_161;
		double L_1837 = V_160;
		NullCheck(L_1835);
		(L_1835)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_1836, L_1837)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1838 = V_70;
		double L_1839 = V_72;
		NullCheck(L_1838);
		(L_1838)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1839);
		double L_1840 = V_5;
		V_157 = ((-L_1840));
		double L_1841 = V_42;
		double L_1842 = V_157;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_1841, L_1842)));
		double L_1843 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1844 = V_42;
		double L_1845 = ((double)((double)il2cpp_codegen_multiply(L_1843, L_1844)));
		double L_1846 = V_42;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1845, L_1846)));
		double L_1847 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1845, L_1847));
		double L_1848 = V_42;
		double L_1849 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1848, L_1849));
		double L_1850 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1851 = V_157;
		double L_1852 = ((double)((double)il2cpp_codegen_multiply(L_1850, L_1851)));
		double L_1853 = V_157;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1852, L_1853)));
		double L_1854 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1852, L_1854));
		double L_1855 = V_157;
		double L_1856 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1855, L_1856));
		double L_1857 = V_66;
		double L_1858 = V_163;
		double L_1859 = V_165;
		double L_1860 = V_164;
		double L_1861 = V_165;
		double L_1862 = V_163;
		double L_1863 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1857, ((double)il2cpp_codegen_multiply(L_1858, L_1859)))), ((double)il2cpp_codegen_multiply(L_1860, L_1861)))), ((double)il2cpp_codegen_multiply(L_1862, L_1863))));
		double L_1864 = V_164;
		double L_1865 = V_166;
		double L_1866 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1864, L_1865)), L_1866));
		double L_1867 = V_47;
		V_157 = ((-L_1867));
		double L_1868 = V_0;
		double L_1869 = V_157;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_1868, L_1869)));
		double L_1870 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1871 = V_0;
		double L_1872 = ((double)((double)il2cpp_codegen_multiply(L_1870, L_1871)));
		double L_1873 = V_0;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1872, L_1873)));
		double L_1874 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1872, L_1874));
		double L_1875 = V_0;
		double L_1876 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1875, L_1876));
		double L_1877 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1878 = V_157;
		double L_1879 = ((double)((double)il2cpp_codegen_multiply(L_1877, L_1878)));
		double L_1880 = V_157;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1879, L_1880)));
		double L_1881 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1879, L_1881));
		double L_1882 = V_157;
		double L_1883 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1882, L_1883));
		double L_1884 = V_67;
		double L_1885 = V_163;
		double L_1886 = V_165;
		double L_1887 = V_164;
		double L_1888 = V_165;
		double L_1889 = V_163;
		double L_1890 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1884, ((double)il2cpp_codegen_multiply(L_1885, L_1886)))), ((double)il2cpp_codegen_multiply(L_1887, L_1888)))), ((double)il2cpp_codegen_multiply(L_1889, L_1890))));
		double L_1891 = V_164;
		double L_1892 = V_166;
		double L_1893 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1891, L_1892)), L_1893));
		double L_1894 = V_68;
		double L_1895 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1894, L_1895)));
		double L_1896 = V_168;
		double L_1897 = V_68;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1896, L_1897)));
		double L_1898 = V_168;
		double L_1899 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1898, L_1899));
		double L_1900 = V_69;
		double L_1901 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1900, L_1901));
		double L_1902 = V_68;
		double L_1903 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1902, L_1903));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1904 = V_71;
		double L_1905 = V_161;
		double L_1906 = V_160;
		NullCheck(L_1904);
		(L_1904)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_1905, L_1906)));
		double L_1907 = V_66;
		double L_1908 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_1907, L_1908)));
		double L_1909 = V_169;
		double L_1910 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1909, L_1910)));
		double L_1911 = V_169;
		double L_1912 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1911, L_1912));
		double L_1913 = V_168;
		double L_1914 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1913, L_1914));
		double L_1915 = V_66;
		double L_1916 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1915, L_1916));
		double L_1917 = V_161;
		double L_1918 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_1917, L_1918));
		double L_1919 = V_170;
		double L_1920 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_add(L_1919, L_1920)));
		double L_1921 = V_168;
		double L_1922 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1921, L_1922)));
		double L_1923 = V_168;
		double L_1924 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1923, L_1924));
		double L_1925 = V_67;
		double L_1926 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1925, L_1926));
		double L_1927 = V_170;
		double L_1928 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1927, L_1928));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1929 = V_71;
		double L_1930 = V_161;
		double L_1931 = V_160;
		NullCheck(L_1929);
		(L_1929)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_1930, L_1931)));
		double L_1932 = V_169;
		double L_1933 = V_168;
		V_73 = ((double)((double)il2cpp_codegen_add(L_1932, L_1933)));
		double L_1934 = V_73;
		double L_1935 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_1934, L_1935)));
		double L_1936 = V_73;
		double L_1937 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_1936, L_1937));
		double L_1938 = V_168;
		double L_1939 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_1938, L_1939));
		double L_1940 = V_169;
		double L_1941 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_1940, L_1941));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1942 = V_71;
		double L_1943 = V_161;
		double L_1944 = V_160;
		NullCheck(L_1942);
		(L_1942)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_1943, L_1944)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1945 = V_71;
		double L_1946 = V_73;
		NullCheck(L_1945);
		(L_1945)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_1946);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1947 = V_70;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1948 = V_71;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1949 = V_144;
		int32_t L_1950;
		L_1950 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, 4, L_1947, 4, L_1948, L_1949, NULL);
		V_147 = L_1950;
		double L_1951 = V_44;
		double L_1952 = V_45;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_1951, L_1952)));
		double L_1953 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1954 = V_44;
		double L_1955 = ((double)((double)il2cpp_codegen_multiply(L_1953, L_1954)));
		double L_1956 = V_44;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1955, L_1956)));
		double L_1957 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1955, L_1957));
		double L_1958 = V_44;
		double L_1959 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1958, L_1959));
		double L_1960 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1961 = V_45;
		double L_1962 = ((double)((double)il2cpp_codegen_multiply(L_1960, L_1961)));
		double L_1963 = V_45;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1962, L_1963)));
		double L_1964 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1962, L_1964));
		double L_1965 = V_45;
		double L_1966 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1965, L_1966));
		double L_1967 = V_66;
		double L_1968 = V_163;
		double L_1969 = V_165;
		double L_1970 = V_164;
		double L_1971 = V_165;
		double L_1972 = V_163;
		double L_1973 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1967, ((double)il2cpp_codegen_multiply(L_1968, L_1969)))), ((double)il2cpp_codegen_multiply(L_1970, L_1971)))), ((double)il2cpp_codegen_multiply(L_1972, L_1973))));
		double L_1974 = V_164;
		double L_1975 = V_166;
		double L_1976 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_1974, L_1975)), L_1976));
		double L_1977 = V_42;
		double L_1978 = V_47;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_1977, L_1978)));
		double L_1979 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1980 = V_42;
		double L_1981 = ((double)((double)il2cpp_codegen_multiply(L_1979, L_1980)));
		double L_1982 = V_42;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1981, L_1982)));
		double L_1983 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_1981, L_1983));
		double L_1984 = V_42;
		double L_1985 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_1984, L_1985));
		double L_1986 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_1987 = V_47;
		double L_1988 = ((double)((double)il2cpp_codegen_multiply(L_1986, L_1987)));
		double L_1989 = V_47;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_1988, L_1989)));
		double L_1990 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_1988, L_1990));
		double L_1991 = V_47;
		double L_1992 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_1991, L_1992));
		double L_1993 = V_67;
		double L_1994 = V_163;
		double L_1995 = V_165;
		double L_1996 = V_164;
		double L_1997 = V_165;
		double L_1998 = V_163;
		double L_1999 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_1993, ((double)il2cpp_codegen_multiply(L_1994, L_1995)))), ((double)il2cpp_codegen_multiply(L_1996, L_1997)))), ((double)il2cpp_codegen_multiply(L_1998, L_1999))));
		double L_2000 = V_164;
		double L_2001 = V_166;
		double L_2002 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_2000, L_2001)), L_2002));
		double L_2003 = V_68;
		double L_2004 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_2003, L_2004)));
		double L_2005 = V_68;
		double L_2006 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2005, L_2006)));
		double L_2007 = V_168;
		double L_2008 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_2007, L_2008));
		double L_2009 = V_158;
		double L_2010 = V_69;
		V_160 = ((double)il2cpp_codegen_subtract(L_2009, L_2010));
		double L_2011 = V_68;
		double L_2012 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2011, L_2012));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2013 = V_150;
		double L_2014 = V_161;
		double L_2015 = V_160;
		NullCheck(L_2013);
		(L_2013)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_2014, L_2015)));
		double L_2016 = V_66;
		double L_2017 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_2016, L_2017)));
		double L_2018 = V_169;
		double L_2019 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2018, L_2019)));
		double L_2020 = V_169;
		double L_2021 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2020, L_2021));
		double L_2022 = V_168;
		double L_2023 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2022, L_2023));
		double L_2024 = V_66;
		double L_2025 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2024, L_2025));
		double L_2026 = V_161;
		double L_2027 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_2026, L_2027));
		double L_2028 = V_170;
		double L_2029 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_2028, L_2029)));
		double L_2030 = V_170;
		double L_2031 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2030, L_2031)));
		double L_2032 = V_168;
		double L_2033 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_2032, L_2033));
		double L_2034 = V_158;
		double L_2035 = V_67;
		V_160 = ((double)il2cpp_codegen_subtract(L_2034, L_2035));
		double L_2036 = V_170;
		double L_2037 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2036, L_2037));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2038 = V_150;
		double L_2039 = V_161;
		double L_2040 = V_160;
		NullCheck(L_2038);
		(L_2038)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_2039, L_2040)));
		double L_2041 = V_169;
		double L_2042 = V_168;
		V_156 = ((double)((double)il2cpp_codegen_add(L_2041, L_2042)));
		double L_2043 = V_156;
		double L_2044 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2043, L_2044)));
		double L_2045 = V_156;
		double L_2046 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2045, L_2046));
		double L_2047 = V_168;
		double L_2048 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2047, L_2048));
		double L_2049 = V_169;
		double L_2050 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2049, L_2050));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2051 = V_150;
		double L_2052 = V_161;
		double L_2053 = V_160;
		NullCheck(L_2051);
		(L_2051)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_2052, L_2053)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2054 = V_150;
		double L_2055 = V_156;
		NullCheck(L_2054);
		(L_2054)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2055);
		V_153 = 4;
		goto IL_2138;
	}

IL_2118:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2056 = V_144;
		NullCheck(L_2056);
		(L_2056)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_147 = 1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2057 = V_150;
		NullCheck(L_2057);
		(L_2057)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_153 = 1;
	}

IL_2138:
	{
		double L_2058 = V_43;
		if ((((double)L_2058) == ((double)(0.0))))
		{
			goto IL_2321;
		}
	}
	{
		int32_t L_2059 = V_114;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2060 = V_108;
		double L_2061 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2062 = __this->___temp16a;
		int32_t L_2063;
		L_2063 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2059, L_2060, L_2061, L_2062, NULL);
		V_75 = L_2063;
		int32_t L_2064 = V_147;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2065 = V_144;
		double L_2066 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2067 = V_120;
		int32_t L_2068;
		L_2068 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2064, L_2065, L_2066, L_2067, NULL);
		V_126 = L_2068;
		int32_t L_2069 = V_126;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2070 = V_120;
		double L_2071 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2072 = __this->___temp32a;
		int32_t L_2073;
		L_2073 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2069, L_2070, ((double)il2cpp_codegen_multiply((2.0), L_2071)), L_2072, NULL);
		V_78 = L_2073;
		int32_t L_2074 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2075 = __this->___temp16a;
		int32_t L_2076 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2077 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2078 = __this->___temp48;
		int32_t L_2079;
		L_2079 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2074, L_2075, L_2076, L_2077, L_2078, NULL);
		V_80 = L_2079;
		int32_t L_2080 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2081 = V_39;
		int32_t L_2082 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2083 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2084 = V_40;
		int32_t L_2085;
		L_2085 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2080, L_2081, L_2082, L_2083, L_2084, NULL);
		V_41 = L_2085;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2086 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2087 = V_40;
		V_39 = L_2087;
		V_40 = L_2086;
		double L_2088 = V_47;
		if ((((double)L_2088) == ((double)(0.0))))
		{
			goto IL_221b;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2089 = V_60;
		double L_2090 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2091 = __this->___temp8;
		int32_t L_2092;
		L_2092 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_2089, L_2090, L_2091, NULL);
		V_74 = L_2092;
		int32_t L_2093 = V_74;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2094 = __this->___temp8;
		double L_2095 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2096 = __this->___temp16a;
		int32_t L_2097;
		L_2097 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2093, L_2094, L_2095, L_2096, NULL);
		V_75 = L_2097;
		int32_t L_2098 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2099 = V_39;
		int32_t L_2100 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2101 = __this->___temp16a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2102 = V_40;
		int32_t L_2103;
		L_2103 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2098, L_2099, L_2100, L_2101, L_2102, NULL);
		V_41 = L_2103;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2104 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2105 = V_40;
		V_39 = L_2105;
		V_40 = L_2104;
	}

IL_221b:
	{
		double L_2106 = V_45;
		if ((((double)L_2106) == ((double)(0.0))))
		{
			goto IL_2272;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2107 = V_62;
		double L_2108 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2109 = __this->___temp8;
		int32_t L_2110;
		L_2110 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_2107, ((-L_2108)), L_2109, NULL);
		V_74 = L_2110;
		int32_t L_2111 = V_74;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2112 = __this->___temp8;
		double L_2113 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2114 = __this->___temp16a;
		int32_t L_2115;
		L_2115 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2111, L_2112, L_2113, L_2114, NULL);
		V_75 = L_2115;
		int32_t L_2116 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2117 = V_39;
		int32_t L_2118 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2119 = __this->___temp16a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2120 = V_40;
		int32_t L_2121;
		L_2121 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2116, L_2117, L_2118, L_2119, L_2120, NULL);
		V_41 = L_2121;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2122 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2123 = V_40;
		V_39 = L_2123;
		V_40 = L_2122;
	}

IL_2272:
	{
		int32_t L_2124 = V_126;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2125 = V_120;
		double L_2126 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2127 = __this->___temp32a;
		int32_t L_2128;
		L_2128 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2124, L_2125, L_2126, L_2127, NULL);
		V_78 = L_2128;
		int32_t L_2129 = V_153;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2130 = V_150;
		double L_2131 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2132 = V_132;
		int32_t L_2133;
		L_2133 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2129, L_2130, L_2131, L_2132, NULL);
		V_138 = L_2133;
		int32_t L_2134 = V_138;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2135 = V_132;
		double L_2136 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2137 = __this->___temp16a;
		int32_t L_2138;
		L_2138 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2134, L_2135, ((double)il2cpp_codegen_multiply((2.0), L_2136)), L_2137, NULL);
		V_75 = L_2138;
		int32_t L_2139 = V_138;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2140 = V_132;
		double L_2141 = V_43;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2142 = __this->___temp16b;
		int32_t L_2143;
		L_2143 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2139, L_2140, L_2141, L_2142, NULL);
		V_76 = L_2143;
		int32_t L_2144 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2145 = __this->___temp16a;
		int32_t L_2146 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2147 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2148 = __this->___temp32b;
		int32_t L_2149;
		L_2149 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2144, L_2145, L_2146, L_2147, L_2148, NULL);
		V_79 = L_2149;
		int32_t L_2150 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2151 = __this->___temp32a;
		int32_t L_2152 = V_79;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2153 = __this->___temp32b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2154 = __this->___temp64;
		int32_t L_2155;
		L_2155 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2150, L_2151, L_2152, L_2153, L_2154, NULL);
		V_81 = L_2155;
		int32_t L_2156 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2157 = V_39;
		int32_t L_2158 = V_81;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2159 = __this->___temp64;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2160 = V_40;
		int32_t L_2161;
		L_2161 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2156, L_2157, L_2158, L_2159, L_2160, NULL);
		V_41 = L_2161;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2162 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2163 = V_40;
		V_39 = L_2163;
		V_40 = L_2162;
	}

IL_2321:
	{
		double L_2164 = V_46;
		if ((((double)L_2164) == ((double)(0.0))))
		{
			goto IL_245f;
		}
	}
	{
		int32_t L_2165 = V_115;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2166 = V_109;
		double L_2167 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2168 = __this->___temp16a;
		int32_t L_2169;
		L_2169 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2165, L_2166, L_2167, L_2168, NULL);
		V_75 = L_2169;
		int32_t L_2170 = V_147;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2171 = V_144;
		double L_2172 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2173 = V_121;
		int32_t L_2174;
		L_2174 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2170, L_2171, L_2172, L_2173, NULL);
		V_127 = L_2174;
		int32_t L_2175 = V_127;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2176 = V_121;
		double L_2177 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2178 = __this->___temp32a;
		int32_t L_2179;
		L_2179 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2175, L_2176, ((double)il2cpp_codegen_multiply((2.0), L_2177)), L_2178, NULL);
		V_78 = L_2179;
		int32_t L_2180 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2181 = __this->___temp16a;
		int32_t L_2182 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2183 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2184 = __this->___temp48;
		int32_t L_2185;
		L_2185 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2180, L_2181, L_2182, L_2183, L_2184, NULL);
		V_80 = L_2185;
		int32_t L_2186 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2187 = V_39;
		int32_t L_2188 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2189 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2190 = V_40;
		int32_t L_2191;
		L_2191 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2186, L_2187, L_2188, L_2189, L_2190, NULL);
		V_41 = L_2191;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2192 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2193 = V_40;
		V_39 = L_2193;
		V_40 = L_2192;
		int32_t L_2194 = V_127;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2195 = V_121;
		double L_2196 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2197 = __this->___temp32a;
		int32_t L_2198;
		L_2198 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2194, L_2195, L_2196, L_2197, NULL);
		V_78 = L_2198;
		int32_t L_2199 = V_153;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2200 = V_150;
		double L_2201 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2202 = V_133;
		int32_t L_2203;
		L_2203 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2199, L_2200, L_2201, L_2202, NULL);
		V_139 = L_2203;
		int32_t L_2204 = V_139;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2205 = V_133;
		double L_2206 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2207 = __this->___temp16a;
		int32_t L_2208;
		L_2208 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2204, L_2205, ((double)il2cpp_codegen_multiply((2.0), L_2206)), L_2207, NULL);
		V_75 = L_2208;
		int32_t L_2209 = V_139;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2210 = V_133;
		double L_2211 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2212 = __this->___temp16b;
		int32_t L_2213;
		L_2213 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2209, L_2210, L_2211, L_2212, NULL);
		V_76 = L_2213;
		int32_t L_2214 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2215 = __this->___temp16a;
		int32_t L_2216 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2217 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2218 = __this->___temp32b;
		int32_t L_2219;
		L_2219 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2214, L_2215, L_2216, L_2217, L_2218, NULL);
		V_79 = L_2219;
		int32_t L_2220 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2221 = __this->___temp32a;
		int32_t L_2222 = V_79;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2223 = __this->___temp32b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2224 = __this->___temp64;
		int32_t L_2225;
		L_2225 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2220, L_2221, L_2222, L_2223, L_2224, NULL);
		V_81 = L_2225;
		int32_t L_2226 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2227 = V_39;
		int32_t L_2228 = V_81;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2229 = __this->___temp64;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2230 = V_40;
		int32_t L_2231;
		L_2231 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2226, L_2227, L_2228, L_2229, L_2230, NULL);
		V_41 = L_2231;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2232 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2233 = V_40;
		V_39 = L_2233;
		V_40 = L_2232;
	}

IL_245f:
	{
		double L_2234 = V_44;
		if ((!(((double)L_2234) == ((double)(0.0)))))
		{
			goto IL_247c;
		}
	}
	{
		double L_2235 = V_47;
		if ((((double)L_2235) == ((double)(0.0))))
		{
			goto IL_2c84;
		}
	}

IL_247c:
	{
		double L_2236 = V_42;
		if ((!(((double)L_2236) == ((double)(0.0)))))
		{
			goto IL_24b3;
		}
	}
	{
		double L_2237 = V_45;
		if ((!(((double)L_2237) == ((double)(0.0)))))
		{
			goto IL_24b3;
		}
	}
	{
		double L_2238 = V_43;
		if ((!(((double)L_2238) == ((double)(0.0)))))
		{
			goto IL_24b3;
		}
	}
	{
		double L_2239 = V_46;
		if ((((double)L_2239) == ((double)(0.0))))
		{
			goto IL_293d;
		}
	}

IL_24b3:
	{
		double L_2240 = V_42;
		double L_2241 = V_4;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_2240, L_2241)));
		il2cpp_codegen_runtime_class_init_inline(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var);
		double L_2242 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2243 = V_42;
		double L_2244 = ((double)((double)il2cpp_codegen_multiply(L_2242, L_2243)));
		double L_2245 = V_42;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2244, L_2245)));
		double L_2246 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_2244, L_2246));
		double L_2247 = V_42;
		double L_2248 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_2247, L_2248));
		double L_2249 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2250 = V_4;
		double L_2251 = ((double)((double)il2cpp_codegen_multiply(L_2249, L_2250)));
		double L_2252 = V_4;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2251, L_2252)));
		double L_2253 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_2251, L_2253));
		double L_2254 = V_4;
		double L_2255 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_2254, L_2255));
		double L_2256 = V_66;
		double L_2257 = V_163;
		double L_2258 = V_165;
		double L_2259 = V_164;
		double L_2260 = V_165;
		double L_2261 = V_163;
		double L_2262 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_2256, ((double)il2cpp_codegen_multiply(L_2257, L_2258)))), ((double)il2cpp_codegen_multiply(L_2259, L_2260)))), ((double)il2cpp_codegen_multiply(L_2261, L_2262))));
		double L_2263 = V_164;
		double L_2264 = V_166;
		double L_2265 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_2263, L_2264)), L_2265));
		double L_2266 = V_0;
		double L_2267 = V_46;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_2266, L_2267)));
		double L_2268 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2269 = V_0;
		double L_2270 = ((double)((double)il2cpp_codegen_multiply(L_2268, L_2269)));
		double L_2271 = V_0;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2270, L_2271)));
		double L_2272 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_2270, L_2272));
		double L_2273 = V_0;
		double L_2274 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_2273, L_2274));
		double L_2275 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2276 = V_46;
		double L_2277 = ((double)((double)il2cpp_codegen_multiply(L_2275, L_2276)));
		double L_2278 = V_46;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2277, L_2278)));
		double L_2279 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_2277, L_2279));
		double L_2280 = V_46;
		double L_2281 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_2280, L_2281));
		double L_2282 = V_67;
		double L_2283 = V_163;
		double L_2284 = V_165;
		double L_2285 = V_164;
		double L_2286 = V_165;
		double L_2287 = V_163;
		double L_2288 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_2282, ((double)il2cpp_codegen_multiply(L_2283, L_2284)))), ((double)il2cpp_codegen_multiply(L_2285, L_2286)))), ((double)il2cpp_codegen_multiply(L_2287, L_2288))));
		double L_2289 = V_164;
		double L_2290 = V_166;
		double L_2291 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_2289, L_2290)), L_2291));
		double L_2292 = V_68;
		double L_2293 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_add(L_2292, L_2293)));
		double L_2294 = V_168;
		double L_2295 = V_68;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2294, L_2295)));
		double L_2296 = V_168;
		double L_2297 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2296, L_2297));
		double L_2298 = V_69;
		double L_2299 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2298, L_2299));
		double L_2300 = V_68;
		double L_2301 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2300, L_2301));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2302 = V_70;
		double L_2303 = V_161;
		double L_2304 = V_160;
		NullCheck(L_2302);
		(L_2302)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_2303, L_2304)));
		double L_2305 = V_66;
		double L_2306 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_2305, L_2306)));
		double L_2307 = V_169;
		double L_2308 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2307, L_2308)));
		double L_2309 = V_169;
		double L_2310 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2309, L_2310));
		double L_2311 = V_168;
		double L_2312 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2311, L_2312));
		double L_2313 = V_66;
		double L_2314 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2313, L_2314));
		double L_2315 = V_161;
		double L_2316 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_2315, L_2316));
		double L_2317 = V_170;
		double L_2318 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_add(L_2317, L_2318)));
		double L_2319 = V_168;
		double L_2320 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2319, L_2320)));
		double L_2321 = V_168;
		double L_2322 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2321, L_2322));
		double L_2323 = V_67;
		double L_2324 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2323, L_2324));
		double L_2325 = V_170;
		double L_2326 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2325, L_2326));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2327 = V_70;
		double L_2328 = V_161;
		double L_2329 = V_160;
		NullCheck(L_2327);
		(L_2327)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_2328, L_2329)));
		double L_2330 = V_169;
		double L_2331 = V_168;
		V_72 = ((double)((double)il2cpp_codegen_add(L_2330, L_2331)));
		double L_2332 = V_72;
		double L_2333 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2332, L_2333)));
		double L_2334 = V_72;
		double L_2335 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2334, L_2335));
		double L_2336 = V_168;
		double L_2337 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2336, L_2337));
		double L_2338 = V_169;
		double L_2339 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2338, L_2339));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2340 = V_70;
		double L_2341 = V_161;
		double L_2342 = V_160;
		NullCheck(L_2340);
		(L_2340)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_2341, L_2342)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2343 = V_70;
		double L_2344 = V_72;
		NullCheck(L_2343);
		(L_2343)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2344);
		double L_2345 = V_3;
		V_157 = ((-L_2345));
		double L_2346 = V_43;
		double L_2347 = V_157;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_2346, L_2347)));
		double L_2348 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2349 = V_43;
		double L_2350 = ((double)((double)il2cpp_codegen_multiply(L_2348, L_2349)));
		double L_2351 = V_43;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2350, L_2351)));
		double L_2352 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_2350, L_2352));
		double L_2353 = V_43;
		double L_2354 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_2353, L_2354));
		double L_2355 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2356 = V_157;
		double L_2357 = ((double)((double)il2cpp_codegen_multiply(L_2355, L_2356)));
		double L_2358 = V_157;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2357, L_2358)));
		double L_2359 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_2357, L_2359));
		double L_2360 = V_157;
		double L_2361 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_2360, L_2361));
		double L_2362 = V_66;
		double L_2363 = V_163;
		double L_2364 = V_165;
		double L_2365 = V_164;
		double L_2366 = V_165;
		double L_2367 = V_163;
		double L_2368 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_2362, ((double)il2cpp_codegen_multiply(L_2363, L_2364)))), ((double)il2cpp_codegen_multiply(L_2365, L_2366)))), ((double)il2cpp_codegen_multiply(L_2367, L_2368))));
		double L_2369 = V_164;
		double L_2370 = V_166;
		double L_2371 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_2369, L_2370)), L_2371));
		double L_2372 = V_45;
		V_157 = ((-L_2372));
		double L_2373 = V_1;
		double L_2374 = V_157;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_2373, L_2374)));
		double L_2375 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2376 = V_1;
		double L_2377 = ((double)((double)il2cpp_codegen_multiply(L_2375, L_2376)));
		double L_2378 = V_1;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2377, L_2378)));
		double L_2379 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_2377, L_2379));
		double L_2380 = V_1;
		double L_2381 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_2380, L_2381));
		double L_2382 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2383 = V_157;
		double L_2384 = ((double)((double)il2cpp_codegen_multiply(L_2382, L_2383)));
		double L_2385 = V_157;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2384, L_2385)));
		double L_2386 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_2384, L_2386));
		double L_2387 = V_157;
		double L_2388 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_2387, L_2388));
		double L_2389 = V_67;
		double L_2390 = V_163;
		double L_2391 = V_165;
		double L_2392 = V_164;
		double L_2393 = V_165;
		double L_2394 = V_163;
		double L_2395 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_2389, ((double)il2cpp_codegen_multiply(L_2390, L_2391)))), ((double)il2cpp_codegen_multiply(L_2392, L_2393)))), ((double)il2cpp_codegen_multiply(L_2394, L_2395))));
		double L_2396 = V_164;
		double L_2397 = V_166;
		double L_2398 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_2396, L_2397)), L_2398));
		double L_2399 = V_68;
		double L_2400 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_add(L_2399, L_2400)));
		double L_2401 = V_168;
		double L_2402 = V_68;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2401, L_2402)));
		double L_2403 = V_168;
		double L_2404 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2403, L_2404));
		double L_2405 = V_69;
		double L_2406 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2405, L_2406));
		double L_2407 = V_68;
		double L_2408 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2407, L_2408));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2409 = V_71;
		double L_2410 = V_161;
		double L_2411 = V_160;
		NullCheck(L_2409);
		(L_2409)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_2410, L_2411)));
		double L_2412 = V_66;
		double L_2413 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_2412, L_2413)));
		double L_2414 = V_169;
		double L_2415 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2414, L_2415)));
		double L_2416 = V_169;
		double L_2417 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2416, L_2417));
		double L_2418 = V_168;
		double L_2419 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2418, L_2419));
		double L_2420 = V_66;
		double L_2421 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2420, L_2421));
		double L_2422 = V_161;
		double L_2423 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_2422, L_2423));
		double L_2424 = V_170;
		double L_2425 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_add(L_2424, L_2425)));
		double L_2426 = V_168;
		double L_2427 = V_170;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2426, L_2427)));
		double L_2428 = V_168;
		double L_2429 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2428, L_2429));
		double L_2430 = V_67;
		double L_2431 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2430, L_2431));
		double L_2432 = V_170;
		double L_2433 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2432, L_2433));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2434 = V_71;
		double L_2435 = V_161;
		double L_2436 = V_160;
		NullCheck(L_2434);
		(L_2434)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_2435, L_2436)));
		double L_2437 = V_169;
		double L_2438 = V_168;
		V_73 = ((double)((double)il2cpp_codegen_add(L_2437, L_2438)));
		double L_2439 = V_73;
		double L_2440 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2439, L_2440)));
		double L_2441 = V_73;
		double L_2442 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2441, L_2442));
		double L_2443 = V_168;
		double L_2444 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2443, L_2444));
		double L_2445 = V_169;
		double L_2446 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2445, L_2446));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2447 = V_71;
		double L_2448 = V_161;
		double L_2449 = V_160;
		NullCheck(L_2447);
		(L_2447)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_2448, L_2449)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2450 = V_71;
		double L_2451 = V_73;
		NullCheck(L_2450);
		(L_2450)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2451);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2452 = V_70;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2453 = V_71;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2454 = V_142;
		int32_t L_2455;
		L_2455 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, 4, L_2452, 4, L_2453, L_2454, NULL);
		V_145 = L_2455;
		double L_2456 = V_42;
		double L_2457 = V_46;
		V_66 = ((double)((double)il2cpp_codegen_multiply(L_2456, L_2457)));
		double L_2458 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2459 = V_42;
		double L_2460 = ((double)((double)il2cpp_codegen_multiply(L_2458, L_2459)));
		double L_2461 = V_42;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2460, L_2461)));
		double L_2462 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_2460, L_2462));
		double L_2463 = V_42;
		double L_2464 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_2463, L_2464));
		double L_2465 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2466 = V_46;
		double L_2467 = ((double)((double)il2cpp_codegen_multiply(L_2465, L_2466)));
		double L_2468 = V_46;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2467, L_2468)));
		double L_2469 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_2467, L_2469));
		double L_2470 = V_46;
		double L_2471 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_2470, L_2471));
		double L_2472 = V_66;
		double L_2473 = V_163;
		double L_2474 = V_165;
		double L_2475 = V_164;
		double L_2476 = V_165;
		double L_2477 = V_163;
		double L_2478 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_2472, ((double)il2cpp_codegen_multiply(L_2473, L_2474)))), ((double)il2cpp_codegen_multiply(L_2475, L_2476)))), ((double)il2cpp_codegen_multiply(L_2477, L_2478))));
		double L_2479 = V_164;
		double L_2480 = V_166;
		double L_2481 = V_167;
		V_68 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_2479, L_2480)), L_2481));
		double L_2482 = V_43;
		double L_2483 = V_45;
		V_67 = ((double)((double)il2cpp_codegen_multiply(L_2482, L_2483)));
		double L_2484 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2485 = V_43;
		double L_2486 = ((double)((double)il2cpp_codegen_multiply(L_2484, L_2485)));
		double L_2487 = V_43;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2486, L_2487)));
		double L_2488 = V_162;
		V_163 = ((double)il2cpp_codegen_subtract(L_2486, L_2488));
		double L_2489 = V_43;
		double L_2490 = V_163;
		V_164 = ((double)il2cpp_codegen_subtract(L_2489, L_2490));
		double L_2491 = ((RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_StaticFields*)il2cpp_codegen_static_fields_for(RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8_il2cpp_TypeInfo_var))->___splitter;
		double L_2492 = V_45;
		double L_2493 = ((double)((double)il2cpp_codegen_multiply(L_2491, L_2492)));
		double L_2494 = V_45;
		V_162 = ((double)((double)il2cpp_codegen_subtract(L_2493, L_2494)));
		double L_2495 = V_162;
		V_165 = ((double)il2cpp_codegen_subtract(L_2493, L_2495));
		double L_2496 = V_45;
		double L_2497 = V_165;
		V_166 = ((double)il2cpp_codegen_subtract(L_2496, L_2497));
		double L_2498 = V_67;
		double L_2499 = V_163;
		double L_2500 = V_165;
		double L_2501 = V_164;
		double L_2502 = V_165;
		double L_2503 = V_163;
		double L_2504 = V_166;
		V_167 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_2498, ((double)il2cpp_codegen_multiply(L_2499, L_2500)))), ((double)il2cpp_codegen_multiply(L_2501, L_2502)))), ((double)il2cpp_codegen_multiply(L_2503, L_2504))));
		double L_2505 = V_164;
		double L_2506 = V_166;
		double L_2507 = V_167;
		V_69 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_2505, L_2506)), L_2507));
		double L_2508 = V_68;
		double L_2509 = V_69;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_2508, L_2509)));
		double L_2510 = V_68;
		double L_2511 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2510, L_2511)));
		double L_2512 = V_168;
		double L_2513 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_2512, L_2513));
		double L_2514 = V_158;
		double L_2515 = V_69;
		V_160 = ((double)il2cpp_codegen_subtract(L_2514, L_2515));
		double L_2516 = V_68;
		double L_2517 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2516, L_2517));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2518 = V_148;
		double L_2519 = V_161;
		double L_2520 = V_160;
		NullCheck(L_2518);
		(L_2518)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_2519, L_2520)));
		double L_2521 = V_66;
		double L_2522 = V_168;
		V_169 = ((double)((double)il2cpp_codegen_add(L_2521, L_2522)));
		double L_2523 = V_169;
		double L_2524 = V_66;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2523, L_2524)));
		double L_2525 = V_169;
		double L_2526 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2525, L_2526));
		double L_2527 = V_168;
		double L_2528 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2527, L_2528));
		double L_2529 = V_66;
		double L_2530 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2529, L_2530));
		double L_2531 = V_161;
		double L_2532 = V_160;
		V_170 = ((double)il2cpp_codegen_add(L_2531, L_2532));
		double L_2533 = V_170;
		double L_2534 = V_67;
		V_168 = ((double)((double)il2cpp_codegen_subtract(L_2533, L_2534)));
		double L_2535 = V_170;
		double L_2536 = V_168;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2535, L_2536)));
		double L_2537 = V_168;
		double L_2538 = V_158;
		V_159 = ((double)il2cpp_codegen_add(L_2537, L_2538));
		double L_2539 = V_158;
		double L_2540 = V_67;
		V_160 = ((double)il2cpp_codegen_subtract(L_2539, L_2540));
		double L_2541 = V_170;
		double L_2542 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2541, L_2542));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2543 = V_148;
		double L_2544 = V_161;
		double L_2545 = V_160;
		NullCheck(L_2543);
		(L_2543)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_2544, L_2545)));
		double L_2546 = V_169;
		double L_2547 = V_168;
		V_154 = ((double)((double)il2cpp_codegen_add(L_2546, L_2547)));
		double L_2548 = V_154;
		double L_2549 = V_169;
		V_158 = ((double)((double)il2cpp_codegen_subtract(L_2548, L_2549)));
		double L_2550 = V_154;
		double L_2551 = V_158;
		V_159 = ((double)il2cpp_codegen_subtract(L_2550, L_2551));
		double L_2552 = V_168;
		double L_2553 = V_158;
		V_160 = ((double)il2cpp_codegen_subtract(L_2552, L_2553));
		double L_2554 = V_169;
		double L_2555 = V_159;
		V_161 = ((double)il2cpp_codegen_subtract(L_2554, L_2555));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2556 = V_148;
		double L_2557 = V_161;
		double L_2558 = V_160;
		NullCheck(L_2556);
		(L_2556)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)il2cpp_codegen_add(L_2557, L_2558)));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2559 = V_148;
		double L_2560 = V_154;
		NullCheck(L_2559);
		(L_2559)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_2560);
		V_151 = 4;
		goto IL_295d;
	}

IL_293d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2561 = V_142;
		NullCheck(L_2561);
		(L_2561)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_145 = 1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2562 = V_148;
		NullCheck(L_2562);
		(L_2562)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(0.0));
		V_151 = 1;
	}

IL_295d:
	{
		double L_2563 = V_44;
		if ((((double)L_2563) == ((double)(0.0))))
		{
			goto IL_2b46;
		}
	}
	{
		int32_t L_2564 = V_116;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2565 = V_110;
		double L_2566 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2567 = __this->___temp16a;
		int32_t L_2568;
		L_2568 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2564, L_2565, L_2566, L_2567, NULL);
		V_75 = L_2568;
		int32_t L_2569 = V_145;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2570 = V_142;
		double L_2571 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2572 = V_122;
		int32_t L_2573;
		L_2573 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2569, L_2570, L_2571, L_2572, NULL);
		V_128 = L_2573;
		int32_t L_2574 = V_128;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2575 = V_122;
		double L_2576 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2577 = __this->___temp32a;
		int32_t L_2578;
		L_2578 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2574, L_2575, ((double)il2cpp_codegen_multiply((2.0), L_2576)), L_2577, NULL);
		V_78 = L_2578;
		int32_t L_2579 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2580 = __this->___temp16a;
		int32_t L_2581 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2582 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2583 = __this->___temp48;
		int32_t L_2584;
		L_2584 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2579, L_2580, L_2581, L_2582, L_2583, NULL);
		V_80 = L_2584;
		int32_t L_2585 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2586 = V_39;
		int32_t L_2587 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2588 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2589 = V_40;
		int32_t L_2590;
		L_2590 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2585, L_2586, L_2587, L_2588, L_2589, NULL);
		V_41 = L_2590;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2591 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2592 = V_40;
		V_39 = L_2592;
		V_40 = L_2591;
		double L_2593 = V_45;
		if ((((double)L_2593) == ((double)(0.0))))
		{
			goto IL_2a40;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2594 = V_61;
		double L_2595 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2596 = __this->___temp8;
		int32_t L_2597;
		L_2597 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_2594, L_2595, L_2596, NULL);
		V_74 = L_2597;
		int32_t L_2598 = V_74;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2599 = __this->___temp8;
		double L_2600 = V_45;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2601 = __this->___temp16a;
		int32_t L_2602;
		L_2602 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2598, L_2599, L_2600, L_2601, NULL);
		V_75 = L_2602;
		int32_t L_2603 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2604 = V_39;
		int32_t L_2605 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2606 = __this->___temp16a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2607 = V_40;
		int32_t L_2608;
		L_2608 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2603, L_2604, L_2605, L_2606, L_2607, NULL);
		V_41 = L_2608;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2609 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2610 = V_40;
		V_39 = L_2610;
		V_40 = L_2609;
	}

IL_2a40:
	{
		double L_2611 = V_46;
		if ((((double)L_2611) == ((double)(0.0))))
		{
			goto IL_2a97;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2612 = V_60;
		double L_2613 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2614 = __this->___temp8;
		int32_t L_2615;
		L_2615 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, 4, L_2612, ((-L_2613)), L_2614, NULL);
		V_74 = L_2615;
		int32_t L_2616 = V_74;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2617 = __this->___temp8;
		double L_2618 = V_46;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2619 = __this->___temp16a;
		int32_t L_2620;
		L_2620 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2616, L_2617, L_2618, L_2619, NULL);
		V_75 = L_2620;
		int32_t L_2621 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2622 = V_39;
		int32_t L_2623 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2624 = __this->___temp16a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2625 = V_40;
		int32_t L_2626;
		L_2626 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2621, L_2622, L_2623, L_2624, L_2625, NULL);
		V_41 = L_2626;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2627 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2628 = V_40;
		V_39 = L_2628;
		V_40 = L_2627;
	}

IL_2a97:
	{
		int32_t L_2629 = V_128;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2630 = V_122;
		double L_2631 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2632 = __this->___temp32a;
		int32_t L_2633;
		L_2633 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2629, L_2630, L_2631, L_2632, NULL);
		V_78 = L_2633;
		int32_t L_2634 = V_151;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2635 = V_148;
		double L_2636 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2637 = V_134;
		int32_t L_2638;
		L_2638 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2634, L_2635, L_2636, L_2637, NULL);
		V_140 = L_2638;
		int32_t L_2639 = V_140;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2640 = V_134;
		double L_2641 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2642 = __this->___temp16a;
		int32_t L_2643;
		L_2643 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2639, L_2640, ((double)il2cpp_codegen_multiply((2.0), L_2641)), L_2642, NULL);
		V_75 = L_2643;
		int32_t L_2644 = V_140;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2645 = V_134;
		double L_2646 = V_44;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2647 = __this->___temp16b;
		int32_t L_2648;
		L_2648 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2644, L_2645, L_2646, L_2647, NULL);
		V_76 = L_2648;
		int32_t L_2649 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2650 = __this->___temp16a;
		int32_t L_2651 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2652 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2653 = __this->___temp32b;
		int32_t L_2654;
		L_2654 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2649, L_2650, L_2651, L_2652, L_2653, NULL);
		V_79 = L_2654;
		int32_t L_2655 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2656 = __this->___temp32a;
		int32_t L_2657 = V_79;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2658 = __this->___temp32b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2659 = __this->___temp64;
		int32_t L_2660;
		L_2660 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2655, L_2656, L_2657, L_2658, L_2659, NULL);
		V_81 = L_2660;
		int32_t L_2661 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2662 = V_39;
		int32_t L_2663 = V_81;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2664 = __this->___temp64;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2665 = V_40;
		int32_t L_2666;
		L_2666 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2661, L_2662, L_2663, L_2664, L_2665, NULL);
		V_41 = L_2666;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2667 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2668 = V_40;
		V_39 = L_2668;
		V_40 = L_2667;
	}

IL_2b46:
	{
		double L_2669 = V_47;
		if ((((double)L_2669) == ((double)(0.0))))
		{
			goto IL_2c84;
		}
	}
	{
		int32_t L_2670 = V_117;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2671 = V_111;
		double L_2672 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2673 = __this->___temp16a;
		int32_t L_2674;
		L_2674 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2670, L_2671, L_2672, L_2673, NULL);
		V_75 = L_2674;
		int32_t L_2675 = V_145;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2676 = V_142;
		double L_2677 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2678 = V_123;
		int32_t L_2679;
		L_2679 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2675, L_2676, L_2677, L_2678, NULL);
		V_129 = L_2679;
		int32_t L_2680 = V_129;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2681 = V_123;
		double L_2682 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2683 = __this->___temp32a;
		int32_t L_2684;
		L_2684 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2680, L_2681, ((double)il2cpp_codegen_multiply((2.0), L_2682)), L_2683, NULL);
		V_78 = L_2684;
		int32_t L_2685 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2686 = __this->___temp16a;
		int32_t L_2687 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2688 = __this->___temp32a;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2689 = __this->___temp48;
		int32_t L_2690;
		L_2690 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2685, L_2686, L_2687, L_2688, L_2689, NULL);
		V_80 = L_2690;
		int32_t L_2691 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2692 = V_39;
		int32_t L_2693 = V_80;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2694 = __this->___temp48;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2695 = V_40;
		int32_t L_2696;
		L_2696 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2691, L_2692, L_2693, L_2694, L_2695, NULL);
		V_41 = L_2696;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2697 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2698 = V_40;
		V_39 = L_2698;
		V_40 = L_2697;
		int32_t L_2699 = V_129;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2700 = V_123;
		double L_2701 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2702 = __this->___temp32a;
		int32_t L_2703;
		L_2703 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2699, L_2700, L_2701, L_2702, NULL);
		V_78 = L_2703;
		int32_t L_2704 = V_151;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2705 = V_148;
		double L_2706 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2707 = V_135;
		int32_t L_2708;
		L_2708 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2704, L_2705, L_2706, L_2707, NULL);
		V_141 = L_2708;
		int32_t L_2709 = V_141;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2710 = V_135;
		double L_2711 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2712 = __this->___temp16a;
		int32_t L_2713;
		L_2713 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2709, L_2710, ((double)il2cpp_codegen_multiply((2.0), L_2711)), L_2712, NULL);
		V_75 = L_2713;
		int32_t L_2714 = V_141;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2715 = V_135;
		double L_2716 = V_47;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2717 = __this->___temp16b;
		int32_t L_2718;
		L_2718 = RobustPredicates_ScaleExpansionZeroElim_mEE8E96FF701C7F8B30482E2EA05881071EF0245F(__this, L_2714, L_2715, L_2716, L_2717, NULL);
		V_76 = L_2718;
		int32_t L_2719 = V_75;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2720 = __this->___temp16a;
		int32_t L_2721 = V_76;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2722 = __this->___temp16b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2723 = __this->___temp32b;
		int32_t L_2724;
		L_2724 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2719, L_2720, L_2721, L_2722, L_2723, NULL);
		V_79 = L_2724;
		int32_t L_2725 = V_78;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2726 = __this->___temp32a;
		int32_t L_2727 = V_79;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2728 = __this->___temp32b;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2729 = __this->___temp64;
		int32_t L_2730;
		L_2730 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2725, L_2726, L_2727, L_2728, L_2729, NULL);
		V_81 = L_2730;
		int32_t L_2731 = V_41;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2732 = V_39;
		int32_t L_2733 = V_81;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2734 = __this->___temp64;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2735 = V_40;
		int32_t L_2736;
		L_2736 = RobustPredicates_FastExpansionSumZeroElim_m1DC70F067A44EBF8441D133D01D774C83F73D5FF(__this, L_2731, L_2732, L_2733, L_2734, L_2735, NULL);
		V_41 = L_2736;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2737 = V_39;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2738 = V_40;
		V_39 = L_2738;
		V_40 = L_2737;
	}

IL_2c84:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2739 = V_39;
		int32_t L_2740 = V_41;
		NullCheck(L_2739);
		int32_t L_2741 = ((int32_t)il2cpp_codegen_subtract(L_2740, 1));
		double L_2742 = (L_2739)->GetAt(static_cast<il2cpp_array_size_t>(L_2741));
		return L_2742;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobustPredicates_AllocateWorkspace_m0029D102DA7E013E4F0B4A82DD98509161759EE9 (RobustPredicates_t4BC67B90930A60936CE1AE95415066CA5B7818D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1152));
		__this->___fin1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fin1), (void*)L_0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1152));
		__this->___fin2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fin2), (void*)L_1);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___abdet = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___abdet), (void*)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___axbc = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axbc), (void*)L_3);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___axxbc = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axxbc), (void*)L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___aybc = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aybc), (void*)L_5);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___ayybc = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ayybc), (void*)L_6);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___adet = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adet), (void*)L_7);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___bxca = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bxca), (void*)L_8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___bxxca = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bxxca), (void*)L_9);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___byca = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___byca), (void*)L_10);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___byyca = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___byyca), (void*)L_11);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___bdet = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bdet), (void*)L_12);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___cxab = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cxab), (void*)L_13);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___cxxab = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cxxab), (void*)L_14);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___cyab = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cyab), (void*)L_15);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___cyyab = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cyyab), (void*)L_16);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___cdet = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cdet), (void*)L_17);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___temp8 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp8), (void*)L_18);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___temp16a = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp16a), (void*)L_19);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___temp16b = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp16b), (void*)L_20);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___temp16c = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp16c), (void*)L_21);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___temp32a = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp32a), (void*)L_22);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___temp32b = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp32b), (void*)L_23);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		__this->___temp48 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp48), (void*)L_24);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_25 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___temp64 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___temp64), (void*)L_25);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator__ctor_mF2C005195D13BAFF91E2290504027EF6DF2C7C71 (TriangleLocator_tCA8D727EF279CF962B1A4E5B910994043F9C4A9F* __this, Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* ___0_mesh, RuntimeObject* ___1_predicates, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___2_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_0 = ___0_mesh;
		__this->___mesh = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh), (void*)L_0);
		RuntimeObject* L_1 = ___1_predicates;
		__this->___predicates = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicates), (void*)L_1);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_2 = ___0_mesh;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = ___2_random;
		TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29* L_4 = (TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29*)il2cpp_codegen_object_new(TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29_il2cpp_TypeInfo_var);
		TriangleSampler__ctor_m2E6F416BBEC7C587CF6C0641B1B50A3864A1566B(L_4, L_2, L_3, NULL);
		__this->___sampler = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sampler), (void*)L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool__ctor_m7725BDC9C1B3AEDBC52E65A054793CE99CDBD943 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m9C6ADBC3D0AFFC7A85FD13D38BC691C10C852A87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___size = 0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)64), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_2 = (TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE*)(TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE*)SZArrayNew(TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___pool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pool), (void*)L_2);
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_3 = __this->___pool;
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_4 = (TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0*)(TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0*)SZArrayNew(TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0*)L_4);
		Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* L_5 = (Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9*)il2cpp_codegen_object_new(Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9_il2cpp_TypeInfo_var);
		Stack_1__ctor_m9C6ADBC3D0AFFC7A85FD13D38BC691C10C852A87(L_5, ((int32_t)1024), Stack_1__ctor_m9C6ADBC3D0AFFC7A85FD13D38BC691C10C852A87_RuntimeMethod_var);
		__this->___stack = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stack), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* TrianglePool_Get_m3D80052DB2C64EB526874C5E15CF25B6977895D3 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisTriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_m0A1D926C719973A67FF1F11C9676313BFD73F3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m326EE2888179AF3D77FE762798B56C433230A07A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* L_0 = __this->___stack;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_inline(L_0, Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* L_2 = __this->___stack;
		NullCheck(L_2);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_3;
		L_3 = Stack_1_Pop_m326EE2888179AF3D77FE762798B56C433230A07A(L_2, Stack_1_Pop_m326EE2888179AF3D77FE762798B56C433230A07A_RuntimeMethod_var);
		V_0 = L_3;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_4 = V_0;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___hash;
		NullCheck(L_4);
		L_4->___hash = ((int32_t)il2cpp_codegen_subtract(((-L_6)), 1));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_7 = V_0;
		TrianglePool_Cleanup_m2F753AB4B7C5F02DB9DAA7EE05BDD6704AEB8889(__this, L_7, NULL);
		goto IL_0120;
	}

IL_0035:
	{
		int32_t L_8 = __this->___count;
		int32_t L_9 = __this->___size;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_008a;
		}
	}
	{
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_10 = __this->___pool;
		int32_t L_11 = __this->___count;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)(L_11/((int32_t)1024)));
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = __this->___count;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)(L_14%((int32_t)1024)));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = L_16;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_17 = V_0;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___hash;
		NullCheck(L_17);
		L_17->___id = L_19;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_20 = V_0;
		TrianglePool_Cleanup_m2F753AB4B7C5F02DB9DAA7EE05BDD6704AEB8889(__this, L_20, NULL);
		int32_t L_21 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_0120;
	}

IL_008a:
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_22 = (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)il2cpp_codegen_object_new(Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0_il2cpp_TypeInfo_var);
		Triangle__ctor_m147CFD45282D21024F2E525E653C8FEDA44E5601(L_22, NULL);
		V_0 = L_22;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_23 = V_0;
		int32_t L_24 = __this->___size;
		NullCheck(L_23);
		L_23->___hash = L_24;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_25 = V_0;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___hash;
		NullCheck(L_25);
		L_25->___id = L_27;
		int32_t L_28 = __this->___size;
		V_1 = ((int32_t)(L_28/((int32_t)1024)));
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_29 = __this->___pool;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if (L_32)
		{
			goto IL_00f3;
		}
	}
	{
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_33 = __this->___pool;
		int32_t L_34 = V_1;
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_35 = (TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0*)(TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0*)SZArrayNew(TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0*)L_35);
		int32_t L_36 = V_1;
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_37 = __this->___pool;
		NullCheck(L_37);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_36, 1))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_00f3;
		}
	}
	{
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE** L_38 = (TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE**)(&__this->___pool);
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_39 = __this->___pool;
		NullCheck(L_39);
		Array_Resize_TisTriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_m0A1D926C719973A67FF1F11C9676313BFD73F3C0(L_38, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_39)->max_length)))), Array_Resize_TisTriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0_m0A1D926C719973A67FF1F11C9676313BFD73F3C0_RuntimeMethod_var);
	}

IL_00f3:
	{
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_40 = __this->___pool;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = __this->___size;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_45 = V_0;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_44%((int32_t)1024)))), (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)L_45);
		int32_t L_46 = __this->___size;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_2;
		__this->___size = L_47;
		int32_t L_48 = V_2;
		__this->___count = L_48;
	}

IL_0120:
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_49 = V_0;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Release_m63F982F11B32F7BF5662E2274D8686ADE8B07369 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_triangle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7264693A8EFF79ACA35AC5D7CABEC58B3DC285F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* L_0 = __this->___stack;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = ___0_triangle;
		NullCheck(L_0);
		Stack_1_Push_m7264693A8EFF79ACA35AC5D7CABEC58B3DC285F1(L_0, L_1, Stack_1_Push_m7264693A8EFF79ACA35AC5D7CABEC58B3DC285F1_RuntimeMethod_var);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_2 = ___0_triangle;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_3 = ___0_triangle;
		NullCheck(L_3);
		int32_t L_4 = L_3->___hash;
		NullCheck(L_2);
		L_2->___hash = ((int32_t)il2cpp_codegen_subtract(((-L_4)), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_Sample_m0C9E5D0A294510BBE6291B7C1D72B9A611F37401 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, int32_t ___0_k, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_0 = (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9*)il2cpp_codegen_object_new(U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9_il2cpp_TypeInfo_var);
		U3CSampleU3Ed__11__ctor_m77D824639541E2D01700820A4562FCFC57F3C6E1(L_0, ((int32_t)-2), NULL);
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_2 = L_1;
		int32_t L_3 = ___0_k;
		NullCheck(L_2);
		L_2->___U3CU3E3__k = L_3;
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_4 = L_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_5 = ___1_random;
		NullCheck(L_4);
		L_4->___U3CU3E3__random = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E3__random), (void*)L_5);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Cleanup_m2F753AB4B7C5F02DB9DAA7EE05BDD6704AEB8889 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_triangle, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = ___0_triangle;
		NullCheck(L_0);
		L_0->___label = 0;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = ___0_triangle;
		NullCheck(L_1);
		L_1->___area = (0.0);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_2 = ___0_triangle;
		NullCheck(L_2);
		L_2->___infected = (bool)0;
		V_0 = 0;
		goto IL_0052;
	}

IL_0021:
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_3 = ___0_triangle;
		NullCheck(L_3);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_4 = L_3->___vertices;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)NULL);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_6 = ___0_triangle;
		NullCheck(L_6);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_7 = L_6->___subsegs;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_initobj(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), sizeof(Osub_t021137B718448D59923AD442251BEDE243B7ECE0));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_9 = ___0_triangle;
		NullCheck(L_9);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_10 = L_9->___neighbors;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		il2cpp_codegen_initobj(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Add_m9F233F7A4056F8837D8878AF342786AF10CCCF04 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrianglePool_Add_m9F233F7A4056F8837D8878AF342786AF10CCCF04_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Clear_mA48EDA940B80C60DFEA7479AD80ECE6D05FE14D4 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m5F4CB7B738AAACCE387090E68733E20650C052A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* L_0 = __this->___stack;
		NullCheck(L_0);
		Stack_1_Clear_m5F4CB7B738AAACCE387090E68733E20650C052A5(L_0, Stack_1_Clear_m5F4CB7B738AAACCE387090E68733E20650C052A5_RuntimeMethod_var);
		int32_t L_1 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_1/((int32_t)1024))), 1));
		V_1 = 0;
		goto IL_0055;
	}

IL_001e:
	{
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_2 = __this->___pool;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)1024)))))%((int32_t)1024)));
		V_4 = 0;
		goto IL_004c;
	}

IL_0041:
	{
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_8 = V_2;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, NULL);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)NULL);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004c:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0055:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_16 = 0;
		V_5 = L_16;
		__this->___count = L_16;
		int32_t L_17 = V_5;
		__this->___size = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_Contains_m169916436AC5A343AB42499ED368F4BB96B8EBB5 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = ___0_item;
		NullCheck(L_0);
		int32_t L_1 = L_0->___hash;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___size;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_5 = __this->___pool;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)(L_6/((int32_t)1024)));
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(L_9%((int32_t)1024)));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		int32_t L_12 = L_11->___hash;
		return (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_CopyTo_mC9AA5E63C3F2E511FA29573F6DEE71BF075B8378 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1CD9FC547A31FA58D1F5039A8E21570908A48045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = TrianglePool_GetEnumerator_m26E99643357FC5C6684925B38BB9716D744A99A1(__this, NULL);
		V_0 = L_0;
		goto IL_0017;
	}

IL_0009:
	{
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_4;
		L_4 = InterfaceFuncInvoker0< Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* >::Invoke(0, IEnumerator_1_t1CD9FC547A31FA58D1F5039A8E21570908A48045_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)L_4);
		int32_t L_5 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrianglePool_get_Count_m26D028D3F8FEF8E5A5115D892C39FBE38698FD7B (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___count;
		Stack_1_tB9756B20D6AA93D5107E8C6614BB33B8B9A4F6A9* L_1 = __this->___stack;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_inline(L_1, Stack_1_get_Count_mF1243E6774BC0910F2143FFC3D1ECEFFD2C9FF0B_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_get_IsReadOnly_m47C1ADA1FA24204D1274C4140A4E4121C16C539F (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_Remove_mA88708E2DA9EA2E6C39D95D70C19A5AA344E8B32 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_item, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrianglePool_Remove_mA88708E2DA9EA2E6C39D95D70C19A5AA344E8B32_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_GetEnumerator_m26E99643357FC5C6684925B38BB9716D744A99A1 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* L_0 = (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412*)il2cpp_codegen_object_new(Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412_il2cpp_TypeInfo_var);
		Enumerator__ctor_mAB7AE3A573F8A8D66ADDA534345A4071B62B7ED5(L_0, __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_System_Collections_IEnumerable_GetEnumerator_mB659D77976AEAB2DE37782A09B8266CCFC8B6281 (TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = TrianglePool_GetEnumerator_m26E99643357FC5C6684925B38BB9716D744A99A1(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAB7AE3A573F8A8D66ADDA534345A4071B62B7ED5 (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* __this, TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* ___0_pool, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_0 = ___0_pool;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TrianglePool_get_Count_m26D028D3F8FEF8E5A5115D892C39FBE38698FD7B(L_0, NULL);
		__this->___count = L_1;
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_2 = ___0_pool;
		NullCheck(L_2);
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_3 = L_2->___pool;
		__this->___pool = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pool), (void*)L_3);
		__this->___index = 0;
		__this->___offset = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* Enumerator_get_Current_m157CE98861938CE31C9F791D1A796AE18AAD141C (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* __this, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1A3EA43F77FE3221BA03ABC20A7F38C7E924B126 (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mDF45B39CAC66FCB46DF420667C31A79A8CC8B5FE (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* __this, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5588E842AB3931FE8D8BB4390C2BFF27DBD0AADA (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0054;
	}

IL_0002:
	{
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_0 = __this->___pool;
		int32_t L_1 = __this->___offset;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1/((int32_t)1024)));
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->___offset;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)(L_4%((int32_t)1024)));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___current = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current), (void*)L_6);
		int32_t L_7 = __this->___offset;
		__this->___offset = ((int32_t)il2cpp_codegen_add(L_7, 1));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_8 = __this->___current;
		NullCheck(L_8);
		int32_t L_9 = L_8->___hash;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_10 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return (bool)1;
	}

IL_0054:
	{
		int32_t L_11 = __this->___index;
		int32_t L_12 = __this->___count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0002;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m135A0DB3657566C65ACD24CE39716FB10FBE1887 (Enumerator_t439CBDBA9948BF82470162075F0BBD8390374412* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___offset = L_0;
		int32_t L_1 = V_0;
		__this->___index = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__11__ctor_m77D824639541E2D01700820A4562FCFC57F3C6E1 (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__11_System_IDisposable_Dispose_m66AB341EF68F76053B3376258AF14250A4306077 (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSampleU3Ed__11_MoveNext_m6D0E486A4B5DC482E3CB4356A663606325AE18E6 (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* V_1 = NULL;
	int32_t V_2 = 0;
	Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state = (-1);
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TrianglePool_get_Count_m26D028D3F8FEF8E5A5115D892C39FBE38698FD7B(L_4, NULL);
		__this->___U3CcountU3E5__2 = L_5;
		int32_t L_6 = __this->___k;
		int32_t L_7 = __this->___U3CcountU3E5__2;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_8 = __this->___U3CcountU3E5__2;
		__this->___k = L_8;
		goto IL_00a5;
	}

IL_0049:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = __this->___random;
		int32_t L_10 = __this->___U3CcountU3E5__2;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_9, 0, L_10);
		V_2 = L_11;
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_12 = V_1;
		NullCheck(L_12);
		TriangleU5BU5DU5BU5D_t92D4E1CC901701D90B2795A7F85E2D5328FF3DAE* L_13 = L_12->___pool;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)(L_14/((int32_t)1024)));
		TriangleU5BU5D_t403F81DDBCAFEA07B7C6FB73516454C42F6689E0* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)(L_17%((int32_t)1024)));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = L_20->___hash;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_22 = __this->___k;
		V_4 = L_22;
		int32_t L_23 = V_4;
		__this->___k = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_24 = V_3;
		__this->___U3CU3E2__current = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_24);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_009e:
	{
		__this->___U3CU3E1__state = (-1);
	}

IL_00a5:
	{
		int32_t L_25 = __this->___k;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* U3CSampleU3Ed__11_System_Collections_Generic_IEnumeratorU3CTriangleNet_Topology_TriangleU3E_get_Current_m37220C93DF136B22006C5131343342A098D2D28A (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__11_System_Collections_IEnumerator_Reset_m0D27F24373F9E98D43D905F93EC7BA471BD7DFFD (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSampleU3Ed__11_System_Collections_IEnumerator_Reset_m0D27F24373F9E98D43D905F93EC7BA471BD7DFFD_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__11_System_Collections_IEnumerator_get_Current_m922EA33477D3D22BD2E085A927FC0A694C680D88 (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__11_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m9F1F3C8D0BD2FA726008D33CBCD2B2F02FDDBCBA (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_3 = (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9*)il2cpp_codegen_object_new(U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9_il2cpp_TypeInfo_var);
		U3CSampleU3Ed__11__ctor_m77D824639541E2D01700820A4562FCFC57F3C6E1(L_3, 0, NULL);
		V_0 = L_3;
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_4 = V_0;
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_6 = V_0;
		int32_t L_7 = __this->___U3CU3E3__k;
		NullCheck(L_6);
		L_6->___k = L_7;
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_8 = V_0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = __this->___U3CU3E3__random;
		NullCheck(L_8);
		L_8->___random = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___random), (void*)L_9);
		U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__11_System_Collections_IEnumerable_GetEnumerator_m710C72367B80D68E62713142253B8FA72BEAF68C (U3CSampleU3Ed__11_tD70B5DDE842B6042B2433680AA25C743C6A880F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSampleU3Ed__11_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m9F1F3C8D0BD2FA726008D33CBCD2B2F02FDDBCBA(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_m2E6F416BBEC7C587CF6C0641B1B50A3864A1566B (TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29* __this, Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* ___0_mesh, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_random, const RuntimeMethod* method) 
{
	{
		__this->___samples = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_0 = ___0_mesh;
		__this->___mesh = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh), (void*)L_0);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ___1_random;
		__this->___random = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_GetEnumerator_m444D480D98CDF4B92B65A491FB7E2070FE5BA635 (TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4F8C07463B69A85908EBE7EFF801B9EF72745890_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_0 = __this->___mesh;
		NullCheck(L_0);
		TrianglePool_tA82ED45624CD626C00ABEF7D9CEA2DFEF291BC26* L_1 = L_0->___triangles;
		int32_t L_2 = __this->___samples;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = __this->___random;
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = TrianglePool_Sample_m0C9E5D0A294510BBE6291B7C1D72B9A611F37401(L_1, L_2, L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t4F8C07463B69A85908EBE7EFF801B9EF72745890_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_System_Collections_IEnumerable_GetEnumerator_m5A5D15982A0CC77DCEB943801ECFBB3A9D3F504B (TriangleSampler_t375CE4D38AA17E1173D557A3BF2E2BE2507E7E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = TriangleSampler_GetEnumerator_m444D480D98CDF4B92B65A491FB7E2070FE5BA635(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshal_pinvoke(const Osub_t021137B718448D59923AD442251BEDE243B7ECE0& unmarshaled, Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___segException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___segException, NULL);
}
IL2CPP_EXTERN_C void Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshal_pinvoke_back(const Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_pinvoke& marshaled, Osub_t021137B718448D59923AD442251BEDE243B7ECE0& unmarshaled)
{
	Exception_t* ___segException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___segException, NULL);
}
IL2CPP_EXTERN_C void Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshal_pinvoke_cleanup(Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshal_com(const Osub_t021137B718448D59923AD442251BEDE243B7ECE0& unmarshaled, Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_com& marshaled)
{
	Exception_t* ___segException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___segException, NULL);
}
IL2CPP_EXTERN_C void Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshal_com_back(const Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_com& marshaled, Osub_t021137B718448D59923AD442251BEDE243B7ECE0& unmarshaled)
{
	Exception_t* ___segException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'seg' of type 'Osub': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___segException, NULL);
}
IL2CPP_EXTERN_C void Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshal_com_cleanup(Osub_t021137B718448D59923AD442251BEDE243B7ECE0_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Osub_ToString_m795F8541799CAD7C12B36AB39494E554748DB632 (Osub_t021137B718448D59923AD442251BEDE243B7ECE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148EDDF6555695DFC66299136A88027385790545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC381049E38E1A72EDE3A68C5E9D6A2D49DB56B60);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_0 = __this->___seg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral148EDDF6555695DFC66299136A88027385790545;
	}

IL_000e:
	{
		SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* L_1 = __this->___seg;
		NullCheck(L_1);
		int32_t L_2 = L_1->___hash;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC381049E38E1A72EDE3A68C5E9D6A2D49DB56B60, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* Osub_ToString_m795F8541799CAD7C12B36AB39494E554748DB632_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Osub_t021137B718448D59923AD442251BEDE243B7ECE0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Osub_t021137B718448D59923AD442251BEDE243B7ECE0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Osub_ToString_m795F8541799CAD7C12B36AB39494E554748DB632(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshal_pinvoke(const Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989& unmarshaled, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_pinvoke& marshaled)
{
	Exception_t* ___triException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___triException, NULL);
}
IL2CPP_EXTERN_C void Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshal_pinvoke_back(const Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_pinvoke& marshaled, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989& unmarshaled)
{
	Exception_t* ___triException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___triException, NULL);
}
IL2CPP_EXTERN_C void Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshal_pinvoke_cleanup(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshal_com(const Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989& unmarshaled, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_com& marshaled)
{
	Exception_t* ___triException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___triException, NULL);
}
IL2CPP_EXTERN_C void Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshal_com_back(const Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_com& marshaled, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989& unmarshaled)
{
	Exception_t* ___triException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'tri' of type 'Otri': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___triException, NULL);
}
IL2CPP_EXTERN_C void Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshal_com_cleanup(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Otri_ToString_m55FC9F8BD283FC4F48F3680A49CD76ABCFE628CB (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral148EDDF6555695DFC66299136A88027385790545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2BF2B4DB9A6864C148643E8D70302A401ED7E95);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral148EDDF6555695DFC66299136A88027385790545;
	}

IL_000e:
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = __this->___tri;
		NullCheck(L_1);
		int32_t L_2 = L_1->___hash;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD2BF2B4DB9A6864C148643E8D70302A401ED7E95, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* Otri_ToString_m55FC9F8BD283FC4F48F3680A49CD76ABCFE628CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Otri_ToString_m55FC9F8BD283FC4F48F3680A49CD76ABCFE628CB(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) 
{
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_0 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = __this->___tri;
		NullCheck(L_1);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_2 = L_1->___neighbors;
		int32_t L_3 = __this->___orient;
		NullCheck(L_2);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___tri;
		L_0->___tri = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tri), (void*)L_4);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_5 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_6 = __this->___tri;
		NullCheck(L_6);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_7 = L_6->___neighbors;
		int32_t L_8 = __this->___orient;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___orient;
		L_5->___orient = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A_AdjustorThunk (RuntimeObject* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(_thisAdjusted, ___0_ot, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___orient;
		V_0 = L_0;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = __this->___tri;
		NullCheck(L_1);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_2 = L_1->___neighbors;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___orient;
		__this->___orient = L_4;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_5 = __this->___tri;
		NullCheck(L_5);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_6 = L_5->___neighbors;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___tri;
		__this->___tri = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tri), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_0 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = __this->___tri;
		L_0->___tri = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tri), (void*)L_1);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_2 = ___0_ot;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___plus1Mod3;
		int32_t L_4 = __this->___orient;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		L_2->___orient = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83_AdjustorThunk (RuntimeObject* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83(_thisAdjusted, ___0_ot, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___plus1Mod3;
		int32_t L_1 = __this->___orient;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___orient = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_0 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = __this->___tri;
		L_0->___tri = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tri), (void*)L_1);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_2 = ___0_ot;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___minus1Mod3;
		int32_t L_4 = __this->___orient;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		L_2->___orient = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C_AdjustorThunk (RuntimeObject* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C(_thisAdjusted, ___0_ot, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___minus1Mod3;
		int32_t L_1 = __this->___orient;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___orient = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_1 = L_0->___vertices;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___plus1Mod3;
		int32_t L_3 = __this->___orient;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		int32_t L_6 = L_5;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_7 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* _returnValue;
	_returnValue = Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_1 = L_0->___vertices;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___minus1Mod3;
		int32_t L_3 = __this->___orient;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		int32_t L_6 = L_5;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_7 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* _returnValue;
	_returnValue = Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_1 = L_0->___vertices;
		int32_t L_2 = __this->___orient;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* _returnValue;
	_returnValue = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) 
{
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_0 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_1 = __this->___tri;
		L_0->___tri = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tri), (void*)L_1);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_2 = ___0_ot;
		int32_t L_3 = __this->___orient;
		L_2->___orient = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269_AdjustorThunk (RuntimeObject* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269(_thisAdjusted, ___0_ot, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_Equals_m7221848291C0AEE5F9B70C3D0438453FED3ABAD3 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 ___0_ot, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 L_1 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_2 = L_1.___tri;
		if ((!(((RuntimeObject*)(Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)L_0) == ((RuntimeObject*)(Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = __this->___orient;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 L_4 = ___0_ot;
		int32_t L_5 = L_4.___orient;
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Otri_Equals_m7221848291C0AEE5F9B70C3D0438453FED3ABAD3_AdjustorThunk (RuntimeObject* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 ___0_ot, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	bool _returnValue;
	_returnValue = Otri_Equals_m7221848291C0AEE5F9B70C3D0438453FED3ABAD3(_thisAdjusted, ___0_ot, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_1 = L_0->___vertices;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___plus1Mod3;
		int32_t L_3 = __this->___orient;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_6 = ___0_v;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E_AdjustorThunk (RuntimeObject* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E(_thisAdjusted, ___0_v, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_1 = L_0->___vertices;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___minus1Mod3;
		int32_t L_3 = __this->___orient;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_6 = ___0_v;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404_AdjustorThunk (RuntimeObject* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404(_thisAdjusted, ___0_v, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_1 = L_0->___vertices;
		int32_t L_2 = __this->___orient;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_3 = ___0_v;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5_AdjustorThunk (RuntimeObject* __this, Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* ___0_v, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5(_thisAdjusted, ___0_v, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_1 = L_0->___neighbors;
		int32_t L_2 = __this->___orient;
		NullCheck(L_1);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_3 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_4 = L_3->___tri;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___tri = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___tri), (void*)L_4);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_5 = __this->___tri;
		NullCheck(L_5);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_6 = L_5->___neighbors;
		int32_t L_7 = __this->___orient;
		NullCheck(L_6);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_8 = ___0_ot;
		int32_t L_9 = L_8->___orient;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___orient = L_9;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_10 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_11 = L_10->___tri;
		NullCheck(L_11);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_12 = L_11->___neighbors;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_13 = ___0_ot;
		int32_t L_14 = L_13->___orient;
		NullCheck(L_12);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_15 = __this->___tri;
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___tri = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___tri), (void*)L_15);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_16 = ___0_ot;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_17 = L_16->___tri;
		NullCheck(L_17);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_18 = L_17->___neighbors;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_19 = ___0_ot;
		int32_t L_20 = L_19->___orient;
		NullCheck(L_18);
		int32_t L_21 = __this->___orient;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___orient = L_21;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682_AdjustorThunk (RuntimeObject* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_ot, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682(_thisAdjusted, ___0_ot, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dissolve_mC2CFB2CB8E221F95F7798562909989647CE76725 (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_dummy, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = __this->___tri;
		NullCheck(L_0);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_1 = L_0->___neighbors;
		int32_t L_2 = __this->___orient;
		NullCheck(L_1);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_3 = ___0_dummy;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___tri = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___tri), (void*)L_3);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_4 = __this->___tri;
		NullCheck(L_4);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_5 = L_4->___neighbors;
		int32_t L_6 = __this->___orient;
		NullCheck(L_5);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___orient = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Otri_Dissolve_mC2CFB2CB8E221F95F7798562909989647CE76725_AdjustorThunk (RuntimeObject* __this, Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_dummy, const RuntimeMethod* method)
{
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*>(__this + _offset);
	Otri_Dissolve_mC2CFB2CB8E221F95F7798562909989647CE76725(_thisAdjusted, ___0_dummy, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Kill_m6FE3894E428744D4E7DE83CF449C041053B6045C (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* ___0_tri, const RuntimeMethod* method) 
{
	{
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_0 = ___0_tri;
		NullCheck(L_0);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_1 = L_0->___neighbors;
		NullCheck(L_1);
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tri = (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tri), (void*)(Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)NULL);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_2 = ___0_tri;
		NullCheck(L_2);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_3 = L_2->___neighbors;
		NullCheck(L_3);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___tri = (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___tri), (void*)(Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri__cctor_m3F08FEE7B0E4F321C857559ACDF1EB4D72BC4A6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___plus1Mod3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___plus1Mod3), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___minus1Mod3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_StaticFields*)il2cpp_codegen_static_fields_for(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var))->___minus1Mod3), (void*)L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSegment__ctor_m999C9CBAAB99296C70836DEB8C73B7316B301F9E (SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_0 = (VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA*)(VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA*)SZArrayNew(VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___vertices = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices), (void*)L_0);
		__this->___boundary = 0;
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_1 = (OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142*)(OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142*)SZArrayNew(OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___subsegs = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subsegs), (void*)L_1);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_2 = (OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6*)(OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6*)SZArrayNew(OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___triangles = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubSegment_GetHashCode_m4F02B5F6BEB1A48AEE5400EAA90592C6AB289E22 (SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hash;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubSegment_ToString_m02F5C925C7DFAA7DD608A58CF95095FFC8D40BA8 (SubSegment_t396B5A4632157A5FE50B0A88395C525EDC32D1D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___hash;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_m147CFD45282D21024F2E525E653C8FEDA44E5601 (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_0 = (VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA*)(VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA*)SZArrayNew(VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___vertices = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices), (void*)L_0);
		OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142* L_1 = (OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142*)(OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142*)SZArrayNew(OsubU5BU5D_t4A5E09E00EFA1B5507C5D03E9368018822CA3142_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___subsegs = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subsegs), (void*)L_1);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_2 = (OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6*)(OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6*)SZArrayNew(OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___neighbors = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___neighbors), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* Triangle_GetVertex_m8F15BDBA77ED5734AD0CC7CFD74922F6034CC6FD (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_0 = __this->___vertices;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangle_GetHashCode_m7BED0D482934DD01A9E7AF361D72A93E64D20B9B (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hash;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Triangle_ToString_mEEAE4DFDAAE575A9EAB05BA23EC080E0622D5DF4 (Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___hash;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statistic__cctor_m6A87B1167C868C1C647CA2362BC2B029216E8627 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___InCircleCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___InCircleAdaptCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CounterClockwiseCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CounterClockwiseAdaptCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___Orient3dCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___HyperbolaCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CircumcenterCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___CircleTopCount = ((int64_t)0);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___RelocationCount = ((int64_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___plus1Mod3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___plus1Mod3), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___minus1Mod3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_t47267479E89E2682DDD75F994BBB67C432E4F86F_il2cpp_TypeInfo_var))->___minus1Mod3), (void*)L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter__ctor_mB799A73AF95596F40A3BC129B03CCD8AAD32C233 (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___0_points, int32_t ___1_seed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_0 = ___0_points;
		__this->___points = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points), (void*)L_0);
		int32_t L_1 = ___1_seed;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_2, L_1, NULL);
		__this->___rand = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rand), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Sort_m7454D94BCC9FC4D1ADEF46E017DB9BACE52D3966 (VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___0_array, int32_t ___1_seed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_0 = ___0_array;
		int32_t L_1 = ___1_seed;
		VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* L_2 = (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE*)il2cpp_codegen_object_new(VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE_il2cpp_TypeInfo_var);
		VertexSorter__ctor_mB799A73AF95596F40A3BC129B03CCD8AAD32C233(L_2, L_0, L_1, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_3 = ___0_array;
		NullCheck(L_3);
		NullCheck(L_2);
		VertexSorter_QuickSort_mBFF9F9F4194438847DAB59A61BA1041CB22D463A(L_2, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Alternate_m568F2CDF8DC8E74AE50B42B15B698FDF4630618D (VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* ___0_array, int32_t ___1_length, int32_t ___2_seed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_0 = ___0_array;
		int32_t L_1 = ___2_seed;
		VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* L_2 = (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE*)il2cpp_codegen_object_new(VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE_il2cpp_TypeInfo_var);
		VertexSorter__ctor_mB799A73AF95596F40A3BC129B03CCD8AAD32C233(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___1_length;
		V_1 = ((int32_t)(L_3>>1));
		int32_t L_4 = ___1_length;
		int32_t L_5 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) < ((int32_t)2)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		VertexSorter_AlternateAxes_m43C21D4276F0C81E3114326A584F0A42B99127A7(L_7, 0, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), 1, NULL);
	}

IL_0021:
	{
		VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = ___1_length;
		NullCheck(L_9);
		VertexSorter_AlternateAxes_m43C21D4276F0C81E3114326A584F0A42B99127A7(L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), 1, NULL);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_QuickSort_mBFF9F9F4194438847DAB59A61BA1041CB22D463A (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_5 = NULL;
	VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* V_6 = NULL;
	int32_t V_7 = 0;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_8 = NULL;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___0_left;
		V_0 = L_0;
		int32_t L_1 = ___1_right;
		V_1 = L_1;
		int32_t L_2 = ___1_right;
		int32_t L_3 = ___0_left;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_4 = __this->___points;
		V_6 = L_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, L_3)), 1))) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_5 = ___0_left;
		V_7 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_008a;
	}

IL_001c:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_6 = V_6;
		int32_t L_7 = V_7;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_8 = L_9;
		int32_t L_10 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_003d;
	}

IL_002b:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_11 = V_6;
		int32_t L_12 = V_9;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_13 = V_6;
		int32_t L_14 = V_9;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_16);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, 1))), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_16);
		int32_t L_17 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_003d:
	{
		int32_t L_18 = V_9;
		int32_t L_19 = ___0_left;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_20 = V_6;
		int32_t L_21 = V_9;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		double L_24 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_23)->___x;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_25 = V_8;
		NullCheck(L_25);
		double L_26 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_25)->___x;
		if ((((double)L_24) > ((double)L_26)))
		{
			goto IL_002b;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_27 = V_6;
		int32_t L_28 = V_9;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		double L_31 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_30)->___x;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_32 = V_8;
		NullCheck(L_32);
		double L_33 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_32)->___x;
		if ((!(((double)L_31) == ((double)L_33))))
		{
			goto IL_007b;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_34 = V_6;
		int32_t L_35 = V_9;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		double L_38 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_37)->___y;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_39 = V_8;
		NullCheck(L_39);
		double L_40 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_39)->___y;
		if ((((double)L_38) > ((double)L_40)))
		{
			goto IL_002b;
		}
	}

IL_007b:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_41 = V_6;
		int32_t L_42 = V_9;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_43 = V_8;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 1))), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_43);
		int32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_008a:
	{
		int32_t L_45 = V_7;
		int32_t L_46 = ___1_right;
		if ((((int32_t)L_45) <= ((int32_t)L_46)))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_0090:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_47 = __this->___rand;
		int32_t L_48 = ___0_left;
		int32_t L_49 = ___1_right;
		NullCheck(L_47);
		int32_t L_50;
		L_50 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_47, L_48, L_49);
		V_2 = L_50;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_51 = V_6;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		double L_55 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_54)->___x;
		V_3 = L_55;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_56 = V_6;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		double L_60 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_59)->___y;
		V_4 = L_60;
		int32_t L_61 = ___0_left;
		___0_left = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_62 = ___1_right;
		___1_right = ((int32_t)il2cpp_codegen_add(L_62, 1));
		goto IL_0133;
	}

IL_00bf:
	{
		int32_t L_63 = ___0_left;
		___0_left = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_64 = ___0_left;
		int32_t L_65 = ___1_right;
		if ((((int32_t)L_64) > ((int32_t)L_65)))
		{
			goto IL_00ed;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_66 = V_6;
		int32_t L_67 = ___0_left;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		double L_70 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_69)->___x;
		double L_71 = V_3;
		if ((((double)L_70) < ((double)L_71)))
		{
			goto IL_00bf;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_72 = V_6;
		int32_t L_73 = ___0_left;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		double L_76 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_75)->___x;
		double L_77 = V_3;
		if ((!(((double)L_76) == ((double)L_77))))
		{
			goto IL_00ed;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_78 = V_6;
		int32_t L_79 = ___0_left;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		double L_82 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_81)->___y;
		double L_83 = V_4;
		if ((((double)L_82) < ((double)L_83)))
		{
			goto IL_00bf;
		}
	}

IL_00ed:
	{
		int32_t L_84 = ___1_right;
		___1_right = ((int32_t)il2cpp_codegen_subtract(L_84, 1));
		int32_t L_85 = ___0_left;
		int32_t L_86 = ___1_right;
		if ((((int32_t)L_85) > ((int32_t)L_86)))
		{
			goto IL_011b;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_87 = V_6;
		int32_t L_88 = ___1_right;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		double L_91 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_90)->___x;
		double L_92 = V_3;
		if ((((double)L_91) > ((double)L_92)))
		{
			goto IL_00ed;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_93 = V_6;
		int32_t L_94 = ___1_right;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_96);
		double L_97 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_96)->___x;
		double L_98 = V_3;
		if ((!(((double)L_97) == ((double)L_98))))
		{
			goto IL_011b;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_99 = V_6;
		int32_t L_100 = ___1_right;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		double L_103 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_102)->___y;
		double L_104 = V_4;
		if ((((double)L_103) > ((double)L_104)))
		{
			goto IL_00ed;
		}
	}

IL_011b:
	{
		int32_t L_105 = ___0_left;
		int32_t L_106 = ___1_right;
		if ((((int32_t)L_105) >= ((int32_t)L_106)))
		{
			goto IL_0133;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_107 = V_6;
		int32_t L_108 = ___0_left;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_5 = L_110;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_111 = V_6;
		int32_t L_112 = ___0_left;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_113 = V_6;
		int32_t L_114 = ___1_right;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, L_116);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_116);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_117 = V_6;
		int32_t L_118 = ___1_right;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_119 = V_5;
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, L_119);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_119);
	}

IL_0133:
	{
		int32_t L_120 = ___0_left;
		int32_t L_121 = ___1_right;
		if ((((int32_t)L_120) < ((int32_t)L_121)))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_122 = ___0_left;
		int32_t L_123 = V_0;
		if ((((int32_t)L_122) <= ((int32_t)L_123)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_124 = V_0;
		int32_t L_125 = ___0_left;
		VertexSorter_QuickSort_mBFF9F9F4194438847DAB59A61BA1041CB22D463A(__this, L_124, L_125, NULL);
	}

IL_0143:
	{
		int32_t L_126 = V_1;
		int32_t L_127 = ___1_right;
		if ((((int32_t)L_126) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_127, 1)))))
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_128 = ___1_right;
		int32_t L_129 = V_1;
		VertexSorter_QuickSort_mBFF9F9F4194438847DAB59A61BA1041CB22D463A(__this, ((int32_t)il2cpp_codegen_add(L_128, 1)), L_129, NULL);
	}

IL_0153:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_AlternateAxes_m43C21D4276F0C81E3114326A584F0A42B99127A7 (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_axis, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_right;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		V_0 = ((int32_t)(L_2>>1));
		int32_t L_3 = L_2;
		if ((((int32_t)L_3) > ((int32_t)3)))
		{
			G_B2_0 = L_3;
			goto IL_0010;
		}
		G_B1_0 = L_3;
	}
	{
		___2_axis = 0;
		G_B2_0 = G_B1_0;
	}

IL_0010:
	{
		int32_t L_4 = ___2_axis;
		if (L_4)
		{
			G_B4_0 = G_B2_0;
			goto IL_0020;
		}
		G_B3_0 = G_B2_0;
	}
	{
		int32_t L_5 = ___0_left;
		int32_t L_6 = ___1_right;
		int32_t L_7 = ___0_left;
		int32_t L_8 = V_0;
		VertexSorter_VertexMedianX_m00B54326A53CBA9B35D8E84F8981137401371CB7(__this, L_5, L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8)), NULL);
		G_B5_0 = G_B3_0;
		goto IL_002b;
	}

IL_0020:
	{
		int32_t L_9 = ___0_left;
		int32_t L_10 = ___1_right;
		int32_t L_11 = ___0_left;
		int32_t L_12 = V_0;
		VertexSorter_VertexMedianY_mEFB8EEF377F9527A7424A41EE7CED9DFBF004FDD(__this, L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, L_12)), NULL);
		G_B5_0 = G_B4_0;
	}

IL_002b:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(G_B5_0, L_13))) < ((int32_t)2)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_15 = ___0_left;
		int32_t L_16 = ___0_left;
		int32_t L_17 = V_0;
		int32_t L_18 = ___2_axis;
		VertexSorter_AlternateAxes_m43C21D4276F0C81E3114326A584F0A42B99127A7(__this, L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_16, L_17)), 1)), ((int32_t)il2cpp_codegen_subtract(1, L_18)), NULL);
	}

IL_0043:
	{
		int32_t L_19 = ___0_left;
		int32_t L_20 = V_0;
		int32_t L_21 = ___1_right;
		int32_t L_22 = ___2_axis;
		VertexSorter_AlternateAxes_m43C21D4276F0C81E3114326A584F0A42B99127A7(__this, ((int32_t)il2cpp_codegen_add(L_19, L_20)), L_21, ((int32_t)il2cpp_codegen_subtract(1, L_22)), NULL);
	}

IL_0050:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianX_m00B54326A53CBA9B35D8E84F8981137401371CB7 (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_median, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_5 = NULL;
	VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* V_6 = NULL;
	{
		int32_t L_0 = ___1_right;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___0_left;
		V_0 = L_2;
		int32_t L_3 = ___1_right;
		V_1 = L_3;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_4 = __this->___points;
		V_6 = L_4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1))) == ((uint32_t)2))))
		{
			goto IL_0065;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_5 = V_6;
		int32_t L_6 = ___0_left;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		double L_9 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_8)->___x;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_10 = V_6;
		int32_t L_11 = ___1_right;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		double L_14 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_13)->___x;
		if ((((double)L_9) > ((double)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_15 = V_6;
		int32_t L_16 = ___0_left;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		double L_19 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_18)->___x;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_20 = V_6;
		int32_t L_21 = ___1_right;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		double L_24 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_23)->___x;
		if ((!(((double)L_19) == ((double)L_24))))
		{
			goto IL_0064;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_25 = V_6;
		int32_t L_26 = ___0_left;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		double L_29 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_28)->___y;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_30 = V_6;
		int32_t L_31 = ___1_right;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		double L_34 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_33)->___y;
		if ((!(((double)L_29) > ((double)L_34))))
		{
			goto IL_0064;
		}
	}

IL_0050:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_35 = V_6;
		int32_t L_36 = ___1_right;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_5 = L_38;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_39 = V_6;
		int32_t L_40 = ___1_right;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_41 = V_6;
		int32_t L_42 = ___0_left;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_44);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_44);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_45 = V_6;
		int32_t L_46 = ___0_left;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_47 = V_5;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_47);
	}

IL_0064:
	{
		return;
	}

IL_0065:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_48 = __this->___rand;
		int32_t L_49 = ___0_left;
		int32_t L_50 = ___1_right;
		NullCheck(L_48);
		int32_t L_51;
		L_51 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_48, L_49, L_50);
		V_2 = L_51;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_52 = V_6;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		double L_56 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_55)->___x;
		V_3 = L_56;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_57 = V_6;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		double L_61 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_60)->___y;
		V_4 = L_61;
		int32_t L_62 = ___0_left;
		___0_left = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		int32_t L_63 = ___1_right;
		___1_right = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_0108;
	}

IL_0094:
	{
		int32_t L_64 = ___0_left;
		___0_left = ((int32_t)il2cpp_codegen_add(L_64, 1));
		int32_t L_65 = ___0_left;
		int32_t L_66 = ___1_right;
		if ((((int32_t)L_65) > ((int32_t)L_66)))
		{
			goto IL_00c2;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_67 = V_6;
		int32_t L_68 = ___0_left;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		double L_71 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_70)->___x;
		double L_72 = V_3;
		if ((((double)L_71) < ((double)L_72)))
		{
			goto IL_0094;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_73 = V_6;
		int32_t L_74 = ___0_left;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		double L_77 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_76)->___x;
		double L_78 = V_3;
		if ((!(((double)L_77) == ((double)L_78))))
		{
			goto IL_00c2;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_79 = V_6;
		int32_t L_80 = ___0_left;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		double L_83 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_82)->___y;
		double L_84 = V_4;
		if ((((double)L_83) < ((double)L_84)))
		{
			goto IL_0094;
		}
	}

IL_00c2:
	{
		int32_t L_85 = ___1_right;
		___1_right = ((int32_t)il2cpp_codegen_subtract(L_85, 1));
		int32_t L_86 = ___0_left;
		int32_t L_87 = ___1_right;
		if ((((int32_t)L_86) > ((int32_t)L_87)))
		{
			goto IL_00f0;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_88 = V_6;
		int32_t L_89 = ___1_right;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		double L_92 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_91)->___x;
		double L_93 = V_3;
		if ((((double)L_92) > ((double)L_93)))
		{
			goto IL_00c2;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_94 = V_6;
		int32_t L_95 = ___1_right;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		double L_98 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_97)->___x;
		double L_99 = V_3;
		if ((!(((double)L_98) == ((double)L_99))))
		{
			goto IL_00f0;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_100 = V_6;
		int32_t L_101 = ___1_right;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		double L_104 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_103)->___y;
		double L_105 = V_4;
		if ((((double)L_104) > ((double)L_105)))
		{
			goto IL_00c2;
		}
	}

IL_00f0:
	{
		int32_t L_106 = ___0_left;
		int32_t L_107 = ___1_right;
		if ((((int32_t)L_106) >= ((int32_t)L_107)))
		{
			goto IL_0108;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_108 = V_6;
		int32_t L_109 = ___0_left;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_5 = L_111;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_112 = V_6;
		int32_t L_113 = ___0_left;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_114 = V_6;
		int32_t L_115 = ___1_right;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_117);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_117);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_118 = V_6;
		int32_t L_119 = ___1_right;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_120 = V_5;
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_120);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_120);
	}

IL_0108:
	{
		int32_t L_121 = ___0_left;
		int32_t L_122 = ___1_right;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_123 = ___0_left;
		int32_t L_124 = ___2_median;
		if ((((int32_t)L_123) <= ((int32_t)L_124)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_125 = V_0;
		int32_t L_126 = ___0_left;
		int32_t L_127 = ___2_median;
		VertexSorter_VertexMedianX_m00B54326A53CBA9B35D8E84F8981137401371CB7(__this, L_125, ((int32_t)il2cpp_codegen_subtract(L_126, 1)), L_127, NULL);
	}

IL_011b:
	{
		int32_t L_128 = ___1_right;
		int32_t L_129 = ___2_median;
		if ((((int32_t)L_128) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_129, 1)))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_130 = ___1_right;
		int32_t L_131 = V_1;
		int32_t L_132 = ___2_median;
		VertexSorter_VertexMedianX_m00B54326A53CBA9B35D8E84F8981137401371CB7(__this, ((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, L_132, NULL);
	}

IL_012c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianY_mEFB8EEF377F9527A7424A41EE7CED9DFBF004FDD (VertexSorter_tA3C2D04042B6B0B3256CA95A6A90888266B938FE* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_median, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_5 = NULL;
	VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* V_6 = NULL;
	{
		int32_t L_0 = ___1_right;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___0_left;
		V_0 = L_2;
		int32_t L_3 = ___1_right;
		V_1 = L_3;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_4 = __this->___points;
		V_6 = L_4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1))) == ((uint32_t)2))))
		{
			goto IL_0065;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_5 = V_6;
		int32_t L_6 = ___0_left;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		double L_9 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_8)->___y;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_10 = V_6;
		int32_t L_11 = ___1_right;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		double L_14 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_13)->___y;
		if ((((double)L_9) > ((double)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_15 = V_6;
		int32_t L_16 = ___0_left;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		double L_19 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_18)->___y;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_20 = V_6;
		int32_t L_21 = ___1_right;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		double L_24 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_23)->___y;
		if ((!(((double)L_19) == ((double)L_24))))
		{
			goto IL_0064;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_25 = V_6;
		int32_t L_26 = ___0_left;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		double L_29 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_28)->___x;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_30 = V_6;
		int32_t L_31 = ___1_right;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		double L_34 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_33)->___x;
		if ((!(((double)L_29) > ((double)L_34))))
		{
			goto IL_0064;
		}
	}

IL_0050:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_35 = V_6;
		int32_t L_36 = ___1_right;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_5 = L_38;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_39 = V_6;
		int32_t L_40 = ___1_right;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_41 = V_6;
		int32_t L_42 = ___0_left;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_44);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_44);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_45 = V_6;
		int32_t L_46 = ___0_left;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_47 = V_5;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_47);
	}

IL_0064:
	{
		return;
	}

IL_0065:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_48 = __this->___rand;
		int32_t L_49 = ___0_left;
		int32_t L_50 = ___1_right;
		NullCheck(L_48);
		int32_t L_51;
		L_51 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_48, L_49, L_50);
		V_2 = L_51;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_52 = V_6;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		double L_56 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_55)->___y;
		V_3 = L_56;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_57 = V_6;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		double L_61 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_60)->___x;
		V_4 = L_61;
		int32_t L_62 = ___0_left;
		___0_left = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		int32_t L_63 = ___1_right;
		___1_right = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_0108;
	}

IL_0094:
	{
		int32_t L_64 = ___0_left;
		___0_left = ((int32_t)il2cpp_codegen_add(L_64, 1));
		int32_t L_65 = ___0_left;
		int32_t L_66 = ___1_right;
		if ((((int32_t)L_65) > ((int32_t)L_66)))
		{
			goto IL_00c2;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_67 = V_6;
		int32_t L_68 = ___0_left;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		double L_71 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_70)->___y;
		double L_72 = V_3;
		if ((((double)L_71) < ((double)L_72)))
		{
			goto IL_0094;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_73 = V_6;
		int32_t L_74 = ___0_left;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		double L_77 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_76)->___y;
		double L_78 = V_3;
		if ((!(((double)L_77) == ((double)L_78))))
		{
			goto IL_00c2;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_79 = V_6;
		int32_t L_80 = ___0_left;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		double L_83 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_82)->___x;
		double L_84 = V_4;
		if ((((double)L_83) < ((double)L_84)))
		{
			goto IL_0094;
		}
	}

IL_00c2:
	{
		int32_t L_85 = ___1_right;
		___1_right = ((int32_t)il2cpp_codegen_subtract(L_85, 1));
		int32_t L_86 = ___0_left;
		int32_t L_87 = ___1_right;
		if ((((int32_t)L_86) > ((int32_t)L_87)))
		{
			goto IL_00f0;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_88 = V_6;
		int32_t L_89 = ___1_right;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		double L_92 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_91)->___y;
		double L_93 = V_3;
		if ((((double)L_92) > ((double)L_93)))
		{
			goto IL_00c2;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_94 = V_6;
		int32_t L_95 = ___1_right;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		double L_98 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_97)->___y;
		double L_99 = V_3;
		if ((!(((double)L_98) == ((double)L_99))))
		{
			goto IL_00f0;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_100 = V_6;
		int32_t L_101 = ___1_right;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		double L_104 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_103)->___x;
		double L_105 = V_4;
		if ((((double)L_104) > ((double)L_105)))
		{
			goto IL_00c2;
		}
	}

IL_00f0:
	{
		int32_t L_106 = ___0_left;
		int32_t L_107 = ___1_right;
		if ((((int32_t)L_106) >= ((int32_t)L_107)))
		{
			goto IL_0108;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_108 = V_6;
		int32_t L_109 = ___0_left;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_5 = L_111;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_112 = V_6;
		int32_t L_113 = ___0_left;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_114 = V_6;
		int32_t L_115 = ___1_right;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_117);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_117);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_118 = V_6;
		int32_t L_119 = ___1_right;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_120 = V_5;
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_120);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_120);
	}

IL_0108:
	{
		int32_t L_121 = ___0_left;
		int32_t L_122 = ___1_right;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_123 = ___0_left;
		int32_t L_124 = ___2_median;
		if ((((int32_t)L_123) <= ((int32_t)L_124)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_125 = V_0;
		int32_t L_126 = ___0_left;
		int32_t L_127 = ___2_median;
		VertexSorter_VertexMedianY_mEFB8EEF377F9527A7424A41EE7CED9DFBF004FDD(__this, L_125, ((int32_t)il2cpp_codegen_subtract(L_126, 1)), L_127, NULL);
	}

IL_011b:
	{
		int32_t L_128 = ___1_right;
		int32_t L_129 = ___2_median;
		if ((((int32_t)L_128) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_129, 1)))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_130 = ___1_right;
		int32_t L_131 = V_1;
		int32_t L_132 = ___2_median;
		VertexSorter_VertexMedianY_mEFB8EEF377F9527A7424A41EE7CED9DFBF004FDD(__this, ((int32_t)il2cpp_codegen_add(L_130, 1)), L_131, L_132, NULL);
	}

IL_012c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dwyer_Triangulate_m6FFBF4AA1790C20B77C76FE34942382145683BC3 (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, RuntimeObject* ___0_points, Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* ___1_config, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3629981044B583577D35ABBCA202E1858A28540D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t654A98D961D5287E7A9044BBEFF8B75507002473_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEB112D48D4A2067876B4B3DFE16DD5B4159EE6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD37145E9B85A36F668B89A07A975BD7A1DE79E2);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_6 = NULL;
	{
		Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* L_0 = ___1_config;
		NullCheck(L_0);
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_1;
		L_1 = Configuration_get_Predicates_m1600AFDB5D569A2D0391588C66AD759B6B84C002_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Func_1_Invoke_m6C6CC022F85F99F7553FE19BF8F8454B013551F5_inline(L_1, NULL);
		__this->___predicates = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicates), (void*)L_2);
		Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* L_3 = ___1_config;
		RuntimeObject* L_4 = ___0_points;
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_5 = (Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D*)il2cpp_codegen_object_new(Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D_il2cpp_TypeInfo_var);
		Mesh__ctor_mB808D1717405B7736D7E661CD47645BC158D792F(L_5, L_3, L_4, NULL);
		__this->___mesh = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh), (void*)L_5);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		RuntimeObject* L_6 = ___0_points;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t6952639BAFE25A4EB97BBF46EF2E3B889ED84BEC_il2cpp_TypeInfo_var, L_6);
		V_4 = L_7;
		int32_t L_8 = V_4;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_9 = (VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA*)(VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA*)SZArrayNew(VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___sortarray = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sortarray), (void*)L_9);
		V_2 = 0;
		RuntimeObject* L_10 = ___0_points;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t3629981044B583577D35ABBCA202E1858A28540D_il2cpp_TypeInfo_var, L_10);
		V_5 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{
				{
					RuntimeObject* L_12 = V_5;
					if (!L_12)
					{
						goto IL_007c;
					}
				}
				{
					RuntimeObject* L_13 = V_5;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_007c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0066_1;
			}

IL_004f_1:
			{
				RuntimeObject* L_14 = V_5;
				NullCheck(L_14);
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_15;
				L_15 = InterfaceFuncInvoker0< Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* >::Invoke(0, IEnumerator_1_t654A98D961D5287E7A9044BBEFF8B75507002473_il2cpp_TypeInfo_var, L_14);
				V_6 = L_15;
				VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_16 = __this->___sortarray;
				int32_t L_17 = V_2;
				int32_t L_18 = L_17;
				V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_19 = V_6;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, L_19);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_19);
			}

IL_0066_1:
			{
				RuntimeObject* L_20 = V_5;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_004f_1;
				}
			}
			{
				goto IL_007d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007d:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_22 = __this->___sortarray;
		VertexSorter_Sort_m7454D94BCC9FC4D1ADEF46E017DB9BACE52D3966(L_22, ((int32_t)57113), NULL);
		V_2 = 0;
		V_3 = 1;
		goto IL_013b;
	}

IL_0096:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_23 = __this->___sortarray;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		double L_27 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_26)->___x;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_28 = __this->___sortarray;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		double L_32 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_31)->___x;
		if ((!(((double)L_27) == ((double)L_32))))
		{
			goto IL_0123;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_33 = __this->___sortarray;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		double L_37 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_36)->___y;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_38 = __this->___sortarray;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		double L_42 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_41)->___y;
		if ((!(((double)L_37) == ((double)L_42))))
		{
			goto IL_0123;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Log_get_Verbose_m31AF16B244E9393DD7F12128A0A2D2D84FC7A487_inline(NULL);
		if (!L_43)
		{
			goto IL_0100;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_44;
		L_44 = Log_get_Instance_m51B55BACA0FE280A5D543E20FB1D1044E4F292DD_inline(NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_45 = __this->___sortarray;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		int32_t L_49 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_48)->___id;
		int32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52;
		L_52 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralFD37145E9B85A36F668B89A07A975BD7A1DE79E2, L_51, NULL);
		NullCheck(L_44);
		Log_Warning_mCA06B5AB008E60237F59B57632C7488B394D99AD(L_44, L_52, _stringLiteralEEB112D48D4A2067876B4B3DFE16DD5B4159EE6F, NULL);
	}

IL_0100:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_53 = __this->___sortarray;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		L_56->___type = 4;
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_57 = __this->___mesh;
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_58 = L_57;
		NullCheck(L_58);
		int32_t L_59 = L_58->___undeads;
		NullCheck(L_58);
		L_58->___undeads = ((int32_t)il2cpp_codegen_add(L_59, 1));
		goto IL_0137;
	}

IL_0123:
	{
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_61 = __this->___sortarray;
		int32_t L_62 = V_2;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_63 = __this->___sortarray;
		int32_t L_64 = V_3;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_66);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)L_66);
	}

IL_0137:
	{
		int32_t L_67 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_013b:
	{
		int32_t L_68 = V_3;
		int32_t L_69 = V_4;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		bool L_71 = __this->___UseDwyer;
		if (!L_71)
		{
			goto IL_0160;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_72 = __this->___sortarray;
		int32_t L_73 = V_2;
		VertexSorter_Alternate_m568F2CDF8DC8E74AE50B42B15B698FDF4630618D(L_72, L_73, ((int32_t)57113), NULL);
	}

IL_0160:
	{
		int32_t L_74 = V_2;
		Dwyer_DivconqRecurse_m3AFA0BDE63A27BC108FA4500E3FE2C875F854A89(__this, 0, ((int32_t)il2cpp_codegen_subtract(L_74, 1)), 0, (&V_0), (&V_1), NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_75 = __this->___mesh;
		int32_t L_76;
		L_76 = Dwyer_RemoveGhosts_mED741362AD5A736E9523926C3EC4F56D52EA3489(__this, (&V_0), NULL);
		NullCheck(L_75);
		L_75->___hullsize = L_76;
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_77 = __this->___mesh;
		return L_77;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dwyer_MergeHulls_m07954ACCA79C76A96B0C754C28338560C9E6EF0B (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_farleft, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___1_innerleft, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___2_innerright, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___3_farright, int32_t ___4_axis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_8 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_9 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_10 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_11 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_12 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_13 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_14 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_15 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_16 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_17 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_18 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_19 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_20 = NULL;
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_21 = NULL;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_3), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_4), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_5), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_6), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_7), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_0 = ___1_innerleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_1;
		L_1 = Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30(L_0, NULL);
		V_8 = L_1;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_2 = ___1_innerleft;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_3;
		L_3 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_2, NULL);
		V_10 = L_3;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_4 = ___2_innerright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_5;
		L_5 = Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672(L_4, NULL);
		V_9 = L_5;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_6 = ___2_innerright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_7;
		L_7 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_6, NULL);
		V_11 = L_7;
		bool L_8 = __this->___UseDwyer;
		if (!L_8)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_9 = ___4_axis;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0174;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_10 = ___0_farleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_11;
		L_11 = Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672(L_10, NULL);
		V_12 = L_11;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_12 = ___0_farleft;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_13;
		L_13 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_12, NULL);
		V_14 = L_13;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_14 = ___3_farright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_15;
		L_15 = Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30(L_14, NULL);
		V_13 = L_15;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_16 = ___3_farright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_17;
		L_17 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_16, NULL);
		V_15 = L_17;
		goto IL_00af;
	}

IL_0097:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_18 = ___0_farleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA(L_18, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_19 = ___0_farleft;
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9(L_19, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_20 = V_14;
		V_12 = L_20;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_21 = ___0_farleft;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_22;
		L_22 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_21, NULL);
		V_14 = L_22;
	}

IL_00af:
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_23 = V_14;
		NullCheck(L_23);
		double L_24 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_23)->___y;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_25 = V_12;
		NullCheck(L_25);
		double L_26 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_25)->___y;
		if ((((double)L_24) < ((double)L_26)))
		{
			goto IL_0097;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_27 = ___1_innerleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_27, (&V_6), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_28;
		L_28 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_6), NULL);
		V_21 = L_28;
		goto IL_00f3;
	}

IL_00d2:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_29 = ___1_innerleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83((&V_6), L_29, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_30 = V_8;
		V_10 = L_30;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_31 = V_21;
		V_8 = L_31;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_32 = ___1_innerleft;
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_32, (&V_6), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_33;
		L_33 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_6), NULL);
		V_21 = L_33;
	}

IL_00f3:
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_34 = V_21;
		NullCheck(L_34);
		double L_35 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_34)->___y;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_36 = V_8;
		NullCheck(L_36);
		double L_37 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_36)->___y;
		if ((((double)L_35) > ((double)L_37)))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_011d;
	}

IL_0105:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_38 = ___2_innerright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA(L_38, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_39 = ___2_innerright;
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9(L_39, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_40 = V_11;
		V_9 = L_40;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_41 = ___2_innerright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_42;
		L_42 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_41, NULL);
		V_11 = L_42;
	}

IL_011d:
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_43 = V_11;
		NullCheck(L_43);
		double L_44 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_43)->___y;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_45 = V_9;
		NullCheck(L_45);
		double L_46 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_45)->___y;
		if ((((double)L_44) < ((double)L_46)))
		{
			goto IL_0105;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_47 = ___3_farright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_47, (&V_6), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_48;
		L_48 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_6), NULL);
		V_21 = L_48;
		goto IL_0164;
	}

IL_0141:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_49 = ___3_farright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83((&V_6), L_49, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_50 = V_13;
		V_15 = L_50;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_51 = V_21;
		V_13 = L_51;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_52 = ___3_farright;
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_52, (&V_6), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_53;
		L_53 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_6), NULL);
		V_21 = L_53;
	}

IL_0164:
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_54 = V_21;
		NullCheck(L_54);
		double L_55 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_54)->___y;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_56 = V_13;
		NullCheck(L_56);
		double L_57 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_56)->___y;
		if ((((double)L_55) > ((double)L_57)))
		{
			goto IL_0141;
		}
	}

IL_0174:
	{
		V_22 = (bool)0;
		RuntimeObject* L_58 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_59 = V_8;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_60 = V_10;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_61 = V_9;
		NullCheck(L_58);
		double L_62;
		L_62 = InterfaceFuncInvoker3< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(0, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_58, L_59, L_60, L_61);
		if ((!(((double)L_62) > ((double)(0.0)))))
		{
			goto IL_01ae;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_63 = ___1_innerleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916(L_63, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_64 = ___1_innerleft;
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9(L_64, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_65 = V_10;
		V_8 = L_65;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_66 = ___1_innerleft;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_67;
		L_67 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_66, NULL);
		V_10 = L_67;
		V_22 = (bool)1;
	}

IL_01ae:
	{
		RuntimeObject* L_68 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_69 = V_11;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_70 = V_9;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_71 = V_8;
		NullCheck(L_68);
		double L_72;
		L_72 = InterfaceFuncInvoker3< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(0, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_68, L_69, L_70, L_71);
		if ((!(((double)L_72) > ((double)(0.0)))))
		{
			goto IL_01e5;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_73 = ___2_innerright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA(L_73, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_74 = ___2_innerright;
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9(L_74, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_75 = V_11;
		V_9 = L_75;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_76 = ___2_innerright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_77;
		L_77 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_76, NULL);
		V_11 = L_77;
		V_22 = (bool)1;
	}

IL_01e5:
	{
		bool L_78 = V_22;
		if (L_78)
		{
			goto IL_0174;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_79 = ___1_innerleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_79, (&V_0), NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_80 = ___2_innerright;
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_80, (&V_1), NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_81 = __this->___mesh;
		NullCheck(L_81);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_81, (&V_7), NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_82 = ___1_innerleft;
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_7), L_82, NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_7), NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_83 = ___2_innerright;
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_7), L_83, NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_7), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_84 = V_9;
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_7), L_84, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_85 = V_8;
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_7), L_85, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_86 = ___0_farleft;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_87;
		L_87 = Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672(L_86, NULL);
		V_12 = L_87;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_88 = V_8;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_89 = V_12;
		bool L_90;
		L_90 = Point_op_Equality_mCC91FD96F4D37CAAB1E21C38690972BFA3973DD1(L_88, L_89, NULL);
		if (!L_90)
		{
			goto IL_0251;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_91 = ___0_farleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83((&V_7), L_91, NULL);
	}

IL_0251:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_92 = ___3_farright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_93;
		L_93 = Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30(L_92, NULL);
		V_13 = L_93;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_94 = V_9;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_95 = V_13;
		bool L_96;
		L_96 = Point_op_Equality_mCC91FD96F4D37CAAB1E21C38690972BFA3973DD1(L_94, L_95, NULL);
		if (!L_96)
		{
			goto IL_026e;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_97 = ___3_farright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C((&V_7), L_97, NULL);
	}

IL_026e:
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_98 = V_8;
		V_16 = L_98;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_99 = V_9;
		V_17 = L_99;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_100;
		L_100 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_0), NULL);
		V_18 = L_100;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_101;
		L_101 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_1), NULL);
		V_19 = L_101;
	}

IL_0288:
	{
		RuntimeObject* L_102 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_103 = V_18;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_104 = V_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_105 = V_17;
		NullCheck(L_102);
		double L_106;
		L_106 = InterfaceFuncInvoker3< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(0, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_102, L_103, L_104, L_105);
		V_24 = (bool)((((int32_t)((!(((double)L_106) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		RuntimeObject* L_107 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_108 = V_19;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_109 = V_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_110 = V_17;
		NullCheck(L_107);
		double L_111;
		L_111 = InterfaceFuncInvoker3< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(0, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_107, L_108, L_109, L_110);
		V_25 = (bool)((((int32_t)((!(((double)L_111) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_112 = V_24;
		bool L_113 = V_25;
		if (!((int32_t)((int32_t)L_112&(int32_t)L_113)))
		{
			goto IL_03c3;
		}
	}
	{
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_114 = __this->___mesh;
		NullCheck(L_114);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_114, (&V_2), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_115 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_2), L_115, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_116 = V_17;
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_2), L_116, NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_7), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_1), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_0), NULL);
		bool L_117 = __this->___UseDwyer;
		if (!L_117)
		{
			goto IL_03c2;
		}
	}
	{
		int32_t L_118 = ___4_axis;
		if ((!(((uint32_t)L_118) == ((uint32_t)1))))
		{
			goto IL_03c2;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_119 = ___0_farleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_120;
		L_120 = Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672(L_119, NULL);
		V_12 = L_120;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_121 = ___0_farleft;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_122;
		L_122 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_121, NULL);
		V_14 = L_122;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_123 = ___3_farright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_124;
		L_124 = Otri_Dest_mBF71E8FEA8423DA46784D27059485EC05BE2DD30(L_123, NULL);
		V_13 = L_124;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_125 = ___3_farright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_126;
		L_126 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_125, NULL);
		V_15 = L_126;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_127 = ___0_farleft;
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_127, (&V_6), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_128;
		L_128 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_6), NULL);
		V_21 = L_128;
		goto IL_0385;
	}

IL_0364:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_129 = ___0_farleft;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C((&V_6), L_129, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_130 = V_12;
		V_14 = L_130;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_131 = V_21;
		V_12 = L_131;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_132 = ___0_farleft;
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A(L_132, (&V_6), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_133;
		L_133 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_6), NULL);
		V_21 = L_133;
	}

IL_0385:
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_134 = V_21;
		NullCheck(L_134);
		double L_135 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_134)->___x;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_136 = V_12;
		NullCheck(L_136);
		double L_137 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_136)->___x;
		if ((((double)L_135) < ((double)L_137)))
		{
			goto IL_0364;
		}
	}
	{
		goto IL_03b2;
	}

IL_0397:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_138 = ___3_farright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916(L_138, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_139 = ___3_farright;
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9(L_139, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_140 = V_15;
		V_13 = L_140;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_141 = ___3_farright;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_142;
		L_142 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C(L_141, NULL);
		V_15 = L_142;
	}

IL_03b2:
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_143 = V_15;
		NullCheck(L_143);
		double L_144 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_143)->___x;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_145 = V_13;
		NullCheck(L_145);
		double L_146 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_145)->___x;
		if ((((double)L_144) > ((double)L_146)))
		{
			goto IL_0397;
		}
	}

IL_03c2:
	{
		return;
	}

IL_03c3:
	{
		bool L_147 = V_24;
		if (L_147)
		{
			goto IL_04e7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C((&V_0), (&V_2), NULL);
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9((&V_2), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_148;
		L_148 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_2), NULL);
		V_20 = L_148;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_149 = V_20;
		bool L_150;
		L_150 = Point_op_Inequality_mF293075D4AC1E575838281A8962722D85F843979(L_149, (Point_tD9D7844991974E103C098D90590516DC77D65AF2*)NULL, NULL);
		if (!L_150)
		{
			goto IL_04e7;
		}
	}
	{
		RuntimeObject* L_151 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_152 = V_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_153 = V_17;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_154 = V_18;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_155 = V_20;
		NullCheck(L_151);
		double L_156;
		L_156 = InterfaceFuncInvoker4< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(1, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_151, L_152, L_153, L_154, L_155);
		V_23 = (bool)((((double)L_156) > ((double)(0.0)))? 1 : 0);
		goto IL_04e0;
	}

IL_0415:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_2), (&V_4), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_2), (&V_3), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_4), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_0), (&V_3), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_0), NULL);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_0), (&V_5), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_2), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_5), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_157 = V_16;
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_0), L_157, NULL);
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_0), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)NULL, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_158 = V_20;
		Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5((&V_0), L_158, NULL);
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_2), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)NULL, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_159 = V_18;
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_2), L_159, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_160 = V_20;
		Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5((&V_2), L_160, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_161 = V_20;
		V_18 = L_161;
		Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269((&V_3), (&V_2), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_162;
		L_162 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_2), NULL);
		V_20 = L_162;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_163 = V_20;
		bool L_164;
		L_164 = Point_op_Inequality_mF293075D4AC1E575838281A8962722D85F843979(L_163, (Point_tD9D7844991974E103C098D90590516DC77D65AF2*)NULL, NULL);
		if (!L_164)
		{
			goto IL_04dd;
		}
	}
	{
		RuntimeObject* L_165 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_166 = V_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_167 = V_17;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_168 = V_18;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_169 = V_20;
		NullCheck(L_165);
		double L_170;
		L_170 = InterfaceFuncInvoker4< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(1, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_165, L_166, L_167, L_168, L_169);
		V_23 = (bool)((((double)L_170) > ((double)(0.0)))? 1 : 0);
		goto IL_04e0;
	}

IL_04dd:
	{
		V_23 = (bool)0;
	}

IL_04e0:
	{
		bool L_171 = V_23;
		if (L_171)
		{
			goto IL_0415;
		}
	}

IL_04e7:
	{
		bool L_172 = V_25;
		if (L_172)
		{
			goto IL_060b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83((&V_1), (&V_2), NULL);
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9((&V_2), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_173;
		L_173 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_2), NULL);
		V_20 = L_173;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_174 = V_20;
		bool L_175;
		L_175 = Point_op_Inequality_mF293075D4AC1E575838281A8962722D85F843979(L_174, (Point_tD9D7844991974E103C098D90590516DC77D65AF2*)NULL, NULL);
		if (!L_175)
		{
			goto IL_060b;
		}
	}
	{
		RuntimeObject* L_176 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_177 = V_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_178 = V_17;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_179 = V_19;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_180 = V_20;
		NullCheck(L_176);
		double L_181;
		L_181 = InterfaceFuncInvoker4< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(1, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_176, L_177, L_178, L_179, L_180);
		V_23 = (bool)((((double)L_181) > ((double)(0.0)))? 1 : 0);
		goto IL_0604;
	}

IL_0539:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_2), NULL);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_2), (&V_4), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_2), NULL);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_2), (&V_3), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_4), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_1), (&V_3), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_1), NULL);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_1), (&V_5), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_5), NULL);
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_1), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)NULL, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_182 = V_17;
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_1), L_182, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_183 = V_20;
		Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5((&V_1), L_183, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_184 = V_19;
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_2), L_184, NULL);
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_2), (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D*)NULL, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_185 = V_20;
		Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5((&V_2), L_185, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_186 = V_20;
		V_19 = L_186;
		Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269((&V_3), (&V_2), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_187;
		L_187 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_2), NULL);
		V_20 = L_187;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_188 = V_20;
		bool L_189;
		L_189 = Point_op_Inequality_mF293075D4AC1E575838281A8962722D85F843979(L_188, (Point_tD9D7844991974E103C098D90590516DC77D65AF2*)NULL, NULL);
		if (!L_189)
		{
			goto IL_0601;
		}
	}
	{
		RuntimeObject* L_190 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_191 = V_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_192 = V_17;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_193 = V_19;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_194 = V_20;
		NullCheck(L_190);
		double L_195;
		L_195 = InterfaceFuncInvoker4< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(1, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_190, L_191, L_192, L_193, L_194);
		V_23 = (bool)((((double)L_195) > ((double)(0.0)))? 1 : 0);
		goto IL_0604;
	}

IL_0601:
	{
		V_23 = (bool)0;
	}

IL_0604:
	{
		bool L_196 = V_23;
		if (L_196)
		{
			goto IL_0539;
		}
	}

IL_060b:
	{
		bool L_197 = V_24;
		if (L_197)
		{
			goto IL_0631;
		}
	}
	{
		bool L_198 = V_25;
		if (L_198)
		{
			goto IL_0667;
		}
	}
	{
		RuntimeObject* L_199 = __this->___predicates;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_200 = V_18;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_201 = V_16;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_202 = V_17;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_203 = V_19;
		NullCheck(L_199);
		double L_204;
		L_204 = InterfaceFuncInvoker4< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(1, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_199, L_200, L_201, L_202, L_203);
		if ((!(((double)L_204) > ((double)(0.0)))))
		{
			goto IL_0667;
		}
	}

IL_0631:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_7), (&V_1), NULL);
		Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C((&V_1), (&V_7), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_205 = V_16;
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_7), L_205, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_206 = V_19;
		V_17 = L_206;
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_7), (&V_1), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_207;
		L_207 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_1), NULL);
		V_19 = L_207;
		goto IL_0288;
	}

IL_0667:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_7), (&V_0), NULL);
		Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83((&V_0), (&V_7), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_208 = V_17;
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_7), L_208, NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_209 = V_18;
		V_16 = L_209;
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_7), (&V_0), NULL);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_210;
		L_210 = Otri_Apex_m88726A604F506CA131C004F043ABB09168FD157C((&V_0), NULL);
		V_18 = L_210;
		goto IL_0288;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dwyer_DivconqRecurse_m3AFA0BDE63A27BC108FA4500E3FE2C875F854A89 (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, int32_t ___0_left, int32_t ___1_right, int32_t ___2_axis, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___3_farleft, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___4_farright, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_5;
	memset((&V_5), 0, sizeof(V_5));
	double V_6 = 0.0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_3), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_4), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_5), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		int32_t L_0 = ___1_right;
		int32_t L_1 = ___0_left;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_00da;
		}
	}
	{
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_3 = __this->___mesh;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_4 = ___3_farleft;
		NullCheck(L_3);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_3, L_4, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_5 = ___3_farleft;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_6 = __this->___sortarray;
		int32_t L_7 = ___0_left;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E(L_5, L_9, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_10 = ___3_farleft;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_11 = __this->___sortarray;
		int32_t L_12 = ___0_left;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404(L_10, L_14, NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_15 = __this->___mesh;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_16 = ___4_farright;
		NullCheck(L_15);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_15, L_16, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_17 = ___4_farright;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_18 = __this->___sortarray;
		int32_t L_19 = ___0_left;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E(L_17, L_21, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_22 = ___4_farright;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_23 = __this->___sortarray;
		int32_t L_24 = ___0_left;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404(L_22, L_26, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_27 = ___3_farleft;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_28 = ___4_farright;
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682(L_27, L_28, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_29 = ___3_farleft;
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916(L_29, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_30 = ___4_farright;
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA(L_30, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_31 = ___3_farleft;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_32 = ___4_farright;
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682(L_31, L_32, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_33 = ___3_farleft;
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916(L_33, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_34 = ___4_farright;
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA(L_34, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_35 = ___3_farleft;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_36 = ___4_farright;
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682(L_35, L_36, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_37 = ___4_farright;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_38 = ___3_farleft;
		Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C(L_37, L_38, NULL);
		return;
	}

IL_00da:
	{
		int32_t L_39 = V_7;
		if ((!(((uint32_t)L_39) == ((uint32_t)3))))
		{
			goto IL_03f4;
		}
	}
	{
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_40 = __this->___mesh;
		NullCheck(L_40);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_40, (&V_0), NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_41 = __this->___mesh;
		NullCheck(L_41);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_41, (&V_1), NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_42 = __this->___mesh;
		NullCheck(L_42);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_42, (&V_2), NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_43 = __this->___mesh;
		NullCheck(L_43);
		Mesh_MakeTriangle_m28B3C1CC27C659B28781756242856031A41037B6(L_43, (&V_3), NULL);
		RuntimeObject* L_44 = __this->___predicates;
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_45 = __this->___sortarray;
		int32_t L_46 = ___0_left;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_49 = __this->___sortarray;
		int32_t L_50 = ___0_left;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_53 = __this->___sortarray;
		int32_t L_54 = ___0_left;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_44);
		double L_57;
		L_57 = InterfaceFuncInvoker3< double, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2*, Point_tD9D7844991974E103C098D90590516DC77D65AF2* >::Invoke(0, IPredicates_tCB641808AF2B8BE1A19F1664519986C7AFB86D93_il2cpp_TypeInfo_var, L_44, L_48, L_52, L_56);
		V_6 = L_57;
		double L_58 = V_6;
		if ((!(((double)L_58) == ((double)(0.0)))))
		{
			goto IL_0254;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_59 = __this->___sortarray;
		int32_t L_60 = ___0_left;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_0), L_62, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_63 = __this->___sortarray;
		int32_t L_64 = ___0_left;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_0), L_66, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_67 = __this->___sortarray;
		int32_t L_68 = ___0_left;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_1), L_70, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_71 = __this->___sortarray;
		int32_t L_72 = ___0_left;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_1), L_74, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_75 = __this->___sortarray;
		int32_t L_76 = ___0_left;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_2), L_78, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_79 = __this->___sortarray;
		int32_t L_80 = ___0_left;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_2), L_82, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_83 = __this->___sortarray;
		int32_t L_84 = ___0_left;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_3), L_86, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_87 = __this->___sortarray;
		int32_t L_88 = ___0_left;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_3), L_90, NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_0), (&V_1), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_3), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_0), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_1), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_3), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_0), (&V_3), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_1), (&V_2), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_0), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_1), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_3), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_0), (&V_1), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_3), NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_91 = ___3_farleft;
		Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269((&V_1), L_91, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_92 = ___4_farright;
		Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269((&V_2), L_92, NULL);
		return;
	}

IL_0254:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_93 = __this->___sortarray;
		int32_t L_94 = ___0_left;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_0), L_96, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_97 = __this->___sortarray;
		int32_t L_98 = ___0_left;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_1), L_100, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_101 = __this->___sortarray;
		int32_t L_102 = ___0_left;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_3), L_104, NULL);
		double L_105 = V_6;
		if ((!(((double)L_105) > ((double)(0.0)))))
		{
			goto IL_02f6;
		}
	}
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_106 = __this->___sortarray;
		int32_t L_107 = ___0_left;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_107, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_0), L_109, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_110 = __this->___sortarray;
		int32_t L_111 = ___0_left;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_1), L_113, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_114 = __this->___sortarray;
		int32_t L_115 = ___0_left;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_2), L_117, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_118 = __this->___sortarray;
		int32_t L_119 = ___0_left;
		NullCheck(L_118);
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5((&V_0), L_121, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_122 = __this->___sortarray;
		int32_t L_123 = ___0_left;
		NullCheck(L_122);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add(L_123, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_2), L_125, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_126 = __this->___sortarray;
		int32_t L_127 = ___0_left;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_3), L_129, NULL);
		goto IL_035c;
	}

IL_02f6:
	{
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_130 = __this->___sortarray;
		int32_t L_131 = ___0_left;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_0), L_133, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_134 = __this->___sortarray;
		int32_t L_135 = ___0_left;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_1), L_137, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_138 = __this->___sortarray;
		int32_t L_139 = ___0_left;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 2));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_2), L_141, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_142 = __this->___sortarray;
		int32_t L_143 = ___0_left;
		NullCheck(L_142);
		int32_t L_144 = ((int32_t)il2cpp_codegen_add(L_143, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		Otri_SetApex_m1158FD19799DBF05AB6C8B2EC5105E73F83667E5((&V_0), L_145, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_146 = __this->___sortarray;
		int32_t L_147 = ___0_left;
		NullCheck(L_146);
		int32_t L_148 = ((int32_t)il2cpp_codegen_add(L_147, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Otri_SetOrg_m35E05758F5055DEBB453F682DD81D9D343203B2E((&V_2), L_149, NULL);
		VertexU5BU5D_tFC86C829EE05EB63EF93C2C69C3605DD7588F5AA* L_150 = __this->___sortarray;
		int32_t L_151 = ___0_left;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		Otri_SetDest_mC9FACB2FE5A28F47413CD44B6DE890B8BB824404((&V_3), L_153, NULL);
	}

IL_035c:
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_0), (&V_1), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_0), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_0), (&V_2), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_0), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_0), (&V_3), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_1), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_1), (&V_2), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_1), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_3), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_1), (&V_3), NULL);
		Otri_Lnext_mF274CC0C847D21532BA881CC8FCCD1EC1433C1FA((&V_2), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_3), NULL);
		Otri_Bond_m6ECA58BD54606E39C8BD505F3BF96A8BA461F682((&V_2), (&V_3), NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_154 = ___3_farleft;
		Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269((&V_1), L_154, NULL);
		double L_155 = V_6;
		if ((!(((double)L_155) > ((double)(0.0)))))
		{
			goto IL_03ea;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_156 = ___4_farright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269((&V_2), L_156, NULL);
		return;
	}

IL_03ea:
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_157 = ___3_farleft;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_158 = ___4_farright;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83(L_157, L_158, NULL);
		return;
	}

IL_03f4:
	{
		int32_t L_159 = V_7;
		V_8 = ((int32_t)(L_159>>1));
		int32_t L_160 = ___0_left;
		int32_t L_161 = ___0_left;
		int32_t L_162 = V_8;
		int32_t L_163 = ___2_axis;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_164 = ___3_farleft;
		Dwyer_DivconqRecurse_m3AFA0BDE63A27BC108FA4500E3FE2C875F854A89(__this, L_160, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_161, L_162)), 1)), ((int32_t)il2cpp_codegen_subtract(1, L_163)), L_164, (&V_4), NULL);
		int32_t L_165 = ___0_left;
		int32_t L_166 = V_8;
		int32_t L_167 = ___1_right;
		int32_t L_168 = ___2_axis;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_169 = ___4_farright;
		Dwyer_DivconqRecurse_m3AFA0BDE63A27BC108FA4500E3FE2C875F854A89(__this, ((int32_t)il2cpp_codegen_add(L_165, L_166)), L_167, ((int32_t)il2cpp_codegen_subtract(1, L_168)), (&V_5), L_169, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_170 = ___3_farleft;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_171 = ___4_farright;
		int32_t L_172 = ___2_axis;
		Dwyer_MergeHulls_m07954ACCA79C76A96B0C754C28338560C9E6EF0B(__this, L_170, (&V_4), (&V_5), L_171, L_172, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dwyer_RemoveGhosts_mED741362AD5A736E9523926C3EC4F56D52EA3489 (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* ___0_startghost, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989));
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_0 = __this->___mesh;
		NullCheck(L_0);
		Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* L_1 = L_0->___behavior;
		NullCheck(L_1);
		bool L_2;
		L_2 = Behavior_get_Poly_mD0F8B91B347E55E51EF5C6923B75930FB136C768_inline(L_1, NULL);
		V_5 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_3 = ___0_startghost;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lprev_m45853635F5D278CB52BCEB9CFEFB249724C5703C(L_3, (&V_0), NULL);
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9((&V_0), NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_4 = __this->___mesh;
		NullCheck(L_4);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_5 = L_4->___dummytri;
		NullCheck(L_5);
		OtriU5BU5D_tF80C3D655CCA050EEEEBD617B8F78BF1E164CCC6* L_6 = L_5->___neighbors;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989)L_7);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_8 = ___0_startghost;
		Otri_Copy_m2B46DB591785063630C5EEAAFDA2AC975E9F4269(L_8, (&V_1), NULL);
		V_4 = 0;
	}

IL_005e:
	{
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Lnext_m76E3C83442DCFD9759F758E9762437B818E27A83((&V_1), (&V_2), NULL);
		Otri_Lprev_mF432E72B747274D18A93E7F86966F225BB8CC916((&V_1), NULL);
		Otri_Sym_mD22842E43149A0708E28AC1546CFBA692746B1C9((&V_1), NULL);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_00a4;
		}
	}
	{
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 L_11 = V_1;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_12 = L_11.___tri;
		NullCheck(L_12);
		int32_t L_13 = L_12->___id;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_00a4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_14;
		L_14 = Otri_Org_m9310B3C409B6EC0FBF6B6AFE716BBEDDC63E5672((&V_1), NULL);
		V_3 = L_14;
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_15)->___label;
		if (L_16)
		{
			goto IL_00a4;
		}
	}
	{
		Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* L_17 = V_3;
		NullCheck(L_17);
		((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_17)->___label = 1;
	}

IL_00a4:
	{
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_18 = __this->___mesh;
		NullCheck(L_18);
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_19 = L_18->___dummytri;
		il2cpp_codegen_runtime_class_init_inline(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989_il2cpp_TypeInfo_var);
		Otri_Dissolve_mC2CFB2CB8E221F95F7798562909989647CE76725((&V_1), L_19, NULL);
		Otri_Sym_mDC0AF975DB720656AE647CD0648C6081A34C4F7A((&V_2), (&V_1), NULL);
		Mesh_t05AE36B2EF0AB91F829037BFB2E05CC1E68EAA7D* L_20 = __this->___mesh;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 L_21 = V_2;
		Triangle_tC56BE5101DA6FA7AED65780EC070EA033E91F7A0* L_22 = L_21.___tri;
		NullCheck(L_20);
		Mesh_TriangleDealloc_m17D9BEE05F496D0946C260F36B8900758A4B4438(L_20, L_22, NULL);
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989* L_23 = ___0_startghost;
		Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989 L_24 = (*(Otri_tEE9E9B833E012964BD9781D1D75B2E0702AB4989*)L_23);
		bool L_25;
		L_25 = Otri_Equals_m7221848291C0AEE5F9B70C3D0438453FED3ABAD3((&V_1), L_24, NULL);
		if (!L_25)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dwyer__ctor_m49E8C1A8527524CE8B8D88C6CC24BE169F338421 (Dwyer_t0C09C1CE4BF7063D9175F9B655AF045FEF912432* __this, const RuntimeMethod* method) 
{
	{
		__this->___UseDwyer = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m03169E8ED49987D9E108A94831CE631B6BA6E4DF (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, double ___0_x, double ___1_y, int32_t ___2_label, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		double L_0 = ___0_x;
		__this->___x = L_0;
		double L_1 = ___1_y;
		__this->___y = L_1;
		int32_t L_2 = ___2_label;
		__this->___label = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_ID_m18AF1443FD59D0050CA2145D3CDB72833CACAC3E (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___id;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_ID_mEA32CBC9526827FE943A669B2987A7CDC3D4BD30 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___id = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_m2A6338D065F607A3692723157221BD137B30A113 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___x;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_X_mBEB49056A425C0A0EE09EAB7AA08C824BD3504FF (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___x = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m7F9871B9D18F9F26C40B5105949099D2D50F72DB (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___y;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_Y_m5BFEDF750E254AAC967C2E93C662F3B3583703DA (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___y = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_mCC91FD96F4D37CAAB1E21C38690972BFA3973DD1 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_a, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_b, const RuntimeMethod* method) 
{
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_0 = ___0_a;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_1 = ___1_b;
		return (bool)((((RuntimeObject*)(Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_2 = ___0_a;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_3 = ___1_b;
		if ((!(((RuntimeObject*)(Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_2) == ((RuntimeObject*)(Point_tD9D7844991974E103C098D90590516DC77D65AF2*)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_4 = ___0_a;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_5 = ___1_b;
		NullCheck(L_4);
		bool L_6;
		L_6 = Point_Equals_mD57E392C2EF42D9FA7B7147D93FD8F7A7D852581(L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Inequality_mF293075D4AC1E575838281A8962722D85F843979 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_a, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___1_b, const RuntimeMethod* method) 
{
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_0 = ___0_a;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_1 = ___1_b;
		bool L_2;
		L_2 = Point_op_Equality_mCC91FD96F4D37CAAB1E21C38690972BFA3973DD1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mB187D84C12F0160545C0B368A0BAB52FF4F120CB (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tD9D7844991974E103C098D90590516DC77D65AF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = Point_Equals_mD57E392C2EF42D9FA7B7147D93FD8F7A7D852581(__this, ((Point_tD9D7844991974E103C098D90590516DC77D65AF2*)IsInstClass((RuntimeObject*)L_0, Point_tD9D7844991974E103C098D90590516DC77D65AF2_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mD57E392C2EF42D9FA7B7147D93FD8F7A7D852581 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_p, const RuntimeMethod* method) 
{
	{
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_0 = ___0_p;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		double L_1 = __this->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_2 = ___0_p;
		NullCheck(L_2);
		double L_3 = L_2->___x;
		if ((!(((double)L_1) == ((double)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		double L_4 = __this->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_5 = ___0_p;
		NullCheck(L_5);
		double L_6 = L_5->___y;
		return (bool)((((double)L_4) == ((double)L_6))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_CompareTo_m6549F3C231F407E60AB919F187FA86C0B6287945 (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_other, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_1 = ___0_other;
		NullCheck(L_1);
		double L_2 = L_1->___x;
		if ((!(((double)L_0) == ((double)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		double L_3 = __this->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_4 = ___0_other;
		NullCheck(L_4);
		double L_5 = L_4->___y;
		if ((!(((double)L_3) == ((double)L_5))))
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		double L_6 = __this->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_7 = ___0_other;
		NullCheck(L_7);
		double L_8 = L_7->___x;
		if ((((double)L_6) < ((double)L_8)))
		{
			goto IL_004a;
		}
	}
	{
		double L_9 = __this->___x;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_10 = ___0_other;
		NullCheck(L_10);
		double L_11 = L_10->___x;
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_0048;
		}
	}
	{
		double L_12 = __this->___y;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_13 = ___0_other;
		NullCheck(L_13);
		double L_14 = L_13->___y;
		if ((((double)L_12) < ((double)L_14)))
		{
			goto IL_004a;
		}
	}

IL_0048:
	{
		return 1;
	}

IL_004a:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m140FBD890FAFC695AB099314372886E34EBADF5D (Point_tD9D7844991974E103C098D90590516DC77D65AF2* __this, const RuntimeMethod* method) 
{
	{
		double* L_0 = (double*)(&__this->___x);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		double* L_2 = (double*)(&__this->___y);
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_2, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19), ((int32_t)31))), L_1)), ((int32_t)31))), L_3));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m1DF6D4DDA6EF107A3D35C8763A6A0DC90DBE1916 (Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		double L_0 = (1.7976931348623157E+308);
		V_0 = L_0;
		__this->___ymin = L_0;
		double L_1 = V_0;
		__this->___xmin = L_1;
		double L_2 = (-1.7976931348623157E+308);
		V_0 = L_2;
		__this->___ymax = L_2;
		double L_3 = V_0;
		__this->___xmax = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_Expand_m75E7259EAA1A46767050383841A6B2978357EAB2 (Rectangle_t613F4E183FCC6C5EBEA1F6C26AFDDC24AA807E61* __this, Point_tD9D7844991974E103C098D90590516DC77D65AF2* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->___xmin;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_1 = ___0_p;
		NullCheck(L_1);
		double L_2 = L_1->___x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = Math_Min_mA3310F1FF7876DA2FC7F37B822E6DD66410565C1(L_0, L_2, NULL);
		__this->___xmin = L_3;
		double L_4 = __this->___ymin;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_5 = ___0_p;
		NullCheck(L_5);
		double L_6 = L_5->___y;
		double L_7;
		L_7 = Math_Min_mA3310F1FF7876DA2FC7F37B822E6DD66410565C1(L_4, L_6, NULL);
		__this->___ymin = L_7;
		double L_8 = __this->___xmax;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_9 = ___0_p;
		NullCheck(L_9);
		double L_10 = L_9->___x;
		double L_11;
		L_11 = Math_Max_m7BAC743E1752A51F258BB82DEBDD13E7C6D3ED26(L_8, L_10, NULL);
		__this->___xmax = L_11;
		double L_12 = __this->___ymax;
		Point_tD9D7844991974E103C098D90590516DC77D65AF2* L_13 = ___0_p;
		NullCheck(L_13);
		double L_14 = L_13->___y;
		double L_15;
		L_15 = Math_Max_m7BAC743E1752A51F258BB82DEBDD13E7C6D3ED26(L_12, L_14, NULL);
		__this->___ymax = L_15;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m76C63E385D50F61E61543AADF42E5528D2FF7232 (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* __this, double ___0_x, double ___1_y, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_x;
		double L_1 = ___1_y;
		Vertex__ctor_m72772F6D0497CAB7193E2F87DC3992E96734E764(__this, L_0, L_1, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m72772F6D0497CAB7193E2F87DC3992E96734E764 (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* __this, double ___0_x, double ___1_y, int32_t ___2_mark, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_x;
		double L_1 = ___1_y;
		int32_t L_2 = ___2_mark;
		Point__ctor_m03169E8ED49987D9E108A94831CE631B6BA6E4DF(__this, L_0, L_1, L_2, NULL);
		__this->___type = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vertex_GetHashCode_m9B9BCEBFAF0EAEA056B305F8A6BE7B55FF3BB2C1 (Vertex_tC1E29C881134A4C1FE5C1C1082B332F7617DD14D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hash;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* Log_get_Instance_m51B55BACA0FE280A5D543E20FB1D1044E4F292DD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7* L_0 = ((Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_StaticFields*)il2cpp_codegen_static_fields_for(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var))->___instance;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_Poly_mD0F8B91B347E55E51EF5C6923B75930FB136C768_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___poly;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_Quality_mD3B41A309FF03A090757F6F5CEBB054D1BC11D42_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___quality;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_Convex_m789187058403856EA7ACCF71604D824A328B566A_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___convex;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MinAngle_mE4A7981E927474981B472F51145031C4A783E210_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___minAngle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Behavior_get_MaxAngle_mE6A300F98A9FBC8161F1C427376DE4BF8BCCB804_inline (Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___maxAngle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_Predicates_m0B661EF6339D4AA58D064A484ABFE3BB1C220C22_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_0 = ___0_value;
		__this->___U3CPredicatesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPredicatesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_TrianglePool_m9495BAAD74D5DF18605052BC024710291B0A5AA4_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_0 = ___0_value;
		__this->___U3CTrianglePoolU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTrianglePoolU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_RandomSource_m203915F9F68522C9B58C902DFC5ABBDF46B6AA3B_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_0 = ___0_value;
		__this->___U3CRandomSourceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRandomSourceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* Configuration_get_TrianglePool_mA5E6B1A688AD5DB25E7CFC0D848E1BC6373B8AE6_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tDF37B2C7C59DED1C2FD4195D15BF351F7A084039* L_0 = __this->___U3CTrianglePoolU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* Configuration_get_Predicates_m1600AFDB5D569A2D0391588C66AD759B6B84C002_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) 
{
	{
		Func_1_t75CDEDCAB6F9AD2F15A785D8F8A909EB49F22160* L_0 = __this->___U3CPredicatesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* Configuration_get_RandomSource_m8F3C7EF0109F4ED55F322CA1B7DD2621F0C9DADB_inline (Configuration_t3263E3214F0E2F42A0633D25EC8E6FB941B86B80* __this, const RuntimeMethod* method) 
{
	{
		Func_1_t190A3BA25729987D7E1C4E1AE69D84BE021CE7A9* L_0 = __this->___U3CRandomSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Behavior_get_NoExact_mC43C76012324A8E187CBAD28C6D2D93D25E30BD1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_StaticFields*)il2cpp_codegen_static_fields_for(Behavior_t48C46CE87A3E0510070A3594906609CBC22FAFD5_il2cpp_TypeInfo_var))->___U3CNoExactU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Log_get_Verbose_m31AF16B244E9393DD7F12128A0A2D2D84FC7A487_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var);
		bool L_0 = ((Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_StaticFields*)il2cpp_codegen_static_fields_for(Log_t989A80C518F104CAF2D95C9098E1AE1762F33AD7_il2cpp_TypeInfo_var))->___U3CVerboseU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
