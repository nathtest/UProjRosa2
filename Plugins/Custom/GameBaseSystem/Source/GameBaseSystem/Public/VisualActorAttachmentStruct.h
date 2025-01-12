#pragma once
#include "CoreMinimal.h"
#include "VisualActorAttachmentStruct.generated.h"

class AVisualActor;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVisualActorAttachmentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisualActor* AttachVisualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    FVisualActorAttachmentStruct();
};

