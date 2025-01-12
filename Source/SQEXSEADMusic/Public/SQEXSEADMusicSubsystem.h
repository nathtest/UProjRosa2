#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SQEXSEADMusicSubsystem.generated.h"

class USQEXSEADMusicController;

UCLASS(Blueprintable)
class SQEXSEADMUSIC_API USQEXSEADMusicSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADMusicController* Controller;
    
public:
    USQEXSEADMusicSubsystem();

};

