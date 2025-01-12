#pragma once
#include "CoreMinimal.h"
#include "QuestSaveInfo.h"
#include "SaveDataUserSubsystemBase.h"
#include "QuestSubsystem.generated.h"

class UQuestCoreData;
class UQuestSubsystemHelper;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UQuestSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestSubsystemHelper* Helper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRestored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestSaveInfo Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestCoreData* LastTargetQuestCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestCoreData*> Cores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestCoreData*> TempCores;
    
public:
    UQuestSubsystem();

    UFUNCTION(BlueprintCallable)
    void GetLastTargetQuestCoreData(bool& OutIsValid, UQuestCoreData*& OutCoreData);
    
};

