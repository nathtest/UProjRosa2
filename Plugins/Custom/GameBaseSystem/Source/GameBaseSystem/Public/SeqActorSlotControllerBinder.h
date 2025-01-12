#pragma once
#include "CoreMinimal.h"
#include "ActorSlotBinderInterface.h"
#include "SeqActorAnimControllerBinder.h"
#include "SeqActorSlotBindParam.h"
#include "SeqActorSlotControllerBinder.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASeqActorSlotControllerBinder : public ASeqActorAnimControllerBinder, public IActorSlotBinderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorSlotBindParam MBindParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<int32> DisableSequenceAnimControllIndexList;
    
public:
    ASeqActorSlotControllerBinder(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

