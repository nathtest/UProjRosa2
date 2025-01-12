#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FieldEnemyGeneratorManagerUserInf.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldEnemyGeneratorManagerUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldEnemyGeneratorManagerUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerUser_OnDefeatEnemy(AActor* InDefeatEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerUser_LoseSightPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerUser_DiscoverPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
};

