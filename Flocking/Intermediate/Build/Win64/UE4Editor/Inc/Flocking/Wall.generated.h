// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKING_Wall_generated_h
#error "Wall.generated.h already included, missing '#pragma once' in Wall.h"
#endif
#define FLOCKING_Wall_generated_h

#define Flocking_Source_Flocking_Wall_h_12_SPARSE_DATA
#define Flocking_Source_Flocking_Wall_h_12_RPC_WRAPPERS
#define Flocking_Source_Flocking_Wall_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Flocking_Source_Flocking_Wall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWall(); \
	friend struct Z_Construct_UClass_AWall_Statics; \
public: \
	DECLARE_CLASS(AWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AWall)


#define Flocking_Source_Flocking_Wall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWall(); \
	friend struct Z_Construct_UClass_AWall_Statics; \
public: \
	DECLARE_CLASS(AWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(AWall)


#define Flocking_Source_Flocking_Wall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWall(AWall&&); \
	NO_API AWall(const AWall&); \
public:


#define Flocking_Source_Flocking_Wall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWall(AWall&&); \
	NO_API AWall(const AWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWall)


#define Flocking_Source_Flocking_Wall_h_12_PRIVATE_PROPERTY_OFFSET
#define Flocking_Source_Flocking_Wall_h_9_PROLOG
#define Flocking_Source_Flocking_Wall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Wall_h_12_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Wall_h_12_SPARSE_DATA \
	Flocking_Source_Flocking_Wall_h_12_RPC_WRAPPERS \
	Flocking_Source_Flocking_Wall_h_12_INCLASS \
	Flocking_Source_Flocking_Wall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flocking_Source_Flocking_Wall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flocking_Source_Flocking_Wall_h_12_PRIVATE_PROPERTY_OFFSET \
	Flocking_Source_Flocking_Wall_h_12_SPARSE_DATA \
	Flocking_Source_Flocking_Wall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Wall_h_12_INCLASS_NO_PURE_DECLS \
	Flocking_Source_Flocking_Wall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKING_API UClass* StaticClass<class AWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flocking_Source_Flocking_Wall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
