#pragma once
#include "CoreMinimal.h"
#include "ActivitySaveInfo.h"
#include "SaveDataUserSubsystemBase.h"
#include "ActivitySubsystem.generated.h"

class UActivitySubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UActivitySubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActivitySaveInfo SaveData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActivitySubsystemHelper* Helper;
    
public:
    UActivitySubsystem();

};

