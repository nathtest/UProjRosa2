#pragma once
#include "CoreMinimal.h"
#include "QuestAssets.generated.h"

class AQuestObjectBase;
class UDataTable;

USTRUCT(BlueprintType)
struct FQuestAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> MQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MSectionNameTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MFlagTable;
    
    GAMEBASESYSTEM_API FQuestAssets();
};

