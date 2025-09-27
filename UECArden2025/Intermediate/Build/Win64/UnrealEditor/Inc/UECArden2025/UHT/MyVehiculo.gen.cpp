// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden2025/MyVehiculo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyVehiculo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UECARDEN2025_API UClass* Z_Construct_UClass_AMyVehiculo();
UECARDEN2025_API UClass* Z_Construct_UClass_AMyVehiculo_NoRegister();
UECARDEN2025_API UClass* Z_Construct_UClass_AVehiculo();
UECARDEN2025_API UEnum* Z_Construct_UEnum_UECArden2025_EVehicleBrand();
UPackage* Z_Construct_UPackage__Script_UECArden2025();
// End Cross Module References

// Begin Enum EVehicleBrand
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVehicleBrand;
static UEnum* EVehicleBrand_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVehicleBrand.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVehicleBrand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UECArden2025_EVehicleBrand, (UObject*)Z_Construct_UPackage__Script_UECArden2025(), TEXT("EVehicleBrand"));
	}
	return Z_Registration_Info_UEnum_EVehicleBrand.OuterSingleton;
}
template<> UECARDEN2025_API UEnum* StaticEnum<EVehicleBrand>()
{
	return EVehicleBrand_StaticEnum();
}
struct Z_Construct_UEnum_UECArden2025_EVehicleBrand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Ford.Comment", "/**\n * \n */" },
		{ "Ford.DisplayName", "Ford" },
		{ "Ford.Name", "EVehicleBrand::Ford" },
		{ "ModuleRelativePath", "MyVehiculo.h" },
		{ "Toyota.Comment", "/**\n * \n */" },
		{ "Toyota.DisplayName", "Toyota" },
		{ "Toyota.Name", "EVehicleBrand::Toyota" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVehicleBrand::Toyota", (int64)EVehicleBrand::Toyota },
		{ "EVehicleBrand::Ford", (int64)EVehicleBrand::Ford },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UECArden2025_EVehicleBrand_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UECArden2025,
	nullptr,
	"EVehicleBrand",
	"EVehicleBrand",
	Z_Construct_UEnum_UECArden2025_EVehicleBrand_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UECArden2025_EVehicleBrand_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UECArden2025_EVehicleBrand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UECArden2025_EVehicleBrand_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UECArden2025_EVehicleBrand()
{
	if (!Z_Registration_Info_UEnum_EVehicleBrand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVehicleBrand.InnerSingleton, Z_Construct_UEnum_UECArden2025_EVehicleBrand_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVehicleBrand.InnerSingleton;
}
// End Enum EVehicleBrand

// Begin Class AMyVehiculo
void AMyVehiculo::StaticRegisterNativesAMyVehiculo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyVehiculo);
UClass* Z_Construct_UClass_AMyVehiculo_NoRegister()
{
	return AMyVehiculo::StaticClass();
}
struct Z_Construct_UClass_AMyVehiculo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyVehiculo.h" },
		{ "ModuleRelativePath", "MyVehiculo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarBrand_MetaData[] = {
		{ "Category", "Vehiculo" },
		{ "ModuleRelativePath", "MyVehiculo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarModel_MetaData[] = {
		{ "Category", "Vehiculo" },
		{ "ModuleRelativePath", "MyVehiculo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicensePlate_MetaData[] = {
		{ "Category", "Vehiculo" },
		{ "ModuleRelativePath", "MyVehiculo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[] = {
		{ "Category", "Vehiculo" },
		{ "ModuleRelativePath", "MyVehiculo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CarBrand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CarBrand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CarModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LicensePlate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyVehiculo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyVehiculo_Statics::NewProp_CarBrand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyVehiculo_Statics::NewProp_CarBrand = { "CarBrand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyVehiculo, CarBrand), Z_Construct_UEnum_UECArden2025_EVehicleBrand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarBrand_MetaData), NewProp_CarBrand_MetaData) }; // 530041137
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyVehiculo_Statics::NewProp_CarModel = { "CarModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyVehiculo, CarModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarModel_MetaData), NewProp_CarModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyVehiculo_Statics::NewProp_LicensePlate = { "LicensePlate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyVehiculo, LicensePlate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicensePlate_MetaData), NewProp_LicensePlate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyVehiculo_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyVehiculo, Driver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driver_MetaData), NewProp_Driver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyVehiculo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyVehiculo_Statics::NewProp_CarBrand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyVehiculo_Statics::NewProp_CarBrand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyVehiculo_Statics::NewProp_CarModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyVehiculo_Statics::NewProp_LicensePlate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyVehiculo_Statics::NewProp_Driver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyVehiculo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyVehiculo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVehiculo,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyVehiculo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyVehiculo_Statics::ClassParams = {
	&AMyVehiculo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyVehiculo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyVehiculo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyVehiculo_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyVehiculo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyVehiculo()
{
	if (!Z_Registration_Info_UClass_AMyVehiculo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyVehiculo.OuterSingleton, Z_Construct_UClass_AMyVehiculo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyVehiculo.OuterSingleton;
}
template<> UECARDEN2025_API UClass* StaticClass<AMyVehiculo>()
{
	return AMyVehiculo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyVehiculo);
AMyVehiculo::~AMyVehiculo() {}
// End Class AMyVehiculo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVehicleBrand_StaticEnum, TEXT("EVehicleBrand"), &Z_Registration_Info_UEnum_EVehicleBrand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 530041137U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyVehiculo, AMyVehiculo::StaticClass, TEXT("AMyVehiculo"), &Z_Registration_Info_UClass_AMyVehiculo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyVehiculo), 3780132206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_3454243633(TEXT("/Script/UECArden2025"),
	Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
