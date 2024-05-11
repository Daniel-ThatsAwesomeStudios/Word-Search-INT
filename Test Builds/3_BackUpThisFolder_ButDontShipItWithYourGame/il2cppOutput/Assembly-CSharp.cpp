#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<AlphabetData/LetterData>
struct List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7;
// System.Collections.Generic.List`1<BoardData/SerachingWord>
struct List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<AlphabetData/LetterData>
struct Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// AlphabetData/LetterData[]
struct LetterDataU5BU5D_t234E782F7D9556CDBD7445EC025799E1BF2F0027;
// BoardData/BoardRow[]
struct BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701;
// BoardData/SerachingWord[]
struct SerachingWordU5BU5D_t68D6BFBA28C857AE032670E377689DDB7C05922A;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AlphabetData
struct AlphabetData_t006844CC8B38C9EAE7DD8D2A9F3AA72F93F11FCA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// BoardData
struct BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameUtility
struct GameUtility_tF414B8F1ADC91A4FB07AA29FAA06BD0D2EDF77C3;
// GridSquare
struct GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// ManageScene
struct ManageScene_t003E4116F0529881A9507E637AA0018019188873;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SearchingWord
struct SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC;
// SearchingWordsList
struct SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UImanager
struct UImanager_tF102E6D98024ABFC59792E4943074EF919DC7653;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WordChecker
struct WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6;
// WordsGrid
struct WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6;
// AlphabetData/LetterData
struct LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28;
// BoardData/BoardRow
struct BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D;
// BoardData/SerachingWord
struct SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameEvents/CheckSquare
struct CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420;
// GameEvents/ClearSelection
struct ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242;
// GameEvents/CorrectWord
struct CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021;
// GameEvents/DisableSquarrSelection
struct DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F;
// GameEvents/EnableSquarrSelection
struct EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487;
// GameEvents/SelectSquare
struct SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// WordsGrid/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C;

IL2CPP_EXTERN_C RuntimeClass* BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral415181DF2554502614639048A00CF0C5A5C2FD37;
IL2CPP_EXTERN_C String_t* _stringLiteral46F00BD7F6D22018CF2ACFEEDF008BAF65B9891D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralC3D4CF51BDA3D91B4F9A8F41FF17C7F7ED944109;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6D224CAF9461E4CBB87E5CE5CF0C6011886816FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m325132CB957D524A09FEEF04D5B2B666E4A0275B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA4005740A51B2DB185D8E43F45F6EEECB5325805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9_mFE33C5FFADF52A893F6E241BEC37B368C843DC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC_m7572942E5A4310F9B541F334A5FE80735104CB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_CorrectWord_mED02135E01550D50C42735765037413AA888A86B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_OnDisableSquarrSelection_m30A0BE29C17954E5AF32744737B3056EBE456A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GridSquare_SelectSquare_m46E3583E443763BD887D6451F7DED2C7ED80B3BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m917A8DF90008E5142376C5EA6FA91677B3D47DFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA756D0D4927DB16DC52496278EDB00C33B71F87F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0CF127B7FA28F282CDE254ECADC27605474528C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD1D89DCE547CA1AFA3EBD3182D0B228E2BDF1CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SearchingWord_CorrectWord_m4574CD087445A0162649EB432FD86E139280B078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_mFC207CAF050919195710FAE36FFEF9981AE07411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_mB5B17F0ADF41E506D842808345C1201D8BBC559A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mB5444BE999E3DD2C294DD7F758BC2EDBD64B6FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_ClearSelection_m8DD5E2971CE059417EDCC2A10207A429D685260E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WordChecker_SquareSelected_m57FAE1E86734619D2C4AE3FD8EE3A0F972BEBD09_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AlphabetData/LetterData>
struct List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LetterDataU5BU5D_t234E782F7D9556CDBD7445EC025799E1BF2F0027* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LetterDataU5BU5D_t234E782F7D9556CDBD7445EC025799E1BF2F0027* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<BoardData/SerachingWord>
struct List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SerachingWordU5BU5D_t68D6BFBA28C857AE032670E377689DDB7C05922A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SerachingWordU5BU5D_t68D6BFBA28C857AE032670E377689DDB7C05922A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// GameEvents
struct GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0  : public RuntimeObject
{
};

struct GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields
{
	// GameEvents/EnableSquarrSelection GameEvents::OnEnableSquarrSelection
	EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* ___OnEnableSquarrSelection_0;
	// GameEvents/DisableSquarrSelection GameEvents::OnDisableSquarrSelection
	DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* ___OnDisableSquarrSelection_1;
	// GameEvents/SelectSquare GameEvents::OnSelectSquare
	SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* ___OnSelectSquare_2;
	// GameEvents/CheckSquare GameEvents::OnCheckSquare
	CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* ___OnCheckSquare_3;
	// GameEvents/ClearSelection GameEvents::OnClearSelection
	ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* ___OnClearSelection_4;
	// GameEvents/CorrectWord GameEvents::OnCorrectWord
	CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* ___OnCorrectWord_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// AlphabetData/LetterData
struct LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28  : public RuntimeObject
{
	// System.String AlphabetData/LetterData::letter
	String_t* ___letter_0;
	// UnityEngine.Sprite AlphabetData/LetterData::image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image_1;
};

// BoardData/BoardRow
struct BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D  : public RuntimeObject
{
	// System.Int32 BoardData/BoardRow::Size
	int32_t ___Size_0;
	// System.String[] BoardData/BoardRow::Row
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Row_1;
};

// BoardData/SerachingWord
struct SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1  : public RuntimeObject
{
	// System.String BoardData/SerachingWord::Word
	String_t* ___Word_0;
};

// WordsGrid/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C  : public RuntimeObject
{
	// System.String WordsGrid/<>c__DisplayClass9_0::squareLetter
	String_t* ___squareLetter_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<BoardData/SerachingWord>
struct Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Predicate`1<AlphabetData/LetterData>
struct Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B  : public MulticastDelegate_t
{
};

// AlphabetData
struct AlphabetData_t006844CC8B38C9EAE7DD8D2A9F3AA72F93F11FCA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphaBetPlane
	List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* ___AlphaBetPlane_4;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphaBetNormal
	List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* ___AlphaBetNormal_5;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphaBetHighlighted
	List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* ___AlphaBetHighlighted_6;
	// System.Collections.Generic.List`1<AlphabetData/LetterData> AlphabetData::AlphaBetWrong
	List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* ___AlphaBetWrong_7;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// BoardData
struct BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Single BoardData::timeInSeconds
	float ___timeInSeconds_4;
	// System.Int32 BoardData::Rows
	int32_t ___Rows_5;
	// System.Int32 BoardData::Columns
	int32_t ___Columns_6;
	// BoardData/BoardRow[] BoardData::Board
	BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* ___Board_7;
	// System.Collections.Generic.List`1<BoardData/SerachingWord> BoardData::SearchWords
	List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* ___SearchWords_8;
};

// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String GameData::selectCategoryName
	String_t* ___selectCategoryName_4;
	// BoardData GameData::selectBoardData
	BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* ___selectBoardData_5;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// GameEvents/CheckSquare
struct CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420  : public MulticastDelegate_t
{
};

// GameEvents/ClearSelection
struct ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242  : public MulticastDelegate_t
{
};

// GameEvents/CorrectWord
struct CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021  : public MulticastDelegate_t
{
};

// GameEvents/DisableSquarrSelection
struct DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F  : public MulticastDelegate_t
{
};

// GameEvents/EnableSquarrSelection
struct EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487  : public MulticastDelegate_t
{
};

// GameEvents/SelectSquare
struct SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// GameUtility
struct GameUtility_tF414B8F1ADC91A4FB07AA29FAA06BD0D2EDF77C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GridSquare
struct GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GridSquare::<SquareIndex>k__BackingField
	int32_t ___U3CSquareIndexU3Ek__BackingField_4;
	// AlphabetData/LetterData GridSquare::_normalLetterData
	LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ____normalLetterData_5;
	// AlphabetData/LetterData GridSquare::_selectedLetterData
	LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ____selectedLetterData_6;
	// AlphabetData/LetterData GridSquare::_correctLetterData
	LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ____correctLetterData_7;
	// UnityEngine.SpriteRenderer GridSquare::_displayedImage
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____displayedImage_8;
	// System.Boolean GridSquare::_selected
	bool ____selected_9;
	// System.Boolean GridSquare::_clicked
	bool ____clicked_10;
	// System.Int32 GridSquare::_index
	int32_t ____index_11;
	// System.Boolean GridSquare::_correct
	bool ____correct_12;
};

// ManageScene
struct ManageScene_t003E4116F0529881A9507E637AA0018019188873  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SearchingWord
struct SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SearchingWord::displayedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___displayedText_4;
	// UnityEngine.UI.Image SearchingWord::crossLine
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___crossLine_5;
	// System.String SearchingWord::_word
	String_t* ____word_6;
};

// SearchingWordsList
struct SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameData SearchingWordsList::currentGameData
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___currentGameData_4;
	// UnityEngine.GameObject SearchingWordsList::searchingWordPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___searchingWordPrefab_5;
	// System.Single SearchingWordsList::offset
	float ___offset_6;
	// System.Int32 SearchingWordsList::maxColumns
	int32_t ___maxColumns_7;
	// System.Int32 SearchingWordsList::maxRows
	int32_t ___maxRows_8;
	// System.Int32 SearchingWordsList::_columns
	int32_t ____columns_9;
	// System.Int32 SearchingWordsList::_rows
	int32_t ____rows_10;
	// System.Int32 SearchingWordsList::_wordsNumber
	int32_t ____wordsNumber_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SearchingWordsList::_words
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____words_12;
};

// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Timer::timeRemaining
	float ___timeRemaining_4;
	// TMPro.TMP_Text Timer::timeText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___timeText_5;
	// System.Boolean Timer::timeIsRunning
	bool ___timeIsRunning_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UImanager
struct UImanager_tF102E6D98024ABFC59792E4943074EF919DC7653  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UImanager::settingspanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___settingspanel_4;
};

// WordChecker
struct WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameData WordChecker::currentGameData
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___currentGameData_4;
	// System.String WordChecker::_word
	String_t* ____word_5;
	// System.Int32 WordChecker::_assignedPoints
	int32_t ____assignedPoints_6;
	// System.Int32 WordChecker::_completedWords
	int32_t ____completedWords_7;
	// UnityEngine.Ray WordChecker::_rayUp
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayUp_8;
	// UnityEngine.Ray WordChecker::_rayDown
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayDown_9;
	// UnityEngine.Ray WordChecker::_rayLeft
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayLeft_10;
	// UnityEngine.Ray WordChecker::_rayRight
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayRight_11;
	// UnityEngine.Ray WordChecker::_rayDiagonalLeftUp
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayDiagonalLeftUp_12;
	// UnityEngine.Ray WordChecker::_rayDiagonalLeftDown
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayDiagonalLeftDown_13;
	// UnityEngine.Ray WordChecker::_rayDiagonalRightUp
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayDiagonalRightUp_14;
	// UnityEngine.Ray WordChecker::_rayDiagonalRightDown
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____rayDiagonalRightDown_15;
	// UnityEngine.Ray WordChecker::_currentRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____currentRay_16;
	// UnityEngine.Vector3 WordChecker::_rayStartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rayStartPosition_17;
	// System.Collections.Generic.List`1<System.Int32> WordChecker::_correctSquareList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____correctSquareList_18;
};

// WordsGrid
struct WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameData WordsGrid::currentGameData
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___currentGameData_4;
	// UnityEngine.GameObject WordsGrid::gridSquarePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gridSquarePrefab_5;
	// AlphabetData WordsGrid::alphabetData
	AlphabetData_t006844CC8B38C9EAE7DD8D2A9F3AA72F93F11FCA* ___alphabetData_6;
	// System.Single WordsGrid::squareOffset
	float ___squareOffset_7;
	// System.Single WordsGrid::topPosition
	float ___topPosition_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WordsGrid::_squareList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____squareList_9;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// BoardData/BoardRow[]
struct BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701  : public RuntimeArray
{
	ALIGN_FIELD (8) BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* m_Items[1];

