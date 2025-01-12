#pragma once
#include "CoreMinimal.h"
#include "AIMovePathPointInfo.h"
#include "EAISpeed.h"
#include "EPathMoveState.h"
#include "AIMovePathInfo.generated.h"

USTRUCT(BlueprintType)
struct FAIMovePathInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIMovePathPointInfo> MLeadTargetPointPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathMoveState MPathMoveSate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MReverseFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISpeed MMoveID;
    
    GAMEBASESYSTEM_API FAIMovePathInfo();
};

