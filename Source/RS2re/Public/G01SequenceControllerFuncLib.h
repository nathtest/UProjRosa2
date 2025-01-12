#pragma once
#include "CoreMinimal.h"
#include "SequenceControllerFuncLib.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceControllerFuncLib -FallbackName=SequenceControllerFuncLib
#include "G01CameraPatternData.h"
#include "G01SeqAvailableCameraCutData.h"
#include "G01SequenceControllerFuncLib.generated.h"

class AActor;
class UG01SequenceSettings;
class ULevelSequence;

UCLASS(Blueprintable)
class RS2RE_API UG01SequenceControllerFuncLib : public USequenceControllerFuncLib {
    GENERATED_BODY()
public:
    UG01SequenceControllerFuncLib();

    UFUNCTION(BlueprintCallable)
    static void Func_SetActiveCameraPattern(const TArray<FG01SeqAvailableCameraCutData>& InCameraCutDataList, int32 InActivePatternIndex);
    
    UFUNCTION(BlueprintCallable)
    static void Func_FindAllCameraPattern(ULevelSequence* InSequence, const UG01SequenceSettings* InSettings, FG01CameraPatternData& OutPatternData);
    
    UFUNCTION(BlueprintCallable)
    static void Func_FilterCameraPattern(AActor* InVisualActor, const UG01SequenceSettings* InSettings, const TArray<FG01SeqAvailableCameraCutData>& InCameraCutDataList, TArray<int32>& OutAvailableIndexList);
    
};