	inline BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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
// System.Int32[]
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void GameEvents/EnableSquarrSelection::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_inline (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method) ;
// System.Void GameEvents/DisableSquarrSelection::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_inline (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method) ;
// System.Void GameEvents/SelectSquare::Invoke(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_inline (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void GameEvents/CheckSquare::Invoke(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_inline (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method) ;
// System.Void GameEvents/ClearSelection::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_inline (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method) ;
// System.Void GameEvents/CorrectWord::Invoke(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_inline (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void GameEvents/EnableSquarrSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquarrSelection__ctor_m0A57EEEF94F8A3F225B86B367FE16D30CDBD2D55 (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameEvents::add_OnEnableSquarrSelection(GameEvents/EnableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnEnableSquarrSelection_mF6E6D9D4303F185B672F8E9AE55FDE12133EB4BF (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents/DisableSquarrSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquarrSelection__ctor_mFC6B27F3EA559C2AF8F18D083183699D33C714B2 (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameEvents::add_OnDisableSquarrSelection(GameEvents/DisableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnDisableSquarrSelection_mC3FAEE42C1814266A1EEDEEFCD119F030200BA95 (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents/SelectSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare__ctor_m53728D7135EECD9336E7FAABA0C3B7D244FD2C11 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameEvents::add_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnSelectSquare_m472AA7C1BE29B7D299B838E8C8B611EF0080E853 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents/CorrectWord::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord__ctor_m665F4D81E67C5852F76ABF8186CF3815B99DDE3C (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameEvents::add_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCorrectWord_m13FEECE27E3D5C075E3349EC586A5DD14FFAB6B1 (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents::remove_OnEnableSquarrSelection(GameEvents/EnableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnEnableSquarrSelection_mDB77F7081B4C07BAF5570530D3E9CB5A9C3A19AD (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents::remove_OnDisableSquarrSelection(GameEvents/DisableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnDisableSquarrSelection_m9D0FD9C58930711E0EE9522E9810E66EC4A5410B (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents::remove_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnSelectSquare_mFCF6E38F7B0B3830B4FC5E2F52241ECED05670E8 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents::remove_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCorrectWord_m95F7F4BBCC2919D5E41F0636F7A29F41DDF5C7BD (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void GridSquare::OnEnableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) ;
// System.Void GameEvents::EnableSquarrSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_EnableSquarrSelectionMethod_mF2478820426289990395C78B6FD5DA194A6E8E6A (const RuntimeMethod* method) ;
// System.Void GridSquare::ChechSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_ChechSquare_mC587D4B8308046687F25796BAF51A97272407076 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) ;
// System.Void GameEvents::ClearSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ClearSelectionMethod_m13B146A32272879FBC06C528C8006A2883D8A4AB (const RuntimeMethod* method) ;
// System.Void GameEvents::DisableSquarrSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_DisableSquarrSelectionMethod_mB0FFA35D0561F0AD13F6389EAE1276DD4B1B2DF9 (const RuntimeMethod* method) ;
// System.Void GameEvents::CheckSquareMethod(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CheckSquareMethod_m6B005CF65C8B86C4EF49C1BBFD29F937932CC69C (String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<BoardData/SerachingWord>::get_Count()
inline int32_t List_1_get_Count_m0CF127B7FA28F282CDE254ECADC27605474528C1_inline (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SearchingWordsList::CalculateColumnsAndRowsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CalculateColumnsAndRowsNumber_mE59180555B29043AFB2F579D199B29BE740CF8C2 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) ;
// System.Void SearchingWordsList::CreateWordObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CreateWordObjects_m0F05B8F42B4343CB476A625328C8370C54E9E653 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) ;
// System.Void SearchingWordsList::SetWordsPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_SetWordsPosition_mB97BA1091EF587894C637B3200D53880231F0A32 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 SearchingWordsList::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SearchingWordsList_GetSquareScale_mDF17FFCF55EBB913926870851D581DDD091E2919 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultScale0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SearchingWord>()
inline SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* GameObject_GetComponent_TisSearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC_m7572942E5A4310F9B541F334A5FE80735104CB48 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<BoardData/SerachingWord>::get_Item(System.Int32)
inline SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* List_1_get_Item_mD1D89DCE547CA1AFA3EBD3182D0B228E2BDF1CFE (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* (*) (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void SearchingWord::SetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_SetWord_mD5184010C0E214E16D87C3C581F215E365E7D3D0 (SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* __this, String_t* ___word0, const RuntimeMethod* method) ;
// System.Boolean SearchingWordsList::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_ShouldScaleDown_m510275681D3E04BD6DFB5D6AD193AB10FC8EDAAE (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetScale0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean SearchingWordsList::TryIncreaseColumnNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_TryIncreaseColumnNumber_mC09206A5AE47B4B9D5991A0F42BA35553A09CB98 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 SearchingWordsList::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SearchingWordsList_GetFirstSquarePosition_m210DDC25BB8B9C59068A5E4A4A4C9960D9171EC5 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void Timer::TimeToDisplay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_TimeToDisplay_m1297C1741FFECAE5266857BD60EFFA976E3EC012 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, float ___timeToDisplay0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void GameEvents/CheckSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare__ctor_m4B486477B573D69B22CDD55981343EA4505D4D84 (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameEvents::add_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCheckSquare_m70F665B2A0E2CD75C91E7FB106467F6ABABFA2CF (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents/ClearSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection__ctor_mBC0A9145AFBE0E435FE421B7626479D19CCB0395 (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameEvents::add_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnClearSelection_mBF168B9133C0721933B9F24FD2020A9D27F29869 (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents::remove_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCheckSquare_m837A6B1BE5EC44302205D8B5FA6B6C37EE4C868C (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* ___value0, const RuntimeMethod* method) ;
// System.Void GameEvents::remove_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnClearSelection_m0C4CD27C740121E2996B9236061607DD4DA6060A (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray WordChecker::SelectRay(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 WordChecker_SelectRay_mB58815A86143F91B4BFE734D3E60A856E64E26BA (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) ;
// System.Void GameEvents::SelectSquareMethod(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SelectSquareMethod_mFAEA8BB825B17579444ACA380A81DA690D06D41B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void WordChecker::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckWord_m4DEC957F7A9FD239393A81ABC1893CAB065C27B7 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) ;
// System.Boolean WordChecker::IsPointOnTheRay(UnityEngine.Ray,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordChecker_IsPointOnTheRay_m04F5A53DCD9132FD4EFFD6B203918A6FA4F8A652 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___currentRay0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<BoardData/SerachingWord>::GetEnumerator()
inline Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50 List_1_GetEnumerator_m917A8DF90008E5142376C5EA6FA91677B3D47DFF (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50 (*) (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BoardData/SerachingWord>::Dispose()
inline void Enumerator_Dispose_m6D224CAF9461E4CBB87E5CE5CF0C6011886816FA (Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<BoardData/SerachingWord>::get_Current()
inline SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* Enumerator_get_Current_mA4005740A51B2DB185D8E43F45F6EEECB5325805_inline (Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50* __this, const RuntimeMethod* method)
{
	return ((  SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* (*) (Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void GameEvents::CorrectWordMethod(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CorrectWordMethod_mA3BFFA44765D7120846D442CA85A550B4D1C8A6B (String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<BoardData/SerachingWord>::MoveNext()
inline bool Enumerator_MoveNext_m325132CB957D524A09FEEF04D5B2B666E4A0275B (Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m1BBD4E474814BEC9B52B015081A256AE2FE00468 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___maxDistance1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void WordsGrid::SpawnGridSquares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SpawnGridSquares_m51D74BE290DF268ABEF4735C1CDC3E9B15EBB3BC (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) ;
// System.Void WordsGrid::SetSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SetSquarePosition_mC81D5C5FED780BADD60D2EE4679C823FED6D002B (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 WordsGrid::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WordsGrid_GetFirstSquarePosition_mF13A6AD2C5FF687F4CB6FCEA12F9702178DC0FC9 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 WordsGrid::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WordsGrid_GetSquareScale_mDD713CCF5503429D47D2CCEBEDC04550B950364D (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultScale0, const RuntimeMethod* method) ;
// System.Void WordsGrid/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m3F58EA9007629B06FB470575ECBF5E81E2C156A1 (U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<AlphabetData/LetterData>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m28B063FCFFF55480A4CD9C67C4864713835659CE (Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<AlphabetData/LetterData>::Find(System.Predicate`1<T>)
inline LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731 (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* __this, Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B* ___match0, const RuntimeMethod* method)
{
	return ((  LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* (*) (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7*, Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<GridSquare>()
inline GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* GameObject_GetComponent_TisGridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9_mFE33C5FFADF52A893F6E241BEC37B368C843DC71 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GridSquare::SetSprite(AlphabetData/LetterData,AlphabetData/LetterData,AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetSprite_mCC683D6DC3DFF0A300BEF36045D034D1D3916ACF (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___normalLetterData0, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___selectedLetterData1, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___correctLetterData2, const RuntimeMethod* method) ;
// System.Void GridSquare::SetIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridSquare_SetIndex_m1C36FAE91DAB3A4D7627F88C01B015EBD1ED445E_inline (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean WordsGrid::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordsGrid_ShouldScaleDown_m81F5D28C7474FF36C0972798A7A8B8788C7DB8C8 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetScale0, const RuntimeMethod* method) ;
// System.Single WordsGrid::GetHalfScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WordsGrid_GetHalfScreenWidth_m2652D36B02A347A51041A52CFCA7157894537481 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AlphabetData/LetterData>::.ctor()
inline void List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void BoardData/BoardRow::ClearRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_ClearRow_mC5DA9CDA2A6C0CA055F427B472FC510DD4B1D9F1 (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* __this, const RuntimeMethod* method) ;
// System.Void BoardData/BoardRow::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m96B77239877C74CC9C344D03A58E4A73927FE196 (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<BoardData/SerachingWord>::.ctor()
inline void List_1__ctor_mA756D0D4927DB16DC52496278EDB00C33B71F87F (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void BoardData/BoardRow::CreateRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_CreateRow_mAF2418B2AD51BCEB28FA86375044C81704C68163 (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
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
// System.Void GameEvents::add_OnEnableSquarrSelection(GameEvents/EnableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnEnableSquarrSelection_mF6E6D9D4303F185B672F8E9AE55FDE12133EB4BF (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* V_0 = NULL;
	EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* V_1 = NULL;
	EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* V_2 = NULL;
	{
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnEnableSquarrSelection_0;
		V_0 = L_0;
	}

IL_0006:
	{
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_1 = V_0;
		V_1 = L_1;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_2 = V_1;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)CastclassSealed((RuntimeObject*)L_4, EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var));
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_5 = V_2;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_6 = V_1;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_7;
		L_7 = InterlockedCompareExchangeImpl<EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnEnableSquarrSelection_0), L_5, L_6);
		V_0 = L_7;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_8 = V_0;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_9 = V_1;
		if ((!(((RuntimeObject*)(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)L_8) == ((RuntimeObject*)(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnEnableSquarrSelection(GameEvents/EnableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnEnableSquarrSelection_mDB77F7081B4C07BAF5570530D3E9CB5A9C3A19AD (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* V_0 = NULL;
	EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* V_1 = NULL;
	EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* V_2 = NULL;
	{
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnEnableSquarrSelection_0;
		V_0 = L_0;
	}

IL_0006:
	{
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_1 = V_0;
		V_1 = L_1;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_2 = V_1;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)CastclassSealed((RuntimeObject*)L_4, EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var));
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_5 = V_2;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_6 = V_1;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_7;
		L_7 = InterlockedCompareExchangeImpl<EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnEnableSquarrSelection_0), L_5, L_6);
		V_0 = L_7;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_8 = V_0;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_9 = V_1;
		if ((!(((RuntimeObject*)(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)L_8) == ((RuntimeObject*)(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::EnableSquarrSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_EnableSquarrSelectionMethod_mF2478820426289990395C78B6FD5DA194A6E8E6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(OnEnableSquarrSelection != null)
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnEnableSquarrSelection_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnEnableSquarrSelection();
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnEnableSquarrSelection_0;
		NullCheck(L_1);
		EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_inline(L_1, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnDisableSquarrSelection(GameEvents/DisableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnDisableSquarrSelection_mC3FAEE42C1814266A1EEDEEFCD119F030200BA95 (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* V_0 = NULL;
	DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* V_1 = NULL;
	DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* V_2 = NULL;
	{
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnDisableSquarrSelection_1;
		V_0 = L_0;
	}

IL_0006:
	{
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_1 = V_0;
		V_1 = L_1;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_2 = V_1;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)CastclassSealed((RuntimeObject*)L_4, DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var));
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_5 = V_2;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_6 = V_1;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_7;
		L_7 = InterlockedCompareExchangeImpl<DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnDisableSquarrSelection_1), L_5, L_6);
		V_0 = L_7;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_8 = V_0;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_9 = V_1;
		if ((!(((RuntimeObject*)(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)L_8) == ((RuntimeObject*)(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnDisableSquarrSelection(GameEvents/DisableSquarrSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnDisableSquarrSelection_m9D0FD9C58930711E0EE9522E9810E66EC4A5410B (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* V_0 = NULL;
	DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* V_1 = NULL;
	DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* V_2 = NULL;
	{
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnDisableSquarrSelection_1;
		V_0 = L_0;
	}

IL_0006:
	{
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_1 = V_0;
		V_1 = L_1;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_2 = V_1;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)CastclassSealed((RuntimeObject*)L_4, DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var));
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_5 = V_2;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_6 = V_1;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_7;
		L_7 = InterlockedCompareExchangeImpl<DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnDisableSquarrSelection_1), L_5, L_6);
		V_0 = L_7;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_8 = V_0;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_9 = V_1;
		if ((!(((RuntimeObject*)(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)L_8) == ((RuntimeObject*)(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::DisableSquarrSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_DisableSquarrSelectionMethod_mB0FFA35D0561F0AD13F6389EAE1276DD4B1B2DF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnDisableSquarrSelection != null)
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnDisableSquarrSelection_1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnDisableSquarrSelection();
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnDisableSquarrSelection_1;
		NullCheck(L_1);
		DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_inline(L_1, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnSelectSquare_m472AA7C1BE29B7D299B838E8C8B611EF0080E853 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* V_0 = NULL;
	SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* V_1 = NULL;
	SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* V_2 = NULL;
	{
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnSelectSquare_2;
		V_0 = L_0;
	}

IL_0006:
	{
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_1 = V_0;
		V_1 = L_1;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_2 = V_1;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)CastclassSealed((RuntimeObject*)L_4, SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var));
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_5 = V_2;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_6 = V_1;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_7;
		L_7 = InterlockedCompareExchangeImpl<SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnSelectSquare_2), L_5, L_6);
		V_0 = L_7;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_8 = V_0;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_9 = V_1;
		if ((!(((RuntimeObject*)(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)L_8) == ((RuntimeObject*)(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnSelectSquare(GameEvents/SelectSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnSelectSquare_mFCF6E38F7B0B3830B4FC5E2F52241ECED05670E8 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* V_0 = NULL;
	SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* V_1 = NULL;
	SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* V_2 = NULL;
	{
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnSelectSquare_2;
		V_0 = L_0;
	}

IL_0006:
	{
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_1 = V_0;
		V_1 = L_1;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_2 = V_1;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)CastclassSealed((RuntimeObject*)L_4, SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var));
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_5 = V_2;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_6 = V_1;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_7;
		L_7 = InterlockedCompareExchangeImpl<SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnSelectSquare_2), L_5, L_6);
		V_0 = L_7;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_8 = V_0;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_9 = V_1;
		if ((!(((RuntimeObject*)(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)L_8) == ((RuntimeObject*)(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::SelectSquareMethod(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_SelectSquareMethod_mFAEA8BB825B17579444ACA380A81DA690D06D41B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnSelectSquare != null)
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnSelectSquare_2;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// OnSelectSquare(position);
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnSelectSquare_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		NullCheck(L_1);
		SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCheckSquare_m70F665B2A0E2CD75C91E7FB106467F6ABABFA2CF (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* V_0 = NULL;
	CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* V_1 = NULL;
	CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* V_2 = NULL;
	{
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCheckSquare_3;
		V_0 = L_0;
	}

IL_0006:
	{
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_1 = V_0;
		V_1 = L_1;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_2 = V_1;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)CastclassSealed((RuntimeObject*)L_4, CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var));
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_5 = V_2;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_6 = V_1;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_7;
		L_7 = InterlockedCompareExchangeImpl<CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCheckSquare_3), L_5, L_6);
		V_0 = L_7;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_8 = V_0;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_9 = V_1;
		if ((!(((RuntimeObject*)(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)L_8) == ((RuntimeObject*)(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnCheckSquare(GameEvents/CheckSquare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCheckSquare_m837A6B1BE5EC44302205D8B5FA6B6C37EE4C868C (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* V_0 = NULL;
	CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* V_1 = NULL;
	CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* V_2 = NULL;
	{
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCheckSquare_3;
		V_0 = L_0;
	}

IL_0006:
	{
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_1 = V_0;
		V_1 = L_1;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_2 = V_1;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)CastclassSealed((RuntimeObject*)L_4, CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var));
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_5 = V_2;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_6 = V_1;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_7;
		L_7 = InterlockedCompareExchangeImpl<CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCheckSquare_3), L_5, L_6);
		V_0 = L_7;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_8 = V_0;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_9 = V_1;
		if ((!(((RuntimeObject*)(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)L_8) == ((RuntimeObject*)(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::CheckSquareMethod(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CheckSquareMethod_m6B005CF65C8B86C4EF49C1BBFD29F937932CC69C (String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnCheckSquare != null)
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCheckSquare_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnCheckSquare(letter, squarePosition, squareIndex);
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCheckSquare_3;
		String_t* L_2 = ___letter0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___squarePosition1;
		int32_t L_4 = ___squareIndex2;
		NullCheck(L_1);
		CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnClearSelection_mBF168B9133C0721933B9F24FD2020A9D27F29869 (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* V_0 = NULL;
	ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* V_1 = NULL;
	ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* V_2 = NULL;
	{
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnClearSelection_4;
		V_0 = L_0;
	}

IL_0006:
	{
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_1 = V_0;
		V_1 = L_1;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_2 = V_1;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)CastclassSealed((RuntimeObject*)L_4, ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var));
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_5 = V_2;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_6 = V_1;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_7;
		L_7 = InterlockedCompareExchangeImpl<ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnClearSelection_4), L_5, L_6);
		V_0 = L_7;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_8 = V_0;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_9 = V_1;
		if ((!(((RuntimeObject*)(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)L_8) == ((RuntimeObject*)(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnClearSelection(GameEvents/ClearSelection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnClearSelection_m0C4CD27C740121E2996B9236061607DD4DA6060A (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* V_0 = NULL;
	ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* V_1 = NULL;
	ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* V_2 = NULL;
	{
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnClearSelection_4;
		V_0 = L_0;
	}

IL_0006:
	{
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_1 = V_0;
		V_1 = L_1;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_2 = V_1;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)CastclassSealed((RuntimeObject*)L_4, ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var));
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_5 = V_2;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_6 = V_1;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_7;
		L_7 = InterlockedCompareExchangeImpl<ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnClearSelection_4), L_5, L_6);
		V_0 = L_7;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_8 = V_0;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_9 = V_1;
		if ((!(((RuntimeObject*)(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)L_8) == ((RuntimeObject*)(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::ClearSelectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_ClearSelectionMethod_m13B146A32272879FBC06C528C8006A2883D8A4AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnClearSelection != null)
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnClearSelection_4;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// OnClearSelection();
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnClearSelection_4;
		NullCheck(L_1);
		ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_inline(L_1, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void GameEvents::add_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_add_OnCorrectWord_m13FEECE27E3D5C075E3349EC586A5DD14FFAB6B1 (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* V_0 = NULL;
	CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* V_1 = NULL;
	CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* V_2 = NULL;
	{
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCorrectWord_5;
		V_0 = L_0;
	}

IL_0006:
	{
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_1 = V_0;
		V_1 = L_1;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_2 = V_1;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)CastclassSealed((RuntimeObject*)L_4, CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var));
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_5 = V_2;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_6 = V_1;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_7;
		L_7 = InterlockedCompareExchangeImpl<CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCorrectWord_5), L_5, L_6);
		V_0 = L_7;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_8 = V_0;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_9 = V_1;
		if ((!(((RuntimeObject*)(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)L_8) == ((RuntimeObject*)(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::remove_OnCorrectWord(GameEvents/CorrectWord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_remove_OnCorrectWord_m95F7F4BBCC2919D5E41F0636F7A29F41DDF5C7BD (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* V_0 = NULL;
	CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* V_1 = NULL;
	CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* V_2 = NULL;
	{
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCorrectWord_5;
		V_0 = L_0;
	}

IL_0006:
	{
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_1 = V_0;
		V_1 = L_1;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_2 = V_1;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)CastclassSealed((RuntimeObject*)L_4, CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var));
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_5 = V_2;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_6 = V_1;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_7;
		L_7 = InterlockedCompareExchangeImpl<CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*>((&((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCorrectWord_5), L_5, L_6);
		V_0 = L_7;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_8 = V_0;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_9 = V_1;
		if ((!(((RuntimeObject*)(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)L_8) == ((RuntimeObject*)(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameEvents::CorrectWordMethod(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvents_CorrectWordMethod_mA3BFFA44765D7120846D442CA85A550B4D1C8A6B (String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(OnCorrectWord != null)
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_0 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCorrectWord_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// OnCorrectWord(word, squareIndexes);
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_1 = ((GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_StaticFields*)il2cpp_codegen_static_fields_for(GameEvents_t5451171BFB5DAE3FAF293BF6F54056213C0610B0_il2cpp_TypeInfo_var))->___OnCorrectWord_5;
		String_t* L_2 = ___word0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = ___squareIndexes1;
		NullCheck(L_1);
		CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_inline(L_1, L_2, L_3, NULL);
	}

IL_0013:
	{
		// }
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
void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_Multicast(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* currentDelegate = reinterpret_cast<EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_OpenInst(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_OpenStatic(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_OpenStaticInvoker(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_ClosedStaticInvoker(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487 (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/EnableSquarrSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquarrSelection__ctor_m0A57EEEF94F8A3F225B86B367FE16D30CDBD2D55 (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_Multicast;
}
// System.Void GameEvents/EnableSquarrSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6 (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameEvents/EnableSquarrSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnableSquarrSelection_BeginInvoke_mBFFD577A6A401A21621D96DE5A8D8FF813A5A622 (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void GameEvents/EnableSquarrSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSquarrSelection_EndInvoke_m5D291CFBDA2DB6A2BD507E83FBED92E67D82EE71 (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_Multicast(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* currentDelegate = reinterpret_cast<DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_OpenInst(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_OpenStatic(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_OpenStaticInvoker(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_ClosedStaticInvoker(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/DisableSquarrSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquarrSelection__ctor_mFC6B27F3EA559C2AF8F18D083183699D33C714B2 (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_Multicast;
}
// System.Void GameEvents/DisableSquarrSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17 (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameEvents/DisableSquarrSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisableSquarrSelection_BeginInvoke_mC853E658141CB3F29BA55416C8C51CB1B8CFE3B6 (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void GameEvents/DisableSquarrSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableSquarrSelection_EndInvoke_m37EB6B6AD108417750D4662355A8176E39204A90 (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_Multicast(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* currentDelegate = reinterpret_cast<SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_OpenInst(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_OpenStatic(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_OpenStaticInvoker(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___position0);
}
void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_ClosedStaticInvoker(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void GameEvents/SelectSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare__ctor_m53728D7135EECD9336E7FAABA0C3B7D244FD2C11 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_Multicast;
}
// System.Void GameEvents/SelectSquare::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameEvents/SelectSquare::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectSquare_BeginInvoke_mB1BB5EC9BF84E30B46434772156A64E6C31F235D (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GameEvents/SelectSquare::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectSquare_EndInvoke_m9F7007FDB067BD64C1329FE19F38A112EA04B345 (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_Multicast(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* currentDelegate = reinterpret_cast<CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___letter0, ___squarePosition1, ___squareIndex2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_OpenInst(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	NullCheck(___letter0);
	typedef void (*FunctionPointerType) (String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___letter0, ___squarePosition1, ___squareIndex2, method);
}
void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_OpenStatic(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___letter0, ___squarePosition1, ___squareIndex2, method);
}
void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_OpenStaticInvoker(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___letter0, ___squarePosition1, ___squareIndex2);
}
void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_ClosedStaticInvoker(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___letter0, ___squarePosition1, ___squareIndex2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420 (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___letter0' to native representation
	char* ____letter0_marshaled = NULL;
	____letter0_marshaled = il2cpp_codegen_marshal_string(___letter0);

	// Native function invocation
	il2cppPInvokeFunc(____letter0_marshaled, ___squarePosition1, ___squareIndex2);

	// Marshaling cleanup of parameter '___letter0' native representation
	il2cpp_codegen_marshal_free(____letter0_marshaled);
	____letter0_marshaled = NULL;

}
// System.Void GameEvents/CheckSquare::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare__ctor_m4B486477B573D69B22CDD55981343EA4505D4D84 (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_Multicast;
}
// System.Void GameEvents/CheckSquare::Invoke(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11 (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___letter0, ___squarePosition1, ___squareIndex2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameEvents/CheckSquare::BeginInvoke(System.String,UnityEngine.Vector3,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckSquare_BeginInvoke_m6CC4AF28A4ECA04F080E25F3E6B5495A9B17F8BE (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___letter0;
	__d_args[1] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___squarePosition1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___squareIndex2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void GameEvents/CheckSquare::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckSquare_EndInvoke_mAC98A322EE81A0567A57F88B36309DF03B270C72 (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_Multicast(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* currentDelegate = reinterpret_cast<ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_OpenInst(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_OpenStatic(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_OpenStaticInvoker(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_ClosedStaticInvoker(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242 (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameEvents/ClearSelection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection__ctor_mBC0A9145AFBE0E435FE421B7626479D19CCB0395 (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_Multicast;
}
// System.Void GameEvents/ClearSelection::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64 (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameEvents/ClearSelection::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClearSelection_BeginInvoke_mF1E5D115C08AF7E434A156C9FAAA8527AD1F20DB (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void GameEvents/ClearSelection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSelection_EndInvoke_mFF6D3BE74A0EEDE61945DAEAEF2DCE8033248784 (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_Multicast(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* currentDelegate = reinterpret_cast<CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___word0, ___squareIndexes1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_OpenInst(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method)
{
	NullCheck(___word0);
	typedef void (*FunctionPointerType) (String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___word0, ___squareIndexes1, method);
}
void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_OpenStatic(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___word0, ___squareIndexes1, method);
}
void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_OpenStaticInvoker(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(__this->___method_ptr_0, method, NULL, ___word0, ___squareIndexes1);
}
void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_ClosedStaticInvoker(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___word0, ___squareIndexes1);
}
// System.Void GameEvents/CorrectWord::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord__ctor_m665F4D81E67C5852F76ABF8186CF3815B99DDE3C (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_Multicast;
}
// System.Void GameEvents/CorrectWord::Invoke(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3 (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___word0, ___squareIndexes1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameEvents/CorrectWord::BeginInvoke(System.String,System.Collections.Generic.List`1<System.Int32>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CorrectWord_BeginInvoke_m2BDE1EE465173F28AAA6E0D452CA64B13238CA7A (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___word0;
	__d_args[1] = ___squareIndexes1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GameEvents/CorrectWord::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorrectWord_EndInvoke_m98AC77C5E210BA26CB16F1B90B2E7CFA7E7B944A (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameUtility::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility_LoadScene_mA878A9703BEA5DD6B96E7324A55399F3B4B76F17 (GameUtility_tF414B8F1ADC91A4FB07AA29FAA06BD0D2EDF77C3* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUtility__ctor_m059E49C4DB7C02F8FE9DF18BD3956DA90E587970 (GameUtility_tF414B8F1ADC91A4FB07AA29FAA06BD0D2EDF77C3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 GridSquare::get_SquareIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridSquare_get_SquareIndex_m0F2677AFBD2FB96FAE0368C50AAA30FA8A08716C (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// public int SquareIndex { get; set; }
		int32_t L_0 = __this->___U3CSquareIndexU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GridSquare::set_SquareIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_set_SquareIndex_m6704C341EB13D575E213373725787472E8486978 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SquareIndex { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CSquareIndexU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void GridSquare::SetIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetIndex_m1C36FAE91DAB3A4D7627F88C01B015EBD1ED445E (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// _index = index;
		int32_t L_0 = ___index0;
		__this->____index_11 = L_0;
		// }
		return;
	}
}
// System.Int32 GridSquare::GetIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridSquare_GetIndex_m4B3044E68032DDF27EFCCF8281F59FBA373C9740 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// return _index;
		int32_t L_0 = __this->____index_11;
		return L_0;
	}
}
// System.Void GridSquare::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_Start_mEE401AD25A6F84E4D1B5AA886C3AE40239B89D34 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _selected = false;
		__this->____selected_9 = (bool)0;
		// _clicked = false;
		__this->____clicked_10 = (bool)0;
		// _correct = false;
		__this->____correct_12 = (bool)0;
		// _displayedImage = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->____displayedImage_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displayedImage_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void GridSquare::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnable_mC86B9518B4DA094E2A0F2F4F5A1E263BB8411917 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_CorrectWord_mED02135E01550D50C42735765037413AA888A86B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnDisableSquarrSelection_m30A0BE29C17954E5AF32744737B3056EBE456A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_SelectSquare_m46E3583E443763BD887D6451F7DED2C7ED80B3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnEnableSquarrSelection += OnEnableSquareSelection;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_0 = (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)il2cpp_codegen_object_new(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnableSquarrSelection__ctor_m0A57EEEF94F8A3F225B86B367FE16D30CDBD2D55(L_0, __this, (intptr_t)((void*)GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767_RuntimeMethod_var), NULL);
		GameEvents_add_OnEnableSquarrSelection_mF6E6D9D4303F185B672F8E9AE55FDE12133EB4BF(L_0, NULL);
		// GameEvents.OnDisableSquarrSelection += OnDisableSquarrSelection;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_1 = (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)il2cpp_codegen_object_new(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DisableSquarrSelection__ctor_mFC6B27F3EA559C2AF8F18D083183699D33C714B2(L_1, __this, (intptr_t)((void*)GridSquare_OnDisableSquarrSelection_m30A0BE29C17954E5AF32744737B3056EBE456A84_RuntimeMethod_var), NULL);
		GameEvents_add_OnDisableSquarrSelection_mC3FAEE42C1814266A1EEDEEFCD119F030200BA95(L_1, NULL);
		// GameEvents.OnSelectSquare += SelectSquare;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_2 = (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)il2cpp_codegen_object_new(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SelectSquare__ctor_m53728D7135EECD9336E7FAABA0C3B7D244FD2C11(L_2, __this, (intptr_t)((void*)GridSquare_SelectSquare_m46E3583E443763BD887D6451F7DED2C7ED80B3BB_RuntimeMethod_var), NULL);
		GameEvents_add_OnSelectSquare_m472AA7C1BE29B7D299B838E8C8B611EF0080E853(L_2, NULL);
		// GameEvents.OnCorrectWord += CorrectWord;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_3 = (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)il2cpp_codegen_object_new(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CorrectWord__ctor_m665F4D81E67C5852F76ABF8186CF3815B99DDE3C(L_3, __this, (intptr_t)((void*)GridSquare_CorrectWord_mED02135E01550D50C42735765037413AA888A86B_RuntimeMethod_var), NULL);
		GameEvents_add_OnCorrectWord_m13FEECE27E3D5C075E3349EC586A5DD14FFAB6B1(L_3, NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnDisable_m1FF093D0D9F8DD71D34CB65CD21B842AF3341C0B (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_CorrectWord_mED02135E01550D50C42735765037413AA888A86B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnDisableSquarrSelection_m30A0BE29C17954E5AF32744737B3056EBE456A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridSquare_SelectSquare_m46E3583E443763BD887D6451F7DED2C7ED80B3BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnEnableSquarrSelection -= OnEnableSquareSelection;
		EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* L_0 = (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487*)il2cpp_codegen_object_new(EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnableSquarrSelection__ctor_m0A57EEEF94F8A3F225B86B367FE16D30CDBD2D55(L_0, __this, (intptr_t)((void*)GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767_RuntimeMethod_var), NULL);
		GameEvents_remove_OnEnableSquarrSelection_mDB77F7081B4C07BAF5570530D3E9CB5A9C3A19AD(L_0, NULL);
		// GameEvents.OnDisableSquarrSelection -= OnDisableSquarrSelection;
		DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* L_1 = (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F*)il2cpp_codegen_object_new(DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DisableSquarrSelection__ctor_mFC6B27F3EA559C2AF8F18D083183699D33C714B2(L_1, __this, (intptr_t)((void*)GridSquare_OnDisableSquarrSelection_m30A0BE29C17954E5AF32744737B3056EBE456A84_RuntimeMethod_var), NULL);
		GameEvents_remove_OnDisableSquarrSelection_m9D0FD9C58930711E0EE9522E9810E66EC4A5410B(L_1, NULL);
		// GameEvents.OnSelectSquare -= SelectSquare;
		SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* L_2 = (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50*)il2cpp_codegen_object_new(SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SelectSquare__ctor_m53728D7135EECD9336E7FAABA0C3B7D244FD2C11(L_2, __this, (intptr_t)((void*)GridSquare_SelectSquare_m46E3583E443763BD887D6451F7DED2C7ED80B3BB_RuntimeMethod_var), NULL);
		GameEvents_remove_OnSelectSquare_mFCF6E38F7B0B3830B4FC5E2F52241ECED05670E8(L_2, NULL);
		// GameEvents.OnCorrectWord -= CorrectWord;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_3 = (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)il2cpp_codegen_object_new(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CorrectWord__ctor_m665F4D81E67C5852F76ABF8186CF3815B99DDE3C(L_3, __this, (intptr_t)((void*)GridSquare_CorrectWord_mED02135E01550D50C42735765037413AA888A86B_RuntimeMethod_var), NULL);
		GameEvents_remove_OnCorrectWord_m95F7F4BBCC2919D5E41F0636F7A29F41DDF5C7BD(L_3, NULL);
		// }
		return;
	}
}
// System.Void GridSquare::CorrectWord(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_CorrectWord_mED02135E01550D50C42735765037413AA888A86B (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_selected && squareIndexes.Contains(_index))
		bool L_0 = __this->____selected_9;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___squareIndexes1;
		int32_t L_2 = __this->____index_11;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_1, L_2, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// _correct = true;
		__this->____correct_12 = (bool)1;
		// _displayedImage.sprite = _correctLetterData.image;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->____displayedImage_8;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_5 = __this->____correctLetterData_7;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = L_5->___image_1;
		NullCheck(L_4);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_4, L_6, NULL);
	}

IL_0033:
	{
		// _selected = false;
		__this->____selected_9 = (bool)0;
		// _clicked = false;
		__this->____clicked_10 = (bool)0;
		// }
		return;
	}
}
// System.Void GridSquare::OnEnableSquareSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// _clicked = true;
		__this->____clicked_10 = (bool)1;
		// _selected = false;
		__this->____selected_9 = (bool)0;
		// }
		return;
	}
}
// System.Void GridSquare::OnDisableSquarrSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnDisableSquarrSelection_m30A0BE29C17954E5AF32744737B3056EBE456A84 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// _selected = false;
		__this->____selected_9 = (bool)0;
		// _clicked = false;
		__this->____clicked_10 = (bool)0;
		// if(_correct == true)
		bool L_0 = __this->____correct_12;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// _displayedImage.sprite = _correctLetterData.image;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->____displayedImage_8;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_2 = __this->____correctLetterData_7;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___image_1;
		NullCheck(L_1);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_1, L_3, NULL);
		return;
	}

IL_002d:
	{
		// _displayedImage.sprite = _normalLetterData.image;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->____displayedImage_8;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_5 = __this->____normalLetterData_5;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = L_5->___image_1;
		NullCheck(L_4);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void GridSquare::SelectSquare(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SelectSquare_m46E3583E443763BD887D6451F7DED2C7ED80B3BB (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// if(this.gameObject.transform.position == position)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		bool L_4;
		L_4 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// _displayedImage.sprite = _selectedLetterData.image;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->____displayedImage_8;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_6 = __this->____selectedLetterData_6;
		NullCheck(L_6);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = L_6->___image_1;
		NullCheck(L_5);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_5, L_7, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void GridSquare::SetSprite(AlphabetData/LetterData,AlphabetData/LetterData,AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_SetSprite_mCC683D6DC3DFF0A300BEF36045D034D1D3916ACF (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___normalLetterData0, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___selectedLetterData1, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___correctLetterData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _normalLetterData = normalLetterData;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_0 = ___normalLetterData0;
		__this->____normalLetterData_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____normalLetterData_5), (void*)L_0);
		// _selectedLetterData = selectedLetterData;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_1 = ___selectedLetterData1;
		__this->____selectedLetterData_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectedLetterData_6), (void*)L_1);
		// _correctLetterData = correctLetterData;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_2 = ___correctLetterData2;
		__this->____correctLetterData_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____correctLetterData_7), (void*)L_2);
		// GetComponent<SpriteRenderer>().sprite = _normalLetterData.image;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_4 = __this->____normalLetterData_5;
		NullCheck(L_4);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = L_4->___image_1;
		NullCheck(L_3);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseDown_mA872091977BC719ECC821336AA75699BE4293FDE (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// OnEnableSquareSelection();
		GridSquare_OnEnableSquareSelection_m932CE20E8E1F5FE0E53BAC919A69029A5B742767(__this, NULL);
		// GameEvents.EnableSquarrSelectionMethod();
		GameEvents_EnableSquarrSelectionMethod_mF2478820426289990395C78B6FD5DA194A6E8E6A(NULL);
		// ChechSquare();
		GridSquare_ChechSquare_mC587D4B8308046687F25796BAF51A97272407076(__this, NULL);
		// _displayedImage.sprite = _selectedLetterData.image;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____displayedImage_8;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_1 = __this->____selectedLetterData_6;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->___image_1;
		NullCheck(L_0);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseEnter_mAE1CED24738A95859362FD0775DED6FC049CCD42 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// ChechSquare();
		GridSquare_ChechSquare_mC587D4B8308046687F25796BAF51A97272407076(__this, NULL);
		// }
		return;
	}
}
// System.Void GridSquare::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_OnMouseUp_mE876AC7D13B027A04E3003A857444A4844E3BB4E (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// GameEvents.ClearSelectionMethod();
		GameEvents_ClearSelectionMethod_m13B146A32272879FBC06C528C8006A2883D8A4AB(NULL);
		// GameEvents.DisableSquarrSelectionMethod();
		GameEvents_DisableSquarrSelectionMethod_mB0FFA35D0561F0AD13F6389EAE1276DD4B1B2DF9(NULL);
		// }
		return;
	}
}
// System.Void GridSquare::ChechSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare_ChechSquare_mC587D4B8308046687F25796BAF51A97272407076 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// if(_selected == false && _clicked == true)
		bool L_0 = __this->____selected_9;
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		bool L_1 = __this->____clicked_10;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// _selected = true;
		__this->____selected_9 = (bool)1;
		// GameEvents.CheckSquareMethod(_normalLetterData.letter, gameObject.transform.position, _index);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_2 = __this->____normalLetterData_5;
		NullCheck(L_2);
		String_t* L_3 = L_2->___letter_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		int32_t L_7 = __this->____index_11;
		GameEvents_CheckSquareMethod_m6B005CF65C8B86C4EF49C1BBFD29F937932CC69C(L_3, L_6, L_7, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void GridSquare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSquare__ctor_m6DC5BC42F467B9E43DDAE1D5EB29D02EA298EA83 (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, const RuntimeMethod* method) 
{
	{
		// private int _index = -1;
		__this->____index_11 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SearchingWord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_Start_m3B3A230A22BB60CFBE4B8B84C4E00BA3CBAD732A (SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SearchingWord::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_OnEnable_m1F1F33D77B21D75314DA4A6508E242A65DDBBBF0 (SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchingWord_CorrectWord_m4574CD087445A0162649EB432FD86E139280B078_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCorrectWord += CorrectWord;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_0 = (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)il2cpp_codegen_object_new(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CorrectWord__ctor_m665F4D81E67C5852F76ABF8186CF3815B99DDE3C(L_0, __this, (intptr_t)((void*)SearchingWord_CorrectWord_m4574CD087445A0162649EB432FD86E139280B078_RuntimeMethod_var), NULL);
		GameEvents_add_OnCorrectWord_m13FEECE27E3D5C075E3349EC586A5DD14FFAB6B1(L_0, NULL);
		// }
		return;
	}
}
// System.Void SearchingWord::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_OnDisable_m3C7D8C51C23C89A495D6AAA5B79C9A9A149D14ED (SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SearchingWord_CorrectWord_m4574CD087445A0162649EB432FD86E139280B078_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCorrectWord -= CorrectWord;
		CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* L_0 = (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021*)il2cpp_codegen_object_new(CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CorrectWord__ctor_m665F4D81E67C5852F76ABF8186CF3815B99DDE3C(L_0, __this, (intptr_t)((void*)SearchingWord_CorrectWord_m4574CD087445A0162649EB432FD86E139280B078_RuntimeMethod_var), NULL);
		GameEvents_remove_OnCorrectWord_m95F7F4BBCC2919D5E41F0636F7A29F41DDF5C7BD(L_0, NULL);
		// }
		return;
	}
}
// System.Void SearchingWord::SetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_SetWord_mD5184010C0E214E16D87C3C581F215E365E7D3D0 (SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* __this, String_t* ___word0, const RuntimeMethod* method) 
{
	{
		// _word = word;
		String_t* L_0 = ___word0;
		__this->____word_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____word_6), (void*)L_0);
		// displayedText.text = word;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___displayedText_4;
		String_t* L_2 = ___word0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SearchingWord::CorrectWord(System.String,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord_CorrectWord_m4574CD087445A0162649EB432FD86E139280B078 (SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method) 
{
	{
		// if(word == _word)
		String_t* L_0 = ___word0;
		String_t* L_1 = __this->____word_6;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// crossLine.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___crossLine_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SearchingWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWord__ctor_m2230207CF1CF97AF5EB891BA51DBF9CD2A66A963 (SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SearchingWordsList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_Start_m55BBCE010527A3A4061D27B159520CF3394A7CBC (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0CF127B7FA28F282CDE254ECADC27605474528C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _wordsNumber = currentGameData.selectBoardData.SearchWords.Count;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = __this->___currentGameData_4;
		NullCheck(L_0);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_1 = L_0->___selectBoardData_5;
		NullCheck(L_1);
		List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* L_2 = L_1->___SearchWords_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m0CF127B7FA28F282CDE254ECADC27605474528C1_inline(L_2, List_1_get_Count_m0CF127B7FA28F282CDE254ECADC27605474528C1_RuntimeMethod_var);
		__this->____wordsNumber_11 = L_3;
		// if (_wordsNumber < _columns)
		int32_t L_4 = __this->____wordsNumber_11;
		int32_t L_5 = __this->____columns_9;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		// _rows = 1;
		__this->____rows_10 = 1;
		goto IL_0038;
	}

IL_0032:
	{
		// CalculateColumnsAndRowsNumber();
		SearchingWordsList_CalculateColumnsAndRowsNumber_mE59180555B29043AFB2F579D199B29BE740CF8C2(__this, NULL);
	}

IL_0038:
	{
		// CreateWordObjects();
		SearchingWordsList_CreateWordObjects_m0F05B8F42B4343CB476A625328C8370C54E9E653(__this, NULL);
		// SetWordsPosition();
		SearchingWordsList_SetWordsPosition_mB97BA1091EF587894C637B3200D53880231F0A32(__this, NULL);
		// }
		return;
	}
}
// System.Void SearchingWordsList::CalculateColumnsAndRowsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CalculateColumnsAndRowsNumber_mE59180555B29043AFB2F579D199B29BE740CF8C2 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) 
{

IL_0000:
	{
		// _columns++;
		int32_t L_0 = __this->____columns_9;
		__this->____columns_9 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// _rows = _wordsNumber / _columns;
		int32_t L_1 = __this->____wordsNumber_11;
		int32_t L_2 = __this->____columns_9;
		__this->____rows_10 = ((int32_t)(L_1/L_2));
		// } while (_rows >= maxRows);
		int32_t L_3 = __this->____rows_10;
		int32_t L_4 = __this->___maxRows_8;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0000;
		}
	}
	{
		// if (_columns > maxColumns)
		int32_t L_5 = __this->____columns_9;
		int32_t L_6 = __this->___maxColumns_7;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_005c;
		}
	}
	{
		// _columns = maxColumns;
		int32_t L_7 = __this->___maxColumns_7;
		__this->____columns_9 = L_7;
		// _rows = _wordsNumber / _columns;
		int32_t L_8 = __this->____wordsNumber_11;
		int32_t L_9 = __this->____columns_9;
		__this->____rows_10 = ((int32_t)(L_8/L_9));
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Boolean SearchingWordsList::TryIncreaseColumnNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_TryIncreaseColumnNumber_mC09206A5AE47B4B9D5991A0F42BA35553A09CB98 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) 
{
	{
		// _columns++;
		int32_t L_0 = __this->____columns_9;
		__this->____columns_9 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// _rows = _wordsNumber / _columns;
		int32_t L_1 = __this->____wordsNumber_11;
		int32_t L_2 = __this->____columns_9;
		__this->____rows_10 = ((int32_t)(L_1/L_2));
		// if (_columns > maxColumns)
		int32_t L_3 = __this->____columns_9;
		int32_t L_4 = __this->___maxColumns_7;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0050;
		}
	}
	{
		// _columns = maxColumns;
		int32_t L_5 = __this->___maxColumns_7;
		__this->____columns_9 = L_5;
		// _rows = _wordsNumber / _columns;
		int32_t L_6 = __this->____wordsNumber_11;
		int32_t L_7 = __this->____columns_9;
		__this->____rows_10 = ((int32_t)(L_6/L_7));
		// return false;
		return (bool)0;
	}

IL_0050:
	{
		// if (_wordsNumber % _columns > 0)
		int32_t L_8 = __this->____wordsNumber_11;
		int32_t L_9 = __this->____columns_9;
		if ((((int32_t)((int32_t)(L_8%L_9))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		// _rows++;
		int32_t L_10 = __this->____rows_10;
		__this->____rows_10 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_006e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void SearchingWordsList::CreateWordObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_CreateWordObjects_m0F05B8F42B4343CB476A625328C8370C54E9E653 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC_m7572942E5A4310F9B541F334A5FE80735104CB48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1D89DCE547CA1AFA3EBD3182D0B228E2BDF1CFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var squareScale = GetSquareScale(new Vector3(1f, 1f, 0.1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SearchingWordsList_GetSquareScale_mDF17FFCF55EBB913926870851D581DDD091E2919(__this, L_0, NULL);
		V_0 = L_1;
		// for (var index = 0; index < _wordsNumber; index++)
		V_1 = 0;
		goto IL_00ca;
	}

IL_0022:
	{
		// _words.Add(Instantiate(searchingWordPrefab) as GameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->____words_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___searchingWordPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_2, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _words[index].transform.SetParent(this.transform);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____words_12;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_8, L_9, NULL);
		// _words[index].GetComponent<RectTransform>().localScale = squareScale;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->____words_12;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_12, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_14, NULL);
		// _words[index].GetComponent<RectTransform>().localPosition = new Vector3(0f, 0f, 0f);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->____words_12;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_15, L_16, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_17, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_19, NULL);
		// _words[index].GetComponent<SearchingWord>().SetWord(currentGameData.selectBoardData.SearchWords[index].Word);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->____words_12;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_20, L_21, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_22);
		SearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC* L_23;
		L_23 = GameObject_GetComponent_TisSearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC_m7572942E5A4310F9B541F334A5FE80735104CB48(L_22, GameObject_GetComponent_TisSearchingWord_t85568404E988CACE0CFD93BB13D2DFB56B67B9AC_m7572942E5A4310F9B541F334A5FE80735104CB48_RuntimeMethod_var);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_24 = __this->___currentGameData_4;
		NullCheck(L_24);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_25 = L_24->___selectBoardData_5;
		NullCheck(L_25);
		List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* L_26 = L_25->___SearchWords_8;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* L_28;
		L_28 = List_1_get_Item_mD1D89DCE547CA1AFA3EBD3182D0B228E2BDF1CFE(L_26, L_27, List_1_get_Item_mD1D89DCE547CA1AFA3EBD3182D0B228E2BDF1CFE_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_29 = L_28->___Word_0;
		NullCheck(L_23);
		SearchingWord_SetWord_mD5184010C0E214E16D87C3C581F215E365E7D3D0(L_23, L_29, NULL);
		// for (var index = 0; index < _wordsNumber; index++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00ca:
	{
		// for (var index = 0; index < _wordsNumber; index++)
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____wordsNumber_11;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 SearchingWordsList::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SearchingWordsList_GetSquareScale_mDF17FFCF55EBB913926870851D581DDD091E2919 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultScale0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var finalScale = defaultScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___defaultScale0;
		V_0 = L_0;
		// var adjustment = 0.01f;
		V_1 = (0.00999999978f);
		goto IL_004e;
	}

IL_000a:
	{
		// finalScale.x -= adjustment;
		float* L_1 = (&(&V_0)->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = V_1;
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract(L_3, L_4));
		// finalScale.y -= adjustment;
		float* L_5 = (&(&V_0)->___y_3);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = V_1;
		*((float*)L_6) = (float)((float)il2cpp_codegen_subtract(L_7, L_8));
		// if (finalScale.x <= 0 || finalScale.y <= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		if ((((float)L_10) <= ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___y_3;
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}

IL_003c:
	{
		// finalScale.x = adjustment;
		float L_13 = V_1;
		(&V_0)->___x_2 = L_13;
		// finalScale.y = adjustment;
		float L_14 = V_1;
		(&V_0)->___y_3 = L_14;
		// return finalScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		return L_15;
	}

IL_004e:
	{
		// while (ShouldScaleDown(finalScale))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		bool L_17;
		L_17 = SearchingWordsList_ShouldScaleDown_m510275681D3E04BD6DFB5D6AD193AB10FC8EDAAE(__this, L_16, NULL);
		if (L_17)
		{
			goto IL_000a;
		}
	}
	{
		// return finalScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		return L_18;
	}
}
// System.Boolean SearchingWordsList::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchingWordsList_ShouldScaleDown_m510275681D3E04BD6DFB5D6AD193AB10FC8EDAAE (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetScale0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var squareRect = searchingWordPrefab.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___searchingWordPrefab_5;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		V_0 = L_1;
		// var parentRect = this.GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_1 = L_2;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.0f), (0.0f), NULL);
		// squareSize.x = squareRect.rect.width * targetScale.x + offset;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_4 = L_4;
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___targetScale0;
		float L_7 = L_6.___x_2;
		float L_8 = __this->___offset_6;
		(&V_2)->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, L_7)), L_8));
		// squareSize.y = squareRect.rect.height * targetScale.y + offset;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = V_0;
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_4 = L_10;
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___targetScale0;
		float L_13 = L_12.___y_3;
		float L_14 = __this->___offset_6;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_13)), L_14));
		// var totalSquaresHeight = squareSize.y * _rows;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_2;
		float L_16 = L_15.___y_1;
		int32_t L_17 = __this->____rows_10;
		V_3 = ((float)il2cpp_codegen_multiply(L_16, ((float)L_17)));
		// if (totalSquaresHeight > parentRect.rect.height)
		float L_18 = V_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = V_1;
		NullCheck(L_19);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		L_20 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_19, NULL);
		V_4 = L_20;
		float L_21;
		L_21 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		if ((!(((float)L_18) > ((float)L_21))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00aa;
	}

IL_008f:
	{
		// if (TryIncreaseColumnNumber())
		bool L_22;
		L_22 = SearchingWordsList_TryIncreaseColumnNumber_mC09206A5AE47B4B9D5991A0F42BA35553A09CB98(__this, NULL);
		if (!L_22)
		{
			goto IL_00a8;
		}
	}
	{
		// totalSquaresHeight = squareSize.y * _rows;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_2;
		float L_24 = L_23.___y_1;
		int32_t L_25 = __this->____rows_10;
		V_3 = ((float)il2cpp_codegen_multiply(L_24, ((float)L_25)));
		goto IL_00aa;
	}

IL_00a8:
	{
		// return true;
		return (bool)1;
	}

IL_00aa:
	{
		// while (totalSquaresHeight > parentRect.rect.height)
		float L_26 = V_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = V_1;
		NullCheck(L_27);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		L_28 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_27, NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		if ((((float)L_26) > ((float)L_29)))
		{
			goto IL_008f;
		}
	}

IL_00bc:
	{
		// var totalSquareWidth = squareSize.x * _columns;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_2;
		float L_31 = L_30.___x_0;
		int32_t L_32 = __this->____columns_9;
		// if (totalSquareWidth > parentRect.rect.width)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33 = V_1;
		NullCheck(L_33);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_34;
		L_34 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_33, NULL);
		V_4 = L_34;
		float L_35;
		L_35 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		if ((!(((float)((float)il2cpp_codegen_multiply(L_31, ((float)L_32)))) > ((float)L_35))))
		{
			goto IL_00dd;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00dd:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void SearchingWordsList::SetWordsPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList_SetWordsPosition_mB97BA1091EF587894C637B3200D53880231F0A32 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// var squareRect = _words[0].GetComponent<RectTransform>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____words_12;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_1, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		V_0 = L_2;
		// var wordOffset = new Vector2
		// {
		//     x = squareRect.rect.width * squareRect.transform.localScale.x + offset,
		//     y = squareRect.rect.height * squareRect.transform.localScale.y + offset
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_6 = L_4;
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_6), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___offset_6;
		(&V_5)->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, L_9)), L_10));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = V_0;
		NullCheck(L_11);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_11, NULL);
		V_6 = L_12;
		float L_13;
		L_13 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_6), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		float L_17 = L_16.___y_3;
		float L_18 = __this->___offset_6;
		(&V_5)->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_17)), L_18));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		V_1 = L_19;
		// int columnNumber = 0;
		V_2 = 0;
		// int rowNumber = 0;
		V_3 = 0;
		// var startPosition = GetFirstSquarePosition();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = SearchingWordsList_GetFirstSquarePosition_m210DDC25BB8B9C59068A5E4A4A4C9960D9171EC5(__this, NULL);
		V_4 = L_20;
		// foreach (var word in _words)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = __this->____words_12;
		NullCheck(L_21);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_22;
		L_22 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_21, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_7 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_7), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ee_1;
			}

IL_0094_1:
			{
				// foreach (var word in _words)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
				L_23 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_7), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// if (columnNumber + 1 > _columns)
				int32_t L_24 = V_2;
				int32_t L_25 = __this->____columns_9;
				G_B3_0 = L_23;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_24, 1))) <= ((int32_t)L_25)))
				{
					G_B4_0 = L_23;
					goto IL_00ac_1;
				}
			}
			{
				// columnNumber = 0;
				V_2 = 0;
				// rowNumber++;
				int32_t L_26 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
				G_B4_0 = G_B3_0;
			}

IL_00ac_1:
			{
				// var positionX = startPosition.x + wordOffset.x * columnNumber;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_4;
				float L_28 = L_27.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
				float L_30 = L_29.___x_0;
				int32_t L_31 = V_2;
				V_8 = ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(L_30, ((float)L_31)))));
				// var positionY = startPosition.y - wordOffset.y * rowNumber;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_4;
				float L_33 = L_32.___y_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_1;
				float L_35 = L_34.___y_1;
				int32_t L_36 = V_3;
				V_9 = ((float)il2cpp_codegen_subtract(L_33, ((float)il2cpp_codegen_multiply(L_35, ((float)L_36)))));
				// word.GetComponent<RectTransform>().localPosition = new Vector2(positionX, positionY);
				NullCheck(G_B4_0);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37;
				L_37 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(G_B4_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
				float L_38 = V_8;
				float L_39 = V_9;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
				memset((&L_40), 0, sizeof(L_40));
				Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), L_38, L_39, /*hidden argument*/NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
				L_41 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_40, NULL);
				NullCheck(L_37);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_37, L_41, NULL);
				// columnNumber++;
				int32_t L_42 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_00ee_1:
			{
				// foreach (var word in _words)
				bool L_43;
				L_43 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_7), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_0094_1;
				}
			}
			{
				goto IL_0107;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0107:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 SearchingWordsList::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SearchingWordsList_GetFirstSquarePosition_m210DDC25BB8B9C59068A5E4A4A4C9960D9171EC5 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var startPosition = new Vector2(0f, transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.0f), L_2, NULL);
		// var squareRect = _words[0].GetComponent<RectTransform>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->____words_12;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_4, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		V_1 = L_5;
		// var parentRect = this.GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_2 = L_6;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (0.0f), (0.0f), NULL);
		// squareSize.x = squareRect.rect.width * squareRect.transform.localScale.x + offset;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_1;
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_7, NULL);
		V_5 = L_8;
		float L_9;
		L_9 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		float L_13 = L_12.___x_2;
		float L_14 = __this->___offset_6;
		(&V_3)->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, L_13)), L_14));
		// squareSize.y = squareRect.rect.height * squareRect.transform.localScale.y + offset;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_1;
		NullCheck(L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_15, NULL);
		V_5 = L_16;
		float L_17;
		L_17 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_19, NULL);
		float L_21 = L_20.___y_3;
		float L_22 = __this->___offset_6;
		(&V_3)->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_21)), L_22));
		// var shiftBy = (parentRect.rect.width - (squareSize.x * _columns)) / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = V_2;
		NullCheck(L_23);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24;
		L_24 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_23, NULL);
		V_5 = L_24;
		float L_25;
		L_25 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_3;
		float L_27 = L_26.___x_0;
		int32_t L_28 = __this->____columns_9;
		V_4 = ((float)(((float)il2cpp_codegen_subtract(L_25, ((float)il2cpp_codegen_multiply(L_27, ((float)L_28)))))/(2.0f)));
		// startPosition.x = ((parentRect.rect.width - squareSize.x) / 2) * (-1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = V_2;
		NullCheck(L_29);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_30;
		L_30 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_29, NULL);
		V_5 = L_30;
		float L_31;
		L_31 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_3;
		float L_33 = L_32.___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_31, L_33))/(2.0f))), (-1.0f)));
		// startPosition.x += shiftBy;
		float* L_34 = (&(&V_0)->___x_0);
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		float L_37 = V_4;
		*((float*)L_35) = (float)((float)il2cpp_codegen_add(L_36, L_37));
		// startPosition.y = (parentRect.rect.height - squareSize.y) / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = V_2;
		NullCheck(L_38);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_39;
		L_39 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_38, NULL);
		V_5 = L_39;
		float L_40;
		L_40 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_3;
		float L_42 = L_41.___y_1;
		(&V_0)->___y_1 = ((float)(((float)il2cpp_codegen_subtract(L_40, L_42))/(2.0f)));
		// return startPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_0;
		return L_43;
	}
}
// System.Void SearchingWordsList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchingWordsList__ctor_m14C931AADDFAD0524381C16AFE5C45DBC16D3428 (SearchingWordsList_tF6C7124E3EC5878B41EE4C9F0E8658AB04ABC424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxColumns = 1;
		__this->___maxColumns_7 = 1;
		// public int maxRows = 1;
		__this->___maxRows_8 = 1;
		// private int _columns = 2;
		__this->____columns_9 = 2;
		// private List<GameObject> _words = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____words_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____words_12), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_m6820D211A06B2E5E24795D7EBE67EE865F39BC43 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// timeIsRunning = true;
		__this->___timeIsRunning_6 = (bool)1;
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m3AC30EFD54E8E1010F6E601AE179212E71E6B2CD (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeIsRunning)
		bool L_0 = __this->___timeIsRunning_6;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// if(timeRemaining > 0)
		float L_1 = __this->___timeRemaining_4;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// timeRemaining -= Time.deltaTime;
		float L_2 = __this->___timeRemaining_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeRemaining_4 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// TimeToDisplay(timeRemaining);
		float L_4 = __this->___timeRemaining_4;
		Timer_TimeToDisplay_m1297C1741FFECAE5266857BD60EFFA976E3EC012(__this, L_4, NULL);
	}

IL_0033:
	{
		// if(timeRemaining <= 2)
		float L_5 = __this->___timeRemaining_4;
		if ((!(((float)L_5) <= ((float)(2.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Timer::TimeToDisplay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_TimeToDisplay_m1297C1741FFECAE5266857BD60EFFA976E3EC012 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, float ___timeToDisplay0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// timeToDisplay -= 1;
		float L_0 = ___timeToDisplay0;
		___timeToDisplay0 = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		// float minute = Mathf.FloorToInt(timeToDisplay / 60);
		float L_1 = ___timeToDisplay0;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_1/(60.0f))), NULL);
		V_0 = ((float)L_2);
		// float second = Mathf.FloorToInt(timeToDisplay % 60);
		float L_3 = ___timeToDisplay0;
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline((fmodf(L_3, (60.0f))), NULL);
		V_1 = ((float)L_4);
		// timeText.text = string.Format("{0:00}:{1:00}", minute, second);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___timeText_5;
		float L_6 = V_0;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		float L_9 = V_1;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8, L_8, L_11, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_12);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m5FF13F1DAD0527F97E229A1904A8AD662731C4B5 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WordChecker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_OnEnable_m8B9A4FE0B7F6558782CBFEC716393C88D7079549 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_ClearSelection_m8DD5E2971CE059417EDCC2A10207A429D685260E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_SquareSelected_m57FAE1E86734619D2C4AE3FD8EE3A0F972BEBD09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCheckSquare += SquareSelected;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_0 = (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)il2cpp_codegen_object_new(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CheckSquare__ctor_m4B486477B573D69B22CDD55981343EA4505D4D84(L_0, __this, (intptr_t)((void*)WordChecker_SquareSelected_m57FAE1E86734619D2C4AE3FD8EE3A0F972BEBD09_RuntimeMethod_var), NULL);
		GameEvents_add_OnCheckSquare_m70F665B2A0E2CD75C91E7FB106467F6ABABFA2CF(L_0, NULL);
		// GameEvents.OnClearSelection += ClearSelection;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_1 = (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)il2cpp_codegen_object_new(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ClearSelection__ctor_mBC0A9145AFBE0E435FE421B7626479D19CCB0395(L_1, __this, (intptr_t)((void*)WordChecker_ClearSelection_m8DD5E2971CE059417EDCC2A10207A429D685260E_RuntimeMethod_var), NULL);
		GameEvents_add_OnClearSelection_mBF168B9133C0721933B9F24FD2020A9D27F29869(L_1, NULL);
		// }
		return;
	}
}
// System.Void WordChecker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_OnDisable_m2F8686D8D79F725AE2523905AAF7B54852BF1DA7 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_ClearSelection_m8DD5E2971CE059417EDCC2A10207A429D685260E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WordChecker_SquareSelected_m57FAE1E86734619D2C4AE3FD8EE3A0F972BEBD09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameEvents.OnCheckSquare -= SquareSelected;
		CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* L_0 = (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420*)il2cpp_codegen_object_new(CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CheckSquare__ctor_m4B486477B573D69B22CDD55981343EA4505D4D84(L_0, __this, (intptr_t)((void*)WordChecker_SquareSelected_m57FAE1E86734619D2C4AE3FD8EE3A0F972BEBD09_RuntimeMethod_var), NULL);
		GameEvents_remove_OnCheckSquare_m837A6B1BE5EC44302205D8B5FA6B6C37EE4C868C(L_0, NULL);
		// GameEvents.OnClearSelection -= ClearSelection;
		ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* L_1 = (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242*)il2cpp_codegen_object_new(ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ClearSelection__ctor_mBC0A9145AFBE0E435FE421B7626479D19CCB0395(L_1, __this, (intptr_t)((void*)WordChecker_ClearSelection_m8DD5E2971CE059417EDCC2A10207A429D685260E_RuntimeMethod_var), NULL);
		GameEvents_remove_OnClearSelection_m0C4CD27C740121E2996B9236061607DD4DA6060A(L_1, NULL);
		// }
		return;
	}
}
// System.Void WordChecker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_Start_m68F3682DD1BCE3975024777648C4C6286498D8A9 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) 
{
	{
		// _assignedPoints = 0;
		__this->____assignedPoints_6 = 0;
		// _completedWords = 0;
		__this->____completedWords_7 = 0;
		// }
		return;
	}
}
// System.Void WordChecker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_Update_mB22AC4C1CD99273A129ADD67CF3C5E2CF4982866 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_assignedPoints > 0 && Application.isEditor)
		int32_t L_0 = __this->____assignedPoints_6;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_1)
		{
			goto IL_013e;
		}
	}
	{
		// Debug.DrawRay(_rayUp.origin, _rayUp.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_2 = (&__this->____rayUp_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_2, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_4 = (&__this->____rayUp_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, (4.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_3, L_6, NULL);
		// Debug.DrawRay(_rayDown.origin, _rayDown.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_7 = (&__this->____rayDown_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_7, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_9 = (&__this->____rayDown_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, (4.0f), NULL);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_8, L_11, NULL);
		// Debug.DrawRay(_rayLeft.origin, _rayLeft.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_12 = (&__this->____rayLeft_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_12, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_14 = (&__this->____rayLeft_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, (4.0f), NULL);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_13, L_16, NULL);
		// Debug.DrawRay(_rayRight.origin, _rayRight.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_17 = (&__this->____rayRight_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_17, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_19 = (&__this->____rayRight_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, (4.0f), NULL);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_18, L_21, NULL);
		// Debug.DrawRay(_rayDiagonalLeftUp.origin, _rayDiagonalLeftUp.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_22 = (&__this->____rayDiagonalLeftUp_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_22, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_24 = (&__this->____rayDiagonalLeftUp_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (4.0f), NULL);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_23, L_26, NULL);
		// Debug.DrawRay(_rayDiagonalLeftDown.origin, _rayDiagonalLeftDown.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_27 = (&__this->____rayDiagonalLeftDown_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_27, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_29 = (&__this->____rayDiagonalLeftDown_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, (4.0f), NULL);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_28, L_31, NULL);
		// Debug.DrawRay(_rayDiagonalRightUp.origin, _rayDiagonalRightUp.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_32 = (&__this->____rayDiagonalRightUp_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_32, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_34 = (&__this->____rayDiagonalRightUp_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, (4.0f), NULL);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_33, L_36, NULL);
		// Debug.DrawRay(_rayDiagonalRightDown.origin, _rayDiagonalRightDown.direction * 4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_37 = (&__this->____rayDiagonalRightDown_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6(L_37, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_39 = (&__this->____rayDiagonalRightDown_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, (4.0f), NULL);
		Debug_DrawRay_m8A46EE066EBA85A0BC4EF72E45EB7D3A3EB8381C(L_38, L_41, NULL);
	}

IL_013e:
	{
		// }
		return;
	}
}
// System.Void WordChecker::SquareSelected(System.String,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_SquareSelected_m57FAE1E86734619D2C4AE3FD8EE3A0F972BEBD09 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_assignedPoints == 0)
		int32_t L_0 = __this->____assignedPoints_6;
		if (L_0)
		{
			goto IL_01dd;
		}
	}
	{
		// _rayStartPosition = squarePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___squarePosition1;
		__this->____rayStartPosition_17 = L_1;
		// _correctSquareList.Add(squareIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->____correctSquareList_18;
		int32_t L_3 = ___squareIndex2;
		NullCheck(L_2);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_2, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// _word += letter;
		String_t* L_4 = __this->____word_5;
		String_t* L_5 = ___letter0;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, L_5, NULL);
		__this->____word_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____word_5), (void*)L_6);
		// _rayUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(0f, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___squarePosition1;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___squarePosition1;
		float L_10 = L_9.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_15), L_12, L_14, /*hidden argument*/NULL);
		__this->____rayUp_8 = L_15;
		// _rayDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(0f, -1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___squarePosition1;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___squarePosition1;
		float L_19 = L_18.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_17, L_19, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_22, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_24), L_21, L_23, /*hidden argument*/NULL);
		__this->____rayDown_9 = L_24;
		// _rayLeft = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1f, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___squarePosition1;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___squarePosition1;
		float L_28 = L_27.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), L_26, L_28, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_31, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_33), L_30, L_32, /*hidden argument*/NULL);
		__this->____rayLeft_10 = L_33;
		// _rayRight = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1f, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___squarePosition1;
		float L_35 = L_34.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___squarePosition1;
		float L_37 = L_36.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), L_35, L_37, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_40, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_42), L_39, L_41, /*hidden argument*/NULL);
		__this->____rayRight_11 = L_42;
		// _rayDiagonalLeftUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1f, 1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___squarePosition1;
		float L_44 = L_43.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___squarePosition1;
		float L_46 = L_45.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), L_44, L_46, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_47, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_49, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_51), L_48, L_50, /*hidden argument*/NULL);
		__this->____rayDiagonalLeftUp_12 = L_51;
		// _rayDiagonalLeftDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(-1f, -1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___squarePosition1;
		float L_53 = L_52.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___squarePosition1;
		float L_55 = L_54.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_56), L_53, L_55, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_58), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_58, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_60), L_57, L_59, /*hidden argument*/NULL);
		__this->____rayDiagonalLeftDown_13 = L_60;
		// _rayDiagonalRightUp = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1f, 1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = ___squarePosition1;
		float L_62 = L_61.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___squarePosition1;
		float L_64 = L_63.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), L_62, L_64, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_65, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_67), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_67, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_69), L_66, L_68, /*hidden argument*/NULL);
		__this->____rayDiagonalRightUp_14 = L_69;
		// _rayDiagonalRightDown = new Ray(new Vector2(squarePosition.x, squarePosition.y), new Vector2(1f, -1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ___squarePosition1;
		float L_71 = L_70.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___squarePosition1;
		float L_73 = L_72.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_74), L_71, L_73, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_74, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_76), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_76, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_78), L_75, L_77, /*hidden argument*/NULL);
		__this->____rayDiagonalRightDown_15 = L_78;
		goto IL_0268;
	}

