#pragma once
#include "CoreMinimal.h"
#include "DebugMenuPageActorBase.h"
#include "DebugMenuSubWindowActorBase.generated.h"

class UDebugMenuSubWindowActorExtentionBase;

UCLASS(Blueprintable)
class IMGUIHELPER_API ADebugMenuSubWindowActorBase : public ADebugMenuPageActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoUnregistSubWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugMenuSubWindowActorExtentionBase* SubWindow;
    
public:
    ADebugMenuSubWindowActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImGuiTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString GetWindowName();
    
};

