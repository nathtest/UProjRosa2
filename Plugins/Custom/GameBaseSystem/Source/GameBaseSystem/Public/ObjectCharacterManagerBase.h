#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "ObjectCharacterManagerBase.generated.h"

class AActor;
class AObjectCharacter;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AObjectCharacterManagerBase : public AManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjectCharacter*> MObjectCharacters;
    
public:
    AObjectCharacterManagerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDestroyedActor(AActor* InDestroyActor);
    
};

