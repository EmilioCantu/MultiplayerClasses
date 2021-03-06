// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_FPSBlackHole_generated_h
#error "FPSBlackHole.generated.h already included, missing '#pragma once' in FPSBlackHole.h"
#endif
#define FPSGAME_FPSBlackHole_generated_h

#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverlapInnerSphere(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverlapInnerSphere(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSBlackHole(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSBlackHole(); \
public: \
	DECLARE_CLASS(AFPSBlackHole, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSBlackHole) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSBlackHole(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSBlackHole(); \
public: \
	DECLARE_CLASS(AFPSBlackHole, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSBlackHole) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSBlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSBlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBlackHole(AFPSBlackHole&&); \
	NO_API AFPSBlackHole(const AFPSBlackHole&); \
public:


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBlackHole(AFPSBlackHole&&); \
	NO_API AFPSBlackHole(const AFPSBlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSBlackHole)


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPSBlackHole, MeshComp); } \
	FORCEINLINE static uint32 __PPO__OuterSphereComp() { return STRUCT_OFFSET(AFPSBlackHole, OuterSphereComp); } \
	FORCEINLINE static uint32 __PPO__InnerSphereComp() { return STRUCT_OFFSET(AFPSBlackHole, InnerSphereComp); }


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_13_PROLOG
#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_RPC_WRAPPERS \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_INCLASS \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_INCLASS_NO_PURE_DECLS \
	StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGameTemplate417_Source_FPSGame_Public_FPSBlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
