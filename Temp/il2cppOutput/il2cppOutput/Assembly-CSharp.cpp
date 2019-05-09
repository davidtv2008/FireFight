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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// CameraScript
struct CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9;
// DynamicJoystick
struct DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3;
// FixedJoystick
struct FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909;
// FloatingJoystick
struct FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE;
// GlobalMenuSettings
struct GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F;
// Joystick
struct Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153;
// JoystickPlayerExample
struct JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B;
// MainMenu
struct MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// PlayerFollow
struct PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44;
// SettingMenu
struct SettingMenu_t916966B465884B09DD2FC567FAAF6B9DE68AA1FC;
// SpawnEffect
struct SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Light
struct Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ParticleSystem
struct ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// VariableJoystick
struct VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1;
// bullet
struct bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485;
// grenade
struct grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B;
// rotateItem
struct rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2;
// weapon
struct weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0B67BCB7ECF77640A7DD122D98182E7BC9ADD4;
IL2CPP_EXTERN_C String_t* _stringLiteral55462EDFC4A6F4D63E783DB0953BD95A56457C94;
IL2CPP_EXTERN_C String_t* _stringLiteral5D7C40D5B4E7B8F3996A6D8FEDC2F787F617AE10;
IL2CPP_EXTERN_C String_t* _stringLiteral6213D87FE9D00CF2D48363117E712A9F7EBC38C8;
IL2CPP_EXTERN_C String_t* _stringLiteral7457A31B18BBDD7E408754A065EB0C62004C8AB9;
IL2CPP_EXTERN_C String_t* _stringLiteral795F5D25A9EED1B2BC579E58B28B5F83D6A91DE0;
IL2CPP_EXTERN_C String_t* _stringLiteral8361AECAFF9699EE92046CF63CFE55FF07AF45B0;
IL2CPP_EXTERN_C String_t* _stringLiteral85FACCF147F274EE861A14CFE5B0E00B532DA704;
IL2CPP_EXTERN_C String_t* _stringLiteral89237C10E4CCB19DEE5058F837F53F40241C4CF2;
IL2CPP_EXTERN_C String_t* _stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8B5EF922C084718FE4A712BAD2DBCF6F03DE3BF5;
IL2CPP_EXTERN_C String_t* _stringLiteral90C6D02D08CC600EA95DC8F75FE893A4C2F45CFA;
IL2CPP_EXTERN_C String_t* _stringLiteral92F4D3D10A9B0B91112F4263A4EA054E647A04D7;
IL2CPP_EXTERN_C String_t* _stringLiteral99A706CF3E35F3569AD85164E9B84F4B85BD1365;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F80B87A456136FC59C442BD1EE5B5EEC2430F1;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5DB7D82232EE34651EB5ADEA59B01C839EB843;
IL2CPP_EXTERN_C String_t* _stringLiteralABD528CB7E10C88ABBFAB8FFB934FAC181FAAA38;
IL2CPP_EXTERN_C String_t* _stringLiteralAD485FCCB6BB55D73A60E516839AD068C9355524;
IL2CPP_EXTERN_C String_t* _stringLiteralB95CC0307A22FCE9FB0DD782BE9B7EB3AA28A500;
IL2CPP_EXTERN_C String_t* _stringLiteralBA04BAA7A66487BC0D36043BBC76BA30238ACFC8;
IL2CPP_EXTERN_C String_t* _stringLiteralC9067536F743F5970C82AA9DD3972C8D934FA0ED;
IL2CPP_EXTERN_C String_t* _stringLiteralD387FC8D57B2E3DCCC525701C8A6C2C147FF9ED6;
IL2CPP_EXTERN_C String_t* _stringLiteralD4DD3FB9CAF6F0B9CCBDF736E8D6D1719955ADC7;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDB35D817301314500FA8FE439B892E78CF4E35;
IL2CPP_EXTERN_C String_t* _stringLiteralEABCFFD8D5120B660823E2C294A8DC252DA5EA29;
IL2CPP_EXTERN_C String_t* _stringLiteralECE09C976071AC396C77DA00CB99C4CC6A303882;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBCA33CB19EA771A973C2C2F0D980CF1E226D2D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6AA0C1FCE3063B930A46E28AFEC2B13155A5DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_m1EA72F4E77845E10925C7087C1BF17A239B7ED72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mBF61E1B11A3E789325754107630F031A52645819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisweapon_t7841363E78E26D7B2E50A190197D3B06093E90A3_mBBD465D545B8C25EB8CE21968DE1AA1496019B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DynamicJoystick_HandleInput_mB6316E3D97C617061C01DC49DD829C0C4E91BB27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalMenuSettings_Awake_mABA2437D4D4DE87431631B182EA6FF4A2C4C2EB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JoystickPlayerExample_FixedUpdate_m01D558819D864B0B36B12AECB92B7A9FE76D63B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JoystickPlayerExample_Twist_m6430EE8D40F00CBECDDB136633F5B476A0E0F7E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_Bullets3_mF0578D7BFCE018B8154136008ABC380310922CFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_Bullets6_m93F9431850818504E9D0D9ABFDA9C9FB3F9FDD88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_Bullets9_m475AC664B35565020CC385704EDD29CF198407A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_CreditsMenu_m7E458374951B69A49CA17B72B2128C270F7AFA3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_Lives3_mE08D33A73205139DBAB87C732FDB64CCC63C9BB3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_Lives6_mC80ED879346B1BD3DF2810EC819287874EB43C00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_Lives9_mE280C9A12ADAF87DA800C9827156D43E324D3261_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_MainScreen_m108798A8E130AD334602A57EA6DD80A7D8CD3980_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_MultiPlayerGame_mCFD4B39612EBE7377146CA2622C08616158B2A5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_OptionsMenu_m9B3F82E06E90E8FD52E9284ACCD3685543A34951_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_PlayGame_m4CD3D61E23D84AD1A018C84D561EAE39ED2D76F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_ReturnMainMenu_m77C8DDB965A6525FAA2AD6D60BF02DD2D9927F28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MainMenu_RulesMenu_m962A1447420FA1352CC213E6A07695FFAC9C4AE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerFollow_LateUpdate_m01C2A796616EA69E63694035B3C4C4D109CA4FD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerFollow_Start_m45B0D37EE4C9E519066E00B6D994386E3CBA5E0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_fire_m46CEA96C2F441B7EA90A5661B6252C75319C5C13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_placeMine_m5D76ED9671D5C60D2FC1D0B202CA918ACC77080F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SettingMenu_SetVolume_m00BFC6940934BEF45AAB2A3A79521943F3B66508_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnEffect_Start_m01141C51E61294B6F430D91538D3AEACB0ADEEC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnEffect_Update_m9BFB6D6027F05B6CD5F33CA53F0FCE35F1E56C4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_HandleInput_m83CA8AFC5C395DE4C684F2C478D1DE36CAD0BF19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_set_MoveThreshold_m70CF65250847566A28B2A418C3EE55004987552F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t bullet_OnTriggerEnter_m7F8562BBBCDC83E2C6B9908F9F9D81B3395FB0CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t bullet_Start_m6984E4607C6F7D7DE55E01444C27B3FF9BDAAA01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t bullet_Update_mD9103101FB1623BD2B150BE839E521F71203BEF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t grenade_Explode_m0367FF58C7E095BF9B9C19E263D8DA667BC24A29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t grenade_OnTriggerEnter_m99FE32E9C39BDE8F760142B2AC0C17DB2DBCB1A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t grenade_Start_m331F6950A69FAAAFB4BDEB817A1910E15C673D1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t grenade_Update_mCCCBC63FD4E3B73930AF1B0AF995F963E26BC921_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t rotateItem_OnTriggerEnter_m63AF1F6BCC4C880290B3BF50742E57970ABB0581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t rotateItem_Update_m4E761399333418B6B394910DB3634308C09AEEC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t weapon_placeMine_mF82B70E0FF98A7FC14E2A37945167A89FF178FB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t weapon_shootBullet_m43E8C18EDD1053B91A2BEA64B708E006F79D371B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t weapon_shootGrenade_mF6DFE409A6565CD72A257B2391526D15B816F912_MetadataUsageId;

struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.ParticleSystem_MainModule
struct  MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem_MainModule::m_ParticleSystem
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshaled_pinvoke
{
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshaled_com
{
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___m_ParticleSystem_0;
};

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// AxisOptions
struct  AxisOptions_t5AC84B43FFEB20E770F1E4CF5EC2D3AADA9D18D0 
{
public:
	// System.Int32 AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_t5AC84B43FFEB20E770F1E4CF5EC2D3AADA9D18D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JoystickType
struct  JoystickType_t8F089F639C0CED5CA78941C78E1CC72EB61892B6 
{
public:
	// System.Int32 JoystickType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickType_t8F089F639C0CED5CA78941C78E1CC72EB61892B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};

// UnityEngine.ForceMode
struct  ForceMode_t76188FF14D0038E184106555207A81218E97D0A5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t76188FF14D0038E184106555207A81218E97D0A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct  LightType_t5B27FCCF8FBDFA21F5A34A48BB8333C05889DD0B 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t5B27FCCF8FBDFA21F5A34A48BB8333C05889DD0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderMode
struct  RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Audio.AudioMixer
struct  AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.Light
struct  Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// CameraScript
struct  CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// GlobalMenuSettings
struct  GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 GlobalMenuSettings::player_lives
	int32_t ___player_lives_4;
	// System.Boolean GlobalMenuSettings::single_player_mode
	bool ___single_player_mode_5;
	// System.Int32 GlobalMenuSettings::bullets
	int32_t ___bullets_6;
	// System.Int32 GlobalMenuSettings::level
	int32_t ___level_7;
	// System.Single GlobalMenuSettings::volume
	float ___volume_8;

public:
	inline static int32_t get_offset_of_player_lives_4() { return static_cast<int32_t>(offsetof(GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F, ___player_lives_4)); }
	inline int32_t get_player_lives_4() const { return ___player_lives_4; }
	inline int32_t* get_address_of_player_lives_4() { return &___player_lives_4; }
	inline void set_player_lives_4(int32_t value)
	{
		___player_lives_4 = value;
	}

	inline static int32_t get_offset_of_single_player_mode_5() { return static_cast<int32_t>(offsetof(GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F, ___single_player_mode_5)); }
	inline bool get_single_player_mode_5() const { return ___single_player_mode_5; }
	inline bool* get_address_of_single_player_mode_5() { return &___single_player_mode_5; }
	inline void set_single_player_mode_5(bool value)
	{
		___single_player_mode_5 = value;
	}

	inline static int32_t get_offset_of_bullets_6() { return static_cast<int32_t>(offsetof(GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F, ___bullets_6)); }
	inline int32_t get_bullets_6() const { return ___bullets_6; }
	inline int32_t* get_address_of_bullets_6() { return &___bullets_6; }
	inline void set_bullets_6(int32_t value)
	{
		___bullets_6 = value;
	}

	inline static int32_t get_offset_of_level_7() { return static_cast<int32_t>(offsetof(GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F, ___level_7)); }
	inline int32_t get_level_7() const { return ___level_7; }
	inline int32_t* get_address_of_level_7() { return &___level_7; }
	inline void set_level_7(int32_t value)
	{
		___level_7 = value;
	}

	inline static int32_t get_offset_of_volume_8() { return static_cast<int32_t>(offsetof(GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F, ___volume_8)); }
	inline float get_volume_8() const { return ___volume_8; }
	inline float* get_address_of_volume_8() { return &___volume_8; }
	inline void set_volume_8(float value)
	{
		___volume_8 = value;
	}
};


// Joystick
struct  Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___input_14;

public:
	inline static int32_t get_offset_of_handleRange_4() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handleRange_4)); }
	inline float get_handleRange_4() const { return ___handleRange_4; }
	inline float* get_address_of_handleRange_4() { return &___handleRange_4; }
	inline void set_handleRange_4(float value)
	{
		___handleRange_4 = value;
	}

	inline static int32_t get_offset_of_deadZone_5() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___deadZone_5)); }
	inline float get_deadZone_5() const { return ___deadZone_5; }
	inline float* get_address_of_deadZone_5() { return &___deadZone_5; }
	inline void set_deadZone_5(float value)
	{
		___deadZone_5 = value;
	}

	inline static int32_t get_offset_of_axisOptions_6() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___axisOptions_6)); }
	inline int32_t get_axisOptions_6() const { return ___axisOptions_6; }
	inline int32_t* get_address_of_axisOptions_6() { return &___axisOptions_6; }
	inline void set_axisOptions_6(int32_t value)
	{
		___axisOptions_6 = value;
	}

	inline static int32_t get_offset_of_snapX_7() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___snapX_7)); }
	inline bool get_snapX_7() const { return ___snapX_7; }
	inline bool* get_address_of_snapX_7() { return &___snapX_7; }
	inline void set_snapX_7(bool value)
	{
		___snapX_7 = value;
	}

	inline static int32_t get_offset_of_snapY_8() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___snapY_8)); }
	inline bool get_snapY_8() const { return ___snapY_8; }
	inline bool* get_address_of_snapY_8() { return &___snapY_8; }
	inline void set_snapY_8(bool value)
	{
		___snapY_8 = value;
	}

	inline static int32_t get_offset_of_background_9() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___background_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_background_9() const { return ___background_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_background_9() { return &___background_9; }
	inline void set_background_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___background_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_9), (void*)value);
	}

	inline static int32_t get_offset_of_handle_10() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handle_10)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_handle_10() const { return ___handle_10; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_handle_10() { return &___handle_10; }
	inline void set_handle_10(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___handle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_10), (void*)value);
	}

	inline static int32_t get_offset_of_baseRect_11() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___baseRect_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_baseRect_11() const { return ___baseRect_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_baseRect_11() { return &___baseRect_11; }
	inline void set_baseRect_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___baseRect_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseRect_11), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_12() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___canvas_12)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_canvas_12() const { return ___canvas_12; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_canvas_12() { return &___canvas_12; }
	inline void set_canvas_12(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___canvas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_12), (void*)value);
	}

	inline static int32_t get_offset_of_cam_13() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___cam_13)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cam_13() const { return ___cam_13; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cam_13() { return &___cam_13; }
	inline void set_cam_13(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cam_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_13), (void*)value);
	}

	inline static int32_t get_offset_of_input_14() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___input_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_input_14() const { return ___input_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_input_14() { return &___input_14; }
	inline void set_input_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___input_14 = value;
	}
};


// JoystickPlayerExample
struct  JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_variableJoystick_5() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B, ___variableJoystick_5)); }
	inline VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * get_variableJoystick_5() const { return ___variableJoystick_5; }
	inline VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 ** get_address_of_variableJoystick_5() { return &___variableJoystick_5; }
	inline void set_variableJoystick_5(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * value)
	{
		___variableJoystick_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableJoystick_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B, ___rb_6)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}
};


// MainMenu
struct  MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.EventSystems.EventSystem MainMenu::es
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___es_4;

public:
	inline static int32_t get_offset_of_es_4() { return static_cast<int32_t>(offsetof(MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105, ___es_4)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_es_4() const { return ___es_4; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_es_4() { return &___es_4; }
	inline void set_es_4(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___es_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___es_4), (void*)value);
	}
};


// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// PlayerFollow
struct  PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform PlayerFollow::PlayerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___PlayerTransform_4;
	// UnityEngine.Vector3 PlayerFollow::_cameraOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____cameraOffset_5;
	// System.Single PlayerFollow::SmoothFactor
	float ___SmoothFactor_6;

