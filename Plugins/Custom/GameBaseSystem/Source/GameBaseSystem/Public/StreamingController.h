#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "StreamingController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AStreamingController : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCommonRootPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSubLevelName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MLevelFileNames;
    
public:
    AStreamingController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void FinishUnLoadSubLevel();
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadSubLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStreamingLevelInfo(FName InLevelFilePath);
    
};

