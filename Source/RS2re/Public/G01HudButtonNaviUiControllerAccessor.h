#pragma once
#include "CoreMinimal.h"
#include "InputMappingName.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputMappingName -FallbackName=InputMappingName
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "G01HudButtonNaviUiControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01HudButtonNaviUiControllerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01HudButtonNaviUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveDisp();
    
    UFUNCTION(BlueprintCallable)
    void DispParam(FInputMappingName InputParam, FText TextID, float DispTime, bool PushErase);
    
};

