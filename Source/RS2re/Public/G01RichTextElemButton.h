#pragma once
#include "CoreMinimal.h"
#include "InputMappingName.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputMappingName -FallbackName=InputMappingName
#include "RichTextElemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=RichTextElemBase -FallbackName=RichTextElemBase
#include "G01RichTextElemButton.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01RichTextElemButton : public URichTextElemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingName> MappingNames;
    
public:
    UG01RichTextElemButton();

};

