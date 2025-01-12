#pragma once
#include "CoreMinimal.h"
#include "EG01MapAspectType.h"
#include "EG01PartyCharacteristic.h"
#include "G01CharaClassID.h"
#include "G01CharaStatus.h"
#include "G01CharacterID.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01PartyCharaStatus.generated.h"

USTRUCT(BlueprintType)
struct FG01PartyCharaStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID MCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MCharaText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaStatus MStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaClassID MAClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MInspirationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSpeciesID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01MapAspectType> MapAspectTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01PartyCharacteristic> MCharacteristicList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SkillLevel MSkillLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SpellLevel MSpellLevel;
    
    RS2RE_API FG01PartyCharaStatus();
};

