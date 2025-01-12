#pragma once
#include "CoreMinimal.h"
#include "TextSpeakerFindResult.generated.h"

USTRUCT(BlueprintType)
struct FTextSpeakerFindResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSpeakerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MSpekaerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsValidText;
    
    GAMEBASESYSTEM_API FTextSpeakerFindResult();
};

