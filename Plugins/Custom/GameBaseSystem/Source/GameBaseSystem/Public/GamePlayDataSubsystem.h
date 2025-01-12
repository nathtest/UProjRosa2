#pragma once
#include "CoreMinimal.h"
#include "SaveDataUserSubsystemBase.h"
#include "GamePlayDataSubsystem.generated.h"

class UGamePlayDataSubsystemHelper;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UGamePlayDataSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGamePlayDataSubsystemHelper* HelperObject;
    
public:
    UGamePlayDataSubsystem();

};

