#pragma once
#include "CoreMinimal.h"
#include "G01BattleDebugSetupData.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleDebugSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAvailableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideBattleFieldId;
    
    RS2RE_API FG01BattleDebugSetupData();
};