IL_01dd:
	{
		// else if (_assignedPoints == 1)
		int32_t L_79 = __this->____assignedPoints_6;
		if ((!(((uint32_t)L_79) == ((uint32_t)1))))
		{
			goto IL_022f;
		}
	}
	{
		// _correctSquareList.Add(squareIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_80 = __this->____correctSquareList_18;
		int32_t L_81 = ___squareIndex2;
		NullCheck(L_80);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_80, L_81, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// _currentRay = SelectRay(_rayStartPosition, squarePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = __this->____rayStartPosition_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		L_83 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = ___squarePosition1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85;
		L_85 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_84, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_86;
		L_86 = WordChecker_SelectRay_mB58815A86143F91B4BFE734D3E60A856E64E26BA(__this, L_83, L_85, NULL);
		__this->____currentRay_16 = L_86;
		// GameEvents.SelectSquareMethod(squarePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = ___squarePosition1;
		GameEvents_SelectSquareMethod_mFAEA8BB825B17579444ACA380A81DA690D06D41B(L_87, NULL);
		// _word += letter;
		String_t* L_88 = __this->____word_5;
		String_t* L_89 = ___letter0;
		String_t* L_90;
		L_90 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_88, L_89, NULL);
		__this->____word_5 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____word_5), (void*)L_90);
		// CheckWord();
		WordChecker_CheckWord_m4DEC957F7A9FD239393A81ABC1893CAB065C27B7(__this, NULL);
		goto IL_0268;
	}

