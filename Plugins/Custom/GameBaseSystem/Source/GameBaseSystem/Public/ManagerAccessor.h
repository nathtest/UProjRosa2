#pragma once
#include "CoreMinimal.h"
#include "AccessorActorComponentBase.h"
#include "EManagerID.h"
#include "ManagerAccessor.generated.h"

class AManagerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UManagerAccessor : public UAccessorActorComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManagerID MDefaultManagerId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AManagerBase* MManager;
    
public:
    UManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUse() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AManagerBase* GetManagerOnManagerID(EManagerID InManagerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AManagerBase* GetDefaultManager() const;
    
};

