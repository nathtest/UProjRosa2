#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h"
#include "GameBootSubsystem.generated.h"

class UGameBootSubsystemHelper;
class UWorld;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UGameBootSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OverrideBootLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameBootSubsystemHelper* HelperObject;
    
public:
    UGameBootSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetOverrideBootLevel(TSoftObjectPtr<UWorld> InLevel);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UWorld> GetOverrideBootLevel();
    
};

