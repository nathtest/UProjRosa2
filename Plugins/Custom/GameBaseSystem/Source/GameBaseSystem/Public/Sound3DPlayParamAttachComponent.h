#pragma once
#include "CoreMinimal.h"
#include "SoundPlayParamCommon.h"
#include "Sound3DPlayParamAttachComponent.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSound3DPlayParamAttachComponent : public FSoundPlayParamCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MTargetParentComponent;
    
    GAMEBASESYSTEM_API FSound3DPlayParamAttachComponent();
};

