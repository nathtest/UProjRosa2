#pragma once
#include "CoreMinimal.h"
#include "InputMappingName.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputMappingName -FallbackName=InputMappingName
#include "G01ConfigMenuButtonNavi.generated.h"

USTRUCT(BlueprintType)
struct FG01ConfigMenuButtonNavi {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingName> InputEventName;
    
    RS2RE_API FG01ConfigMenuButtonNavi();
};

