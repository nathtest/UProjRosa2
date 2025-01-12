#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyLocationName.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqNotifyLocationName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MLocationTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MAreaTextID;
    
    FG01SeqNotifyLocationName();
};

