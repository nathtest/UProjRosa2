#pragma once
#include "CoreMinimal.h"
#include "G01BattleMgrArg_CheckInspiration.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleMgrArg_CheckInspiration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    FG01BattleMgrArg_CheckInspiration();
};

