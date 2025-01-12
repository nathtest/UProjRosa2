#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Templates/SubclassOf.h"
#include "WindCommonSettings.generated.h"

class AActor;
class AWindDirectionalSourceActor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UWindCommonSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWindDirectionalSourceActor> WindDirectionalSourceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> WindSwitchableActorClassList;
    
public:
    UWindCommonSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchableActor(AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetWindSourceClass() const;
    
};

