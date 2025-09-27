// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyVehiculo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECARDEN2025_MyVehiculo_generated_h
#error "MyVehiculo.generated.h already included, missing '#pragma once' in MyVehiculo.h"
#endif
#define UECARDEN2025_MyVehiculo_generated_h

#define FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyVehiculo(); \
	friend struct Z_Construct_UClass_AMyVehiculo_Statics; \
public: \
	DECLARE_CLASS(AMyVehiculo, AVehiculo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden2025"), NO_API) \
	DECLARE_SERIALIZER(AMyVehiculo)


#define FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyVehiculo(AMyVehiculo&&); \
	AMyVehiculo(const AMyVehiculo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyVehiculo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyVehiculo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyVehiculo) \
	NO_API virtual ~AMyVehiculo();


#define FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_20_PROLOG
#define FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN2025_API UClass* StaticClass<class AMyVehiculo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_arden_OneDrive_Documentos_GitHub_UnrealEngineCArde2025_UECArden2025_Source_UECArden2025_MyVehiculo_h


#define FOREACH_ENUM_EVEHICLEBRAND(op) \
	op(EVehicleBrand::Toyota) \
	op(EVehicleBrand::Ford) 

enum class EVehicleBrand;
template<> struct TIsUEnumClass<EVehicleBrand> { enum { Value = true }; };
template<> UECARDEN2025_API UEnum* StaticEnum<EVehicleBrand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
