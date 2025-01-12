#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01BattleDirectorSequenceStruct.h"
#include "G01BattleDirectorSequenceDataAsset.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleDirectorSequenceDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleDirectorSequenceStruct> DataMap;
    
    UG01BattleDirectorSequenceDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetKeys();
    
};

