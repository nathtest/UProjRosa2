#pragma once
#include "CoreMinimal.h"
#include "CharacterGeneratorBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CharacterGeneratorBase -FallbackName=CharacterGeneratorBase
#include "G01CharacterGeneratorBase.generated.h"

class URoomInfoComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01CharacterGeneratorBase : public ACharacterGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* MRoomInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGenerateInRoom;
    
public:
    AG01CharacterGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

