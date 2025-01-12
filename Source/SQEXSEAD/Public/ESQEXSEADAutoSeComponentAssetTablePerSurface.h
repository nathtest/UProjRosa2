#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeComponentAssetTablePerSurface.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSeComponentAssetTablePerSurface {
    enum Type {
        Walk,
        Run,
        Jump,
        LandNormal,
        LandHard,
        FootShuffle,
        PerSurfaceAux1,
        PerSurfaceAux2,
        PerSurfaceAux3,
        PerSurfaceAux4,
        MAX,
    };
}

