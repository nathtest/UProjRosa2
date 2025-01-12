#pragma once
#include "CoreMinimal.h"
#include "G01VisualActorFacialData.h"
#include "G01VisualActorFacialDataAll.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VisualActorFacialDataAll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialData NormalM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialData SmileM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialData AngerS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialData AngerL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialData SadS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialData SadL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VisualActorFacialData SurpriseM;
    
    FG01VisualActorFacialDataAll();
};

