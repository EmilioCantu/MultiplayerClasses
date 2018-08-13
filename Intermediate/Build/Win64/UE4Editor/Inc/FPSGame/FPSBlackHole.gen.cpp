// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FPSBlackHole.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSBlackHole() {}
// Cross Module References
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSBlackHole_OverlapInnerSphere();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSBlackHole();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSBlackHole_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFPSBlackHole::StaticRegisterNativesAFPSBlackHole()
	{
		UClass* Class = AFPSBlackHole::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OverlapInnerSphere", (Native)&AFPSBlackHole::execOverlapInnerSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AFPSBlackHole_OverlapInnerSphere()
	{
		struct FPSBlackHole_eventOverlapInnerSphere_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AFPSBlackHole();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OverlapInnerSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00480401, 65535, sizeof(FPSBlackHole_eventOverlapInnerSphere_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, FPSBlackHole_eventOverlapInnerSphere_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, FPSBlackHole_eventOverlapInnerSphere_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, FPSBlackHole_eventOverlapInnerSphere_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, FPSBlackHole_eventOverlapInnerSphere_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, FPSBlackHole_eventOverlapInnerSphere_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, FPSBlackHole_eventOverlapInnerSphere_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, FPSBlackHole_eventOverlapInnerSphere_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComponent, FPSBlackHole_eventOverlapInnerSphere_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FPSBlackHole.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSBlackHole_NoRegister()
	{
		return AFPSBlackHole::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSBlackHole()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FPSGame();
			OuterClass = AFPSBlackHole::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSBlackHole_OverlapInnerSphere());

				UProperty* NewProp_PrimComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrimComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PrimComp, AFPSBlackHole), 0x0010000000080009, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_InnerSphereComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InnerSphereComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InnerSphereComp, AFPSBlackHole), 0x0020080000080009, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_OuterSphereComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OuterSphereComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OuterSphereComp, AFPSBlackHole), 0x0020080000080009, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, AFPSBlackHole), 0x0020080000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSBlackHole_OverlapInnerSphere(), "OverlapInnerSphere"); // 1517051325
				static TCppClassTypeInfo<TCppClassTypeTraits<AFPSBlackHole> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSBlackHole.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FPSBlackHole.h"));
				MetaData->SetValue(NewProp_PrimComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_PrimComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PrimComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSBlackHole.h"));
				MetaData->SetValue(NewProp_InnerSphereComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_InnerSphereComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InnerSphereComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSBlackHole.h"));
				MetaData->SetValue(NewProp_OuterSphereComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_OuterSphereComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_OuterSphereComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSBlackHole.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSBlackHole.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSBlackHole, 1010590732);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSBlackHole(Z_Construct_UClass_AFPSBlackHole, &AFPSBlackHole::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSBlackHole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSBlackHole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
