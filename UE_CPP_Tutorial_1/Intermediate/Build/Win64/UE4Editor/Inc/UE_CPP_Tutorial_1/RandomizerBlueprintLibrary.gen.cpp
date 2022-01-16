// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_CPP_Tutorial_1/RandomizerBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomizerBlueprintLibrary() {}
// Cross Module References
	UE_CPP_TUTORIAL_1_API UClass* Z_Construct_UClass_URandomizerBlueprintLibrary_NoRegister();
	UE_CPP_TUTORIAL_1_API UClass* Z_Construct_UClass_URandomizerBlueprintLibrary();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintLibrary();
	UPackage* Z_Construct_UPackage__Script_UE_CPP_Tutorial_1();
// End Cross Module References
	DEFINE_FUNCTION(URandomizerBlueprintLibrary::execProbabilityCheck)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_probability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URandomizerBlueprintLibrary::ProbabilityCheck(Z_Param_probability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomizerBlueprintLibrary::execDiceRoll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_sides);
		P_GET_PROPERTY(FIntProperty,Z_Param_number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URandomizerBlueprintLibrary::DiceRoll(Z_Param_sides,Z_Param_number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URandomizerBlueprintLibrary::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		URandomizerBlueprintLibrary::Initialize();
		P_NATIVE_END;
	}
	void URandomizerBlueprintLibrary::StaticRegisterNativesURandomizerBlueprintLibrary()
	{
		UClass* Class = URandomizerBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DiceRoll", &URandomizerBlueprintLibrary::execDiceRoll },
			{ "Initialize", &URandomizerBlueprintLibrary::execInitialize },
			{ "ProbabilityCheck", &URandomizerBlueprintLibrary::execProbabilityCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics
	{
		struct RandomizerBlueprintLibrary_eventDiceRoll_Parms
		{
			int32 sides;
			int32 number;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sides;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_number;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::NewProp_sides = { "sides", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomizerBlueprintLibrary_eventDiceRoll_Parms, sides), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomizerBlueprintLibrary_eventDiceRoll_Parms, number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomizerBlueprintLibrary_eventDiceRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::NewProp_sides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::NewProp_number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Randomizer" },
		{ "CPP_Default_number", "1" },
		{ "ModuleRelativePath", "RandomizerBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomizerBlueprintLibrary, nullptr, "DiceRoll", nullptr, nullptr, sizeof(RandomizerBlueprintLibrary_eventDiceRoll_Parms), Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Randomizer" },
		{ "ModuleRelativePath", "RandomizerBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomizerBlueprintLibrary, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics
	{
		struct RandomizerBlueprintLibrary_eventProbabilityCheck_Parms
		{
			float probability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_probability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::NewProp_probability = { "probability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RandomizerBlueprintLibrary_eventProbabilityCheck_Parms, probability), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RandomizerBlueprintLibrary_eventProbabilityCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RandomizerBlueprintLibrary_eventProbabilityCheck_Parms), &Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::NewProp_probability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Randomizer" },
		{ "ModuleRelativePath", "RandomizerBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomizerBlueprintLibrary, nullptr, "ProbabilityCheck", nullptr, nullptr, sizeof(RandomizerBlueprintLibrary_eventProbabilityCheck_Parms), Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URandomizerBlueprintLibrary_NoRegister()
	{
		return URandomizerBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URandomizerBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBlueprintLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_CPP_Tutorial_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URandomizerBlueprintLibrary_DiceRoll, "DiceRoll" }, // 2997239651
		{ &Z_Construct_UFunction_URandomizerBlueprintLibrary_Initialize, "Initialize" }, // 1038806429
		{ &Z_Construct_UFunction_URandomizerBlueprintLibrary_ProbabilityCheck, "ProbabilityCheck" }, // 1544699101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RandomizerBlueprintLibrary.h" },
		{ "ModuleRelativePath", "RandomizerBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomizerBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::ClassParams = {
		&URandomizerBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomizerBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URandomizerBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URandomizerBlueprintLibrary, 2418524796);
	template<> UE_CPP_TUTORIAL_1_API UClass* StaticClass<URandomizerBlueprintLibrary>()
	{
		return URandomizerBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URandomizerBlueprintLibrary(Z_Construct_UClass_URandomizerBlueprintLibrary, &URandomizerBlueprintLibrary::StaticClass, TEXT("/Script/UE_CPP_Tutorial_1"), TEXT("URandomizerBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomizerBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
