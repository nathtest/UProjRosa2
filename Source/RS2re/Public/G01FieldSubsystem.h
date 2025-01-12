#pragma once
#include "CoreMinimal.h"
#include "SaveDataUserSubsystemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataUserSubsystemBase -FallbackName=SaveDataUserSubsystemBase
#include "G01FieldSaveInfo.h"
#include "G01FieldSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FieldSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01FieldSaveInfo FieldData;
    
public:
    UG01FieldSubsystem();

};

