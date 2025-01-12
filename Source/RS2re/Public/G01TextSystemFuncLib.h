#pragma once
#include "CoreMinimal.h"
#include "TextSystemFuncLib.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=TextSystemFuncLib -FallbackName=TextSystemFuncLib
#include "G01TextSystemFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01TextSystemFuncLib : public UTextSystemFuncLib {
    GENERATED_BODY()
public:
    UG01TextSystemFuncLib();

};

