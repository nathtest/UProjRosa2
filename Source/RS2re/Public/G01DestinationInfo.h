#pragma once
#include "CoreMinimal.h"
#include "EditableLevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EditableLevelObjectID -FallbackName=EditableLevelObjectID
#include "G01DestinationLocationInfo.h"
#include "G01DestinationInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01DestinationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01DestinationLocationInfo MLocationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditableLevelObjectID> MLevelObjectIdList;
    
    FG01DestinationInfo();
};