IL_022f:
	{
		// if (IsPointOnTheRay(_currentRay, squarePosition))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_91 = __this->____currentRay_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = ___squarePosition1;
		bool L_93;
		L_93 = WordChecker_IsPointOnTheRay_m04F5A53DCD9132FD4EFFD6B203918A6FA4F8A652(__this, L_91, L_92, NULL);
		if (!L_93)
		{
			goto IL_0268;
		}
	}
	{
		// _correctSquareList.Add(squareIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_94 = __this->____correctSquareList_18;
		int32_t L_95 = ___squareIndex2;
		NullCheck(L_94);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_94, L_95, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// GameEvents.SelectSquareMethod(squarePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = ___squarePosition1;
		GameEvents_SelectSquareMethod_mFAEA8BB825B17579444ACA380A81DA690D06D41B(L_96, NULL);
		// _word += letter;
		String_t* L_97 = __this->____word_5;
		String_t* L_98 = ___letter0;
		String_t* L_99;
		L_99 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_97, L_98, NULL);
		__this->____word_5 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____word_5), (void*)L_99);
		// CheckWord();
		WordChecker_CheckWord_m4DEC957F7A9FD239393A81ABC1893CAB065C27B7(__this, NULL);
	}

IL_0268:
	{
		// _assignedPoints++;
		int32_t L_100 = __this->____assignedPoints_6;
		__this->____assignedPoints_6 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		// }
		return;
	}
}
// System.Void WordChecker::CheckWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_CheckWord_m4DEC957F7A9FD239393A81ABC1893CAB065C27B7 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6D224CAF9461E4CBB87E5CE5CF0C6011886816FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m325132CB957D524A09FEEF04D5B2B666E4A0275B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA4005740A51B2DB185D8E43F45F6EEECB5325805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m917A8DF90008E5142376C5EA6FA91677B3D47DFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* V_1 = NULL;
	{
		// foreach (var searchingWord in currentGameData.selectBoardData.SearchWords)
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = __this->___currentGameData_4;
		NullCheck(L_0);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_1 = L_0->___selectBoardData_5;
		NullCheck(L_1);
		List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* L_2 = L_1->___SearchWords_8;
		NullCheck(L_2);
		Enumerator_t637C9B2E3872B499A8620C66DFD5415E863D0F50 L_3;
		L_3 = List_1_GetEnumerator_m917A8DF90008E5142376C5EA6FA91677B3D47DFF(L_2, List_1_GetEnumerator_m917A8DF90008E5142376C5EA6FA91677B3D47DFF_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6D224CAF9461E4CBB87E5CE5CF0C6011886816FA((&V_0), Enumerator_Dispose_m6D224CAF9461E4CBB87E5CE5CF0C6011886816FA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_0018_1:
			{
				// foreach (var searchingWord in currentGameData.selectBoardData.SearchWords)
				SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* L_4;
				L_4 = Enumerator_get_Current_mA4005740A51B2DB185D8E43F45F6EEECB5325805_inline((&V_0), Enumerator_get_Current_mA4005740A51B2DB185D8E43F45F6EEECB5325805_RuntimeMethod_var);
				V_1 = L_4;
				// if (_word == searchingWord.Word)
				String_t* L_5 = __this->____word_5;
				SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* L_6 = V_1;
				NullCheck(L_6);
				String_t* L_7 = L_6->___Word_0;
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_7, NULL);
				if (!L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				// GameEvents.CorrectWordMethod(_word, _correctSquareList);
				String_t* L_9 = __this->____word_5;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = __this->____correctSquareList_18;
				GameEvents_CorrectWordMethod_mA3BFFA44765D7120846D442CA85A550B4D1C8A6B(L_9, L_10, NULL);
				// _word = string.Empty;
				String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				__this->____word_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____word_5), (void*)L_11);
				// _correctSquareList.Clear();
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = __this->____correctSquareList_18;
				NullCheck(L_12);
				List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_12, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
				// return;
				goto IL_0075;
			}

IL_005c_1:
			{
				// foreach (var searchingWord in currentGameData.selectBoardData.SearchWords)
				bool L_13;
				L_13 = Enumerator_MoveNext_m325132CB957D524A09FEEF04D5B2B666E4A0275B((&V_0), Enumerator_MoveNext_m325132CB957D524A09FEEF04D5B2B666E4A0275B_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0075;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Boolean WordChecker::IsPointOnTheRay(UnityEngine.Ray,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordChecker_IsPointOnTheRay_m04F5A53DCD9132FD4EFFD6B203918A6FA4F8A652 (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___currentRay0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var hits = Physics.RaycastAll(currentRay, 100.0f);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___currentRay0;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_1;
		L_1 = Physics_RaycastAll_m1BBD4E474814BEC9B52B015081A256AE2FE00468(L_0, (100.0f), NULL);
		V_0 = L_1;
		// for (int i = 0; i < hits.Length; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_0010:
	{
		// if (hits[i].transform.position == point)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___point1;
		bool L_7;
		L_7 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// for (int i = 0; i < hits.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < hits.Length; i++)
		int32_t L_9 = V_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Ray WordChecker::SelectRay(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 WordChecker_SelectRay_mB58815A86143F91B4BFE734D3E60A856E64E26BA (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var direction = (secondPosition - firstPosition).normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___secondPosition1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___firstPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_2 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_2), NULL);
		V_0 = L_3;
		// float tolerance = 0.01f;
		V_1 = (0.00999999978f);
		// if (Mathf.Abs(direction.x) < tolerance && Mathf.Abs(direction.y - 1f) < tolerance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7 = V_1;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_003f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract(L_9, (1.0f))));
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_003f;
		}
	}
	{
		// return _rayUp;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12 = __this->____rayUp_8;
		return L_12;
	}

IL_003f:
	{
		// if (Mathf.Abs(direction.x) < tolerance && Mathf.Abs(direction.y - (-1f)) < tolerance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___x_0;
		float L_15;
		L_15 = fabsf(L_14);
		float L_16 = V_1;
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_0068;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___y_1;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract(L_18, (-1.0f))));
		float L_20 = V_1;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_0068;
		}
	}
	{
		// return _rayDown;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_21 = __this->____rayDown_9;
		return L_21;
	}

IL_0068:
	{
		// if (Mathf.Abs(direction.x - (-1f)) < tolerance && Mathf.Abs(direction.y) < tolerance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		float L_23 = L_22.___x_0;
		float L_24;
		L_24 = fabsf(((float)il2cpp_codegen_subtract(L_23, (-1.0f))));
		float L_25 = V_1;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_0;
		float L_27 = L_26.___y_1;
		float L_28;
		L_28 = fabsf(L_27);
		float L_29 = V_1;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0091;
		}
	}
	{
		// return _rayLeft;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_30 = __this->____rayLeft_10;
		return L_30;
	}

