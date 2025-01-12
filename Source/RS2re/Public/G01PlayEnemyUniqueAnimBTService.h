#pragma once
#include "CoreMinimal.h"
#include "AppBTService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTService -FallbackName=AppBTService
#include "EG01EnemyUniqueAnimID.h"
#include "G01PlayEnemyUniqueAnimBTService.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01PlayEnemyUniqueAnimBTService : public UAppBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EnemyUniqueAnimID EnemyUniqueAnimID;
    
public:
    UG01PlayEnemyUniqueAnimBTService();

};

