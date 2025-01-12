#pragma once
#include "CoreMinimal.h"
#include "SaveDataUserSubsystemBase.h"
#include "GameSystemDataSubsystem.generated.h"

class UGameSystemDataSubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UGameSystemDataSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameSystemDataSubsystemHelper* HelperObject;
    
public:
    UGameSystemDataSubsystem();

};

