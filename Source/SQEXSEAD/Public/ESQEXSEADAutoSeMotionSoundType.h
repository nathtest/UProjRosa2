#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeMotionSoundType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSeMotionSoundType {
    enum Type {
        None,
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
    };
}