public:
	inline static int32_t get_offset_of_PlayerTransform_4() { return static_cast<int32_t>(offsetof(PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44, ___PlayerTransform_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_PlayerTransform_4() const { return ___PlayerTransform_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_PlayerTransform_4() { return &___PlayerTransform_4; }
	inline void set_PlayerTransform_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___PlayerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of__cameraOffset_5() { return static_cast<int32_t>(offsetof(PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44, ____cameraOffset_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__cameraOffset_5() const { return ____cameraOffset_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__cameraOffset_5() { return &____cameraOffset_5; }
	inline void set__cameraOffset_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____cameraOffset_5 = value;
	}

	inline static int32_t get_offset_of_SmoothFactor_6() { return static_cast<int32_t>(offsetof(PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44, ___SmoothFactor_6)); }
	inline float get_SmoothFactor_6() const { return ___SmoothFactor_6; }
	inline float* get_address_of_SmoothFactor_6() { return &___SmoothFactor_6; }
	inline void set_SmoothFactor_6(float value)
	{
		___SmoothFactor_6 = value;
	}
};


// SettingMenu
struct  SettingMenu_t916966B465884B09DD2FC567FAAF6B9DE68AA1FC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Audio.AudioMixer SettingMenu::audioMixer
	AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F * ___audioMixer_4;

public:
	inline static int32_t get_offset_of_audioMixer_4() { return static_cast<int32_t>(offsetof(SettingMenu_t916966B465884B09DD2FC567FAAF6B9DE68AA1FC, ___audioMixer_4)); }
	inline AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F * get_audioMixer_4() const { return ___audioMixer_4; }
	inline AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F ** get_address_of_audioMixer_4() { return &___audioMixer_4; }
	inline void set_audioMixer_4(AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F * value)
	{
		___audioMixer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioMixer_4), (void*)value);
	}
};


// SpawnEffect
struct  SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single SpawnEffect::spawnEffectTime
	float ___spawnEffectTime_4;
	// System.Single SpawnEffect::pause
	float ___pause_5;
	// UnityEngine.AnimationCurve SpawnEffect::fadeIn
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___fadeIn_6;
	// UnityEngine.ParticleSystem SpawnEffect::ps
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___ps_7;
	// System.Single SpawnEffect::timer
	float ___timer_8;
	// UnityEngine.Renderer SpawnEffect::_renderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ____renderer_9;
	// System.Int32 SpawnEffect::shaderProperty
	int32_t ___shaderProperty_10;

public:
	inline static int32_t get_offset_of_spawnEffectTime_4() { return static_cast<int32_t>(offsetof(SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D, ___spawnEffectTime_4)); }
	inline float get_spawnEffectTime_4() const { return ___spawnEffectTime_4; }
	inline float* get_address_of_spawnEffectTime_4() { return &___spawnEffectTime_4; }
	inline void set_spawnEffectTime_4(float value)
	{
		___spawnEffectTime_4 = value;
	}

	inline static int32_t get_offset_of_pause_5() { return static_cast<int32_t>(offsetof(SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D, ___pause_5)); }
	inline float get_pause_5() const { return ___pause_5; }
	inline float* get_address_of_pause_5() { return &___pause_5; }
	inline void set_pause_5(float value)
	{
		___pause_5 = value;
	}

	inline static int32_t get_offset_of_fadeIn_6() { return static_cast<int32_t>(offsetof(SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D, ___fadeIn_6)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_fadeIn_6() const { return ___fadeIn_6; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_fadeIn_6() { return &___fadeIn_6; }
	inline void set_fadeIn_6(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___fadeIn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeIn_6), (void*)value);
	}

	inline static int32_t get_offset_of_ps_7() { return static_cast<int32_t>(offsetof(SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D, ___ps_7)); }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * get_ps_7() const { return ___ps_7; }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D ** get_address_of_ps_7() { return &___ps_7; }
	inline void set_ps_7(ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * value)
	{
		___ps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ps_7), (void*)value);
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D, ___timer_8)); }
	inline float get_timer_8() const { return ___timer_8; }
	inline float* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(float value)
	{
		___timer_8 = value;
	}

	inline static int32_t get_offset_of__renderer_9() { return static_cast<int32_t>(offsetof(SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D, ____renderer_9)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get__renderer_9() const { return ____renderer_9; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of__renderer_9() { return &____renderer_9; }
	inline void set__renderer_9(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		____renderer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____renderer_9), (void*)value);
	}

	inline static int32_t get_offset_of_shaderProperty_10() { return static_cast<int32_t>(offsetof(SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D, ___shaderProperty_10)); }
	inline int32_t get_shaderProperty_10() const { return ___shaderProperty_10; }
	inline int32_t* get_address_of_shaderProperty_10() { return &___shaderProperty_10; }
	inline void set_shaderProperty_10(int32_t value)
	{
		___shaderProperty_10 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// bullet
struct  bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single bullet::speed
	float ___speed_4;
	// UnityEngine.Rigidbody bullet::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_5;
	// System.Single bullet::timeLeft
	float ___timeLeft_6;
	// System.Single bullet::x
	float ___x_7;
	// System.Single bullet::y
	float ___y_8;
	// UnityEngine.AudioClip bullet::bulletSound
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___bulletSound_9;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485, ___rb_5)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeLeft_6() { return static_cast<int32_t>(offsetof(bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485, ___timeLeft_6)); }
	inline float get_timeLeft_6() const { return ___timeLeft_6; }
	inline float* get_address_of_timeLeft_6() { return &___timeLeft_6; }
	inline void set_timeLeft_6(float value)
	{
		___timeLeft_6 = value;
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485, ___x_7)); }
	inline float get_x_7() const { return ___x_7; }
	inline float* get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(float value)
	{
		___x_7 = value;
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485, ___y_8)); }
	inline float get_y_8() const { return ___y_8; }
	inline float* get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(float value)
	{
		___y_8 = value;
	}

	inline static int32_t get_offset_of_bulletSound_9() { return static_cast<int32_t>(offsetof(bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485, ___bulletSound_9)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_bulletSound_9() const { return ___bulletSound_9; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_bulletSound_9() { return &___bulletSound_9; }
	inline void set_bulletSound_9(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___bulletSound_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletSound_9), (void*)value);
	}
};


// grenade
struct  grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single grenade::speed
	float ___speed_4;
	// UnityEngine.GameObject grenade::explosion
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___explosion_5;
	// UnityEngine.Rigidbody grenade::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_6;
	// UnityEngine.GameObject grenade::lightObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___lightObj_7;
	// System.Single grenade::timeLeft
	float ___timeLeft_8;
	// System.Int32 grenade::loopCounterFix
	int32_t ___loopCounterFix_9;
	// System.Single grenade::x
	float ___x_10;
	// System.Single grenade::y
	float ___y_11;
	// UnityEngine.AudioSource grenade::audioData
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioData_12;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_explosion_5() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___explosion_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_explosion_5() const { return ___explosion_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_explosion_5() { return &___explosion_5; }
	inline void set_explosion_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___explosion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___rb_6)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}

	inline static int32_t get_offset_of_lightObj_7() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___lightObj_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_lightObj_7() const { return ___lightObj_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_lightObj_7() { return &___lightObj_7; }
	inline void set_lightObj_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___lightObj_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightObj_7), (void*)value);
	}

	inline static int32_t get_offset_of_timeLeft_8() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___timeLeft_8)); }
	inline float get_timeLeft_8() const { return ___timeLeft_8; }
	inline float* get_address_of_timeLeft_8() { return &___timeLeft_8; }
	inline void set_timeLeft_8(float value)
	{
		___timeLeft_8 = value;
	}

	inline static int32_t get_offset_of_loopCounterFix_9() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___loopCounterFix_9)); }
	inline int32_t get_loopCounterFix_9() const { return ___loopCounterFix_9; }
	inline int32_t* get_address_of_loopCounterFix_9() { return &___loopCounterFix_9; }
	inline void set_loopCounterFix_9(int32_t value)
	{
		___loopCounterFix_9 = value;
	}

	inline static int32_t get_offset_of_x_10() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___x_10)); }
	inline float get_x_10() const { return ___x_10; }
	inline float* get_address_of_x_10() { return &___x_10; }
	inline void set_x_10(float value)
	{
		___x_10 = value;
	}

	inline static int32_t get_offset_of_y_11() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___y_11)); }
	inline float get_y_11() const { return ___y_11; }
	inline float* get_address_of_y_11() { return &___y_11; }
	inline void set_y_11(float value)
	{
		___y_11 = value;
	}

	inline static int32_t get_offset_of_audioData_12() { return static_cast<int32_t>(offsetof(grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B, ___audioData_12)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioData_12() const { return ___audioData_12; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioData_12() { return &___audioData_12; }
	inline void set_audioData_12(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioData_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioData_12), (void*)value);
	}
};


// rotateItem
struct  rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single rotateItem::rotationSpeed
	float ___rotationSpeed_4;
	// System.Single rotateItem::x
	float ___x_5;
	// UnityEngine.GameObject rotateItem::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_6;
	// UnityEngine.GameObject rotateItem::item
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item_7;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_x_5() { return static_cast<int32_t>(offsetof(rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2, ___x_5)); }
	inline float get_x_5() const { return ___x_5; }
	inline float* get_address_of_x_5() { return &___x_5; }
	inline void set_x_5(float value)
	{
		___x_5 = value;
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2, ___player_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_6() const { return ___player_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_6), (void*)value);
	}

	inline static int32_t get_offset_of_item_7() { return static_cast<int32_t>(offsetof(rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2, ___item_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_item_7() const { return ___item_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_item_7() { return &___item_7; }
	inline void set_item_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___item_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_7), (void*)value);
	}
};


// weapon
struct  weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform weapon::firePoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___firePoint_4;
	// UnityEngine.Transform weapon::minePoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___minePoint_5;
	// UnityEngine.GameObject weapon::flarePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___flarePrefab_6;
	// UnityEngine.GameObject weapon::minePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___minePrefab_7;
	// UnityEngine.GameObject weapon::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_8;
	// System.Int32 weapon::numberBullets
	int32_t ___numberBullets_9;
	// System.Int32 weapon::numberMines
	int32_t ___numberMines_10;

