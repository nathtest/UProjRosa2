#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameBaseSystemDebugGameSetting.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class GAMEBASESYSTEM_API UGameBaseSystemDebugGameSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DebugShortcutDataTableSoft;
    
    UGameBaseSystemDebugGameSetting();

};

