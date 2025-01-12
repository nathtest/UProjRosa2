#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01BgmManagerInf.h"
#include "G01BgmRegister.h"
#include "G01BgmRequest.h"
#include "G01BgmTableRow.h"
#include "G01BgmManager.generated.h"

class UDataTable;
class UG01BgmLayerHandleObject;

UCLASS(Blueprintable)
class RS2RE_API AG01BgmManager : public AManagerBase, public IG01BgmManagerInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MBgmDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BgmTableRow> MCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BgmRegister> MRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BgmRequest> MSuspensionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BgmLayerHandleObject*> bgmHandleList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MDefaultMasterVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MDefaultCategoryVolume;
    
    AG01BgmManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLogPlayBGM(const FG01BgmRequest& InRequest);
    

    // Fix for true pure virtual functions not being implemented
};

