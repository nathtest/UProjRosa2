#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDebugSystemLogType.h"
#include "AppActor.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AAppActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTickInViewports;
    
public:
    AAppActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitializeComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialization();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActorFName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EditorTick(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddLogBP(EDebugSystemLogType InLogType, const FString& InMessage, const FString& InHeader, float InDuration, bool InIsPrintToGame, bool InIsPrintToScreen, bool InIsPrintToLog);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddedComponent(UActorComponent* InComponent);
    
};

