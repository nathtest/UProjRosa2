#pragma once
#include "CoreMinimal.h"
#include "SeqLoadAnimInfo.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSeqLoadAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> ActualAnimPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AnimDataIndexList;
    
    GAMEBASESYSTEM_API FSeqLoadAnimInfo();
};

