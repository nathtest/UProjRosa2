#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputActionMappingName.h"
#include "InputAxisMappingName.h"
#include "KeyConfigUnassignableKeys.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyConfigUnassignableKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionMappingName> ActionMappingNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisMappingName> AxisMappingNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKey> CachedKeys;
    
public:
    FKeyConfigUnassignableKeys();
};

