#pragma once
#include "CoreMinimal.h"
#include "G01MsgInputObjectBase.h"
#include "G01MsgWindowInputObject.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01MsgWindowInputObject : public AG01MsgInputObjectBase {
    GENERATED_BODY()
public:
    AG01MsgWindowInputObject(const FObjectInitializer& ObjectInitializer);

};

