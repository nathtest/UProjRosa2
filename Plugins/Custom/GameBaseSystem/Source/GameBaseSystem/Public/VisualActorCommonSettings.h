#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EVAGazeType.h"
#include "VAGazeInfo.h"
#include "VisualActorCommonSettings.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UVisualActorCommonSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EVAGazeType, FVAGazeInfo> GazeInfoMap;
    
public:
    UVisualActorCommonSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindGazeInfo(EVAGazeType InType, bool& OutIsFound, FVAGazeInfo& OutGazeInfo) const;
    
};

