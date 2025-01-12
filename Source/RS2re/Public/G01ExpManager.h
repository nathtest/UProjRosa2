#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "EG01BattleArtsType.h"
#include "G01BattleManagerObserverInf.h"
#include "G01CharacterID.h"
#include "G01ExpManagerInf.h"
#include "G01ExpStackObserverInf.h"
#include "G01ExpManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01ExpManager : public AManagerBase, public IG01BattleManagerObserverInf, public IG01ExpStackObserverInf, public IG01ExpManagerInf {
    GENERATED_BODY()
public:
    AG01ExpManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ThrowExp();
    
    UFUNCTION(BlueprintCallable)
    void ResolveExp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<EG01BattleArtsType> MakeNeverActedActionLog(const FG01CharacterID& InCharacterId, const TArray<EG01BattleArtsType>& InDefaultActionLog, int32 InExp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNeverActedExp(int32 InDefaultExp);
    

    // Fix for true pure virtual functions not being implemented
};

