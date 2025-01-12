#pragma once
#include "CoreMinimal.h"
#include "G01BattleLinkRequestCommand.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleLinkRequestCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ArtsIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SourceList;
    
    FG01BattleLinkRequestCommand();
};

