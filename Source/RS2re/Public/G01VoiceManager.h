#pragma once
#include "CoreMinimal.h"
#include "G01OptionMenuUiControllerObserverInf.h"
#include "G01SEADSoundManagerBase.h"
#include "G01VoiceLoadingParams.h"
#include "G01VoiceManagerInterface.h"
#include "ObserverSubjectComponent.h"
#include "G01VoiceManager.generated.h"

class UG01GameSystemDataManagerAccessor;
class UG01VoiceManagerSettings;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01VoiceManager : public AG01SEADSoundManagerBase, public IG01VoiceManagerInterface, public IG01OptionMenuUiControllerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataManagerAccessor* GameSystemDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01VoiceManagerSettings* Settings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01VoiceLoadingParams> LoadingParams;
    
public:
    AG01VoiceManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnResourceLoadComplete();
    

    // Fix for true pure virtual functions not being implemented
};

