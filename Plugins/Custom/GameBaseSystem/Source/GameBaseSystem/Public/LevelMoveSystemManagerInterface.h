#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelTransitionInfoRow.h"
#include "LevelTransitionInfoView.h"
#include "LevelMoveSystemManagerInterface.generated.h"

class UDataTable;

UINTERFACE(Blueprintable, MinimalAPI)
class ULevelMoveSystemManagerInterface : public UInterface {
    GENERATED_BODY()
};

class ILevelMoveSystemManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDataTable* Inf_LevelMoveSystemManager_GetLevelTransitionTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LevelMoveSystemManager_FindLevelInfo(FLevelTransitionInfoView InLevelID, bool& ReIsFound, FLevelTransitionInfoRow& ReFoundData);
    
};

