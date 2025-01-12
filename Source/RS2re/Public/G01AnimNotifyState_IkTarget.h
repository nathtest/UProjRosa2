#pragma once
#include "CoreMinimal.h"
#include "EG01VAIkTargetSearchType.h"
#include "G01AnimNotifyState.h"
#include "G01VAIkTargetAnimNotifyParam.h"
#include "G01AnimNotifyState_IkTarget.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState_IkTarget : public UG01AnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VAIkTargetSearchType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01VAIkTargetAnimNotifyParam> Params;
    
public:
    UG01AnimNotifyState_IkTarget();

};

