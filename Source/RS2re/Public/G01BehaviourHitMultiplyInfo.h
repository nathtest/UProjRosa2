#pragma once
#include "CoreMinimal.h"
#include "G01BehaviourAssociationInfo.h"
#include "G01BehaviourHitMultiplyInfo.generated.h"

class UG01ArtsBehaviourBase;

USTRUCT(BlueprintType)
struct FG01BehaviourHitMultiplyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01ArtsBehaviourBase*> BehaviourList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BehaviourAssociationInfo> BehaviourAssociationInfos;
    
    RS2RE_API FG01BehaviourHitMultiplyInfo();
};

