#pragma once
#include "CoreMinimal.h"
#include "G01BehaviourAssociationInfo.generated.h"

class UG01ArtsBehaviourBase;

USTRUCT(BlueprintType)
struct FG01BehaviourAssociationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01ArtsBehaviourBase*> BehaviourList_;
    
    RS2RE_API FG01BehaviourAssociationInfo();
};

