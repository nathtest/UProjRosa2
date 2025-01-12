#pragma once
#include "CoreMinimal.h"
#include "SoundPlayParamCommon.h"
#include "Sound3DPlayParamAttachActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSound3DPlayParamAttachActor : public FSoundPlayParamCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MTargetParentActor;
    
    GAMEBASESYSTEM_API FSound3DPlayParamAttachActor();
};

