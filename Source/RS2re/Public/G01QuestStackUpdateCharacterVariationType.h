#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "EG01CharacterVariationType.h"
#include "G01VariationCharaIDStruct.h"
#include "G01QuestStackUpdateCharacterVariationType.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestStackUpdateCharacterVariationType : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VariationCharaIDStruct CharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01CharacterVariationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReset;
    
public:
    UG01QuestStackUpdateCharacterVariationType();

};

