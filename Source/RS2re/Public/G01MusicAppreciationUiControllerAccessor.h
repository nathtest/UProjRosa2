#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "G01MusicAppreciationUiControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MusicAppreciationUiControllerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01MusicAppreciationUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestMusicAppreciation();
    
};

