#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EG01BattleCharacterAnimReactionType.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01BattleArtsKeyStruct.h"
#include "G01BattleArtsSequenceSettings.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleArtsSequenceSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtendFrameToDefeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtendFrameToRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01AddedPotentBaseKeyStruct, int32> ExtendFrameToPotentAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01AddedPotentBaseKeyStruct, int32> ExtendFrameToPotentRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01BattleCharacterAnimReactionType, int32> ExtendFrameToReactionParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01BattleCharacterAnimReactionType, int32> ExtendFrameToReactionEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01BattleArtsKeyStruct, int32> ExtendFrameToDeflectArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReactionContinueFrame;
    
    UG01BattleArtsSequenceSettings();

};

