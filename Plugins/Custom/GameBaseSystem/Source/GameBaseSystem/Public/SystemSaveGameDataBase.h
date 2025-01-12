#pragma once
#include "CoreMinimal.h"
#include "KeyConfigSaveInfo.h"
#include "SaveGameDataCore.h"
#include "SystemSaveGameDataBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USystemSaveGameDataBase : public USaveGameDataCore {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyConfigSaveInfo KeyConfig;
    
public:
    USystemSaveGameDataBase();

};

