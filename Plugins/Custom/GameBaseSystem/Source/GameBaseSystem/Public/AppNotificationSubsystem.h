#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h"
#include "AppNotificationSubsystem.generated.h"

class UAppNotificationSubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAppNotificationSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAppNotificationSubsystemHelper* Helper;
    
public:
    UAppNotificationSubsystem();

};

