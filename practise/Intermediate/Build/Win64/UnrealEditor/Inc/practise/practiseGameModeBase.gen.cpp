// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "practise/practiseGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepractiseGameModeBase() {}
// Cross Module References
	PRACTISE_API UClass* Z_Construct_UClass_ApractiseGameModeBase_NoRegister();
	PRACTISE_API UClass* Z_Construct_UClass_ApractiseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_practise();
// End Cross Module References
	void ApractiseGameModeBase::StaticRegisterNativesApractiseGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ApractiseGameModeBase);
	UClass* Z_Construct_UClass_ApractiseGameModeBase_NoRegister()
	{
		return ApractiseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ApractiseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ApractiseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_practise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ApractiseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "practiseGameModeBase.h" },
		{ "ModuleRelativePath", "practiseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ApractiseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ApractiseGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ApractiseGameModeBase_Statics::ClassParams = {
		&ApractiseGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ApractiseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ApractiseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ApractiseGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ApractiseGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ApractiseGameModeBase.OuterSingleton, Z_Construct_UClass_ApractiseGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ApractiseGameModeBase.OuterSingleton;
	}
	template<> PRACTISE_API UClass* StaticClass<ApractiseGameModeBase>()
	{
		return ApractiseGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ApractiseGameModeBase);
	struct Z_CompiledInDeferFile_FID_practise_Source_practise_practiseGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_practise_Source_practise_practiseGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ApractiseGameModeBase, ApractiseGameModeBase::StaticClass, TEXT("ApractiseGameModeBase"), &Z_Registration_Info_UClass_ApractiseGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ApractiseGameModeBase), 3637966281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_practise_Source_practise_practiseGameModeBase_h_4048358478(TEXT("/Script/practise"),
		Z_CompiledInDeferFile_FID_practise_Source_practise_practiseGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_practise_Source_practise_practiseGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
