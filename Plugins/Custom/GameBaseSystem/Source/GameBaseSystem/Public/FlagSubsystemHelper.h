#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "FlagSubsystemHelper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UFlagSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AllFlagTable;
    
    UFlagSubsystemHelper();

};

