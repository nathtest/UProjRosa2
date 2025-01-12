#pragma once
#include "CoreMinimal.h"
#include "EffectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectID -FallbackName=EffectID
#include "FXDataRow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FXDataRow -FallbackName=FXDataRow
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01FXManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FXManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01FXManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FindEffectData(const FEffectID& InEffectID, FFXDataRow& ReDataRow);
    
    UFUNCTION(BlueprintCallable)
    void CreateFXActor(FName InFXID, int32& OutActorNumber, FString& OutActorName);
    
};

