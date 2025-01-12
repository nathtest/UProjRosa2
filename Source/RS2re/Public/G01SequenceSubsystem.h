#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01CharacterID.h"
#include "G01SequenceSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SequenceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayFromViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBackToViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ViewerPlaySequenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01CharacterID> ViewerPartyIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRemoveAllWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHiddenDebugInfo;
    
public:
    UG01SequenceSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetViewerPlaySequenceID(const FName& InSequencerID);
    
    UFUNCTION(BlueprintCallable)
    bool SetViewerPartyID(int32 InPartyIndex, const FG01CharacterID& InID);
    
    UFUNCTION(BlueprintCallable)
    void SetRemoveAllWidgets(bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayFromViewer(bool InIsPlayFromViewer);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenDebugInfo(bool InIsHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetBackToViewer(bool InIsBack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemoveAllWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayFromViewer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHiddenDebugInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackToViewer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetViewerPlaySequenceID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01CharacterID> GetViewerPartyIDs() const;
    
};

