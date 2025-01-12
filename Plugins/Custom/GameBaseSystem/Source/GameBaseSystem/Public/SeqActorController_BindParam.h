#pragma once
#include "CoreMinimal.h"
#include "EditableLevelObjectID.h"
#include "SeqActorAnimBindParam.h"
#include "SeqActorController_BindParam.generated.h"

class AVisualActor;

USTRUCT(BlueprintType)
struct FSeqActorController_BindParam : public FSeqActorAnimBindParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVisualActor> MDefaultVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableLevelObjectID MReplaceLevelObjectID;
    
    GAMEBASESYSTEM_API FSeqActorController_BindParam();
};

