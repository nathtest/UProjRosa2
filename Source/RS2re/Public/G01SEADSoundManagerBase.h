#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01SEADActiveSoundArray.h"
#include "G01SEADSoundManagerInterface.h"
#include "G01SoundCategory.h"
#include "G01SEADSoundManagerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SEADSoundManagerBase : public AManagerBase, public IG01SEADSoundManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SoundCategory SoundCategory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SEADActiveSoundArray EmptyActiveSounds;
    
public:
    AG01SEADSoundManagerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void LoadCompleteCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SoundCategory GetCategory() const;
    

    // Fix for true pure virtual functions not being implemented
};

