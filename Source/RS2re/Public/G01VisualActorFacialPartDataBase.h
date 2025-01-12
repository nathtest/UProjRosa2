#pragma once
#include "CoreMinimal.h"
#include "G01VisualActorFacialPartDataBase.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VisualActorFacialPartDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphName;
    
    FG01VisualActorFacialPartDataBase();
};

