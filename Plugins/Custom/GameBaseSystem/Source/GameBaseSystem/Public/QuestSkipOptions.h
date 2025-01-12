#pragma once
#include "CoreMinimal.h"
#include "QuestSkipOptions.generated.h"

USTRUCT(BlueprintType)
struct FQuestSkipOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlagImmediateUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAbsoluteSectionSkip;
    
    GAMEBASESYSTEM_API FQuestSkipOptions();
};

