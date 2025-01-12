#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADLayoutType {
    enum Type {
        Point,
        Line,
        Polyline,
        TriangleStrip,
        TriangleFan,
        SphericalWedge,
        CylindricalSector,
    };
}

