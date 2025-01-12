#pragma once
#include "CoreMinimal.h"
#include "SeqActorBinder_VAGeneralStringParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorBinder_VAGeneralStringParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Strings;
    
    GAMEBASESYSTEM_API FSeqActorBinder_VAGeneralStringParam();
};

