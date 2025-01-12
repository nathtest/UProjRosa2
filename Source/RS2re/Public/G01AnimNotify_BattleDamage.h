#pragma once
#include "CoreMinimal.h"
#include "G01AnimNotify.h"
#include "G01AnimNotify_BattleDamage.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class RS2RE_API UG01AnimNotify_BattleDamage : public UG01AnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSingleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MTargetIndexList;
    
public:
    UG01AnimNotify_BattleDamage();

};

