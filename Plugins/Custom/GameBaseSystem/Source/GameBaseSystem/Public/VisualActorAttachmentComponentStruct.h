#pragma once
#include "CoreMinimal.h"
#include "VisualActorAttachmentComponentStruct.generated.h"

class AVisualActor;
class UChildActorComponent;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVisualActorAttachmentComponentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVisualActor> AttachVisualActorSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    FVisualActorAttachmentComponentStruct();
};

