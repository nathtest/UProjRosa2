#pragma once
#include "CoreMinimal.h"
#include "G01BattleFormationLineFx.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleFormationLineFx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EndPoint;
    
    FG01BattleFormationLineFx();
};

