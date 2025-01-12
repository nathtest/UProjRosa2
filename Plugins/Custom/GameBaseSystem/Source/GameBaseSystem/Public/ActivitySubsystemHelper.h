#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "ActivitySubsystemHelper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UActivitySubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MActivityTable;
    
    UActivitySubsystemHelper();

};

