#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CustomSeqPlayerEventInterface.generated.h"

class UCustomLevelSequencePlayer;

UINTERFACE(Blueprintable, MinimalAPI)
class UCustomSeqPlayerEventInterface : public UInterface {
    GENERATED_BODY()
};

class ICustomSeqPlayerEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqPlayerEvent_OnSpawned(UCustomLevelSequencePlayer* InLvSequencePlayer);
    
};

