#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameInstanceSubsystemHelper -FallbackName=GameInstanceSubsystemHelper
#include "G01TutorialSubsystemHelper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UG01TutorialSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialTable;
    
    UG01TutorialSubsystemHelper();

};

