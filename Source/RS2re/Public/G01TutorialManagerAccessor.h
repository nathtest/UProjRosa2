#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01TutorialID.h"
#include "G01TutorialManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01TutorialManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01TutorialManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestTutorial(FG01TutorialID InTutorialId, bool InIsForceListIn);
    
    UFUNCTION(BlueprintCallable)
    void IsChecked(FG01TutorialID InTutorialId, bool& OutIsChecked);
    
};

