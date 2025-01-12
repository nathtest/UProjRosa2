#pragma once
#include "CoreMinimal.h"
#include "DebugMenuPageActorBase.h"
#include "DebugMenuTabActorBase.generated.h"

class UDebugMenuTabActorExtentionBase;

UCLASS(Blueprintable)
class IMGUIHELPER_API ADebugMenuTabActorBase : public ADebugMenuPageActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoUnregistTab;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDebugMenuTabActorExtentionBase* TabPage;
    
public:
    ADebugMenuTabActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImGuiTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FString GetTabName();
    
};

