#pragma once
#include "CoreMinimal.h"
#include "G01AnimNotifyState.h"
#include "G01AnimNotifyState_ChangeDitherRate.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState_ChangeDitherRate : public UG01AnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndRate;
    
public:
    UG01AnimNotifyState_ChangeDitherRate();

};

