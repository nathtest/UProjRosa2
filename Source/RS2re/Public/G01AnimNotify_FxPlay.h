#pragma once
#include "CoreMinimal.h"
#include "FxRequestTypeData.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FxRequestTypeData -FallbackName=FxRequestTypeData
#include "G01AnimNotify.h"
#include "G01AnimNotify_FxPlay.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class RS2RE_API UG01AnimNotify_FxPlay : public UG01AnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFxRequestTypeData MRequestTypeData;
    
public:
    UG01AnimNotify_FxPlay();

};

