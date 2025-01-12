#pragma once
#include "CoreMinimal.h"
#include "AppNotificationObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppNotificationObserverInf -FallbackName=AppNotificationObserverInf
#include "InputManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputManager -FallbackName=InputManager
#include "G01InputManagerInterface.h"
#include "G01InputManager.generated.h"

class UG01GameSystemDataManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01InputManager : public AInputManager, public IG01InputManagerInterface, public IAppNotificationObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataManagerAccessor* GameSystemDataManagerAccessor;
    
public:
    AG01InputManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

