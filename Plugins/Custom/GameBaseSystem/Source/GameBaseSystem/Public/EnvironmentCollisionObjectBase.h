#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h"
#include "EnvironmentCollisionEventInfo.h"
#include "EnvironmentCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AEnvironmentCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvironmentCollisionEventInfo MEnvironmentSettingParam;
    
public:
    AEnvironmentCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetEventArg_EnvSettingID();
    
};

