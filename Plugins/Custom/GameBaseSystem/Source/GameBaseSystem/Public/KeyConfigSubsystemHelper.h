#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "KeyConfigSubsystemHelper.generated.h"

class UKeyConfigSettings;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UKeyConfigSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyConfigSettings* KeyConfigSettings;
    
    UKeyConfigSubsystemHelper();

};

