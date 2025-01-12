#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01FieldPlayerSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FieldPlayerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableStealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableRandomLevelMove;
    
public:
    UG01FieldPlayerSubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleEnableStealth();
    
    UFUNCTION(BlueprintCallable)
    void EnableStealth();
    
    UFUNCTION(BlueprintCallable)
    void DisableStealth();
    
};

