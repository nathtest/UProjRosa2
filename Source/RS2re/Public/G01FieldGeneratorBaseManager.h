#pragma once
#include "CoreMinimal.h"
#include "GeneratorManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GeneratorManagerBase -FallbackName=GeneratorManagerBase
#include "G01FieldGeneratorBaseManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FieldGeneratorBaseManager : public AGeneratorManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDebugDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattle;
    
public:
    AG01FieldGeneratorBaseManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugDispAll(bool InDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugDispAll();
    
};

