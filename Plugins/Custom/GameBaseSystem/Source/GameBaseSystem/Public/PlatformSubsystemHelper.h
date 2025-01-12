#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "PlatformSubsystemHelper.generated.h"

class UPlatformResourceSettings;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UPlatformSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlatformResourceSettings* ResourceSettings;
    
    UPlatformSubsystemHelper();

};

