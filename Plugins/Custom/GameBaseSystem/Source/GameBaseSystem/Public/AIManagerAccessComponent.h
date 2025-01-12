#pragma once
#include "CoreMinimal.h"
#include "EditableLevelObjectID.h"
#include "ManagerAccessor.h"
#include "AIManagerAccessComponent.generated.h"

class AAIControllerComponentManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAIManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIControllerComponentManager* MAIManager;
    
public:
    UAIManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAIControllerToCharacter(FEditableLevelObjectID InNpcGenLevelObjectID);
    
protected:
    UFUNCTION(BlueprintCallable)
    AAIControllerComponentManager* GetAIManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void EraseAIController(FEditableLevelObjectID InNpcGenLevelObjectID);
    
};

