#pragma once
#include "CoreMinimal.h"
#include "AppBTService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTService -FallbackName=AppBTService
#include "G01ForceBackAttackBTService.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01ForceBackAttackBTService : public UAppBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackAttackSpeed;
    
public:
    UG01ForceBackAttackBTService();

};

