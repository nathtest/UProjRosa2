#pragma once
#include "CoreMinimal.h"
#include "G01TutorialPageInfo.generated.h"

class UGameViewWidget;
class UTexture2D;

USTRUCT(BlueprintType)
struct FG01TutorialPageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MContentTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameViewWidget> MWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MTutorialTexture;
    
    RS2RE_API FG01TutorialPageInfo();
};

