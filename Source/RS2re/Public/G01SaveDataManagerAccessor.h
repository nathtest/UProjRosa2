#pragma once
#include "CoreMinimal.h"
#include "ESaveDataSyncType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ESaveDataSyncType -FallbackName=ESaveDataSyncType
#include "SaveDataManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataManagerAccessor -FallbackName=SaveDataManagerAccessor
#include "SaveDataRequestInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataRequestInfo -FallbackName=SaveDataRequestInfo
#include "G01SaveDataLoadOptions.h"
#include "G01SaveDataSaveOptions.h"
#include "G01SaveDataManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01SaveDataManagerAccessor : public USaveDataManagerAccessor {
    GENERATED_BODY()
public:
    UG01SaveDataManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryExecuteAutoSave(bool& OutIsExecute, bool& OutIsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Save(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, FG01SaveDataSaveOptions InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable)
    void ReserveAutoSave(bool InIsForce);
    
    UFUNCTION(BlueprintCallable)
    void Load(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, FG01SaveDataLoadOptions InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitionFromSaveRestoreLevel() const;
    
};

