#pragma once
#include "CoreMinimal.h"
#include "AppGameInstance.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameInstance -FallbackName=AppGameInstance
#include "G01GameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class RS2RE_API UG01GameInstance : public UAppGameInstance {
    GENERATED_BODY()
public:
    UG01GameInstance();

};

