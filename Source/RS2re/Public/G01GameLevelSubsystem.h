#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01GameLevelSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01GameLevelSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableStatLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableEditorSublevelLoading;
    
public:
    UG01GameLevelSubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleEnableEditorSublevelLoading();
    
    UFUNCTION(BlueprintCallable)
    void EnableStatLevels();
    
    UFUNCTION(BlueprintCallable)
    void EnableEditorSublevelLoading();
    
    UFUNCTION(BlueprintCallable)
    void DisableStatLevels();
    
    UFUNCTION(BlueprintCallable)
    void DisableEditorSublevelLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableStatLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableEditorSublevelLoading() const;
    
};

