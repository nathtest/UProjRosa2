#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01VACharacterWeaponSettingsRow.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FG01VACharacterWeaponSettingsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> WaitAnimation;
    
    RS2RE_API FG01VACharacterWeaponSettingsRow();
};

