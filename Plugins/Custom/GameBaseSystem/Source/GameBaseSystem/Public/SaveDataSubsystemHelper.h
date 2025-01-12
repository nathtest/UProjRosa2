#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "SaveDataSubsystemHelper.generated.h"

class USaveDataSettings;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USaveDataSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveDataSettings* Settings;
    
    USaveDataSubsystemHelper();

};

