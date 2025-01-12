#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameInstanceSubsystemHelper -FallbackName=GameInstanceSubsystemHelper
#include "G01TextSubsystemHelper.generated.h"

class UStringTable;

UCLASS(Blueprintable)
class RS2RE_API UG01TextSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* LocGameText;
    
    UG01TextSubsystemHelper();

};

