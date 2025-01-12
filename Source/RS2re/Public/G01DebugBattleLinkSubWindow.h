#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01BattleLinkCommandDebugInfo.h"
#include "G01DebugBattleLinkSubWindow.generated.h"

class AActor;
class AManagerBase;

UCLASS(Blueprintable)
class RS2RE_API UG01DebugBattleLinkSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
    UG01DebugBattleLinkSubWindow();

protected:
    UFUNCTION(BlueprintCallable)
    void LayoutCommandInfoTable(AActor* InCharacter, const FG01BattleLinkCommandDebugInfo& InCommandInfo, bool InTotalScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetManager(EManagerID InManagerId, AManagerBase*& OutManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetChoicedColor(FLinearColor& OutColor);
    
};

