#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01ImperialTestUiControllerInf.h"
#include "G01UniversityUiControllerInf.h"
#include "G01UniversityManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01UniversityManager : public AManagerBase, public IG01UniversityUiControllerInf, public IG01ImperialTestUiControllerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MImperialExamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MTestSettingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MExamTestDataTable;
    
public:
    AG01UniversityManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

