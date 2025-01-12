#pragma once
#include "CoreMinimal.h"
#include "TargetPointBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=TargetPointBase -FallbackName=TargetPointBase
#include "G01TargetPoint.generated.h"

class AGeneratorBase;

UCLASS(Blueprintable)
class RS2RE_API AG01TargetPoint : public ATargetPointBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AGeneratorBase>> MReferredGenerators;
    
public:
    AG01TargetPoint(const FObjectInitializer& ObjectInitializer);

};

