#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01DebugImGuiSetting.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class GAMEBASESYSTEM_API UG01DebugImGuiSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SubWindowTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TabTable;
    
    UG01DebugImGuiSetting();

};

