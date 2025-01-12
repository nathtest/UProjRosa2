#pragma once
#include "CoreMinimal.h"
#include "SeqMainBranch_Common.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqMainBranch_Common -FallbackName=SeqMainBranch_Common
#include "G01SeqMainBranch_PurchaseBranchParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqMainBranch_PurchaseBranchParam : public FSeqMainBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTypeBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex_Buyable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex_NotBuyable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex_NotBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TrackIndexBySelect;
    
    RS2RE_API FG01SeqMainBranch_PurchaseBranchParam();
};

