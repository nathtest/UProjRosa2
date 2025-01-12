#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "G01BattleCursorPoint.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01BattleCursorPoint : public ATargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MCursorWidth;
    
public:
    AG01BattleCursorPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCursorWidth();
    
};

