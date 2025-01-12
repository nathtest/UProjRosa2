#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameInstanceSubsystem -FallbackName=AppGameInstanceSubsystem
#include "G01SlomoTagTableRow.h"
#include "G01SlomoSubsystem.generated.h"

class UDataTable;
class UG01SlomoSubsystemHelper;

UCLASS(Blueprintable)
class RS2RE_API UG01SlomoSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentSlomo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* TagDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01SlomoTagTableRow> TagSettingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01SlomoSubsystemHelper* MyHelperObject;
    
public:
    UG01SlomoSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSlomo(FName InTag, float InSlomo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlomo(FName InTag);
    
    UFUNCTION(BlueprintCallable)
    void GetHelperObject(UG01SlomoSubsystemHelper*& OutHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentSlomo(float& OutSlomo);
    
    UFUNCTION(BlueprintCallable)
    void FindSlomo(FName InTag, bool& OutFound, float& OutSlomo);
    
};

