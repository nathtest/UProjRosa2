#pragma once
#include "CoreMinimal.h"
#include "G01VisualActorFacialPartDataBase.h"
#include "G01VisualActorFacialPartData_Eyes.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VisualActorFacialPartData_Eyes : public FG01VisualActorFacialPartDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighLightLinked;
    
    FG01VisualActorFacialPartData_Eyes();
};

