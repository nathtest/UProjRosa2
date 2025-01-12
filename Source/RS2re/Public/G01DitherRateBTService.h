#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTService -FallbackName=AppBTService
#include "AppBTService.h"
#include "G01DitherRateBTService.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DitherRateBTService : public UAppBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherRate;
    
public:
    UG01DitherRateBTService();

};

