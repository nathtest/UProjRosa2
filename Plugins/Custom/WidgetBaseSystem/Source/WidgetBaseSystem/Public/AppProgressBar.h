#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "Components/ProgressBar.h"
#include "AppProgressBar.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UAppProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UAppProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetStyle(FProgressBarStyle InStyle);
    
};

