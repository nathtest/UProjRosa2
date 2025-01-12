#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Components/Image.h" //CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Image -FallbackName=Image
#include "G01TextLanguageID.h"
#include "LanguageSwitcherImage.generated.h"

UCLASS(Blueprintable)
class RS2RE_API ULanguageSwitcherImage : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01TextLanguageID, FSlateBrush> ImagesByLanguage;
    
public:
    ULanguageSwitcherImage();

    UFUNCTION(BlueprintCallable)
    void SetSelectLanguageImage(FG01TextLanguageID LanguageID);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLanguageImage();
    
};

