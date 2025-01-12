#pragma once
#include "CoreMinimal.h"
#include "G01AnimNotifyState.h"
#include "G01AnimNotifyState_EnableColliisionBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState_EnableColliisionBase : public UG01AnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTickCollison;
    
public:
    UG01AnimNotifyState_EnableColliisionBase();

};

