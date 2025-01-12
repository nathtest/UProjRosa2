#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ExtraLoadGameSystem.generated.h"

UCLASS(Abstract, Blueprintable)
class PLATFORMSYSTEMHELPER_API UExtraLoadGameSystem : public UObject {
    GENERATED_BODY()
public:
    UExtraLoadGameSystem();

};

