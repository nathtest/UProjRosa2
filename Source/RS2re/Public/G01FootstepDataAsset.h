#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EG01FootStepType.h"
#include "G01FootstepTypeInfoStruct.h"
#include "G01FootstepDataAsset.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FootstepDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01FootStepType, FG01FootstepTypeInfoStruct> FootstepTypeInfoList;
    
public:
    UG01FootstepDataAsset();

};

