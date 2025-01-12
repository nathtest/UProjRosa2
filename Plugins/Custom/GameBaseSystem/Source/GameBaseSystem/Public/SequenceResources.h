#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvaluationOperand -FallbackName=MovieSceneEvaluationOperand
#include "SeqBindingAnimData.h"
#include "SeqCharaCreateInfoList.h"
#include "SeqGateData.h"
#include "SeqGeneralRepeaterEventParamArray.h"
#include "SeqGeneralTriggerEventParamArray.h"
#include "SeqMarkedFrameData.h"
#include "SeqSkipSectionData.h"
#include "SeqSubSequenceRange.h"
#include "SeqViewSlaveData.h"
#include "SequenceResources.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USequenceResources : public UObject {
    GENERATED_BODY()
public:
protected:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneEvaluationOperand, FSeqBindingAnimData> BindAnimDataMap;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneEvaluationOperand, FSeqGeneralTriggerEventParamArray> GeneralTriggerEventParams;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneEvaluationOperand, FSeqGeneralRepeaterEventParamArray> GeneralRepeaterEventParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqMarkedFrameData> MarkedFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqSkipSectionData SkipSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqSkipSectionData FullSkipSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqCharaCreateInfoList CreateCharaInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqGateData GateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqSubSequenceRange> SubSequenceRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqViewSlaveData> ViewSlaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> ReferenceSequences;
    
public:
    USequenceResources();

};

