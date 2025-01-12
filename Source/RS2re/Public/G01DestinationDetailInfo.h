#pragma once
#include "CoreMinimal.h"
#include "LevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectID -FallbackName=LevelObjectID
#include "G01DestinationInfo.h"
#include "G01DestinationDetailInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01DestinationDetailInfo : public FG01DestinationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MLevelObjectActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MLevelTransitionGimmicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MAdjoinLevelTransitionGimmicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelObjectID> MLevelObjectAcotrIdList;
    
    FG01DestinationDetailInfo();
};