public:
	inline static int32_t get_offset_of_firePoint_4() { return static_cast<int32_t>(offsetof(weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3, ___firePoint_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_firePoint_4() const { return ___firePoint_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_firePoint_4() { return &___firePoint_4; }
	inline void set_firePoint_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___firePoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_minePoint_5() { return static_cast<int32_t>(offsetof(weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3, ___minePoint_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_minePoint_5() const { return ___minePoint_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_minePoint_5() { return &___minePoint_5; }
	inline void set_minePoint_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___minePoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minePoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_flarePrefab_6() { return static_cast<int32_t>(offsetof(weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3, ___flarePrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_flarePrefab_6() const { return ___flarePrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_flarePrefab_6() { return &___flarePrefab_6; }
	inline void set_flarePrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___flarePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flarePrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_minePrefab_7() { return static_cast<int32_t>(offsetof(weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3, ___minePrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_minePrefab_7() const { return ___minePrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_minePrefab_7() { return &___minePrefab_7; }
	inline void set_minePrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___minePrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minePrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3, ___player_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_8() const { return ___player_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_numberBullets_9() { return static_cast<int32_t>(offsetof(weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3, ___numberBullets_9)); }
	inline int32_t get_numberBullets_9() const { return ___numberBullets_9; }
	inline int32_t* get_address_of_numberBullets_9() { return &___numberBullets_9; }
	inline void set_numberBullets_9(int32_t value)
	{
		___numberBullets_9 = value;
	}

	inline static int32_t get_offset_of_numberMines_10() { return static_cast<int32_t>(offsetof(weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3, ___numberMines_10)); }
	inline int32_t get_numberMines_10() const { return ___numberMines_10; }
	inline int32_t* get_address_of_numberMines_10() { return &___numberMines_10; }
	inline void set_numberMines_10(int32_t value)
	{
		___numberMines_10 = value;
	}
};


// DynamicJoystick
struct  DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}
};


// FixedJoystick
struct  FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:

public:
};


// FloatingJoystick
struct  FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mgU24cache0
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_15), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// VariableJoystick
struct  VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___fixedPosition_17;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}

	inline static int32_t get_offset_of_joystickType_16() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___joystickType_16)); }
	inline int32_t get_joystickType_16() const { return ___joystickType_16; }
	inline int32_t* get_address_of_joystickType_16() { return &___joystickType_16; }
	inline void set_joystickType_16(int32_t value)
	{
		___joystickType_16 = value;
	}

	inline static int32_t get_offset_of_fixedPosition_17() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___fixedPosition_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_fixedPosition_17() const { return ___fixedPosition_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_fixedPosition_17() { return &___fixedPosition_17; }
	inline void set_fixedPosition_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___fixedPosition_17 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_35;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_36;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_37;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_38;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_39;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_40;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_41;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_42;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_43;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_44;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_45;
	// System.Boolean UnityEngine.UI.Image::m_UseCache
	bool ___m_UseCache_46;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_47;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_48;

public:
	inline static int32_t get_offset_of_m_Sprite_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_35)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_35() const { return ___m_Sprite_35; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_35() { return &___m_Sprite_35; }
	inline void set_m_Sprite_35(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_36() const { return ___m_OverrideSprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_36() { return &___m_OverrideSprite_36; }
	inline void set_m_OverrideSprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_37)); }
	inline int32_t get_m_Type_37() const { return ___m_Type_37; }
	inline int32_t* get_address_of_m_Type_37() { return &___m_Type_37; }
	inline void set_m_Type_37(int32_t value)
	{
		___m_Type_37 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_38)); }
	inline bool get_m_PreserveAspect_38() const { return ___m_PreserveAspect_38; }
	inline bool* get_address_of_m_PreserveAspect_38() { return &___m_PreserveAspect_38; }
	inline void set_m_PreserveAspect_38(bool value)
	{
		___m_PreserveAspect_38 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_39)); }
	inline bool get_m_FillCenter_39() const { return ___m_FillCenter_39; }
	inline bool* get_address_of_m_FillCenter_39() { return &___m_FillCenter_39; }
	inline void set_m_FillCenter_39(bool value)
	{
		___m_FillCenter_39 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_40)); }
	inline int32_t get_m_FillMethod_40() const { return ___m_FillMethod_40; }
	inline int32_t* get_address_of_m_FillMethod_40() { return &___m_FillMethod_40; }
	inline void set_m_FillMethod_40(int32_t value)
	{
		___m_FillMethod_40 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_41)); }
	inline float get_m_FillAmount_41() const { return ___m_FillAmount_41; }
	inline float* get_address_of_m_FillAmount_41() { return &___m_FillAmount_41; }
	inline void set_m_FillAmount_41(float value)
	{
		___m_FillAmount_41 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_42)); }
	inline bool get_m_FillClockwise_42() const { return ___m_FillClockwise_42; }
	inline bool* get_address_of_m_FillClockwise_42() { return &___m_FillClockwise_42; }
	inline void set_m_FillClockwise_42(bool value)
	{
		___m_FillClockwise_42 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_43)); }
	inline int32_t get_m_FillOrigin_43() const { return ___m_FillOrigin_43; }
	inline int32_t* get_address_of_m_FillOrigin_43() { return &___m_FillOrigin_43; }
	inline void set_m_FillOrigin_43(int32_t value)
	{
		___m_FillOrigin_43 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_44)); }
	inline float get_m_AlphaHitTestMinimumThreshold_44() const { return ___m_AlphaHitTestMinimumThreshold_44; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_44() { return &___m_AlphaHitTestMinimumThreshold_44; }
	inline void set_m_AlphaHitTestMinimumThreshold_44(float value)
	{
		___m_AlphaHitTestMinimumThreshold_44 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_45)); }
	inline bool get_m_Tracked_45() const { return ___m_Tracked_45; }
	inline bool* get_address_of_m_Tracked_45() { return &___m_Tracked_45; }
	inline void set_m_Tracked_45(bool value)
	{
		___m_Tracked_45 = value;
	}

	inline static int32_t get_offset_of_m_UseCache_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseCache_46)); }
	inline bool get_m_UseCache_46() const { return ___m_UseCache_46; }
	inline bool* get_address_of_m_UseCache_46() { return &___m_UseCache_46; }
	inline void set_m_UseCache_46(bool value)
	{
		___m_UseCache_46 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_47)); }
	inline bool get_m_UseSpriteMesh_47() const { return ___m_UseSpriteMesh_47; }
	inline bool* get_address_of_m_UseSpriteMesh_47() { return &___m_UseSpriteMesh_47; }
	inline void set_m_UseSpriteMesh_47(bool value)
	{
		___m_UseSpriteMesh_47 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_48)); }
	inline float get_m_CachedReferencePixelsPerUnit_48() const { return ___m_CachedReferencePixelsPerUnit_48; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_48() { return &___m_CachedReferencePixelsPerUnit_48; }
	inline void set_m_CachedReferencePixelsPerUnit_48(float value)
	{
		___m_CachedReferencePixelsPerUnit_48 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_49;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_50;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_52;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * ___m_TrackedTexturelessImages_53;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_54;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mgU24cache0
	Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * ___U3CU3Ef__mgU24cache0_55;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_34() const { return ___s_ETC1DefaultUI_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_34() { return &___s_ETC1DefaultUI_34; }
	inline void set_s_ETC1DefaultUI_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_49)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_49() const { return ___s_VertScratch_49; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_49() { return &___s_VertScratch_49; }
	inline void set_s_VertScratch_49(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_49), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_50() const { return ___s_UVScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_50() { return &___s_UVScratch_50; }
	inline void set_s_UVScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_51)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_51() const { return ___s_Xy_51; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_51() { return &___s_Xy_51; }
	inline void set_s_Xy_51(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_52() const { return ___s_Uv_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_52() { return &___s_Uv_52; }
	inline void set_s_Uv_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_53)); }
	inline List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * get_m_TrackedTexturelessImages_53() const { return ___m_TrackedTexturelessImages_53; }
	inline List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED ** get_address_of_m_TrackedTexturelessImages_53() { return &___m_TrackedTexturelessImages_53; }
	inline void set_m_TrackedTexturelessImages_53(List_1_t5E6CEE165340A9D74D8BD47B8E6F422DFB7744ED * value)
	{
		___m_TrackedTexturelessImages_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_54)); }
	inline bool get_s_Initialized_54() const { return ___s_Initialized_54; }
	inline bool* get_address_of_s_Initialized_54() { return &___s_Initialized_54; }
	inline void set_s_Initialized_54(bool value)
	{
		___s_Initialized_54 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_55() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___U3CU3Ef__mgU24cache0_55)); }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * get_U3CU3Ef__mgU24cache0_55() const { return ___U3CU3Ef__mgU24cache0_55; }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 ** get_address_of_U3CU3Ef__mgU24cache0_55() { return &___U3CU3Ef__mgU24cache0_55; }
	inline void set_U3CU3Ef__mgU24cache0_55(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * value)
	{
		___U3CU3Ef__mgU24cache0_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_55), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m36052D294AB8C1574678FEF9A9749145A073E8E3_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method);

