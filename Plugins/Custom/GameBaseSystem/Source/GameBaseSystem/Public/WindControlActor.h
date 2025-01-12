#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AppActor.h"
#include "WindControlActor.generated.h"

class AActor;
class UPrimitiveComponent;
class UWindCommonSettings;
class UWindManagerAccessor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AWindControlActor : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWindManagerAccessor* WindManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWindCommonSettings* CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MinGustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MaxGustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappedActors;
    
public:
    AWindControlActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterWindController();
    
    UFUNCTION(BlueprintCallable)
    void RegisterWindController();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOverlapBP(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndLastOverlapBP(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyedInEditorPreviewBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionInEditorPreviewBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginOverlapBP(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginFirstOverlapBP(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappng() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetMinGustAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetMaxGustAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetDirection() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CallEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void CallBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult);
    
};

