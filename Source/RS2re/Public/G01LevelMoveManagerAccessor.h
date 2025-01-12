#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01LevelMoveManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01LevelMoveManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01LevelMoveManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSaveLevelID(const FLevelTransitionInfoView& InLevelID);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLoadingSequence(bool InIsLoading);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelTransitionFromSaveData();
    
};

