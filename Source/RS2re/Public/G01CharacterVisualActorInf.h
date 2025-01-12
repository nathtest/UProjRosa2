#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01FootStepType.h"
#include "G01FootstepInfoStruct.h"
#include "G01StagePhysicalMaterialIDStruct.h"
#include "G01CharacterVisualActorInf.generated.h"

class UG01FootstepDataAsset;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01CharacterVisualActorInf : public UInterface {
    GENERATED_BODY()
};

class IG01CharacterVisualActorInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UG01FootstepDataAsset* Inf_G01VisualActor_LoadSynchronousFootstepData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VisualActor_GetFootstepInfo(const EG01FootStepType InFootStepType, const FG01StagePhysicalMaterialIDStruct InStagePhysicalMaterialID, bool& OutIsFound, FG01FootstepInfoStruct& OutFootstepInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01VisualActor_CheckLoadedFootstepData();
    
};

