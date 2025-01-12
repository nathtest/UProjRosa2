#pragma once
#include "CoreMinimal.h"
#include "ESenseType.h"
#include "G01AnimNotifyState.h"
#include "G01AnimNotifyState_EnableFollow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState_EnableFollow : public UG01AnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESenseType SenseType;
    
    UG01AnimNotifyState_EnableFollow();

};

