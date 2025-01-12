#pragma once
#include "CoreMinimal.h"
#include "SeqCameraShotSectionParam.h"
#include "SeqCameraShotSectionParamArray.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqCameraShotSectionParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCameraShotSectionParam> SectionParams;
    
    FSeqCameraShotSectionParamArray();
};

