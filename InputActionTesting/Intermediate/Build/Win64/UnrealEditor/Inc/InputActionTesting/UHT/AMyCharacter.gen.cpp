// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputActionTesting/AMyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAMyCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
INPUTACTIONTESTING_API UClass* Z_Construct_UClass_AAMyCharacter();
INPUTACTIONTESTING_API UClass* Z_Construct_UClass_AAMyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_InputActionTesting();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAMyCharacter ************************************************************
void AAMyCharacter::StaticRegisterNativesAAMyCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAMyCharacter;
UClass* AAMyCharacter::GetPrivateStaticClass()
{
	using TClass = AAMyCharacter;
	if (!Z_Registration_Info_UClass_AAMyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AMyCharacter"),
			Z_Registration_Info_UClass_AAMyCharacter.InnerSingleton,
			StaticRegisterNativesAAMyCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAMyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAMyCharacter_NoRegister()
{
	return AAMyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AMyCharacter.h" },
		{ "ModuleRelativePath", "AMyCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_InputActionTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMyCharacter_Statics::ClassParams = {
	&AAMyCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAMyCharacter()
{
	if (!Z_Registration_Info_UClass_AAMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMyCharacter.OuterSingleton, Z_Construct_UClass_AAMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAMyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyCharacter);
AAMyCharacter::~AAMyCharacter() {}
// ********** End Class AAMyCharacter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2500411_Documents_GitHub_InputActionC_Testing_Uni_InputActionTesting_Source_InputActionTesting_AMyCharacter_h__Script_InputActionTesting_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAMyCharacter, AAMyCharacter::StaticClass, TEXT("AAMyCharacter"), &Z_Registration_Info_UClass_AAMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMyCharacter), 2766113955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2500411_Documents_GitHub_InputActionC_Testing_Uni_InputActionTesting_Source_InputActionTesting_AMyCharacter_h__Script_InputActionTesting_1792151130(TEXT("/Script/InputActionTesting"),
	Z_CompiledInDeferFile_FID_Users_2500411_Documents_GitHub_InputActionC_Testing_Uni_InputActionTesting_Source_InputActionTesting_AMyCharacter_h__Script_InputActionTesting_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2500411_Documents_GitHub_InputActionC_Testing_Uni_InputActionTesting_Source_InputActionTesting_AMyCharacter_h__Script_InputActionTesting_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
