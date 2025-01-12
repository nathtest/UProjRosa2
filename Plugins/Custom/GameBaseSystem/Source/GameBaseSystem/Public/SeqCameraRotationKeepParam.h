#pragma once
#include "CoreMinimal.h"
#include "SeqCameraRotationKeepParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqCameraRotationKeepParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsKeepX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsKeepY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsKeepZ;
    
    GAMEBASESYSTEM_API FSeqCameraRotationKeepParam();
};

