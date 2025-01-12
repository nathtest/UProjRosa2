#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Image -FallbackName=Image
#include "EPlatformKeyImageMappingType.h"
#include "EPlatformType.h"
#include "InputManagerObserverInf.h"
#include "InputMappingName.h"
#include "KeyConfigObserverInf.h"
#include "PlatformObserverInf.h"
#include "Components/Image.h"
#include "PlatformKeyImage.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UPlatformKeyImage : public UImage, public IInputManagerObserverInf, public IPlatformObserverInf, public IKeyConfigObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformKeyImageMappingType MappingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingName> MappingNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> ActionMappingKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AxisMappingKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFixedPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformType FixedPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility InvalidVisibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D UnscaledBrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRegisteredObserver;
    
public:
    UPlatformKeyImage();

    UFUNCTION(BlueprintCallable)
    void SetPreviewPlatform(EPlatformType InPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetMappingType(EPlatformKeyImageMappingType InMappingType);
    
    UFUNCTION(BlueprintCallable)
    void SetMappingNames(const TArray<FInputMappingName>& InMappingNames);
    
    UFUNCTION(BlueprintCallable)
    void SetMappingAxisKeys(const TArray<FInputAxisKeyMapping>& InAxisMappings);
    
    UFUNCTION(BlueprintCallable)
    void SetMappingActionKeys(const TArray<FInputActionKeyMapping>& InActionMappings);
    
    UFUNCTION(BlueprintCallable)
    void SetInvalidVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetFixedPlatformType(EPlatformType InFixedPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFixedPlatform(bool InIsFixed);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMappingName(FInputMappingName InMappingName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMappingAxisKey(FInputAxisKeyMapping InAxisMapping);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMappingActionKey(FInputActionKeyMapping InActionMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputMappingName> GetMappingNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetMappingAxisKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetMappingActionKeys() const;
    
    UFUNCTION(BlueprintCallable)
    void AddMappingName(FInputMappingName InMappingName);
    
    UFUNCTION(BlueprintCallable)
    void AddMappingAxisKey(FInputAxisKeyMapping InAxisMapping);
    
    UFUNCTION(BlueprintCallable)
    void AddMappingActionKey(FInputActionKeyMapping InActionMapping);
    

    // Fix for true pure virtual functions not being implemented
};

