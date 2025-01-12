#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01TeacherManagerInf.h"
#include "G01TeacherManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01TeacherManager : public AManagerBase, public IG01TeacherManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AcquiredTeacherFlagDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TeacherCoefficientDataTable;
    
public:
    AG01TeacherManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

