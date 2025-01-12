#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "G01VisualActorLoaderInfoStruct.generated.h"

class AVisualActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01VisualActorLoaderInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVisualActor> VisualActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisualActor* VisualActorObject;
    
    FG01VisualActorLoaderInfoStruct();
};

