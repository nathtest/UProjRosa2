#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameInstanceSubsystem -FallbackName=AppGameInstanceSubsystem
#include "G01TextLanguageID.h"
#include "G01TextSubsystem.generated.h"

class UG01TextLanguageResources;
class UG01TextSubsystemHelper;

UCLASS(Blueprintable)
class RS2RE_API UG01TextSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01TextLanguageID LanguageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01TextLanguageResources* Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01TextSubsystemHelper* Helper;
    
public:
    UG01TextSubsystem();

};

