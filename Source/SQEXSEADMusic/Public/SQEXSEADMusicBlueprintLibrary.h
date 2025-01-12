#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SQEXSEADMusicLabelData.h"
#include "SQEXSEADMusicBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class SQEXSEADMUSIC_API USQEXSEADMusicBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USQEXSEADMusicBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SuspendActiveLayer();
    
    UFUNCTION(BlueprintCallable)
    static bool StopLayer(FName LayerName);
    
    UFUNCTION(BlueprintCallable)
    static bool ResumeActiveLayer();
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllLayers();
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLayerWithDynamicLabel(FName LayerName, FSQEXSEADMusicLabelData& DynamicLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLayer(FName LayerName, FName LabelName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying(FName LayerName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLabelLoaded(FName LayerName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetPlayingLayerName();
    
    UFUNCTION(BlueprintCallable)
    static FName GetPlayingLabelName(FName LayerName);
    
    UFUNCTION(BlueprintCallable)
    static void GetLayerNames(TArray<FName>& OutLayerNameList);
    
    UFUNCTION(BlueprintCallable)
    static void GetLabelNames(TArray<FName>& OutLabelNameList);
    
};

