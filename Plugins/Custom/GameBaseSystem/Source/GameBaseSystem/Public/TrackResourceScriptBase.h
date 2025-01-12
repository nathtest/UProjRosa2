#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TrackResourceScriptBase.generated.h"

class USequenceResources;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UTrackResourceScriptBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USequenceResources* ResourceBank;
    
public:
    UTrackResourceScriptBase();

};

