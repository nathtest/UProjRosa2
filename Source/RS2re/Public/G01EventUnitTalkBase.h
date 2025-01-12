#pragma once
#include "CoreMinimal.h"
#include "G01EventObjectUnitBase.h"
#include "LevelObjectFinderAccessComponent.h"
#include "G01EventUnitTalkBase.generated.h"

class ULevelObjectFinderAccessComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01EventUnitTalkBase : public AG01EventObjectUnitBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelObjectFinderAccessComponent* MLevelObjectFinderAccessor;
    
public:
    AG01EventUnitTalkBase(const FObjectInitializer& ObjectInitializer);

};

