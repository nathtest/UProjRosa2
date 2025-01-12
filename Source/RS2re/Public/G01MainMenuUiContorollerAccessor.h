#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "EMainMenuTabType.h"
#include "G01MainMenuUiContorollerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MainMenuUiContorollerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01MainMenuUiContorollerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShortcutOpen(EMainMenuTabType InTabType);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCurrentController(AActor* Actor);
    
};

