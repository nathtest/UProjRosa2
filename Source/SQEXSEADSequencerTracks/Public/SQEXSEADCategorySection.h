#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADCategoryEntry -FallbackName=SQEXSEADCategoryEntry
#include "SQEXSEADCategorySection.generated.h"

UCLASS(Blueprintable)
class SQEXSEADSEQUENCERTRACKS_API USQEXSEADCategorySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADCategoryEntry Category;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel CategoryVolume;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel CategoryPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRestoreVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreVolumeFadeTime;
    
public:
    USQEXSEADCategorySection();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCategoryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCategoryLayerName() const;
    
};

