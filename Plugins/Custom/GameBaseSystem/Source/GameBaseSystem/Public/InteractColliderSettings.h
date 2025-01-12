#pragma once
#include "CoreMinimal.h"
#include "EInteractAvailableRange.h"
#include "EInteractBaseType.h"
#include "EInteractLookingAtType.h"
#include "InteractColliderTag.h"
#include "InteractColliderSettings.generated.h"

USTRUCT(BlueprintType)
struct FInteractColliderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractColliderTag MTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractLookingAtType MLookingAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAvailableRange MAvailableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractAvailableRange SenderAvailableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractBaseType MInteractBaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableLineTrace;
    
    GAMEBASESYSTEM_API FInteractColliderSettings();
};

