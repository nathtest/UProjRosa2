#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DebugMenuPageBase.h"
#include "DebugMenuSubWindowBase.generated.h"

UCLASS(Blueprintable)
class IMGUIHELPER_API UDebugMenuSubWindowBase : public UDebugMenuPageBase {
    GENERATED_BODY()
public:
    UDebugMenuSubWindowBase();

    UFUNCTION(BlueprintCallable)
    void SetWindowSize(const FVector2D& Size);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowPosition(const FVector2D& Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimal(bool bin);
    
    UFUNCTION(BlueprintCallable)
    void SetFavorite(bool bin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinimal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFavorite() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetWindowSize();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetWindowPositions();
    
};

