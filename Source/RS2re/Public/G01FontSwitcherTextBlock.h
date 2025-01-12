#pragma once
#include "CoreMinimal.h"
#include "FontSwitcherTextBlock.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=FontSwitcherTextBlock -FallbackName=FontSwitcherTextBlock
#include "G01AppTextBlockCache.h"
#include "G01TextFindArgs.h"
#include "G01FontSwitcherTextBlock.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FontSwitcherTextBlock : public UFontSwitcherTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01AppTextBlockCache Cache;
    
public:
    UG01FontSwitcherTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextIdAndArgs(FName InTextID, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void SetTextAndArgs(FText InText, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void SetArgs(const FG01TextFindArgs& InArgs);
    
};

