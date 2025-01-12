#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01LifePointUiData.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01LifePointUiData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarningLifePointNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIncludeLifePointMax;
    
public:
    UG01LifePointUiData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarningLifePoint(int32 InCurrentLP, int32 InMaxLP);
    
};

