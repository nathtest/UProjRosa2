#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleTickFlagContainer.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleTickFlagContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> FlagMap;
    
public:
    UG01BattleTickFlagContainer();

    UFUNCTION(BlueprintCallable)
    void SetFlag(FName InTag, bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void HasEnable(bool& OutEnable);
    
    UFUNCTION(BlueprintCallable)
    void GetFlag(FName InTag, bool& OutEnable);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllFlag();
    
};

