#pragma once
#include "CoreMinimal.h"
#include "InteractColliderSettings.h"
#include "ActiveReceiverInfo.generated.h"

class UInteractReceiverComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FActiveReceiverInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractReceiverComponent* MReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractColliderSettings MSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MCollision;
    
    GAMEBASESYSTEM_API FActiveReceiverInfo();
};

