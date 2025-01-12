#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h"
#include "FlagIDListViewStruct.h"
#include "ManagerAccessor.h"
#include "FlagSystemManagerAccessCompo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UFlagSystemManagerAccessCompo : public UManagerAccessor {
    GENERATED_BODY()
public:
    UFlagSystemManagerAccessCompo(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFlag(const FFlagAccessParam& InAccessParam, bool InSetValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetFlag(const FFlagAccessParam& InAccessParam);
    
    UFUNCTION(BlueprintCallable)
    FFlagAccessParam CreateFlagAccessParam(FFlagIDListViewStruct InFlagID);
    
};

