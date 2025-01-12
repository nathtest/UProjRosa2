#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyCameraShake.h"
#include "G01SeqNotifyCameraShakeList.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyCameraShakeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqNotifyCameraShake> MCameraShakeList;
    
    GAMEBASESYSTEM_API FG01SeqNotifyCameraShakeList();
};

