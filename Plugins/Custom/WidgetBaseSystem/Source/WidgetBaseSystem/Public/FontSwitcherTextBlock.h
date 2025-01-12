#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "AppTextBlock.h"
#include "FontSwitcherTextBlock.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UFontSwitcherTextBlock : public UAppTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFontIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateFontInfo> MFontList;
    
public:
    UFontSwitcherTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetFontIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFontIndex();
    
};

