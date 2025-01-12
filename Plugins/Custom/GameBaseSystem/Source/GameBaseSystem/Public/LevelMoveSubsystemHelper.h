#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "LevelMoveSubsystemHelper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ULevelMoveSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelInfoTable;
    
public:
    ULevelMoveSubsystemHelper();

};

