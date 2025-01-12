#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFocusSettings -FallbackName=CameraFocusSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLensSettings -FallbackName=CameraLensSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "G01BattleCameraInterpParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCameraInterpParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform MTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings MFilmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings MLens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFocusSettings MFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MCurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MCurrentAperture;
    
    FG01BattleCameraInterpParam();
};

