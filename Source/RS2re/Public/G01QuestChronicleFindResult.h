#pragma once
#include "CoreMinimal.h"
#include "G01QuestChronicleFindResult.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestChronicleFindResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionLogIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChronicleIndex;
    
    FG01QuestChronicleFindResult();
};