IL_0091:
	{
		// if (Mathf.Abs(direction.x - 1f) < tolerance && Mathf.Abs(direction.y) < tolerance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		float L_32 = L_31.___x_0;
		float L_33;
		L_33 = fabsf(((float)il2cpp_codegen_subtract(L_32, (1.0f))));
		float L_34 = V_1;
		if ((!(((float)L_33) < ((float)L_34))))
		{
			goto IL_00ba;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_0;
		float L_36 = L_35.___y_1;
		float L_37;
		L_37 = fabsf(L_36);
		float L_38 = V_1;
		if ((!(((float)L_37) < ((float)L_38))))
		{
			goto IL_00ba;
		}
	}
	{
		// return _rayRight;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_39 = __this->____rayRight_11;
		return L_39;
	}

IL_00ba:
	{
		// if (direction.x < 0f && direction.y > 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_0;
		float L_41 = L_40.___x_0;
		if ((!(((float)L_41) < ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_0;
		float L_43 = L_42.___y_1;
		if ((!(((float)L_43) > ((float)(0.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		// return _rayDiagonalLeftUp;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_44 = __this->____rayDiagonalLeftUp_12;
		return L_44;
	}

IL_00db:
	{
		// if (direction.x < 0f && direction.y < 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_0;
		float L_46 = L_45.___x_0;
		if ((!(((float)L_46) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_0;
		float L_48 = L_47.___y_1;
		if ((!(((float)L_48) < ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		// return _rayDiagonalLeftDown;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_49 = __this->____rayDiagonalLeftDown_13;
		return L_49;
	}

IL_00fc:
	{
		// if (direction.x > 0f && direction.y > 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_0;
		float L_51 = L_50.___x_0;
		if ((!(((float)L_51) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_0;
		float L_53 = L_52.___y_1;
		if ((!(((float)L_53) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		// return _rayDiagonalRightUp;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_54 = __this->____rayDiagonalRightUp_14;
		return L_54;
	}

IL_011d:
	{
		// if (direction.x > 0f && direction.y < 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_0;
		float L_56 = L_55.___x_0;
		if ((!(((float)L_56) > ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_0;
		float L_58 = L_57.___y_1;
		if ((!(((float)L_58) < ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		// return _rayDiagonalRightDown;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_59 = __this->____rayDiagonalRightDown_15;
		return L_59;
	}

IL_013e:
	{
		// return _rayDown;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_60 = __this->____rayDown_9;
		return L_60;
	}
}
// System.Void WordChecker::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker_ClearSelection_m8DD5E2971CE059417EDCC2A10207A429D685260E (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _assignedPoints = 0;
		__this->____assignedPoints_6 = 0;
		// _correctSquareList.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->____correctSquareList_18;
		NullCheck(L_0);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_0, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// _word = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____word_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____word_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void WordChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordChecker__ctor_m639F25FAA9358D495DC6B5695812C0E54313D75C (WordChecker_tC78F84710EC0F3B902753FBE600726B03BA759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> _correctSquareList = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->____correctSquareList_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____correctSquareList_18), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WordsGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_Start_mFA9ADA24012E31AAF4B4F793BD985BB2C7E6D831 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) 
{
	{
		// SpawnGridSquares();
		WordsGrid_SpawnGridSquares_m51D74BE290DF268ABEF4735C1CDC3E9B15EBB3BC(__this, NULL);
		// SetSquarePosition();
		WordsGrid_SetSquarePosition_mC81D5C5FED780BADD60D2EE4679C823FED6D002B(__this, NULL);
		// }
		return;
	}
}
// System.Void WordsGrid::SetSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SetSquarePosition_mC81D5C5FED780BADD60D2EE4679C823FED6D002B (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____squareList_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_2, NULL);
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_3, NULL);
		V_0 = L_4;
		// var squareTransform = _squareList[0].GetComponent<Transform>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____squareList_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_6, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		V_1 = L_7;
		// var offset = new Vector2
		// {
		//     x = (squareRect.width * squareTransform.localScale.x + squareOffset) * 0.01f,
		//     y = (squareRect.height * squareTransform.localScale.y + squareOffset) * 0.01f
		// };
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___x_2;
		float L_12 = __this->___squareOffset_7;
		(&V_6)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_11)), L_12)), (0.00999999978f)));
		float L_13;
		L_13 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		float L_16 = L_15.___y_3;
		float L_17 = __this->___squareOffset_7;
		(&V_6)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_16)), L_17)), (0.00999999978f)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_6;
		V_2 = L_18;
		// var startPosition = GetFirstSquarePosition();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = WordsGrid_GetFirstSquarePosition_mF13A6AD2C5FF687F4CB6FCEA12F9702178DC0FC9(__this, NULL);
		V_3 = L_19;
		// int columnNumber = 0;
		V_4 = 0;
		// int rowNumber = 0;
		V_5 = 0;
		// foreach(var square in _squareList)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->____squareList_9;
		NullCheck(L_20);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_21;
		L_21 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_20, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_7 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0118:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_7), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010d_1;
			}

IL_00a3_1:
			{
				// foreach(var square in _squareList)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
				L_22 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_7), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// if(rowNumber + 1 > currentGameData.selectBoardData.Rows)
				int32_t L_23 = V_5;
				GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_24 = __this->___currentGameData_4;
				NullCheck(L_24);
				BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_25 = L_24->___selectBoardData_5;
				NullCheck(L_25);
				int32_t L_26 = L_25->___Rows_5;
				G_B3_0 = L_22;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_23, 1))) <= ((int32_t)L_26)))
				{
					G_B4_0 = L_22;
					goto IL_00c9_1;
				}
			}
			{
				// columnNumber++;
				int32_t L_27 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
				// rowNumber = 0;
				V_5 = 0;
				G_B4_0 = G_B3_0;
			}

IL_00c9_1:
			{
				// var positionX = startPosition.x + offset.x * columnNumber;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_3;
				float L_29 = L_28.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_2;
				float L_31 = L_30.___x_0;
				int32_t L_32 = V_4;
				V_8 = ((float)il2cpp_codegen_add(L_29, ((float)il2cpp_codegen_multiply(L_31, ((float)L_32)))));
				// var positionY = startPosition.y - offset.y * rowNumber;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_3;
				float L_34 = L_33.___y_1;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_2;
				float L_36 = L_35.___y_1;
				int32_t L_37 = V_5;
				V_9 = ((float)il2cpp_codegen_subtract(L_34, ((float)il2cpp_codegen_multiply(L_36, ((float)L_37)))));
				// square.GetComponent<Transform>().position = new Vector2(positionX, positionY);
				NullCheck(G_B4_0);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
				L_38 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(G_B4_0, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
				float L_39 = V_8;
				float L_40 = V_9;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
				memset((&L_41), 0, sizeof(L_41));
				Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), L_39, L_40, /*hidden argument*/NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_41, NULL);
				NullCheck(L_38);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_42, NULL);
				// rowNumber++;
				int32_t L_43 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
			}

IL_010d_1:
			{
				// foreach(var square in _squareList)
				bool L_44;
				L_44 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_7), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_00a3_1;
				}
			}
			{
				goto IL_0126;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0126:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 WordsGrid::GetFirstSquarePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WordsGrid_GetFirstSquarePosition_mF13A6AD2C5FF687F4CB6FCEA12F9702178DC0FC9 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B2_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B3_1 = NULL;
	{
		// var startPosition = new Vector2(0f, transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.0f), L_2, NULL);
		// var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->____squareList_9;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_4, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_5, NULL);
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_6, NULL);
		V_1 = L_7;
		// var squareTransform = _squareList[0].GetComponent<Transform>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->____squareList_9;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_9, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		V_2 = L_10;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (0.0f), (0.0f), NULL);
		// squareSize.x = squareRect.width * squareTransform.localScale.x;
		float L_11;
		L_11 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_2;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		float L_14 = L_13.___x_2;
		(&V_3)->___x_0 = ((float)il2cpp_codegen_multiply(L_11, L_14));
		// squareSize.y = squareRect.height * squareTransform.localScale.y;
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_2;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_16, NULL);
		float L_18 = L_17.___y_3;
		(&V_3)->___y_1 = ((float)il2cpp_codegen_multiply(L_15, L_18));
		// var midWidthPosition = (((currentGameData.selectBoardData.Columns - 1) * squareSize.x) / 2) * 0.01f;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_19 = __this->___currentGameData_4;
		NullCheck(L_19);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_20 = L_19->___selectBoardData_5;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Columns_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_3;
		float L_23 = L_22.___x_0;
		V_4 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_21, 1))), L_23))/(2.0f))), (0.00999999978f)));
		// var midWidthHeight = (((currentGameData.selectBoardData.Rows - 1) * squareSize.y) / 2) * 0.01f;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_24 = __this->___currentGameData_4;
		NullCheck(L_24);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_25 = L_24->___selectBoardData_5;
		NullCheck(L_25);
		int32_t L_26 = L_25->___Rows_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_3;
		float L_28 = L_27.___y_1;
		V_5 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_26, 1))), L_28))/(2.0f))), (0.00999999978f)));
		// startPosition.x = (midWidthPosition != 0) ? midWidthPosition * -1 : midWidthPosition;
		float L_29 = V_4;
		G_B1_0 = (&V_0);
		if ((!(((float)L_29) == ((float)(0.0f)))))
		{
			G_B2_0 = (&V_0);
			goto IL_00ee;
		}
	}
	{
		float L_30 = V_4;
		G_B3_0 = L_30;
		G_B3_1 = G_B1_0;
		goto IL_00f6;
	}

