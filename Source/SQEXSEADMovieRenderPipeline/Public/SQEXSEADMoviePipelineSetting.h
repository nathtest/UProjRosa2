#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineOutputBase -FallbackName=MoviePipelineOutputBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=ESQEXSEADCaptureChannels -FallbackName=ESQEXSEADCaptureChannels
#include "ESQEXSEADMoviePipelineCaptureSampleRate.h"
#include "SQEXSEADMoviePipelineSetting.generated.h"

UCLASS(Blueprintable)
class SQEXSEADMOVIERENDERPIPELINE_API USQEXSEADMoviePipelineSetting : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileNameFormatOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEXSEADCaptureChannels CaptureChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEXSEADMoviePipelineCaptureSampleRate CaptureSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CaptureEffectPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CaptureMuteCategories;
    
    USQEXSEADMoviePipelineSetting();

};

