#pragma once
#include "CoreMinimal.h"
#include "AppNotificationObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppNotificationObserverInf -FallbackName=AppNotificationObserverInf
#include "G01BgmRegister.h"
#include "G01OptionMenuUiControllerObserverInf.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01BgmSubsystem.generated.h"

class UG01BgmLayerHandleObject;

UCLASS(Blueprintable)
class RS2RE_API UG01BgmSubsystem : public UG01SaveDataUserSubsystemBase, public IAppNotificationObserverInf, public IG01OptionMenuUiControllerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BgmRegister> MRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BgmLayerHandleObject*> bgmHandleList;
    
public:
    UG01BgmSubsystem();


    // Fix for true pure virtual functions not being implemented
};

