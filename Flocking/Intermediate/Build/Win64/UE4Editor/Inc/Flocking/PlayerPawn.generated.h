// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKING_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define FLOCKING_PlayerPawn_generated_h

#define Flocking_Source_Flocking_PlayerPawn_h_13_SPARSE_DATA
#define Flocking_Source_Flocking_PlayerPawn_h_13_RPC_WRAPPERS
#define Flocking_Source_Flocking_PlayerPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Flocking_Source_Flocking_PlayerPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define Flocking_Source_Flocking_PlayerPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define Flocking_Source_Flocking_PlayerPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define Flocking_Source_Flocking_PlayerPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define Flocking_Source_Flocking_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APlayerPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayerPawn, Camera); }


#define Flocking_Source_Flocking_PlayerPawn_h_10_PROLOG
#define Flocking_Source_Flocking_PlayerPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_PlayerPawn_h_13_SPARSE_DATA \
	Flocking_Source_Flocking_PlayerPawn_h_13_RPC_WRAPPERS \
	Flocking_Source_Flocking_PlayerPawn_h_13_INCLASS \
	Flocking_Source_Flocking_PlayerPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flocking_Source_Flocking_PlayerPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_PlayerPawn_h_13_SPARSE_DATA \
	Flocking_Source_Flocking_PlayerPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Flocking_Source_Flocking_PlayerPawn_h_13_INCLASS_NO_PURE_DECLS \
	Flocking_Source_Flocking_PlayerPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKING_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flocking_Source_Flocking_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
