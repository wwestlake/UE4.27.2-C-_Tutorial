// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UE_CPP_TUTORIAL_1_UE_CPP_Tutorial_1Projectile_generated_h
#error "UE_CPP_Tutorial_1Projectile.generated.h already included, missing '#pragma once' in UE_CPP_Tutorial_1Projectile.h"
#endif
#define UE_CPP_TUTORIAL_1_UE_CPP_Tutorial_1Projectile_generated_h

#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_SPARSE_DATA
#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE_CPP_Tutorial_1Projectile(); \
	friend struct Z_Construct_UClass_AUE_CPP_Tutorial_1Projectile_Statics; \
public: \
	DECLARE_CLASS(AUE_CPP_Tutorial_1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP_Tutorial_1"), NO_API) \
	DECLARE_SERIALIZER(AUE_CPP_Tutorial_1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUE_CPP_Tutorial_1Projectile(); \
	friend struct Z_Construct_UClass_AUE_CPP_Tutorial_1Projectile_Statics; \
public: \
	DECLARE_CLASS(AUE_CPP_Tutorial_1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_CPP_Tutorial_1"), NO_API) \
	DECLARE_SERIALIZER(AUE_CPP_Tutorial_1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUE_CPP_Tutorial_1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUE_CPP_Tutorial_1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE_CPP_Tutorial_1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE_CPP_Tutorial_1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE_CPP_Tutorial_1Projectile(AUE_CPP_Tutorial_1Projectile&&); \
	NO_API AUE_CPP_Tutorial_1Projectile(const AUE_CPP_Tutorial_1Projectile&); \
public:


#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUE_CPP_Tutorial_1Projectile(AUE_CPP_Tutorial_1Projectile&&); \
	NO_API AUE_CPP_Tutorial_1Projectile(const AUE_CPP_Tutorial_1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE_CPP_Tutorial_1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE_CPP_Tutorial_1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE_CPP_Tutorial_1Projectile)


#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUE_CPP_Tutorial_1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUE_CPP_Tutorial_1Projectile, ProjectileMovement); }


#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_12_PROLOG
#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_SPARSE_DATA \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_RPC_WRAPPERS \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_INCLASS \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_SPARSE_DATA \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_CPP_TUTORIAL_1_API UClass* StaticClass<class AUE_CPP_Tutorial_1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_CPP_Tutorial_1_Source_UE_CPP_Tutorial_1_UE_CPP_Tutorial_1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
