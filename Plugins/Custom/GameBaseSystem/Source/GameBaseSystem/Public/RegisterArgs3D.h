#pragma once
#include "CoreMinimal.h"
#include "RegisterArgsCommon.h"
#include "RegisterArgs3D.generated.h"

class USoundAttenuation;

USTRUCT(BlueprintType)
struct FRegisterArgs3D : public FRegisterArgsCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAttenuation> MSoundAttenuation;
    
    GAMEBASESYSTEM_API FRegisterArgs3D();
};

