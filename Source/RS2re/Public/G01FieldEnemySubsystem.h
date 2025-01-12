#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01FieldEnemySubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FieldEnemySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableEnemyEncount;
    
public:
    UG01FieldEnemySubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleEnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void EnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void DisableEnemyEncount();
    
};

