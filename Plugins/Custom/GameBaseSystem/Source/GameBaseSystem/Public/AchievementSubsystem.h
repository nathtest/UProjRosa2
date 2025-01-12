#pragma once
#include "CoreMinimal.h"
#include "AchievementSaveInfo.h"
#include "SaveDataUserSubsystemBase.h"
#include "AchievementSubsystem.generated.h"

class UAchievementSubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAchievementSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAchievementSaveInfo SaveData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAchievementSubsystemHelper* Helper;
    
public:
    UAchievementSubsystem();

    UFUNCTION(BlueprintCallable)
    void SimpleUnlock(const FName& InAchievementName);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void ProgressUnlock(const FName& InAchievementName, const float InValue);
    
};

