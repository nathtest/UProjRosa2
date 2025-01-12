#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvaluationOperand -FallbackName=MovieSceneEvaluationOperand
#include "LoadControlActorComponent.h"
#include "SeqBindingAnimData.h"
#include "SeqCharaCreateInfoList.h"
#include "SeqLoadAnimInfoArray.h"
#include "SeqResourceCollectParam.h"
#include "Templates/SubclassOf.h"
#include "SequenceLoadControlComponent.generated.h"

class UCustomLevelSequencePlayer;
class USequenceResources;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USequenceLoadControlComponent : public ULoadControlActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USequenceResources> MSequenceResourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TexturePreStreamTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomLevelSequencePlayer* MSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USequenceResources* SequenceResource;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneEvaluationOperand, FSeqBindingAnimData> BindAnimDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLoadRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> CustomLoadingFlag;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneEvaluationOperand, FSeqLoadAnimInfoArray> AnimLoadingPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqCharaCreateInfoList> CharaCreateInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqCharaCreateInfoList PrevCharaCreateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LoadCompleteDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqResourceCollectParam CollectParam;
    
public:
    USequenceLoadControlComponent(const FObjectInitializer& ObjectInitializer);

};

