#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "GameLevelManagerAccesser.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UGameLevelManagerAccesser : public UManagerAccessor {
    GENERATED_BODY()
public:
    UGameLevelManagerAccesser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterStreamingSubLevelName(FName InSubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void StopLevelStreaming();
    
    UFUNCTION(BlueprintCallable)
    void StartLevelStreaming(const UObject* InRequester);
    
    UFUNCTION(BlueprintCallable)
    void ResetStreamingSubLevelNameList();
    
    UFUNCTION(BlueprintCallable)
    void RegisterStreamingSubLevelName(FName InSubLevelName, bool InIsRequired);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedRequiredSublevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringStreaming() const;
    
};

