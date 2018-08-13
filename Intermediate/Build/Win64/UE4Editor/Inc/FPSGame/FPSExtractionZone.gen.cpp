// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FPSExtractionZone.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSExtractionZone() {}
// Cross Module References
	FPSGAME_API UFunction* Z_Construct_UFunction_AFPSExtractionZone_HandleOverlap();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSExtractionZone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSExtractionZone_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AFPSExtractionZone::StaticRegisterNativesAFPSExtractionZone()
	{
		UClass* Class = AFPSExtractionZone::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "HandleOverlap", (Native)&AFPSExtractionZone::execHandleOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AFPSExtractionZone_HandleOverlap()
	{
		struct FPSExtractionZone_eventHandleOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AFPSExtractionZone();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HandleOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00480401, 65535, sizeof(FPSExtractionZone_eventHandleOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, FPSExtractionZone_eventHandleOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, FPSExtractionZone_eventHandleOverlap_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, FPSExtractionZone_eventHandleOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, FPSExtractionZone_eventHandleOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, FPSExtractionZone_eventHandleOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, FPSExtractionZone_eventHandleOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, FPSExtractionZone_eventHandleOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComponent, FPSExtractionZone_eventHandleOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/FPSExtractionZone.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSExtractionZone_NoRegister()
	{
		return AFPSExtractionZone::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSExtractionZone()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FPSGame();
			OuterClass = AFPSExtractionZone::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSExtractionZone_HandleOverlap());

				UProperty* NewProp_decalComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("decalComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(decalComp, AFPSExtractionZone), 0x00200800000a0009, Z_Construct_UClass_UDecalComponent_NoRegister());
				UProperty* NewProp_overlapComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("overlapComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(overlapComp, AFPSExtractionZone), 0x00200800000a0009, Z_Construct_UClass_UBoxComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSExtractionZone_HandleOverlap(), "HandleOverlap"); // 157670162
				static TCppClassTypeInfo<TCppClassTypeTraits<AFPSExtractionZone> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSExtractionZone.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FPSExtractionZone.h"));
				MetaData->SetValue(NewProp_decalComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_decalComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_decalComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSExtractionZone.h"));
				MetaData->SetValue(NewProp_overlapComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_overlapComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_overlapComp, TEXT("ModuleRelativePath"), TEXT("Public/FPSExtractionZone.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSExtractionZone, 3526435565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSExtractionZone(Z_Construct_UClass_AFPSExtractionZone, &AFPSExtractionZone::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSExtractionZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSExtractionZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
