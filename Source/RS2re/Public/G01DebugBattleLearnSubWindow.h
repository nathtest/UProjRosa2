#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugBattleLearnSubWindow.generated.h"

class AActor;
class AManagerBase;

UCLASS(Blueprintable)
class RS2RE_API UG01DebugBattleLearnSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugBattleLearnSubWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsShowIDMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetManager(EManagerID InManagerId, AManagerBase*& OutManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AManagerBase* GetItemManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetFilterLearnPercent(bool& OutIsEnable, float& OutBorderPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AManagerBase* GetBattleManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AManagerBase* GetArtsManager();
    
    UFUNCTION(BlueprintCallable)
    void ArtsLearnTableGUI(AActor* InCharacter);
    
};

