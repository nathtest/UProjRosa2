#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetTransform -FallbackName=WidgetTransform
#include "TextWrapperOwnerInterface.h"
#include "Components/TextBlock.h"
#include "AppTextBlock.generated.h"

class UTextWrapper;
class UUserWidget;

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UAppTextBlock : public UTextBlock, public ITextWrapperOwnerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLinkLanguageFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsTextOverAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMaxAdjustSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMinAdjustScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsProhibitionConvertUse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsScreenChangeAutoWrapUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWrapper* TextWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseManualPixelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsFastTextUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform MDefaultRenderTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MProhibitionWrapTextAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsExceptUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* MostParentUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D cacheMaxTextSize;
    
public:
    UAppTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextId(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateMaxPixel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInViewport() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetTextSize(const FString& inString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetOriginalText() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMaxSize();
    
    UFUNCTION(BlueprintCallable)
    void EnableExceptUpdate();
    

    // Fix for true pure virtual functions not being implemented
};

