#pragma once
#include "CoreMinimal.h"
#include "SingleUiController.h"
#include "SoundAccessParameter.h"
#include "SequenceUIController.generated.h"

class USoundManagerAccessComponent;
class UTextSystemManagerAccessComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceUIController : public ASingleUiController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundManagerAccessComponent* MSoundManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextSystemManagerAccessComponent* MTextManagerAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAccessParameter MSubtitleVoiceAccessParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAccessParameter MTalkWindowVoiceAccessParams;
    
public:
    ASequenceUIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TalkWindowSkip();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PushTalkWindowText_Internal(const FText& InSpeakerText, const FText& InMessageText);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PushTalkWindowText(const FName& InTextID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PushSubtitleText_Internal(const FText& InSpeakerText, const FText& InMessageText);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PushSubtitleText(const FName& InTextID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsVisibleTalkWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsVisibleSubtitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsDisplayEndTalkWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Finalize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseTalkWindow_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CloseTalkWindow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseSubtitle_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CloseSubtitle();
    
    UFUNCTION(BlueprintCallable)
    void AllClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddToViewport(int32 InZOrder);
    
};

