#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=DebugMenuSubWindowActorBase -FallbackName=DebugMenuSubWindowActorBase
#include "G01DebugSettingCSVKeyStruct.h"
#include "Templates/SubclassOf.h"
#include "DebugMenuSubWindowActorBase.h"
#include "G01DebugMenuActorSubWindow.generated.h"

class UG01DebugBPImGui;
class UG01DebugVariableBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AG01DebugMenuActorSubWindow : public ADebugMenuSubWindowActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01DebugVariableBase*> VariableList;
    
public:
    AG01DebugMenuActorSubWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UG01DebugVariableBase* CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiTick(UG01DebugBPImGui* InImGuiBP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiDeinit();
    
};

