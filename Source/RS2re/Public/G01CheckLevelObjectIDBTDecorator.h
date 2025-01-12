#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppBTDecorator -FallbackName=AppBTDecorator
#include "EditableLevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EditableLevelObjectID -FallbackName=EditableLevelObjectID
#include "AppBTDecorator.h"
#include "EditableLevelObjectID.h"
#include "G01CheckLevelObjectIDBTDecorator.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CheckLevelObjectIDBTDecorator : public UAppBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableLevelObjectID LevelObjectID;
    
    UG01CheckLevelObjectIDBTDecorator();

};

