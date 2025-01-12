#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackPlayingDataArray.h"
#include "GameForceFeedbackManagerInf.h"
#include "ManagerBase.h"
#include "GameForceFeedbackManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGameForceFeedbackManager : public AManagerBase, public IGameForceFeedbackManagerInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FForceFeedbackPlayingDataArray> PlayingDataMap;
    
public:
    AGameForceFeedbackManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

