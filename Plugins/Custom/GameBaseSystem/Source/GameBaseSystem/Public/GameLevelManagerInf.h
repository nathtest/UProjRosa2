#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GameLevelManagerInf.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UGameLevelManagerInf : public UInterface {
    GENERATED_BODY()
};

class IGameLevelManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GameLevelManager_UnregisterStreamingSubLevelName(FName InSubLevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GameLevelManager_StopLevelStreaming();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GameLevelManager_StartLevelStreaming(const UObject* InRequester);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GameLevelManager_ResetStreamingSubLevelNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GameLevelManager_RegisterStreamingSubLevelName(FName InSubLevelName, bool InIsRequired);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_GameLevelManager_IsLoadedRequiredSublevels();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_GameLevelManager_IsDuringStreaming();
    
};

