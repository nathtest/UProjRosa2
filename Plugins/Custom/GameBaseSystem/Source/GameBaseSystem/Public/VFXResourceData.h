#pragma once
#include "CoreMinimal.h"
#include "VFXResourceData.generated.h"

class AVFXPlayerBase;

USTRUCT(BlueprintType)
struct FVFXResourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVFXPlayerBase> MVFXPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MVFXComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MVFXPlayerHardDummy;
    
    GAMEBASESYSTEM_API FVFXResourceData();
};

