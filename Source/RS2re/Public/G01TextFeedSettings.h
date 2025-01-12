#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EG01MessageSpeedTypeEnum.h"
#include "G01TextFeedParams.h"
#include "G01TextFeedSettings.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01TextFeedSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EG01MessageSpeedTypeEnum, FG01TextFeedParams> FeedParams;
    
public:
    UG01TextFeedSettings();

    UFUNCTION(BlueprintCallable)
    void Resize();
    
};

