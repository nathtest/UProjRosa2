#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h"
#include "FlagChangedEventParam.h"
#include "FlagIDListViewStruct.h"
#include "FlagSystemSaveInfo.h"
#include "SaveDataUserSubsystemBase.h"
#include "FlagSubsystem.generated.h"

class UFlagEventReceiveComponent;
class UFlagSubsystemHelper;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UFlagSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagSystemSaveInfo Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFlagSubsystemHelper* Helper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFlagChangedEventParam> ChangeParamBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDuringBroadcastChangeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFlagEventReceiveComponent*> EventReceiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFlagEventReceiveComponent*> RegisterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFlagEventReceiveComponent*> UnregisterList;
    
public:
    UFlagSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetFlag(const FFlagAccessParam& InAccessParam, bool InSetValue);
    
    UFUNCTION(BlueprintCallable)
    void ImmediateBroadcastChangedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFlag(bool& OutValue, const FFlagAccessParam& InAccessParam) const;
    
    UFUNCTION(BlueprintCallable)
    FFlagAccessParam CreateFlagAccessParam(FFlagIDListViewStruct InFlagID);
    
};

