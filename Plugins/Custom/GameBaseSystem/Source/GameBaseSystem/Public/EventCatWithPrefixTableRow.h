#pragma once
#include "CoreMinimal.h"
#include "EventCatTableRow.h"
#include "EventCatWithPrefixTableRow.generated.h"

USTRUCT(BlueprintType)
struct FEventCatWithPrefixTableRow : public FEventCatTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MPrefix;
    
    GAMEBASESYSTEM_API FEventCatWithPrefixTableRow();
};

