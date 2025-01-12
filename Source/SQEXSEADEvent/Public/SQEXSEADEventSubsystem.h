#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SQEXSEADEventSubsystem.generated.h"

class USQEXSEADEventController;

UCLASS(Blueprintable)
class SQEXSEADEVENT_API USQEXSEADEventSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADEventController* pEventController;
    
public:
    USQEXSEADEventSubsystem();

};

