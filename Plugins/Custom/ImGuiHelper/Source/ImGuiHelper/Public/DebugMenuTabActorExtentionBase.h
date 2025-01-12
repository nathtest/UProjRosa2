#pragma once
#include "CoreMinimal.h"
#include "DebugMenuTabBase.h"
#include "DebugMenuTabActorExtentionBase.generated.h"

class ADebugMenuTabActorBase;

UCLASS(Blueprintable)
class IMGUIHELPER_API UDebugMenuTabActorExtentionBase : public UDebugMenuTabBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebugMenuTabActorBase> TabActor;
    
public:
    UDebugMenuTabActorExtentionBase();

};

