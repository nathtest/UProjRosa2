#pragma once
#include "CoreMinimal.h"
#include "EWidgetType.h"
#include "ManagerAccessor.h"
#include "WidgetManagerAccessor.generated.h"

class UGameViewWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UWidgetManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UWidgetManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReleaseWidget(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveWidgetType(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UGameViewWidget*> GetWidget(EWidgetType InWidgetType);
    
};

