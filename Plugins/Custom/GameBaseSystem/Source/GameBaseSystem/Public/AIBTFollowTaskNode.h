#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingResult -FallbackName=EPathFollowingResult
#include "AppBTTask.h"
#include "AIBTFollowTaskNode.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAIBTFollowTaskNode : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAllowStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MReachTestIncludesAgentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MReachTestIncludesGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsStopOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsRun;
    
    UAIBTFollowTaskNode();

    //UFUNCTION(BlueprintCallable)
    //void FollowTaskConcept(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};

