#pragma once
#include "CoreMinimal.h"
#include "SeqActorBinder_PhysicsParams.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorBinder_PhysicsParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MPhysicsAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PartialPhysicsAlpha_Skirt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PartialPhysicsAlpha_Cape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsEnablePhysicsEaseInForCameraCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MPhysicsEaseBeginAlpha;
    
    GAMEBASESYSTEM_API FSeqActorBinder_PhysicsParams();
};

