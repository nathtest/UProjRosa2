#pragma once
#include "CoreMinimal.h"
#include "VAParamLookControl.h"
#include "VAParamMoveControl.h"
#include "VisualActorParamDataAssetBase.h"
#include "VisualActorParamDataAsset.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UVisualActorParamDataAsset : public UVisualActorParamDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAParamLookControl MLookControlParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAParamMoveControl MMoveControlParam;
    
public:
    UVisualActorParamDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVAParamMoveControl GetMoveControlParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVAParamLookControl GetLookControlParam() const;
    
};

