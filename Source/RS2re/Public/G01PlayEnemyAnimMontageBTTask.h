#pragma once
#include "CoreMinimal.h"
#include "AppBTTask.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTTask -FallbackName=AppBTTask
#include "EG01EnemyAnimMontageID.h"
#include "G01PlayEnemyAnimMontageBTTask.generated.h"

class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01PlayEnemyAnimMontageBTTask : public UAppBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EnemyAnimMontageID EnemyAnimMontageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForcePlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* OwnerBehaviorTreeComponent;
    
public:
    UG01PlayEnemyAnimMontageBTTask();

};

