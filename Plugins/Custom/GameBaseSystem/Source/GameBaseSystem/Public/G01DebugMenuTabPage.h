#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=DebugMenuTabActorExtentionBase -FallbackName=DebugMenuTabActorExtentionBase
#include "G01DebugSettingCSVKeyStruct.h"
#include "Templates/SubclassOf.h"
#include "DebugMenuTabActorExtentionBase.h"
#include "G01DebugMenuTabPage.generated.h"

class AG01DebugMenuActorTabPage;
class UG01DebugBPImGui;
class UG01DebugVariableBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugMenuTabPage : public UDebugMenuTabActorExtentionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01DebugMenuActorTabPage> CreateActorTabPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01DebugMenuActorTabPage* ActorSubTabPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01DebugVariableBase*> VariableList;
    
public:
    UG01DebugMenuTabPage();

    UFUNCTION(BlueprintCallable)
    UG01DebugVariableBase* CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiTick(UG01DebugBPImGui* InImGuiBP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiDeinit();
    
    UFUNCTION(BlueprintCallable)
    void AddMainMenuContent(FName FuncName, FName UserData, TArray<FString> nestList);
    
};

