#pragma once
#include "CoreMinimal.h"
#include "EWidgetType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EWidgetType -FallbackName=EWidgetType
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01BattleWidgetCaptureSameWidgetExclusiveMode.h"
#include "G01BattleWidgetCaptureAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleWidgetCaptureAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BattleWidgetCaptureAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetThresholdFrame(int32 InFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetWidget(EWidgetType InWidgetID, EG01BattleWidgetCaptureSameWidgetExclusiveMode InMode, int32 InTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistManager() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCapture();
    
    UFUNCTION(BlueprintCallable)
    void ClearTargetUI();
    
    UFUNCTION(BlueprintCallable)
    void BeginCapture();
    
};

