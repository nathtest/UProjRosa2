#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01HudInformatioCategoryEnum.h"
#include "EG01HudInformationNoticeTypeEnum.h"
#include "EG01InteractObjectIconType.h"
#include "G01HudInformationObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HudInformationObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01HudInformationObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HudInformation_FinishedOpen(EG01HudInformatioCategoryEnum InCategory, EG01HudInformationNoticeTypeEnum InNoticeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HudInformation_ApplyHighLight(EG01InteractObjectIconType InCategory);
    
};

