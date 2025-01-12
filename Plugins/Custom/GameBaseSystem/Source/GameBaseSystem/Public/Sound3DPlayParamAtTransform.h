#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SoundPlayParamCommon.h"
#include "Sound3DPlayParamAtTransform.generated.h"

USTRUCT(BlueprintType)
struct FSound3DPlayParamAtTransform : public FSoundPlayParamCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MPlayLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MPlayRotation;
    
    GAMEBASESYSTEM_API FSound3DPlayParamAtTransform();
};

