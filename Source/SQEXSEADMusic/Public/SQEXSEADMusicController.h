#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADMusicLabelData.h"
#include "SQEXSEADMusicLayerInfo.h"
#include "SQEXSEADMusicController.generated.h"

class USQEXSEADMusicLayer;

UCLASS(Blueprintable)
class SQEXSEADMUSIC_API USQEXSEADMusicController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADMusicLayer*> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USQEXSEADMusicLayer*> LayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEXSEADMusicLayerInfo> LayerInfoCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADMusicLabelData> LabelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADMusicLayer* ActiveLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADMusicLayer* FreezingLayer;
    
public:
    USQEXSEADMusicController();

};

