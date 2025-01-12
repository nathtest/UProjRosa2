#pragma once
#include "CoreMinimal.h"
#include "QuestCoreDataArray.generated.h"

class UQuestCoreData;

USTRUCT(BlueprintType)
struct FQuestCoreDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UQuestCoreData*> CoreDataArray;
    
    GAMEBASESYSTEM_API FQuestCoreDataArray();
};

