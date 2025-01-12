#pragma once
#include "CoreMinimal.h"
#include "GameViewWidget.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameViewWidget -FallbackName=GameViewWidget
#include "G01TextLanguageID.h"
#include "Templates/SubclassOf.h"
#include "LanguageSwitcherWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API ULanguageSwitcherWidget : public UGameViewWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01TextLanguageID, TSubclassOf<UGameViewWidget>> WidgetByLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01TextLanguageID, TSubclassOf<UGameViewWidget>> WidgetByDemoLanguage;
    
    ULanguageSwitcherWidget();

    UFUNCTION(BlueprintCallable)
    FG01TextLanguageID GetCurrentLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimAction(FName InFunctionName);
    
};

