#pragma once
#include "CoreMinimal.h"
#include "AIControllerComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AIControllerComponent -FallbackName=AIControllerComponent
#include "G01AIControllerComponent.generated.h"

class AAIControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01AIControllerComponent : public UAIControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAIControllerBase> MCrowdController;
    
    UG01AIControllerComponent(const FObjectInitializer& ObjectInitializer);

};

