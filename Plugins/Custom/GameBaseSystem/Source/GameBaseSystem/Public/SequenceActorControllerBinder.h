#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindResult.h"
#include "SeqActorAnimControllerBinder.h"
#include "SeqActorController_BindParam.h"
#include "SequenceActorControllerBinder.generated.h"

class ULevelObjectFinderAccessComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceActorControllerBinder : public ASeqActorAnimControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSeqActorController_BindParam MBindParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelObjectFindResult MLevelObjectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULevelObjectFinderAccessComponent* LevelObjectFinder;
    
public:
    ASequenceActorControllerBinder(const FObjectInitializer& ObjectInitializer);

};

