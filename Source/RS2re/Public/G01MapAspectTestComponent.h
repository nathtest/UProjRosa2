#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EG01BattleArtsType.h"
#include "EG01MapAspectType.h"
#include "G01MapAspectTestComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UG01MapAspectTestComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MMapAspectTransitionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MArtsTypeMapAspectTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MProbabilityBonusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MAttackBonusTable;
    
public:
    UG01MapAspectTestComponent();

    UFUNCTION(BlueprintCallable)
    void ResetMapAspect(EG01MapAspectType InType);
    
    UFUNCTION(BlueprintCallable)
    FString GetMapAspectName(EG01MapAspectType InType);
    
    UFUNCTION(BlueprintCallable)
    FString GetLogText();
    
    UFUNCTION(BlueprintCallable)
    EG01MapAspectType GetCurrentMapAspect();
    
    UFUNCTION(BlueprintCallable)
    FString GetAvailableMapAspectText();
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackBonus(bool InIsPlayer, EG01BattleArtsType InArtsType, float& OutAttackBonus);
    
    UFUNCTION(BlueprintCallable)
    FString GetArtsTypeName(EG01BattleArtsType InType);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteArts(bool InIsPlayer, EG01BattleArtsType InSourceArtsType);
    
};

