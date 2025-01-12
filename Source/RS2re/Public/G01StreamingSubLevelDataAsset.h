#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01ConditionSubLevelInfo.h"
#include "G01StreamingSubLevelDataAsset.generated.h"

class UWorld;

UCLASS(Blueprintable)
class RS2RE_API UG01StreamingSubLevelDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ConditionSubLevelInfo> ConditionSubLevelInfoList;
    
    UG01StreamingSubLevelDataAsset();

};

