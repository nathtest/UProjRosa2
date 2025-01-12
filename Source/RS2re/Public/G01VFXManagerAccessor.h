#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "VFXDataRow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXDataRow -FallbackName=VFXDataRow
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "G01VFXManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01VFXManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01VFXManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FindVFXData(const FVFXID& InVFXID, FVFXDataRow& ReDataRow);
    
    UFUNCTION(BlueprintCallable)
    void CreateVFXActor(FName InVFXID, int32& OutActorNumber, FString& OutActorName);
    
};

