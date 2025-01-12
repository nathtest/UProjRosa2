#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01TextDebugScriptBase.generated.h"

UCLASS(Abstract, Blueprintable)
class RS2RE_API UG01TextDebugScriptBase : public UObject {
    GENERATED_BODY()
public:
    UG01TextDebugScriptBase();

};

