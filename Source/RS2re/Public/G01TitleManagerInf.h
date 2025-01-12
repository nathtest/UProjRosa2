#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ESaveSlotCategory.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ESaveSlotCategory -FallbackName=ESaveSlotCategory
#include "EG01TransferTypeEnum.h"
#include "G01GamePlayDataSaveInfo.h"
#include "G01TitleManagerInf.generated.h"

class USaveGameDataCore;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TitleManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01TitleManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_StartTransferSaveData(EG01TransferTypeEnum InPlatformType, bool& OutResult, bool& OutIsDamageSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_SetIsTransferSaveData(bool InCanTransfer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_SetIsExistenceSaveData(bool InExistenceSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_IsTransferSaveData(bool& ReTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_IsExistenceSystemSaveData(bool& ReTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_IsExistenceSaveData(bool& ReTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_GetTransferPlatformList(TArray<EG01TransferTypeEnum>& OutPlatformList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_GetTempSaveData(const ESaveSlotCategory& InCategory, const int32& InSlotNum, bool& OutSuccess, USaveGameDataCore*& OutSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_GetLatestSaveData(USaveGameDataCore*& OutSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_GetLasetSavePlayData(FG01GamePlayDataSaveInfo& OutSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleManager_FindHandoverSaveData(bool& IsSuccess);
    
};

