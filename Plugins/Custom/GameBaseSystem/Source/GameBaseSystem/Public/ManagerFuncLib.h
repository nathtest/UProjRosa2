#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EManagerGetResult.h"
#include "EManagerID.h"
#include "Templates/SubclassOf.h"
#include "ManagerFuncLib.generated.h"

class AManagerBase;
class IInterface;
class UInterface;
class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UManagerFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UManagerFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_GetManagerHasInterface(const UObject* InWorldContext, TSubclassOf<UInterface> InInterfaceClass, TArray<AManagerBase*>& OutManagers, EManagerGetResult& OutBranches);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static AManagerBase* Func_FindManager(const UObject* InWorldContext, EManagerID InManagerId);
    
};

