#pragma once
#include "CoreMinimal.h"
#include "AchievementSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FAchievementSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> MUnlockAchievements;
    
    GAMEBASESYSTEM_API FAchievementSaveInfo();
};

