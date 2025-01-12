#pragma once
#include "CoreMinimal.h"
#include "TextSpeakerFindResult.h"
#include "TextFindResult.generated.h"

USTRUCT(BlueprintType)
struct FTextFindResult : public FTextSpeakerFindResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MTextContant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MPriority;
    
    GAMEBASESYSTEM_API FTextFindResult();
};

