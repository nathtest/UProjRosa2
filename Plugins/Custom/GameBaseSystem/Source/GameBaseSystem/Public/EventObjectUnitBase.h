#pragma once
#include "CoreMinimal.h"
#include "EventObjectBase.h"
#include "EventObjectUnitBase.generated.h"

class AEventObjectFlowBase;
class AEventObjectUnitBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AEventObjectUnitBase : public AEventObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventObjectFlowBase* MParentEventFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventObjectUnitBase* MPrevUnitLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventObjectUnitBase* MNextUnitLink;
    
public:
    AEventObjectUnitBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool Cmd_UA_IsSamePrevUnitLink(TSoftClassPtr<AEventObjectUnitBase> InUnitSoftClass);
    
    UFUNCTION(BlueprintCallable)
    bool Cmd_UA_IsSameNextUnitLink(TSoftClassPtr<AEventObjectUnitBase> InUnitSoftClass);
    
    UFUNCTION(BlueprintCallable)
    bool Cmd_UA_HasPrevUnitLink();
    
    UFUNCTION(BlueprintCallable)
    bool Cmd_UA_HasNextUnitLink();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEventObjectUnitBase* Cmd_UA_GetPrevUnitLink() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEventObjectFlowBase* Cmd_UA_GetParentEventFlow() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEventObjectUnitBase* Cmd_UA_GetNextUnitLink() const;
    
};

