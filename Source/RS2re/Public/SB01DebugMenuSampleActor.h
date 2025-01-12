#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SB01DebugMenuSampleActor.generated.h"

class USB01DebugMenuTab_Sample;

UCLASS(Blueprintable)
class RS2RE_API ASB01DebugMenuSampleActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USB01DebugMenuTab_Sample* TabSample;
    
public:
    ASB01DebugMenuSampleActor(const FObjectInitializer& ObjectInitializer);

};

