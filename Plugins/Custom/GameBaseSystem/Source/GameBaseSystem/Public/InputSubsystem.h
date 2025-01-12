#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h"
#include "EPlatformType.h"
#include "InputSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UInputSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPlatformType LastInputPlatform;
    
public:
    UInputSubsystem();

};

