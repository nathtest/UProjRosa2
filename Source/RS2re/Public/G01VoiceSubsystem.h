#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameInstanceSubsystem -FallbackName=AppGameInstanceSubsystem
#include "G01VoiceLanguageID.h"
#include "G01VoiceSubsystem.generated.h"

class UG01VoiceLanguageResources;

UCLASS(Blueprintable)
class RS2RE_API UG01VoiceSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VoiceLanguageID LanguageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01VoiceLanguageResources* Resources;
    
public:
    UG01VoiceSubsystem();

};

