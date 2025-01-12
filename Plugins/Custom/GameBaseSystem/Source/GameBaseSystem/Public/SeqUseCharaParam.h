#pragma once
#include "CoreMinimal.h"
#include "EVisualActorAnimQuality.h"
#include "Templates/SubclassOf.h"
#include "SeqUseCharaParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqUseCharaParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisualActorAnimQuality AnimQuality;
    
    FSeqUseCharaParam();
};

