#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ShiftGameRuleRegisteredStruct.h"
#include "ShiftGameRule.generated.h"

class UDataTable;
class UObject;

UCLASS(Abstract, Blueprintable)
class SHIFTGAMERULE_API UShiftGameRule : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* dataTable_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShiftGameRuleRegisteredStruct> registeredList_;
    
public:
    UShiftGameRule();

    UFUNCTION(BlueprintCallable)
    void Unregister(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void Request(const FName& requestGameRule, bool isRemove);
    
    UFUNCTION(BlueprintCallable)
    void Register(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisteredObjects(TArray<UObject*>& Objects);
    
    UFUNCTION(BlueprintCallable)
    void GetMostHighPriorityGameRule(bool& success, FName& gameRule);
    
    UFUNCTION(BlueprintCallable)
    void GetAllRequested(TArray<FName>& allRequested);
    
};

