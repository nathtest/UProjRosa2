#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.generated.h"

USTRUCT(BlueprintType)
struct FLevelTransitionInfoView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MLevelID;
    
    GAMEBASESYSTEM_API FLevelTransitionInfoView();
};