IL_00ee:
	{
		float L_31 = V_4;
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_31, (-1.0f)));
		G_B3_1 = G_B2_0;
	}

IL_00f6:
	{
		G_B3_1->___x_0 = G_B3_0;
		// startPosition.y += midWidthHeight;
		float* L_32 = (&(&V_0)->___y_1);
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		float L_35 = V_5;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add(L_34, L_35));
		// return startPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_0;
		return L_36;
	}
}
// System.Void WordsGrid::SpawnGridSquares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid_SpawnGridSquares_m51D74BE290DF268ABEF4735C1CDC3E9B15EBB3BC (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9_mFE33C5FFADF52A893F6E241BEC37B368C843DC71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_mFC207CAF050919195710FAE36FFEF9981AE07411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_mB5B17F0ADF41E506D842808345C1201D8BBC559A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mB5444BE999E3DD2C294DD7F758BC2EDBD64B6FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3D4CF51BDA3D91B4F9A8F41FF17C7F7ED944109);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* V_5 = NULL;
	LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* V_6 = NULL;
	LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* V_7 = NULL;
	LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* V_8 = NULL;
	{
		// if(currentGameData != null)
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = __this->___currentGameData_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0208;
		}
	}
	{
		// var squareScale = GetSquareScale(new Vector3(1.5f, 1.5f, 0.1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (1.5f), (1.5f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = WordsGrid_GetSquareScale_mDD713CCF5503429D47D2CCEBEDC04550B950364D(__this, L_2, NULL);
		V_0 = L_3;
		// foreach(var squares in currentGameData.selectBoardData.Board)
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = __this->___currentGameData_4;
		NullCheck(L_4);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_5 = L_4->___selectBoardData_5;
		NullCheck(L_5);
		BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* L_6 = L_5->___Board_7;
		V_1 = L_6;
		V_2 = 0;
		goto IL_01ff;
	}

