#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "StreamingControllerManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AStreamingControllerManager : public AManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MLevelLoadDataTable;
    
    AStreamingControllerManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopStreaming(FName InLevelName);
    
    UFUNCTION(BlueprintCallable)
    void StopAllStreaming();
    
    UFUNCTION(BlueprintCallable)
    void StartStreaming(FName InLevelName);
    
    UFUNCTION(BlueprintCallable)
    void StartAllStreaming();
    
};

