#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01DebugBattleLoadArtsResourceActorSubWindow.generated.h"

class AG01SequenceControllerBase;

UCLASS(Blueprintable)
class RS2RE_API AG01DebugBattleLoadArtsResourceActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugBattleLoadArtsResourceActorSubWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool GetHighPrioritySetting(bool InEnemy, int32 InIndex, int32 InVariationIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetArtsVariationSequenceController(bool InEnemy, int32 InIndex, int32 InVariationIndex, FName& OutSource, FName& OutTarget, AG01SequenceControllerBase*& OutSequence);
    
    UFUNCTION(BlueprintCallable)
    int32 GetArtsVariationCount(bool InEnemy, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    FName GetArtsName(bool InEnemy, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetArtsCount(bool InEnemy);
    
};

