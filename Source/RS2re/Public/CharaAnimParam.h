#pragma once
#include "CoreMinimal.h"
#include "EG01CharaAnimType.h"
#include "EG01CharaCategory.h"
#include "G01UniqueFieldAnimIDStruct.h"
#include "CharaAnimParam.generated.h"

class UAnimMontage;
class UAnimSequence;
class UBlendSpaceBase;
class UG01FieldVisualDataAsset;

USTRUCT(BlueprintType)
struct FCharaAnimParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01CharaCategory MCharaCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01CharaAnimType MCharaAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> MAnimSequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> MUniqueAnimSequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01UniqueFieldAnimIDStruct, UAnimSequence*> UniqueAnimSequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* MIdleRunBlendSpaceFieldAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* MIdleDashBlendSpaceFieldAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UG01FieldVisualDataAsset> MVisualDataAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MFieldAnimMontageList;
    
    RS2RE_API FCharaAnimParam();
};

