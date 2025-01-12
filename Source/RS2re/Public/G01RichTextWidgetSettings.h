#pragma once
#include "CoreMinimal.h"
#include "RichTextWidgetSettings.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=RichTextWidgetSettings -FallbackName=RichTextWidgetSettings
#include "Templates/SubclassOf.h"
#include "G01RichTextWidgetSettings.generated.h"

class UDataTable;
class UG01RichTextElemButton;
class UG01RichTextElemImage;

UCLASS(Blueprintable)
class RS2RE_API UG01RichTextWidgetSettings : public URichTextWidgetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01RichTextElemButton> ElemClass_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag_ButtonPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag_ButtonSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Res_ButtonTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01RichTextElemImage> ElemClass_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag_ImagePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag_ImageSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Res_ImageTable;
    
    UG01RichTextWidgetSettings();

};

