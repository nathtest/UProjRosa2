#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CheckDLCAsyncOutputPinDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CheckDLCAsync.generated.h"

class UCheckDLCAsync;
class UObject;

UCLASS(Blueprintable)
class PLATFORMSYSTEMHELPER_API UCheckDLCAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckDLCAsyncOutputPin OnCompleted;
    
    UCheckDLCAsync();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCheckDLCAsync* CheckDLCAsync(UObject* WorldContextObject, const FString& InDLCName);
    
};

