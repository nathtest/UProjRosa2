#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=DefaultLevelSequenceInstanceData -FallbackName=DefaultLevelSequenceInstanceData
#include "DefaultLevelSequenceInstanceData.h"
#include "CustomLevelSequenceInstanceData.generated.h"

UCLASS(Blueprintable)

// before UDefaultLevelSequenceInstanceData
class GAMEBASESYSTEM_API UCustomLevelSequenceInstanceData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MTransformOffset;
    
public:
    UCustomLevelSequenceInstanceData();

};

