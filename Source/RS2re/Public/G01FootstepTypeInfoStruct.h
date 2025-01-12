#pragma once
#include "CoreMinimal.h"
#include "G01FootstepInfoStruct.h"
#include "G01StagePhysicalMaterialIDStruct.h"
#include "G01FootstepTypeInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01FootstepTypeInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01StagePhysicalMaterialIDStruct, FG01FootstepInfoStruct> FootstepInfoList;
    
    FG01FootstepTypeInfoStruct();
};

