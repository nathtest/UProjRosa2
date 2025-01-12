#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QuestStackObjectBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackObjectBase : public UObject {
    GENERATED_BODY()
public:
    UQuestStackObjectBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Debug_GetPrintStackStatus() const;
    
};

