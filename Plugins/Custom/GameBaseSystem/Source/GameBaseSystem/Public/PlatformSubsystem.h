#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AppGameInstanceSubsystem.h"
#include "EPlatformType.h"
#include "PlatformSubsystem.generated.h"

class UPlatformResource;
class UPlatformSubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UPlatformSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlatformSubsystemHelper* Helper;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPlatformType, UPlatformResource*> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility CurrentVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentOpacity;
    
public:
    UPlatformSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetPlatformWidgetVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetPlatformWidgetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetPlatformWidgetVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlatformWidgetOpacity() const;
    
};

