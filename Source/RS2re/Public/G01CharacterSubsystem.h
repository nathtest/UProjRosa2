#pragma once
#include "CoreMinimal.h"
#include "G01CharacterSaveInfo.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01CharacterSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CharacterSubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterSaveInfo CharacterSaveInfo;
    
public:
    UG01CharacterSubsystem();

};

