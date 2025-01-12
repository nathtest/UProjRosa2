#pragma once
#include "CoreMinimal.h"
#include "CameraShakeID.h"
#include "CameraShakeParamTableRow.h"
#include "ManagerAccessor.h"
#include "CameraManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UCameraManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UCameraManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FindCameraShakeParam(bool& OutIsFound, FCameraShakeParamTableRow& OutParam, FCameraShakeID InID);
    
};

