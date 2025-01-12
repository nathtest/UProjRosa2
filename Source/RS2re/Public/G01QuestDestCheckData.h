#pragma once
#include "CoreMinimal.h"
#include "EditableLevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EditableLevelObjectID -FallbackName=EditableLevelObjectID
#include "G01DestinationLocationInfo.h"
#include "G01QuestDestCheckData.generated.h"

USTRUCT(BlueprintType)
struct FG01QuestDestCheckData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01DestinationLocationInfo MLocationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditableLevelObjectID> MLevelObjectIdList;
    
    RS2RE_API FG01QuestDestCheckData();
};

