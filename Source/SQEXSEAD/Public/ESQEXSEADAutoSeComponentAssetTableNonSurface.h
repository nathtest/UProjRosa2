#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeComponentAssetTableNonSurface.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSeComponentAssetTableNonSurface {
    enum Type {
        RustleArm,
        RustleFoot,
        RustleFootCrotch,
        RustleFootBend,
        WingFlapUp,
        WingFlapDown,
        SwingKnock,
        SwingRub,
        Turn,
        RustleHandWave,
        HeadRot,
        Bow,
        RagdollBounce,
        RagdollFricative,
        NonSurfaceAux1,
        NonSurfaceAux2,
        NonSurfaceAux3,
        NonSurfaceAux4,
        MAX,
    };
}

