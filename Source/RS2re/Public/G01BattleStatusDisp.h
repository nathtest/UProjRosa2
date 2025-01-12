#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterAffinityStruct.h"
#include "G01UiController.h"
#include "G01BattleStatusDisp.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01BattleStatusDisp : public AG01UiController {
    GENERATED_BODY()
public:
    AG01BattleStatusDisp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CreateOpenAffinityList(const FG01BattleCharacterAffinityStruct& InCurrent, const FG01BattleCharacterAffinityStruct& InPrevious, bool InMakeOpen, bool InIgnoreNormal, bool& success, FG01BattleCharacterAffinityStruct& Out);
    
};