IL_0044:
	{
		// foreach(var squares in currentGameData.selectBoardData.Board)
		BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// foreach(var squareLetter in squares.Row)
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10->___Row_1;
		V_3 = L_11;
		V_4 = 0;
		goto IL_01f1;
	}

IL_0055:
	{
		U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* L_12 = (U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		U3CU3Ec__DisplayClass9_0__ctor_m3F58EA9007629B06FB470575ECBF5E81E2C156A1(L_12, NULL);
		V_5 = L_12;
		// foreach(var squareLetter in squares.Row)
		U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* L_13 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_3;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		L_13->___squareLetter_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___squareLetter_0), (void*)L_17);
		// var normalLetterData = alphabetData.AlphaBetNormal.Find(data => data.letter == squareLetter);
		AlphabetData_t006844CC8B38C9EAE7DD8D2A9F3AA72F93F11FCA* L_18 = __this->___alphabetData_6;
		NullCheck(L_18);
		List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* L_19 = L_18->___AlphaBetNormal_5;
		U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* L_20 = V_5;
		Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B* L_21 = (Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B*)il2cpp_codegen_object_new(Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Predicate_1__ctor_m28B063FCFFF55480A4CD9C67C4864713835659CE(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_mFC207CAF050919195710FAE36FFEF9981AE07411_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_22;
		L_22 = List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731(L_19, L_21, List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731_RuntimeMethod_var);
		V_6 = L_22;
		// var selectedLetterData = alphabetData.AlphaBetHighlighted.Find(data => data.letter == squareLetter);
		AlphabetData_t006844CC8B38C9EAE7DD8D2A9F3AA72F93F11FCA* L_23 = __this->___alphabetData_6;
		NullCheck(L_23);
		List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* L_24 = L_23->___AlphaBetHighlighted_6;
		U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* L_25 = V_5;
		Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B* L_26 = (Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B*)il2cpp_codegen_object_new(Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Predicate_1__ctor_m28B063FCFFF55480A4CD9C67C4864713835659CE(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_mB5B17F0ADF41E506D842808345C1201D8BBC559A_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_27;
		L_27 = List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731(L_24, L_26, List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731_RuntimeMethod_var);
		V_7 = L_27;
		// var correctLetterData = alphabetData.AlphaBetWrong.Find(data => data.letter == squareLetter);
		AlphabetData_t006844CC8B38C9EAE7DD8D2A9F3AA72F93F11FCA* L_28 = __this->___alphabetData_6;
		NullCheck(L_28);
		List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* L_29 = L_28->___AlphaBetWrong_7;
		U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* L_30 = V_5;
		Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B* L_31 = (Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B*)il2cpp_codegen_object_new(Predicate_1_t827F01D26FEB27290F7AB06E4ADC6693164AA48B_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Predicate_1__ctor_m28B063FCFFF55480A4CD9C67C4864713835659CE(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mB5444BE999E3DD2C294DD7F758BC2EDBD64B6FAB_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_32;
		L_32 = List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731(L_29, L_31, List_1_Find_m000CEB4557C1F27FACF21FDA2842FD0F13788731_RuntimeMethod_var);
		V_8 = L_32;
		// if(normalLetterData.image == null || selectedLetterData.image == null)
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_33 = V_6;
		NullCheck(L_33);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34 = L_33->___image_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_35)
		{
			goto IL_00e2;
		}
	}
	{
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_36 = V_7;
		NullCheck(L_36);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = L_36->___image_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_00fd;
		}
	}

IL_00e2:
	{
		// Debug.LogError("Not Have Same Letter" + squareLetter);
		U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* L_39 = V_5;
		NullCheck(L_39);
		String_t* L_40 = L_39->___squareLetter_0;
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC3D4CF51BDA3D91B4F9A8F41FF17C7F7ED944109, L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_41, NULL);
		goto IL_01eb;
	}

IL_00fd:
	{
		// _squareList.Add(Instantiate(gridSquarePrefab));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_42 = __this->____squareList_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___gridSquarePrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_43, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_42);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_42, L_44, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// _squareList[_squareList.Count - 1].GetComponent<GridSquare>().SetSprite(normalLetterData, correctLetterData, selectedLetterData);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = __this->____squareList_9;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_46 = __this->____squareList_9;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_46, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_45, ((int32_t)il2cpp_codegen_subtract(L_47, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_48);
		GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* L_49;
		L_49 = GameObject_GetComponent_TisGridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9_mFE33C5FFADF52A893F6E241BEC37B368C843DC71(L_48, GameObject_GetComponent_TisGridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9_mFE33C5FFADF52A893F6E241BEC37B368C843DC71_RuntimeMethod_var);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_50 = V_6;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_51 = V_8;
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_52 = V_7;
		NullCheck(L_49);
		GridSquare_SetSprite_mCC683D6DC3DFF0A300BEF36045D034D1D3916ACF(L_49, L_50, L_51, L_52, NULL);
		// _squareList[_squareList.Count - 1].transform.SetParent(this.transform);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_53 = __this->____squareList_9;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_54 = __this->____squareList_9;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_54, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_53, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_57);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_57, L_58, NULL);
		// _squareList[_squareList.Count - 1].GetComponent<Transform>().position = new Vector3(0f, 0f, 0f);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_59 = __this->____squareList_9;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_60 = __this->____squareList_9;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_60, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_59, ((int32_t)il2cpp_codegen_subtract(L_61, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_62, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_64), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_63, L_64, NULL);
		// _squareList[_squareList.Count - 1].transform.localScale = squareScale;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_65 = __this->____squareList_9;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_66 = __this->____squareList_9;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_66, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_65, ((int32_t)il2cpp_codegen_subtract(L_67, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_0;
		NullCheck(L_69);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_69, L_70, NULL);
		// _squareList[_squareList.Count - 1].GetComponent<GridSquare>().SetIndex(_squareList.Count - 1);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_71 = __this->____squareList_9;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_72 = __this->____squareList_9;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_72, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_71);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_71, ((int32_t)il2cpp_codegen_subtract(L_73, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_74);
		GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* L_75;
		L_75 = GameObject_GetComponent_TisGridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9_mFE33C5FFADF52A893F6E241BEC37B368C843DC71(L_74, GameObject_GetComponent_TisGridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9_mFE33C5FFADF52A893F6E241BEC37B368C843DC71_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_76 = __this->____squareList_9;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_76, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_75);
		GridSquare_SetIndex_m1C36FAE91DAB3A4D7627F88C01B015EBD1ED445E_inline(L_75, ((int32_t)il2cpp_codegen_subtract(L_77, 1)), NULL);
	}

IL_01eb:
	{
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01f1:
	{
		// foreach(var squareLetter in squares.Row)
		int32_t L_79 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_3;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_01ff:
	{
		// foreach(var squares in currentGameData.selectBoardData.Board)
		int32_t L_82 = V_2;
		BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* L_83 = V_1;
		NullCheck(L_83);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0208:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 WordsGrid::GetSquareScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WordsGrid_GetSquareScale_mDD713CCF5503429D47D2CCEBEDC04550B950364D (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultScale0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var finalScale = defaultScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___defaultScale0;
		V_0 = L_0;
		// var adjustment = 0.01f;
		V_1 = (0.00999999978f);
		goto IL_004e;
	}

IL_000a:
	{
		// finalScale.x -= adjustment;
		float* L_1 = (&(&V_0)->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = V_1;
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract(L_3, L_4));
		// finalScale.y -= adjustment;
		float* L_5 = (&(&V_0)->___y_3);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		float L_8 = V_1;
		*((float*)L_6) = (float)((float)il2cpp_codegen_subtract(L_7, L_8));
		// if(finalScale.x <= 0 || finalScale.y <= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		if ((((float)L_10) <= ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___y_3;
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}

IL_003c:
	{
		// finalScale.x = adjustment;
		float L_13 = V_1;
		(&V_0)->___x_2 = L_13;
		// finalScale.y = adjustment;
		float L_14 = V_1;
		(&V_0)->___y_3 = L_14;
		// return finalScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		return L_15;
	}

IL_004e:
	{
		// while (ShouldScaleDown(finalScale))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		bool L_17;
		L_17 = WordsGrid_ShouldScaleDown_m81F5D28C7474FF36C0972798A7A8B8788C7DB8C8(__this, L_16, NULL);
		if (L_17)
		{
			goto IL_000a;
		}
	}
	{
		// return finalScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		return L_18;
	}
}
// System.Boolean WordsGrid::ShouldScaleDown(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WordsGrid_ShouldScaleDown_m81F5D28C7474FF36C0972798A7A8B8788C7DB8C8 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetScale0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B2_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B3_1 = NULL;
	{
		// var squareRect = gridSquarePrefab.GetComponent<SpriteRenderer>().sprite.rect;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gridSquarePrefab_5;
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2;
		L_2 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_1, NULL);
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_2, NULL);
		V_0 = L_3;
		// var squareSize = new Vector2(0f, 0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (0.0f), (0.0f), NULL);
		// var startPosition = new Vector2(0f, 0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.0f), (0.0f), NULL);
		// squareSize.x = (squareRect.width * targetScale.x) + squareOffset;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetScale0;
		float L_6 = L_5.___x_2;
		float L_7 = __this->___squareOffset_7;
		(&V_1)->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_6)), L_7));
		// squareSize.y = (squareRect.height * targetScale.y) + squareOffset;
		float L_8;
		L_8 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___targetScale0;
		float L_10 = L_9.___y_3;
		float L_11 = __this->___squareOffset_7;
		(&V_1)->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_10)), L_11));
		// var midWidthPosition = ((currentGameData.selectBoardData.Columns * squareSize.x) / 2) * 0.01f;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_12 = __this->___currentGameData_4;
		NullCheck(L_12);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_13 = L_12->___selectBoardData_5;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Columns_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___x_0;
		V_3 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(((float)L_14), L_16))/(2.0f))), (0.00999999978f)));
		// var midWidthHeight = ((currentGameData.selectBoardData.Rows * squareSize.y) / 2) * 0.01f;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_17 = __this->___currentGameData_4;
		NullCheck(L_17);
		BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* L_18 = L_17->___selectBoardData_5;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Rows_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___y_1;
		V_4 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(((float)L_19), L_21))/(2.0f))), (0.00999999978f)));
		// startPosition.x = (midWidthPosition != 0) ? midWidthPosition * -1 : midWidthPosition;
		float L_22 = V_3;
		G_B1_0 = (&V_2);
		if ((!(((float)L_22) == ((float)(0.0f)))))
		{
			G_B2_0 = (&V_2);
			goto IL_00c8;
		}
	}
	{
		float L_23 = V_3;
		G_B3_0 = L_23;
		G_B3_1 = G_B1_0;
		goto IL_00cf;
	}

