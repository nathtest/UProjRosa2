#pragma once
#include "CoreMinimal.h"
#include "G01ImperialPowerSaveDataStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ImperialPowerSaveDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewImperialIncome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewEnemyForceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> PreviewSevenHeroesMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewForceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActiveUmbrology;
    
    FG01ImperialPowerSaveDataStruct();
};

