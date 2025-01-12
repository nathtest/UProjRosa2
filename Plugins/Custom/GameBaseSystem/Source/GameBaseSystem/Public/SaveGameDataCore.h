#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "EPlatformType.h"
#include "ESaveDataGroup.h"
#include "ESaveDataState.h"
#include "ESaveSlotCategory.h"
#include "SaveDataLoadOptions.h"
#include "SaveDataTypeInfo.h"
#include "GameFrameWork/SaveGame.h"
#include "Templates/SubclassOf.h"
#include "SaveGameDataCore.generated.h"

class USaveGameDataCore;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USaveGameDataCore : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformType PlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTrial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataTypeInfo TypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataLoadOptions LoadOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveDataState State;
    
public:
    USaveGameDataCore();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWritable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrialData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTempLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUserIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSaveDataTypeInfo GetTypeInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlatformType GetSavePlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSaveDataLoadOptions GetLoadOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USaveGameDataCore> GetLatestVersionClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataGroup GetGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveSlotCategory GetCategory() const;
    
};

