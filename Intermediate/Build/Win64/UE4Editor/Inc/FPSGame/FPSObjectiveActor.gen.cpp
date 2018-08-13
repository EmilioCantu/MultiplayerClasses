// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FPSObjectiveActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSObjectiveActor() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSObjectiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFPSObjectiveActor::StaticRegisterNativesAFPSObjectiveActor()
	{
	}
	UClass* Z_Construct_UClass_AFPSObjectiveActor_NoRegister()
	{
		return AFPSObjectiveActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSObjectiveActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FPSGame();
			OuterClass = AFPSObjectiveActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_PickupFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickupFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PickupFX, AFPSObjectiveActor), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_SphereComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SphereComp, AFPSObjectiveActor), 0x0020080000080009, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, AFPSObjectiveActor), 0x0020080000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AFPSObjectiveActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSObjectiveActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FPSObjectiveActor.h"));
				MetaData->SetValue(NewProp_PickupFX, TEXT("Category"), TEXT("Effects"));
				MetaData->SetValue(NewProp_PickupFX, TEXT("ModuleRelativePath"), TEXT("Public/FPSObjectiveActor.h"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SphereComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSObjectiveActor.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSObjectiveActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSObjectiveActor, 1817460038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSObjectiveActor(Z_Construct_UClass_AFPSObjectiveActor, &AFPSObjectiveActor::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSObjectiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSObjectiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
