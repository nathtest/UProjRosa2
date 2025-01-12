#pragma once
#include "CoreMinimal.h"
#include "EVisualActorAttachCategoryEnum.h"
#include "VisualActorAttachInfoStruct.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVisualActorAttachInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisualActorAttachCategoryEnum MAttachKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MDetailAttachName;
    
    FVisualActorAttachInfoStruct();
};

