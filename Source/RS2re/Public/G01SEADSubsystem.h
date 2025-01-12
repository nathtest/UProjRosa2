#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameInstanceSubsystem -FallbackName=AppGameInstanceSubsystem
#include "G01SEADActiveSoundArray.h"
#include "G01SEADSoundRegisterArray.h"
#include "G01SoundCategory.h"
#include "G01SEADSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SEADSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FG01SoundCategory, FG01SEADSoundRegisterArray> RegistersByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FG01SoundCategory, FG01SEADActiveSoundArray> ActiveSoundsByCategory;
    
public:
    UG01SEADSubsystem();

};

