#pragma once
#include "CoreMinimal.h"
#include "AppTextBlock.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppTextBlock -FallbackName=AppTextBlock
#include "G01AppTextBlockCache.h"
#include "G01TextFindArgs.h"
#include "G01AppTextBlock.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01AppTextBlock : public UAppTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01AppTextBlockCache Cache;
    
public:
    UG01AppTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextNoCRLF(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetTextIdAndArgs(FName InTextID, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void SetTextAndArgs(FText InText, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void SetArgs(const FG01TextFindArgs& InArgs);
    
};

