#pragma once
#include "CoreMinimal.h"
#include "GameLevelManagerInf.h"
#include "ManagerBase.h"
#include "GameLevelManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGameLevelManager : public AManagerBase, public IGameLevelManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MIgnoreSubLevelNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RequiredStreamingSubLevelNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StreamingSubLevelNameList;
    
public:
    AGameLevelManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SubLevelStatusUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool IsSubLevelLoaded(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsIgnoreSubLevelName(FName InLevelName);
    
    UFUNCTION(BlueprintCallable)
    bool IsAllSubLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSubLevelNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetSubLevelName(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetSubLevelLoadedCount(bool InIsUpdate, int32& ReSubLevelCount, int32& ReLoadedCount, FString& ReNotYet);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FName> GetIgnoreSubLevelNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConvertLevelName(const FName& InLevelName, FName& OutLevelName);
    

    // Fix for true pure virtual functions not being implemented
};

