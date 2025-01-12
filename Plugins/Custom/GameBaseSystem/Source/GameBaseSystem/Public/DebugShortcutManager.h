#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "DebugShortcutManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ADebugShortcutManager : public AManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DebugShortcutDataTableSoft;
    
public:
    ADebugShortcutManager(const FObjectInitializer& ObjectInitializer);

};

