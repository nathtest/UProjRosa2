#pragma once
#include "CoreMinimal.h"
#include "VisualActorID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorID -FallbackName=VisualActorID
#include "G01VAAnimReplaceFormatParams.generated.h"

USTRUCT(BlueprintType)
struct FG01VAAnimReplaceFormatParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualActorID VisualActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FigureID;
    
    RS2RE_API FG01VAAnimReplaceFormatParams();
};

