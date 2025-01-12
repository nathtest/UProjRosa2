#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=DebugMenuSubWindowActorExtentionBase -FallbackName=DebugMenuSubWindowActorExtentionBase
#include "G01DebugMenuSubWIndowInf.h"
#include "G01DebugSettingCSVKeyStruct.h"
#include "Templates/SubclassOf.h"
#include "DebugMenuSubWindowActorExtentionBase.h"
#include "G01DebugMenuSubWindow.generated.h"

class AG01DebugMenuActorSubWindow;
class UG01DebugBPImGui;
class UG01DebugVariableBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugMenuSubWindow : public UDebugMenuSubWindowActorExtentionBase, public IG01DebugMenuSubWIndowInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01DebugMenuActorSubWindow> CreateActorSubWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01DebugMenuActorSubWindow* ActorSubWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01DebugVariableBase*> VariableList;
    
public:
    UG01DebugMenuSubWindow();

    UFUNCTION(BlueprintCallable)
    UG01DebugVariableBase* CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiTick(UG01DebugBPImGui* InImGuiBP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiDeinit();
    

    // Fix for true pure virtual functions not being implemented
};

