#pragma once
#include "CoreMinimal.h"
#include "ELoadScreenType.h"
#include "GameViewWidget.h"
#include "LoadScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEBASESYSTEM_API ULoadScreenWidget : public UGameViewWidget {
    GENERATED_BODY()
public:
    ULoadScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(ELoadScreenType InType);
    
};

