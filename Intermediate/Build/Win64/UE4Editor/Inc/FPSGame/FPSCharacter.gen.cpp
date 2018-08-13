// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FPSCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_FPSGame();
			OuterClass = AFPSCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsCarryingObjective, AFPSCharacter);
				UProperty* NewProp_bIsCarryingObjective = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsCarryingObjective"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsCarryingObjective, AFPSCharacter), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(bIsCarryingObjective, AFPSCharacter), sizeof(bool), true);
				UProperty* NewProp_FireAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireAnimation, AFPSCharacter), 0x0010000000010001, Z_Construct_UClass_UAnimSequence_NoRegister());
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireSound, AFPSCharacter), 0x0010000000010001, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AFPSCharacter), 0x0014000000010001, Z_Construct_UClass_AFPSProjectile_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_CameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComponent, AFPSCharacter), 0x00200800000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_GunMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GunMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GunMeshComponent, AFPSCharacter), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_Mesh1PComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1PComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1PComponent, AFPSCharacter), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AFPSCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_bIsCarryingObjective, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_bIsCarryingObjective, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_FireAnimation, TEXT("ToolTip"), TEXT("AnimMontage to play each time we fire"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("Sound to play each time we fire"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
				MetaData->SetValue(NewProp_GunMeshComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_GunMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_GunMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_GunMeshComponent, TEXT("ToolTip"), TEXT("Gun mesh: 1st person view (seen only by self)"));
				MetaData->SetValue(NewProp_Mesh1PComponent, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1PComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1PComponent, TEXT("ModuleRelativePath"), TEXT("Public/FPSCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1PComponent, TEXT("ToolTip"), TEXT("Pawn mesh: 1st person view"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 1330913179);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
