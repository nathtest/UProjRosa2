#pragma once
#include "CoreMinimal.h"
#include "G01MVEthicsCheckCharaSettings.generated.h"

class AG01CharacterVisualActor;
class UAnimSequence;
class UWorld;

USTRUCT(BlueprintType)
struct FG01MVEthicsCheckCharaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OverrideCameraPresetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> PlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AG01CharacterVisualActor>> TargetVisualActorList;
    
    RS2RE_API FG01MVEthicsCheckCharaSettings();
};

