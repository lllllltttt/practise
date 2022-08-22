// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "practise/firstCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefirstCharacter() {}
// Cross Module References
	PRACTISE_API UClass* Z_Construct_UClass_AfirstCharacter_NoRegister();
	PRACTISE_API UClass* Z_Construct_UClass_AfirstCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_practise();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AfirstCharacter::StaticRegisterNativesAfirstCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AfirstCharacter);
	UClass* Z_Construct_UClass_AfirstCharacter_NoRegister()
	{
		return AfirstCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AfirstCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cameracomp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cameracomp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfirstCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_practise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfirstCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "firstCharacter.h" },
		{ "ModuleRelativePath", "firstCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfirstCharacter_Statics::NewProp_Cameracomp_MetaData[] = {
		{ "Category", "firstCharacter" },
		{ "Comment", "//???????????\xc4\xb1????\xc9\xbc?\xc8\xbb?????????\xc4\xb8???????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "firstCharacter.h" },
		{ "ToolTip", "???????????\xc4\xb1????\xc9\xbc?\xc8\xbb?????????\xc4\xb8???????" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AfirstCharacter_Statics::NewProp_Cameracomp = { "Cameracomp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfirstCharacter, Cameracomp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AfirstCharacter_Statics::NewProp_Cameracomp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AfirstCharacter_Statics::NewProp_Cameracomp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfirstCharacter_Statics::NewProp_ArmComp_MetaData[] = {
		{ "Category", "firstCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "firstCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AfirstCharacter_Statics::NewProp_ArmComp = { "ArmComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AfirstCharacter, ArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AfirstCharacter_Statics::NewProp_ArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AfirstCharacter_Statics::NewProp_ArmComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AfirstCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AfirstCharacter_Statics::NewProp_Cameracomp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AfirstCharacter_Statics::NewProp_ArmComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfirstCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfirstCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AfirstCharacter_Statics::ClassParams = {
		&AfirstCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AfirstCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AfirstCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AfirstCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfirstCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfirstCharacter()
	{
		if (!Z_Registration_Info_UClass_AfirstCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AfirstCharacter.OuterSingleton, Z_Construct_UClass_AfirstCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AfirstCharacter.OuterSingleton;
	}
	template<> PRACTISE_API UClass* StaticClass<AfirstCharacter>()
	{
		return AfirstCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfirstCharacter);
	struct Z_CompiledInDeferFile_FID_practise_Source_practise_firstCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_practise_Source_practise_firstCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AfirstCharacter, AfirstCharacter::StaticClass, TEXT("AfirstCharacter"), &Z_Registration_Info_UClass_AfirstCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AfirstCharacter), 2175108613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_practise_Source_practise_firstCharacter_h_664503475(TEXT("/Script/practise"),
		Z_CompiledInDeferFile_FID_practise_Source_practise_firstCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_practise_Source_practise_firstCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
