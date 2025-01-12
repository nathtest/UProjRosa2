#pragma once
#include "CoreMinimal.h"
#include "DebugMenuSubWindowBase.h"
#include "DebugMenuSubWindowActorExtentionBase.generated.h"

class ADebugMenuSubWindowActorBase;

UCLASS(Blueprintable)
class IMGUIHELPER_API UDebugMenuSubWindowActorExtentionBase : public UDebugMenuSubWindowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADebugMenuSubWindowActorBase> SubWindowActor;
    
public:
    UDebugMenuSubWindowActorExtentionBase();

};

