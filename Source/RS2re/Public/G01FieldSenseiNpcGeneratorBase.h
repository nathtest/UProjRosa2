#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "G01FieldNpcGeneratorBase.h"
#include "G01FieldSenseiNpcGeneratorBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FieldSenseiNpcGeneratorBase : public AG01FieldNpcGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct SenseiFlag;
    
public:
    AG01FieldSenseiNpcGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

