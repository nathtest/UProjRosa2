#pragma once
#include "CoreMinimal.h"
#include "AchievementSaveInfo.h"
#include "ActivitySaveInfo.h"
#include "FlagSystemSaveInfo.h"
#include "QuestSaveInfo.h"
#include "SaveGameDataCore.h"
#include "SaveGameDataBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USaveGameDataBase : public USaveGameDataCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSaveInfo QuestSaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagSystemSaveInfo FlagSystemSaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivitySaveInfo ActivitySaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementSaveInfo AchievementSaveInfo;
    
    USaveGameDataBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAchievementSaveInfo GetAchievementSaveInfo() const;
    
};

