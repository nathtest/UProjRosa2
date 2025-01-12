#include "G01MaterialFunctionLibrary.h"

UG01MaterialFunctionLibrary::UG01MaterialFunctionLibrary() {
}

TEnumAsByte<EBlendMode> UG01MaterialFunctionLibrary::GetBlendMode(UMaterialInterface* InMaterial) {
    return BLEND_Opaque;
}


