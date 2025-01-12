#pragma once
#include "CoreMinimal.h"
#include "G01VisualActorFacialPartDataBase.h"
#include "G01VisualActorFacialPartData_Mouth.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VisualActorFacialPartData_Mouth : public FG01VisualActorFacialPartDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClosed;
    
    FG01VisualActorFacialPartData_Mouth();
};

