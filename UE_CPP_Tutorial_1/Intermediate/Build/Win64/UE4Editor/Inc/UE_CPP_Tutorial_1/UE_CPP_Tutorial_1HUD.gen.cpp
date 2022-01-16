// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP_Tutorial_1/UE_CPP_Tutorial_1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_CPP_Tutorial_1HUD() {}
// Cross Module References
	UE_CPP_TUTORIAL_1_API UClass* Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_NoRegister();
	UE_CPP_TUTORIAL_1_API UClass* Z_Construct_UClass_AUE_CPP_Tutorial_1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UE_CPP_Tutorial_1();
// End Cross Module References
	void AUE_CPP_Tutorial_1HUD::StaticRegisterNativesAUE_CPP_Tutorial_1HUD()
	{
	}
	UClass* Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_NoRegister()
	{
		return AUE_CPP_Tutorial_1HUD::StaticClass();
	}
	struct Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP_Tutorial_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UE_CPP_Tutorial_1HUD.h" },
		{ "ModuleRelativePath", "UE_CPP_Tutorial_1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_CPP_Tutorial_1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics::ClassParams = {
		&AUE_CPP_Tutorial_1HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE_CPP_Tutorial_1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE_CPP_Tutorial_1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE_CPP_Tutorial_1HUD, 3256554101);
	template<> UE_CPP_TUTORIAL_1_API UClass* StaticClass<AUE_CPP_Tutorial_1HUD>()
	{
		return AUE_CPP_Tutorial_1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE_CPP_Tutorial_1HUD(Z_Construct_UClass_AUE_CPP_Tutorial_1HUD, &AUE_CPP_Tutorial_1HUD::StaticClass, TEXT("/Script/UE_CPP_Tutorial_1"), TEXT("AUE_CPP_Tutorial_1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_CPP_Tutorial_1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
