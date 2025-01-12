#pragma once
#include "CoreMinimal.h"
#include "InteractSenderComponent.h"  //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InteractSenderComponent -FallbackName=InteractSenderComponent
#include "G01InteractSenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01InteractSenderComponent : public UInteractSenderComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSearchDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRateSafeScreenEdge;
    
public:
    UG01InteractSenderComponent(const FObjectInitializer& ObjectInitializer);

};

