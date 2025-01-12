#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01LevelStreamingDataAsset.generated.h"

class UG01StreamingSubLevelDataAsset;
class UWorld;

UCLASS(Blueprintable)
class RS2RE_API UG01LevelStreamingDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> MainSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> AdjoinSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01StreamingSubLevelDataAsset*> MainStreamingSubLevelDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01StreamingSubLevelDataAsset*> AdjoinStreamingSubLevelDataList;
    
    UG01LevelStreamingDataAsset();

};

