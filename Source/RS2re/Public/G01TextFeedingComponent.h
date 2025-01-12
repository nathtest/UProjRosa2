#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01OnTextFeedCompletedDelegate.h"
#include "G01OnTextFeedStartedDelegate.h"
#include "G01OnTextFeedUpdatedDelegate.h"
#include "G01TextFeedingComponent.generated.h"

class UG01TextFeedSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01TextFeedingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01TextFeedSettings* FeedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MFeedSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MOriginStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MCurrentDisplayString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MDisplayStringIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MDisplayCharacterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MElapsedTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnTextFeedStarted MOnTextFeedStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnTextFeedUpdated MOnTextFeedUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OnTextFeedCompleted MOnTextFeedCompleted;
    
public:
    UG01TextFeedingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetFeedSeconds(float InFeedSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    void JumpToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeeding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDisplayStrings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFeedSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentStringOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStringIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentCharacterNum() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDisplayStringList(const TArray<FString>& InStrings);
    
    UFUNCTION(BlueprintCallable)
    void AddDisplayString(const FString& inString);
    
};

