#pragma once
#include "CoreMinimal.h"
#include "G01TargetPoint.h"
#include "G01FormationPoint.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FormationPoint : public AG01TargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MLineNo;
    
public:
    AG01FormationPoint(const FObjectInitializer& ObjectInitializer);

};

