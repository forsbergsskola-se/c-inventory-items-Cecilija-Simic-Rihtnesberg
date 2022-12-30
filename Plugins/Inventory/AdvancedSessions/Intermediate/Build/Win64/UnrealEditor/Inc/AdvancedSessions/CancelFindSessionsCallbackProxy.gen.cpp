// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/CancelFindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCancelFindSessionsCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCancelFindSessionsCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UCancelFindSessionsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UCancelFindSessionsCallbackProxy::execCancelFindSessions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCancelFindSessionsCallbackProxy**)Z_Param__Result=UCancelFindSessionsCallbackProxy::CancelFindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UCancelFindSessionsCallbackProxy::StaticRegisterNativesUCancelFindSessionsCallbackProxy()
	{
		UClass* Class = UCancelFindSessionsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelFindSessions", &UCancelFindSessionsCallbackProxy::execCancelFindSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics
	{
		struct CancelFindSessionsCallbackProxy_eventCancelFindSessions_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UCancelFindSessionsCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CancelFindSessionsCallbackProxy_eventCancelFindSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CancelFindSessionsCallbackProxy_eventCancelFindSessions_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CancelFindSessionsCallbackProxy_eventCancelFindSessions_Parms, ReturnValue), Z_Construct_UClass_UCancelFindSessionsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedSessions" },
		{ "Comment", "// Cancels finding sessions\n" },
		{ "ModuleRelativePath", "Classes/CancelFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Cancels finding sessions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCancelFindSessionsCallbackProxy, nullptr, "CancelFindSessions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::CancelFindSessionsCallbackProxy_eventCancelFindSessions_Parms), Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCancelFindSessionsCallbackProxy);
	UClass* Z_Construct_UClass_UCancelFindSessionsCallbackProxy_NoRegister()
	{
		return UCancelFindSessionsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCancelFindSessionsCallbackProxy_CancelFindSessions, "CancelFindSessions" }, // 2500610673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CancelFindSessionsCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/CancelFindSessionsCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful destroy\n" },
		{ "ModuleRelativePath", "Classes/CancelFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful destroy" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCancelFindSessionsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
		{ "ModuleRelativePath", "Classes/CancelFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCancelFindSessionsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCancelFindSessionsCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::ClassParams = {
		&UCancelFindSessionsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCancelFindSessionsCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UCancelFindSessionsCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCancelFindSessionsCallbackProxy.OuterSingleton, Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCancelFindSessionsCallbackProxy.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UCancelFindSessionsCallbackProxy>()
	{
		return UCancelFindSessionsCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCancelFindSessionsCallbackProxy);
	struct Z_CompiledInDeferFile_FID_UnrealGP_8_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGP_8_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCancelFindSessionsCallbackProxy, UCancelFindSessionsCallbackProxy::StaticClass, TEXT("UCancelFindSessionsCallbackProxy"), &Z_Registration_Info_UClass_UCancelFindSessionsCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCancelFindSessionsCallbackProxy), 2796471318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGP_8_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_2291970684(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_UnrealGP_8_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGP_8_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
