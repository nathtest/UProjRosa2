#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01BattleHitSlomoDataAsset.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleHitSlomoDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableForLinkOrderFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableForLinkOrderMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableForLinkOrderLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentBaseKeyStruct> EnableForEnemyAddedPotent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentBaseKeyStruct> EnableForPartyAddedPotent;
    
    UG01BattleHitSlomoDataAsset();

};

