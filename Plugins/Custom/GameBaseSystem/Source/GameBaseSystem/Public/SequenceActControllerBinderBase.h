#pragma once
#include "CoreMinimal.h"
#include "SeqBinderTransformOverrideParam.h"
#include "SequenceActionControllerBinderInterface.h"
#include "SequenceTrackActorBase.h"
#include "SequenceActControllerBinderBase.generated.h"

class ASequenceActionControllerBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceActControllerBinderBase : public ASequenceTrackActorBase, public ISequenceActionControllerBinderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName MBinderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqBinderTransformOverrideParam TransformOverrideParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceActionControllerBase* MBindActionController;
    
public:
    ASequenceActControllerBinderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeqBinderTransformOverrideParam GetTransformOverrideParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASequenceActionControllerBase* GetActionController() const;
    

    // Fix for true pure virtual functions not being implemented
};

