#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EG01GameDifficultyType.h"
#include "G01DifficultyEnemyForceLevelData.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DifficultyEnemyForceLevelData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01GameDifficultyType, int32> AddEnemyForceLevel;
    
public:
    UG01DifficultyEnemyForceLevelData();

};