IL_00c8:
	{
		float L_24 = V_3;
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_24, (-1.0f)));
		G_B3_1 = G_B2_0;
	}

IL_00cf:
	{
		G_B3_1->___x_0 = G_B3_0;
		// startPosition.y = midWidthHeight;
		float L_25 = V_4;
		(&V_2)->___y_1 = L_25;
		// return (startPosition.x < GetHalfScreenWidth() * -1 || startPosition.y > topPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_2;
		float L_27 = L_26.___x_0;
		float L_28;
		L_28 = WordsGrid_GetHalfScreenWidth_m2652D36B02A347A51041A52CFCA7157894537481(__this, NULL);
		if ((((float)L_27) < ((float)((float)il2cpp_codegen_multiply(L_28, (-1.0f))))))
		{
			goto IL_0100;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_2;
		float L_30 = L_29.___y_1;
		float L_31 = __this->___topPosition_8;
		return (bool)((((float)L_30) > ((float)L_31))? 1 : 0);
	}

IL_0100:
	{
		return (bool)1;
	}
}
// System.Single WordsGrid::GetHalfScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WordsGrid_GetHalfScreenWidth_m2652D36B02A347A51041A52CFCA7157894537481 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float height = Camera.main.orthographicSize * 2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, (2.0f)));
		// float width = (1.7f * height) * Screen.width / Screen.height;
		float L_2 = V_0;
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		// return width / 2;
		return ((float)(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.70000005f), L_2)), ((float)L_3)))/((float)L_4)))/(2.0f)));
	}
}
// System.Void WordsGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordsGrid__ctor_mD5C75CE48CF8065A2F55F431EF80B306C346F3C7 (WordsGrid_t601EA6766324B356DFD6C96AEC6FEB3DDE0063F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> _squareList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____squareList_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____squareList_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WordsGrid/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m3F58EA9007629B06FB470575ECBF5E81E2C156A1 (U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__0(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__0_mFC207CAF050919195710FAE36FFEF9981AE07411 (U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* __this, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___data0, const RuntimeMethod* method) 
{
	{
		// var normalLetterData = alphabetData.AlphaBetNormal.Find(data => data.letter == squareLetter);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___letter_0;
		String_t* L_2 = __this->___squareLetter_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__1(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__1_mB5B17F0ADF41E506D842808345C1201D8BBC559A (U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* __this, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___data0, const RuntimeMethod* method) 
{
	{
		// var selectedLetterData = alphabetData.AlphaBetHighlighted.Find(data => data.letter == squareLetter);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___letter_0;
		String_t* L_2 = __this->___squareLetter_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean WordsGrid/<>c__DisplayClass9_0::<SpawnGridSquares>b__2(AlphabetData/LetterData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSpawnGridSquaresU3Eb__2_mB5444BE999E3DD2C294DD7F758BC2EDBD64B6FAB (U3CU3Ec__DisplayClass9_0_t28814C97B782A7B109857BD0E6DAFC7719F0114C* __this, LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* ___data0, const RuntimeMethod* method) 
{
	{
		// var correctLetterData = alphabetData.AlphaBetWrong.Find(data => data.letter == squareLetter);
		LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___letter_0;
		String_t* L_2 = __this->___squareLetter_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void ManageScene::PlayGameButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageScene_PlayGameButton_m35BC25CEB437CA9DB996031FCDF9C9C4ED4DFB00 (ManageScene_t003E4116F0529881A9507E637AA0018019188873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral415181DF2554502614639048A00CF0C5A5C2FD37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Game Scene Loading");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral415181DF2554502614639048A00CF0C5A5C2FD37, NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void ManageScene::BackToMenuScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageScene_BackToMenuScene_m66842BD7FD277E43E07B17563719F879558987B1 (ManageScene_t003E4116F0529881A9507E637AA0018019188873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F00BD7F6D22018CF2ACFEEDF008BAF65B9891D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Menu");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral46F00BD7F6D22018CF2ACFEEDF008BAF65B9891D, NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void ManageScene::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageScene_ExitButton_m57CF7FDB61790654EBC57D62C9788DE37372B213 (ManageScene_t003E4116F0529881A9507E637AA0018019188873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// Debug.Log("Quitting Game");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A, NULL);
		// }
		return;
	}
}
// System.Void ManageScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageScene__ctor_m9ED0619917E064CA5A608F52551E7EBF766D5110 (ManageScene_t003E4116F0529881A9507E637AA0018019188873* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AlphabetData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlphabetData__ctor_m4E4D351BEC81AAB7FF660E5889BFF0D663270673 (AlphabetData_t006844CC8B38C9EAE7DD8D2A9F3AA72F93F11FCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<LetterData> AlphaBetPlane = new List<LetterData>();
		List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* L_0 = (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7*)il2cpp_codegen_object_new(List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A(L_0, List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A_RuntimeMethod_var);
		__this->___AlphaBetPlane_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaBetPlane_4), (void*)L_0);
		// public List<LetterData> AlphaBetNormal = new List<LetterData>();
		List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* L_1 = (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7*)il2cpp_codegen_object_new(List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A(L_1, List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A_RuntimeMethod_var);
		__this->___AlphaBetNormal_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaBetNormal_5), (void*)L_1);
		// public List<LetterData> AlphaBetHighlighted = new List<LetterData>();
		List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* L_2 = (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7*)il2cpp_codegen_object_new(List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A(L_2, List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A_RuntimeMethod_var);
		__this->___AlphaBetHighlighted_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaBetHighlighted_6), (void*)L_2);
		// public List<LetterData> AlphaBetWrong = new List<LetterData>();
		List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7* L_3 = (List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7*)il2cpp_codegen_object_new(List_1_t69CF77092538F72952C846B273A2BA3CFCD297F7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A(L_3, List_1__ctor_m9EAF4E803FA1E3DF62CE5BBC5BA514821D64A58A_RuntimeMethod_var);
		__this->___AlphaBetWrong_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaBetWrong_7), (void*)L_3);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void AlphabetData/LetterData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LetterData__ctor_m9EDF3F466DBBE8A925EAF583EAE8ABF78FADCC91 (LetterData_tCA59FCAE18DC665C5AEC626A79BF4FF9A5E9EB28* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void BoardData::ClearWithEmptyString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_ClearWithEmptyString_m73834EF206717DA9ECF40702FA94AC3939EF032B (BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < Columns; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// Board[i].ClearRow();
		BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* L_0 = __this->___Board_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		BoardRow_ClearRow_mC5DA9CDA2A6C0CA055F427B472FC510DD4B1D9F1(L_3, NULL);
		// for(int i = 0; i < Columns; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for(int i = 0; i < Columns; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___Columns_6;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardData::CreateNewBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData_CreateNewBoard_m46851A3BA9EE19BA33006BB73F51A5428BEAE013 (BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Board = new BoardRow[Columns];
		int32_t L_0 = __this->___Columns_6;
		BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* L_1 = (BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701*)(BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701*)SZArrayNew(BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___Board_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Board_7), (void*)L_1);
		// for(int i = 0; i < Columns; i++)
		V_0 = 0;
		goto IL_002c;
	}

IL_0015:
	{
		// Board[i] = new BoardRow(Rows);
		BoardRowU5BU5D_tC5814E8D598D4F4B06C1AF661B4FE25A4F64B701* L_2 = __this->___Board_7;
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___Rows_5;
		BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* L_5 = (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D*)il2cpp_codegen_object_new(BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BoardRow__ctor_m96B77239877C74CC9C344D03A58E4A73927FE196(L_5, L_4, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D*)L_5);
		// for(int i = 0; i < Columns; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002c:
	{
		// for(int i = 0; i < Columns; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___Columns_6;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData__ctor_mF76596179C922DEB9B3DA8DF6A6DA195D0FFE66E (BoardData_t3A55966E6F704E6F83D40958EEB9FA80FC310839* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA756D0D4927DB16DC52496278EDB00C33B71F87F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SerachingWord> SearchWords = new List<SerachingWord>();
		List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5* L_0 = (List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5*)il2cpp_codegen_object_new(List_1_t7C12B4EBA2CE97DC0D70C102C2204215418791A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA756D0D4927DB16DC52496278EDB00C33B71F87F(L_0, List_1__ctor_mA756D0D4927DB16DC52496278EDB00C33B71F87F_RuntimeMethod_var);
		__this->___SearchWords_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SearchWords_8), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void BoardData/SerachingWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerachingWord__ctor_m4A077BD6A6140873FF8A628083992272D09B9606 (SerachingWord_t8FBDCC2E8EAC0790636C729F2129E61DF58932D1* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void BoardData/BoardRow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_mAAF93B67F6A8E2DCD0FC2661FE25CD784342879C (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* __this, const RuntimeMethod* method) 
{
	{
		// public BoardRow() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public BoardRow() { }
		return;
	}
}
// System.Void BoardData/BoardRow::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow__ctor_m96B77239877C74CC9C344D03A58E4A73927FE196 (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	{
		// public BoardRow(int size)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// CreateRow(size);
		int32_t L_0 = ___size0;
		BoardRow_CreateRow_mAF2418B2AD51BCEB28FA86375044C81704C68163(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BoardData/BoardRow::CreateRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_CreateRow_mAF2418B2AD51BCEB28FA86375044C81704C68163 (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* __this, int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Size = size;
		int32_t L_0 = ___size0;
		__this->___Size_0 = L_0;
		// Row = new string[Size];
		int32_t L_1 = __this->___Size_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___Row_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Row_1), (void*)L_2);
		// ClearRow();
		BoardRow_ClearRow_mC5DA9CDA2A6C0CA055F427B472FC510DD4B1D9F1(__this, NULL);
		// }
		return;
	}
}
// System.Void BoardData/BoardRow::ClearRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardRow_ClearRow_mC5DA9CDA2A6C0CA055F427B472FC510DD4B1D9F1 (BoardRow_tB6BC90BE054F9FC69B107120473309C204F2E26D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Size; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// Row[i] = " ";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___Row_1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		// for (int i = 0; i < Size; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < Size; i++)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___Size_0;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
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
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UImanager::BackToMenuScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UImanager_BackToMenuScene_mD1D51F92529F84C8B22DE2F69362D725E6CE2538 (UImanager_tF102E6D98024ABFC59792E4943074EF919DC7653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F00BD7F6D22018CF2ACFEEDF008BAF65B9891D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Menu");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral46F00BD7F6D22018CF2ACFEEDF008BAF65B9891D, NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void UImanager::SettingsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UImanager_SettingsButton_mB0E738D4275D32109AEA2B95CD318BB99F1A14B8 (UImanager_tF102E6D98024ABFC59792E4943074EF919DC7653* __this, const RuntimeMethod* method) 
{
	{
		// settingspanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___settingspanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UImanager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UImanager__ctor_mDDD86613DDFADCC1D7895928A3B2A9E3B0929099 (UImanager_tF102E6D98024ABFC59792E4943074EF919DC7653* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableSquarrSelection_Invoke_m1A4FB05AF0AC96625AC46289608AB55E3A89ADC6_inline (EnableSquarrSelection_t8ECFCB9B0972A5ED1A63449929DD843EEE0DB487* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisableSquarrSelection_Invoke_m99112397C45EA8FB818E877F6DFE066BA4506E17_inline (DisableSquarrSelection_tDDF7AB908D4114F963A5784F72A4FF0AB707866F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectSquare_Invoke_mEF4B57131916A83DEBF8F9211B1B3EAFC7FDF494_inline (SelectSquare_t3E51BA96D7ACB9FE09DD7C7FBFE04D7F62E5BA50* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckSquare_Invoke_m6742AF679243EE92555B89A8DCF024FF4896EA11_inline (CheckSquare_t41A3890DCA50FEE102F1D8B144FFDBE5F01B1420* __this, String_t* ___letter0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___squarePosition1, int32_t ___squareIndex2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___letter0, ___squarePosition1, ___squareIndex2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClearSelection_Invoke_m2C800A6FABD2FFB44CE8E864214DC358BF628E64_inline (ClearSelection_tE32AEFF45625C9315634226F50E1F1FA56593242* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorrectWord_Invoke_mFEAE2C0098FF0605FABF0C86240EAED428E0B3D3_inline (CorrectWord_tB3850D82F0B9FEF9E387A3B64DFAADAB345BB021* __this, String_t* ___word0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___squareIndexes1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___word0, ___squareIndexes1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridSquare_SetIndex_m1C36FAE91DAB3A4D7627F88C01B015EBD1ED445E_inline (GridSquare_t0131B823592176E80D5034A1B9B927125DF6BDB9* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// _index = index;
		int32_t L_0 = ___index0;
		__this->____index_11 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
