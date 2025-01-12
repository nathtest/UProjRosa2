#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveCompoArray.generated.h"

class UQuestEventReceiveComponent;

USTRUCT(BlueprintType)
struct FQuestReceiveCompoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuestEventReceiveComponent*> MReceiveComponents;
    
    GAMEBASESYSTEM_API FQuestReceiveCompoArray();
};

