#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" //CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_DoesPathExist -FallbackName=BTDecorator_DoesPathExist
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "G01DoesPathExistBTDecorator.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DoesPathExistBTDecorator : public UBTDecorator_DoesPathExist {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MQueryExtent;
    
public:
    UG01DoesPathExistBTDecorator();

};

