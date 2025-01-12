#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "BinkMediaResourceID.h"
#include "BinkMediaResourceTableRow.h"
#include "SequencerBinkMediaTrackInterface.generated.h"

UINTERFACE(Blueprintable)
class USequencerBinkMediaTrackInterface : public UInterface {
    GENERATED_BODY()
};

class ISequencerBinkMediaTrackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BinkMediaTrack_GetMediaDuration(FTimespan& OutDuration, const FBinkMediaResourceID& InResourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_BinkMediaTrack_FindResourceData(bool& OutIsFound, FBinkMediaResourceTableRow& OutData, const FBinkMediaResourceID& InResourceID);
    
};

