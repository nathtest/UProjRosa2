#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigAssignDataType.h"
#include "EKeyConfigType.h"
#include "KeyConfigAssignDataWork.h"
#include "KeyConfigSaveInfo.h"
#include "SaveDataUserSubsystemBase.h"
#include "KeyConfigSubsystem.generated.h"

class UKeyConfigSubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UKeyConfigSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKeyConfigSaveInfo Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKeyConfigSubsystemHelper* Helper;
    
public:
    UKeyConfigSubsystem();

    UFUNCTION(BlueprintCallable)
    bool UpdateKeyAssign(const FKeyConfigAssignDataWork& InWork, bool InIsForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyWorkData(const FKeyConfigAssignDataWork& InWork);
    
    UFUNCTION(BlueprintCallable)
    FKeyConfigAssignDataWork CreateWorkData(EKeyConfigType InKeyConfigType, EKeyConfigAssignDataType InDataType);
    
};

