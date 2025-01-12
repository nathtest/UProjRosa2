#pragma once
#include "CoreMinimal.h"
#include "G01VisualActorFacialPartData_Eyebrows.h"
#include "G01VisualActorFacialPartData_Eyes.h"
#include "G01VisualActorFacialPartData_Mouth.h"
#include "G01VisualActorFacialData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VisualActorFacialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialPartData_Eyes Eyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialPartData_Eyebrows Eyebrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialPartData_Mouth Mouth;
    
    FG01VisualActorFacialData();
};