// System.Void CameraScript::CenterCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_CenterCamera_m1CB229845629765B7482FD0D7B4853423BC5722E (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061 (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method);
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method);
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m41669BF41810BA976B1A230E1FB3ADCDC1F4C758 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m36052D294AB8C1574678FEF9A9749145A073E8E3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mE965F5B0902C2554635010A5752728414A57020A (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m55EEF00D9E42FE542B5346D7CEDAF9248736F7D3 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransformUtility_WorldToScreenPoint_m114DFD961456722DED0FFB2F8DCB46A04C2CCA20 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m0F6D59E75F7605ABD2AFF6AF32A1097226CE060A (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_mEF4FA1379564288637A7CF5E73BA30CA2259E591 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDE5D2FB4C4FB309B92816E806756B01F61FF26D5 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Angle_mC4A140B49B9E737C9FC6B52763468C5662A8B4AC (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * p2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * p3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_pivot_mA5BEEE2069ACA7C0C717530EED3E7D811D46C463 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_anchorMax_m1E51C211FBB32326C884375C9F1E8E8221E5C086 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, int32_t p1, const RuntimeMethod* method);
// System.Void JoystickPlayerExample::Twist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_Twist_m6430EE8D40F00CBECDDB136633F5B476A0E0F7E6 (JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GlobalMenuSettings>()
inline GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_mB309881930DF5D4B389D2B502AAF70AD568D839F (EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m9BDEA496607AEB0DA6B79D7C2623E38D38CFA1E1 (AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * Component_GetComponentInChildren_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6AA0C1FCE3063B930A46E28AFEC2B13155A5DC0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m0A52F3C5B5FF663BE30EF619B4D961185A4C97EC_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  ParticleSystem_get_main_m360B0AA57C71DE0358B6B07133C68B5FD88C742F (ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_duration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_duration_mACCA0ACA9FF3CA6FAED75AE484A32FB1B8E854B4 (MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F (ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776 (AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, int32_t ___joystickType0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_type(UnityEngine.LightType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_type_m567E3AA95E0775F49C24B092E635F882E03A642E (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_range(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_range_mA08B30B1776471973285722FCB7633870B23106B (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, float p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mBF61E1B11A3E789325754107630F031A52645819 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void grenade::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grenade_Explode_m0367FF58C7E095BF9B9C19E263D8DA667BC24A29 (grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * GameObject_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_m1EA72F4E77845E10925C7087C1BF17A239B7ED72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, uint64_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_m1535E1D5D25920F47110FC4C7E360A8614120F01 (MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, float p1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<weapon>()
inline weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * GameObject_GetComponent_Tisweapon_t7841363E78E26D7B2E50A190197D3B06093E90A3_mBBD465D545B8C25EB8CE21968DE1AA1496019B64 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(p0, p1, p2, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Start_m4E90611200158ADD67496A8DB4053D67C255F97F (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	{
		CameraScript_CenterCamera_m1CB229845629765B7482FD0D7B4853423BC5722E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Update_mCFC82CD55557E1292FCBECCCDF659774D3D80D05 (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CameraScript::CenterCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_CenterCamera_m1CB229845629765B7482FD0D7B4853423BC5722E (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CameraScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript__ctor_m1E1FB4F9A97A00AA73ABB4D7641EB48FA19DF223 (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m475CED919EFA09D7DBC1815BE0B92B55E5E3DD92 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_m28FAB53F804FC3AEAA7DB62E75DA0BE645C1B494 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_moveThreshold_15();
		DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171(__this, L_0, /*hidden argument*/NULL);
		Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201(__this, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mF71D95263661D939DBE2E5C17C73A599E60778B9 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_0, L_3, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_6 = ___eventData0;
		Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_mC38FD6A7ADB9CDAB0BF04235DA5110A37B10E771 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_mB6316E3D97C617061C01DC49DD829C0C4E91BB27 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicJoystick_HandleInput_mB6316E3D97C617061C01DC49DD829C0C4E91BB27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___magnitude0;
		float L_1 = __this->get_moveThreshold_15();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->get_moveThreshold_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_2, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___radius2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = L_8;
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_9, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0035:
	{
		float L_13 = ___magnitude0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = ___normalised1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = ___radius2;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_16 = ___cam3;
		Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506(__this, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_mD87E098A06147EABDFDB7F80162B114A799F9D4A (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveThreshold_15((1.0f));
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_mC91231670E4D4850A5BFB905300F155AA2DE60FD (FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909 * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_m0F34B432F4B1DF7D2A84264E9C5E8553A4E7F0DE (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, const RuntimeMethod* method)
{
	{
		Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201(__this, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_m2DB74D40D3D0D670E92442E24851FF5995CCE764 (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_0, L_3, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_6 = ___eventData0;
		Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m31F698F0F60ECAAB34D55DF8B1FF2E533B818DEA (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_mFE6173BF4B5A37A9E365D8322334FF90AA0DE960 (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Void GlobalMenuSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalMenuSettings_Awake_mABA2437D4D4DE87431631B182EA6FF4A2C4C2EB6 (GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalMenuSettings_Awake_mABA2437D4D4DE87431631B182EA6FF4A2C4C2EB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GlobalMenuSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalMenuSettings__ctor_m638CCE5B471CCA78CA23DCD23987178B921D9A82 (GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * __this, const RuntimeMethod* method)
{
	{
		__this->set_player_lives_4(3);
		__this->set_bullets_6(3);
		__this->set_level_7(1);
		__this->set_volume_8((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_snapX_7();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		return L_2;
	}

IL_0014:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_x_0();
		float L_5 = Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2(__this, L_4, 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_snapY_8();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_y_1();
		return L_2;
	}

IL_0014:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_y_1();
		float L_5 = Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2(__this, L_4, 2, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_get_Direction_mF64961ED5359C8E31E79CAA306019CB66DF50F3E (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(__this, /*hidden argument*/NULL);
		float L_1 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_m3D14494BB31EF5C716DE54CBF4ED30284AEE855F (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_handleRange_4();
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_handleRange_4(L_1);
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_m56376929F8539F977418D4ACB3A468758515DA85 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_deadZone_5();
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_deadZone_5(L_1);
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m41669BF41810BA976B1A230E1FB3ADCDC1F4C758 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Joystick_get_AxisOptions_m41669BF41810BA976B1A230E1FB3ADCDC1F4C758(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m3194AF6B83B35084063737EBA7D8C10C652241F8 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_axisOptions_6(L_0);
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m8BFFB04A6377302BCD1E3106930231C756150211 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_snapX_7();
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mACA46808CD8386CABE024E9F55A407F0C8A138F0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_snapX_7(L_0);
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m3B972003ED2D6D62DC433D6429AD58AEDCEE5957 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_snapY_8();
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mA985E49A53EBD417CF06948C805588612C0395C1 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_snapY_8(L_0);
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->get_handleRange_4();
		Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647(__this, L_0, /*hidden argument*/NULL);
		float L_1 = __this->get_deadZone_5();
		Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B(__this, L_1, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575_RuntimeMethod_var);
		__this->set_baseRect_11(L_2);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_3 = Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var);
		__this->set_canvas_12(L_3);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_4 = __this->get_canvas_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral3F0B67BCB7ECF77640A7DD122D98182E7BC9ADD4, /*hidden argument*/NULL);
	}

IL_0048:
	{
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), (0.5f), (0.5f), /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_6 = __this->get_background_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF(L_6, L_7, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_mE965F5B0902C2554635010A5752728414A57020A(L_8, L_9, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_10 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m55EEF00D9E42FE542B5346D7CEDAF9248736F7D3(L_10, L_11, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_12 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF(L_12, L_13, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_14 = __this->get_handle_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_0 = ___eventData0;
		Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		__this->set_cam_13((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_0 = __this->get_canvas_12();
		NullCheck(L_0);
		int32_t L_1 = Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_2 = __this->get_canvas_12();
		NullCheck(L_2);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_2, /*hidden argument*/NULL);
		__this->set_cam_13(L_3);
	}

IL_0026:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = __this->get_cam_13();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = __this->get_background_9();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = RectTransformUtility_WorldToScreenPoint_m114DFD961456722DED0FFB2F8DCB46A04C2CCA20(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_background_9();
		NullCheck(L_8);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_9, (2.0f), /*hidden argument*/NULL);
		V_1 = L_10;
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_11, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_12, L_13, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_1;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_16 = __this->get_canvas_12();
		NullCheck(L_16);
		float L_17 = Canvas_get_scaleFactor_m0F6D59E75F7605ABD2AFF6AF32A1097226CE060A(L_16, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_15, L_17, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_op_Division_mEF4FA1379564288637A7CF5E73BA30CA2259E591(L_14, L_18, /*hidden argument*/NULL);
		__this->set_input_14(L_19);
		Joystick_FormatInput_mDE5D2FB4C4FB309B92816E806756B01F61FF26D5(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_20 = __this->get_address_of_input_14();
		float L_21 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_20, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_22 = __this->get_address_of_input_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_22, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = V_1;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_25 = __this->get_cam_13();
		VirtActionInvoker4< float, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_26 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = __this->get_input_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_27, L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_handleRange_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_26, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___magnitude0;
		float L_1 = __this->get_deadZone_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___normalised1;
		__this->set_input_14(L_3);
		return;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_input_14(L_4);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDE5D2FB4C4FB309B92816E806756B01F61FF26D5 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_input_14(L_3);
		return;
	}

IL_0025:
	{
		int32_t L_4 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_input_14();
		float L_6 = L_5->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_input_14(L_7);
	}

IL_0049:
	{
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		int32_t L_2 = __this->get_axisOptions_6();
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = __this->get_input_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_5 = Vector2_Angle_mC4A140B49B9E737C9FC6B52763468C5662A8B4AC(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		return (0.0f);
	}

IL_003d:
	{
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return (((float)((float)G_B10_0)));
	}

IL_004b:
	{
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		return (0.0f);
	}

IL_0065:
	{
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return (((float)((float)G_B18_0)));
	}

IL_0073:
	{
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		return (1.0f);
	}

IL_0083:
	{
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		return (-1.0f);
	}

IL_0091:
	{
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		V_0 = L_0;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = __this->get_baseRect_11();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___screenPosition0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_cam_13();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		bool L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153(L_1, L_2, L_3, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = __this->get_baseRect_11();
		NullCheck(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = RectTransform_get_pivot_mA5BEEE2069ACA7C0C717530EED3E7D811D46C463(L_5, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_7 = __this->get_baseRect_11();
		NullCheck(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_0;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = __this->get_background_9();
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = RectTransform_get_anchorMax_m1E51C211FBB32326C884375C9F1E8E8221E5C086(L_11, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_13 = __this->get_baseRect_11();
		NullCheck(L_13);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_13, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_12, L_14, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_10, L_15, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_handleRange_4((1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m01D558819D864B0B36B12AECB92B7A9FE76D63B3 (JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoystickPlayerExample_FixedUpdate_m01D558819D864B0B36B12AECB92B7A9FE76D63B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_1 = __this->get_variableJoystick_5();
		NullCheck(L_1);
		float L_2 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_0, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_5 = __this->get_variableJoystick_5();
		NullCheck(L_5);
		float L_6 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_9 = __this->get_rb_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = __this->get_speed_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, L_11, /*hidden argument*/NULL);
		float L_13 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54(L_9, L_14, 2, /*hidden argument*/NULL);
		JoystickPlayerExample_Twist_m6430EE8D40F00CBECDDB136633F5B476A0E0F7E6(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JoystickPlayerExample::Twist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_Twist_m6430EE8D40F00CBECDDB136633F5B476A0E0F7E6 (JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoystickPlayerExample_Twist_m6430EE8D40F00CBECDDB136633F5B476A0E0F7E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_0 = __this->get_variableJoystick_5();
		NullCheck(L_0);
		float L_1 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_2 = __this->get_variableJoystick_5();
		NullCheck(L_2);
		float L_3 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = V_0;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		float L_5 = V_1;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}

IL_0028:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_7 = V_0;
		float L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_9 = atan2f(L_7, L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (0.0f), ((float)((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(180.0f)))/(float)(3.14159274f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17(L_6, L_10, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m49F04D0D45C4CBE5F904177CF3AB4A60249AD854 (JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MainMenu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayGame_m4CD3D61E23D84AD1A018C84D561EAE39ED2D76F7 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_PlayGame_m4CD3D61E23D84AD1A018C84D561EAE39ED2D76F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral55462EDFC4A6F4D63E783DB0953BD95A56457C94, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_single_player_mode_5((bool)1);
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(_stringLiteral7457A31B18BBDD7E408754A065EB0C62004C8AB9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenu::MultiPlayerGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_MultiPlayerGame_mCFD4B39612EBE7377146CA2622C08616158B2A5D (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_MultiPlayerGame_mCFD4B39612EBE7377146CA2622C08616158B2A5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_single_player_mode_5((bool)0);
		return;
	}
}
// System.Void MainMenu::MainScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_MainScreen_m108798A8E130AD334602A57EA6DD80A7D8CD3980 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_MainScreen_m108798A8E130AD334602A57EA6DD80A7D8CD3980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(_stringLiteralEABCFFD8D5120B660823E2C294A8DC252DA5EA29, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralECE09C976071AC396C77DA00CB99C4CC6A303882, /*hidden argument*/NULL);
		V_0 = L_0;
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = __this->get_es_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_1);
		EventSystem_SetSelectedGameObject_mB309881930DF5D4B389D2B502AAF70AD568D839F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenu::RulesMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_RulesMenu_m962A1447420FA1352CC213E6A07695FFAC9C4AE0 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_RulesMenu_m962A1447420FA1352CC213E6A07695FFAC9C4AE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralD4DD3FB9CAF6F0B9CCBDF736E8D6D1719955ADC7, /*hidden argument*/NULL);
		V_0 = L_0;
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = __this->get_es_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_1);
		EventSystem_SetSelectedGameObject_mB309881930DF5D4B389D2B502AAF70AD568D839F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenu::ReturnMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ReturnMainMenu_m77C8DDB965A6525FAA2AD6D60BF02DD2D9927F28 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_ReturnMainMenu_m77C8DDB965A6525FAA2AD6D60BF02DD2D9927F28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * V_1 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralECE09C976071AC396C77DA00CB99C4CC6A303882, /*hidden argument*/NULL);
		V_0 = L_0;
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = __this->get_es_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_1);
		EventSystem_SetSelectedGameObject_mB309881930DF5D4B389D2B502AAF70AD568D839F(L_1, L_2, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_3 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_6 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_5, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralA3F80B87A456136FC59C442BD1EE5B5EEC2430F1, /*hidden argument*/NULL);
		NullCheck(L_7);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_8 = GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E(L_7, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_mCDC3359066029BF682DB5CC73FECB9C648B1BE8E_RuntimeMethod_var);
		V_1 = L_8;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0(L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_volume_8(L_10);
		return;
	}
}
// System.Void MainMenu::OptionsMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OptionsMenu_m9B3F82E06E90E8FD52E9284ACCD3685543A34951 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_OptionsMenu_m9B3F82E06E90E8FD52E9284ACCD3685543A34951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralAA5DB7D82232EE34651EB5ADEA59B01C839EB843, /*hidden argument*/NULL);
		V_0 = L_0;
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = __this->get_es_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_1);
		EventSystem_SetSelectedGameObject_mB309881930DF5D4B389D2B502AAF70AD568D839F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenu::CreditsMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_CreditsMenu_m7E458374951B69A49CA17B72B2128C270F7AFA3C (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_CreditsMenu_m7E458374951B69A49CA17B72B2128C270F7AFA3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralB95CC0307A22FCE9FB0DD782BE9B7EB3AA28A500, /*hidden argument*/NULL);
		V_0 = L_0;
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = __this->get_es_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_1);
		EventSystem_SetSelectedGameObject_mB309881930DF5D4B389D2B502AAF70AD568D839F(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenu::Lives3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Lives3_mE08D33A73205139DBAB87C732FDB64CCC63C9BB3 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_Lives3_mE08D33A73205139DBAB87C732FDB64CCC63C9BB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_2 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_3 = NULL;
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralAD485FCCB6BB55D73A60E516839AD068C9355524, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral90C6D02D08CC600EA95DC8F75FE893A4C2F45CFA, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral6213D87FE9D00CF2D48363117E712A9F7EBC38C8, /*hidden argument*/NULL);
		V_1 = L_6;
		NullCheck(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
		NullCheck(L_10);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_11 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_3 = L_11;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_12);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = V_3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		NullCheck(L_3);
		L_3->set_player_lives_4(3);
		return;
	}
}
// System.Void MainMenu::Lives6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Lives6_mC80ED879346B1BD3DF2810EC819287874EB43C00 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_Lives6_mC80ED879346B1BD3DF2810EC819287874EB43C00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_2 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_3 = NULL;
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralAD485FCCB6BB55D73A60E516839AD068C9355524, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral90C6D02D08CC600EA95DC8F75FE893A4C2F45CFA, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral6213D87FE9D00CF2D48363117E712A9F7EBC38C8, /*hidden argument*/NULL);
		V_1 = L_6;
		NullCheck(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
		NullCheck(L_10);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_11 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_3 = L_11;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_12);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = V_3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		NullCheck(L_3);
		L_3->set_player_lives_4(6);
		return;
	}
}
// System.Void MainMenu::Lives9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Lives9_mE280C9A12ADAF87DA800C9827156D43E324D3261 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_Lives9_mE280C9A12ADAF87DA800C9827156D43E324D3261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_2 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_3 = NULL;
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralAD485FCCB6BB55D73A60E516839AD068C9355524, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral90C6D02D08CC600EA95DC8F75FE893A4C2F45CFA, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral6213D87FE9D00CF2D48363117E712A9F7EBC38C8, /*hidden argument*/NULL);
		V_1 = L_6;
		NullCheck(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
		NullCheck(L_10);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_11 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_3 = L_11;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_12);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = V_3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		NullCheck(L_3);
		L_3->set_player_lives_4(((int32_t)9));
		return;
	}
}
// System.Void MainMenu::Bullets3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Bullets3_mF0578D7BFCE018B8154136008ABC380310922CFA (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_Bullets3_mF0578D7BFCE018B8154136008ABC380310922CFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_2 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_3 = NULL;
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral5D7C40D5B4E7B8F3996A6D8FEDC2F787F617AE10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral89237C10E4CCB19DEE5058F837F53F40241C4CF2, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral795F5D25A9EED1B2BC579E58B28B5F83D6A91DE0, /*hidden argument*/NULL);
		V_1 = L_6;
		NullCheck(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
		NullCheck(L_10);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_11 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_3 = L_11;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_12);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = V_3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		NullCheck(L_3);
		L_3->set_bullets_6(3);
		return;
	}
}
// System.Void MainMenu::Bullets6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Bullets6_m93F9431850818504E9D0D9ABFDA9C9FB3F9FDD88 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_Bullets6_m93F9431850818504E9D0D9ABFDA9C9FB3F9FDD88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_2 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_3 = NULL;
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral5D7C40D5B4E7B8F3996A6D8FEDC2F787F617AE10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral89237C10E4CCB19DEE5058F837F53F40241C4CF2, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral795F5D25A9EED1B2BC579E58B28B5F83D6A91DE0, /*hidden argument*/NULL);
		V_1 = L_6;
		NullCheck(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
		NullCheck(L_10);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_11 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_3 = L_11;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_12);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = V_3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		NullCheck(L_3);
		L_3->set_bullets_6(6);
		return;
	}
}
// System.Void MainMenu::Bullets9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Bullets9_m475AC664B35565020CC385704EDD29CF198407A0 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_Bullets9_m475AC664B35565020CC385704EDD29CF198407A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_2 = NULL;
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * V_3 = NULL;
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral8A478BC04461680C75BB278663400D2ABADD31AD, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		GlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F * L_3 = GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C(L_2, /*hidden argument*/GameObject_GetComponent_TisGlobalMenuSettings_t99330D04AEB50648B63D154B83516489ABBAFC5F_m04845DD1115AA0150D4F9945909BB96249F3E49C_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral5D7C40D5B4E7B8F3996A6D8FEDC2F787F617AE10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral89237C10E4CCB19DEE5058F837F53F40241C4CF2, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral795F5D25A9EED1B2BC579E58B28B5F83D6A91DE0, /*hidden argument*/NULL);
		V_1 = L_6;
		NullCheck(L_4);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_7 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		NullCheck(L_8);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_1;
		NullCheck(L_10);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_11 = GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m9008044B066CF5830B44DEB0C6CD94872D501A75_RuntimeMethod_var);
		V_3 = L_11;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_12);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = V_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_15 = V_3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		NullCheck(L_3);
		L_3->set_bullets_6(((int32_t)9));
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_mF17B753D99BD98B88E949A5B9CA53892E19A6CD5 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Player::fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_fire_m46CEA96C2F441B7EA90A5661B6252C75319C5C13 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_fire_m46CEA96C2F441B7EA90A5661B6252C75319C5C13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral8361AECAFF9699EE92046CF63CFE55FF07AF45B0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::placeMine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_placeMine_m5D76ED9671D5C60D2FC1D0B202CA918ACC77080F (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_placeMine_m5D76ED9671D5C60D2FC1D0B202CA918ACC77080F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralDFDB35D817301314500FA8FE439B892E78CF4E35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlayerFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFollow_Start_m45B0D37EE4C9E519066E00B6D994386E3CBA5E0C (PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerFollow_Start_m45B0D37EE4C9E519066E00B6D994386E3CBA5E0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_PlayerTransform_4();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_1, L_3, /*hidden argument*/NULL);
		__this->set__cameraOffset_5(L_4);
		return;
	}
}
// System.Void PlayerFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFollow_LateUpdate_m01C2A796616EA69E63694035B3C4C4D109CA4FD8 (PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerFollow_LateUpdate_m01C2A796616EA69E63694035B3C4C4D109CA4FD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_PlayerTransform_4();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get__cameraOffset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = __this->get_SmoothFactor_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107(L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_4, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerFollow__ctor_m232EED77DBA7F21732A43729852ABB6F713E73E1 (PlayerFollow_t50CD22CB83AE500ACAB922A73AB515E834310D44 * __this, const RuntimeMethod* method)
{
	{
		__this->set_SmoothFactor_6((0.5f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SettingMenu::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenu_SetVolume_m00BFC6940934BEF45AAB2A3A79521943F3B66508 (SettingMenu_t916966B465884B09DD2FC567FAAF6B9DE68AA1FC * __this, float ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SettingMenu_SetVolume_m00BFC6940934BEF45AAB2A3A79521943F3B66508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioMixer_t4B13E2A32B5CCB989E7F0DFBF5370CFEF561541F * L_0 = __this->get_audioMixer_4();
		float L_1 = ___volume0;
		NullCheck(L_0);
		AudioMixer_SetFloat_m9BDEA496607AEB0DA6B79D7C2623E38D38CFA1E1(L_0, _stringLiteralD387FC8D57B2E3DCCC525701C8A6C2C147FF9ED6, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SettingMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingMenu__ctor_mEEEEDF0A35223A3FCCC3E89DA6E387D4637AF3CA (SettingMenu_t916966B465884B09DD2FC567FAAF6B9DE68AA1FC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SpawnEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEffect_Start_m01141C51E61294B6F430D91538D3AEACB0ADEEC7 (SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnEffect_Start_m01141C51E61294B6F430D91538D3AEACB0ADEEC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral92F4D3D10A9B0B91112F4263A4EA054E647A04D7, /*hidden argument*/NULL);
		__this->set_shaderProperty_10(L_0);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		__this->set__renderer_9(L_1);
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_2 = Component_GetComponentInChildren_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6AA0C1FCE3063B930A46E28AFEC2B13155A5DC0(__this, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6AA0C1FCE3063B930A46E28AFEC2B13155A5DC0_RuntimeMethod_var);
		__this->set_ps_7(L_2);
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_3 = __this->get_ps_7();
		NullCheck(L_3);
		MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  L_4 = ParticleSystem_get_main_m360B0AA57C71DE0358B6B07133C68B5FD88C742F(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = __this->get_spawnEffectTime_4();
		MainModule_set_duration_mACCA0ACA9FF3CA6FAED75AE484A32FB1B8E854B4((MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 *)(&V_0), L_5, /*hidden argument*/NULL);
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_6 = __this->get_ps_7();
		NullCheck(L_6);
		ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEffect_Update_m9BFB6D6027F05B6CD5F33CA53F0FCE35F1E56C4F (SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnEffect_Update_m9BFB6D6027F05B6CD5F33CA53F0FCE35F1E56C4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timer_8();
		float L_1 = __this->get_spawnEffectTime_4();
		float L_2 = __this->get_pause_5();
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_add((float)L_1, (float)L_2))))))
		{
			goto IL_0029;
		}
	}
	{
		float L_3 = __this->get_timer_8();
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timer_8(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		goto IL_003f;
	}

IL_0029:
	{
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_5 = __this->get_ps_7();
		NullCheck(L_5);
		ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F(L_5, /*hidden argument*/NULL);
		__this->set_timer_8((0.0f));
	}

IL_003f:
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = __this->get__renderer_9();
		NullCheck(L_6);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_shaderProperty_10();
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_9 = __this->get_fadeIn_6();
		float L_10 = __this->get_spawnEffectTime_4();
		float L_11 = __this->get_timer_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_13 = AnimationCurve_Evaluate_m51CAA6B1C54B7EF44FE4D74B422C1DA1FA6F8776(L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47(L_7, L_8, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEffect__ctor_mC1F317F6EDE4078241A4E9A96CCFC41ECF844EF3 (SpawnEffect_tCD0A8BA5BBCD5562194C5B10E340FEFC6A2C663D * __this, const RuntimeMethod* method)
{
	{
		__this->set_spawnEffectTime_4((2.0f));
		__this->set_pause_5((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m7680F75A6FE65378FA1882A60F1D2D7C10E1585F (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m70CF65250847566A28B2A418C3EE55004987552F (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_set_MoveThreshold_m70CF65250847566A28B2A418C3EE55004987552F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, int32_t ___joystickType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___joystickType0;
		__this->set_joystickType_16(L_0);
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = __this->get_fixedPosition_17();
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_2, L_3, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_002d:
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_6 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m5BB1A8FE9E2EBC394C4AC8B4E495AB653F61E8E2 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	{
		Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201(__this, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_0, /*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_1);
		int32_t L_2 = __this->get_joystickType_16();
		VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m066F12E7818D1CD22977EAEA9FE4AEC0DD179FAC (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_2, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_1, L_4, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_7 = ___eventData0;
		Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m42B201EDAB1B3A2F2ED747FA7A4773E2654DA061 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_3 = ___eventData0;
		Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_m83CA8AFC5C395DE4C684F2C478D1DE36CAD0BF19 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_HandleInput_m83CA8AFC5C395DE4C684F2C478D1DE36CAD0BF19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->get_joystickType_16();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->get_moveThreshold_15();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->get_moveThreshold_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_3, ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___radius2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_10 = L_9;
		NullCheck(L_10);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_10, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_10, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		float L_14 = ___magnitude0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = ___normalised1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = ___radius2;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_17 = ___cam3;
		Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506(__this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_moveThreshold_15((1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_0);
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Void bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_Start_m6984E4607C6F7D7DE55E01444C27B3FF9BDAAA01 (bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (bullet_Start_m6984E4607C6F7D7DE55E01444C27B3FF9BDAAA01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_rb_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_Update_mD9103101FB1623BD2B150BE839E521F71203BEF7 (bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (bullet_Update_mD9103101FB1623BD2B150BE839E521F71203BEF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timeLeft_6();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeLeft_6(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_2 = __this->get_timeLeft_6();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral99A706CF3E35F3569AD85164E9B84F4B85BD1365, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void bullet::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_OnTriggerEnter_m7F8562BBBCDC83E2C6B9908F9F9D81B3395FB0CA (bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (bullet_OnTriggerEnter_m7F8562BBBCDC83E2C6B9908F9F9D81B3395FB0CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral85FACCF147F274EE861A14CFE5B0E00B532DA704, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet__ctor_m496C09E1DEB162381C6455412B027CB282F7773F (bullet_t96730D78A4776BFDBE2D29987FAE6716BEA25485 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_4((20.0f));
		__this->set_timeLeft_6((5.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void grenade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grenade_Start_m331F6950A69FAAAFB4BDEB817A1910E15C673D1E (grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (grenade_Start_m331F6950A69FAAAFB4BDEB817A1910E15C673D1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_rb_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void grenade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grenade_Update_mCCCBC63FD4E3B73930AF1B0AF995F963E26BC921 (grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (grenade_Update_mCCCBC63FD4E3B73930AF1B0AF995F963E26BC921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timeLeft_8();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeLeft_8(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_2 = __this->get_timeLeft_8();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		__this->set_timeLeft_8((0.0f));
		int32_t L_3 = __this->get_loopCounterFix_9();
		__this->set_loopCounterFix_9(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_loopCounterFix_9();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_00b5;
		}
	}
	{
		GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral99A706CF3E35F3569AD85164E9B84F4B85BD1365, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_lightObj_7();
		NullCheck(L_5);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_6 = GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8(L_5, /*hidden argument*/GameObject_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m86B5F9D718CB86189457E5A8FAA6842817A08CB8_RuntimeMethod_var);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_7 = L_6;
		NullCheck(L_7);
		Light_set_type_m567E3AA95E0775F49C24B092E635F882E03A642E(L_7, 1, /*hidden argument*/NULL);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_8 = L_7;
		NullCheck(L_8);
		Light_set_range_mA08B30B1776471973285722FCB7633870B23106B(L_8, (100.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_8, (1.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_lightObj_7();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mBF61E1B11A3E789325754107630F031A52645819(L_9, /*hidden argument*/GameObject_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mBF61E1B11A3E789325754107630F031A52645819_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = L_10;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (45.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_11, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = L_14;
		RuntimeObject * L_16 = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_16, /*hidden argument*/NULL);
		grenade_Explode_m0367FF58C7E095BF9B9C19E263D8DA667BC24A29(__this, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
// System.Void grenade::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grenade_Explode_m0367FF58C7E095BF9B9C19E263D8DA667BC24A29 (grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (grenade_Explode_m0367FF58C7E095BF9B9C19E263D8DA667BC24A29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * V_0 = NULL;
	MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_explosion_5();
		NullCheck(L_0);
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_1 = GameObject_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_m1EA72F4E77845E10925C7087C1BF17A239B7ED72(L_0, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_m1EA72F4E77845E10925C7087C1BF17A239B7ED72_RuntimeMethod_var);
		V_0 = L_1;
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_2 = V_0;
		NullCheck(L_2);
		ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F(L_2, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_3 = __this->get_audioData_12();
		NullCheck(L_3);
		AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74(L_3, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_explosion_5();
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_5 = V_0;
		NullCheck(L_5);
		MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  L_6 = ParticleSystem_get_main_m360B0AA57C71DE0358B6B07133C68B5FD88C742F(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = MainModule_get_duration_m1535E1D5D25920F47110FC4C7E360A8614120F01((MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_4, L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_9 = V_0;
		NullCheck(L_9);
		MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  L_10 = ParticleSystem_get_main_m360B0AA57C71DE0358B6B07133C68B5FD88C742F(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = MainModule_get_duration_m1535E1D5D25920F47110FC4C7E360A8614120F01((MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 *)(&V_1), /*hidden argument*/NULL);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_8, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void grenade::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grenade_OnTriggerEnter_m99FE32E9C39BDE8F760142B2AC0C17DB2DBCB1A0 (grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (grenade_OnTriggerEnter_m99FE32E9C39BDE8F760142B2AC0C17DB2DBCB1A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral85FACCF147F274EE861A14CFE5B0E00B532DA704, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void grenade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void grenade__ctor_m781F1641F6791B4276875FA691AE61485582928D (grenade_t09DF4B2409542F6D6220F9898C78D55849CBB66B * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_4((20.0f));
		__this->set_timeLeft_8((5.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void rotateItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateItem_Start_m5F34AD15C0277011AC708DF2D37A1D49D685FCE0 (rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void rotateItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateItem_Update_m4E761399333418B6B394910DB3634308C09AEEC4 (rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (rotateItem_Update_m4E761399333418B6B394910DB3634308C09AEEC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (10.0f), (0.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_rotationSpeed_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void rotateItem::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateItem_OnTriggerEnter_m63AF1F6BCC4C880290B3BF50742E57970ABB0581 (rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (rotateItem_OnTriggerEnter_m63AF1F6BCC4C880290B3BF50742E57970ABB0581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteral99A706CF3E35F3569AD85164E9B84F4B85BD1365, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral8B5EF922C084718FE4A712BAD2DBCF6F03DE3BF5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_item_7();
		NullCheck(L_3);
		String_t* L_4 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_3, /*hidden argument*/NULL);
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralABD528CB7E10C88ABBFAB8FFB934FAC181FAAA38, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_player_6();
		NullCheck(L_6);
		weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * L_7 = GameObject_GetComponent_Tisweapon_t7841363E78E26D7B2E50A190197D3B06093E90A3_mBBD465D545B8C25EB8CE21968DE1AA1496019B64(L_6, /*hidden argument*/GameObject_GetComponent_Tisweapon_t7841363E78E26D7B2E50A190197D3B06093E90A3_mBBD465D545B8C25EB8CE21968DE1AA1496019B64_RuntimeMethod_var);
		weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_numberMines_10();
		NullCheck(L_8);
		L_8->set_numberMines_10(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_item_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralBA04BAA7A66487BC0D36043BBC76BA30238ACFC8, /*hidden argument*/NULL);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_11, /*hidden argument*/NULL);
		return;
	}

IL_0069:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_item_7();
		NullCheck(L_12);
		String_t* L_13 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_12, /*hidden argument*/NULL);
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteralC9067536F743F5970C82AA9DD3972C8D934FA0ED, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_item_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_15, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralFBBCA33CB19EA771A973C2C2F0D980CF1E226D2D, /*hidden argument*/NULL);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_16, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
// System.Void rotateItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotateItem__ctor_m540633612F09AA00C956315D4C8F525CF6DF5301 (rotateItem_t0459EC7BC3890E1E977C49CA3AED3E40D57CD7F2 * __this, const RuntimeMethod* method)
{
	{
		__this->set_rotationSpeed_4((5.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void weapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void weapon_Update_m5943B50154CF7CE5EC3626C2CA2B35DCBD2EA3FE (weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void weapon::placeMine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void weapon_placeMine_mF82B70E0FF98A7FC14E2A37945167A89FF178FB0 (weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (weapon_placeMine_mF82B70E0FF98A7FC14E2A37945167A89FF178FB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_numberMines_10();
		__this->set_numberMines_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_minePrefab_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_minePoint_5();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_minePoint_5();
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}
}
// System.Void weapon::shootBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void weapon_shootBullet_m43E8C18EDD1053B91A2BEA64B708E006F79D371B (weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (weapon_shootBullet_m43E8C18EDD1053B91A2BEA64B708E006F79D371B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_numberBullets_9();
		__this->set_numberBullets_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_flarePrefab_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_firePoint_4();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_firePoint_4();
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}
}
// System.Void weapon::shootGrenade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void weapon_shootGrenade_mF6DFE409A6565CD72A257B2391526D15B816F912 (weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (weapon_shootGrenade_mF6DFE409A6565CD72A257B2391526D15B816F912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_numberBullets_9();
		__this->set_numberBullets_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_minePrefab_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_firePoint_4();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_firePoint_4();
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}
}
// System.Void weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void weapon__ctor_mB1A739523FB4021E0BCBFD275A3B3122BF1CCC62 (weapon_t7841363E78E26D7B2E50A190197D3B06093E90A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
