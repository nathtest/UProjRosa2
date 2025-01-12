#pragma once
#include "CoreMinimal.h"
#include "VFXExternalParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXExternalParam -FallbackName=VFXExternalParam
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "G01SeqVFXPlayArgs.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqVFXPlayArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXID MVFXID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXExternalParam MExternalParam;
    
    RS2RE_API FG01SeqVFXPlayArgs();
};

