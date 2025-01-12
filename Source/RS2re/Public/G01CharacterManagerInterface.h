#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01CharacterVisualActorType.h"
#include "G01CharaMinimalInfoTableRow.h"
#include "G01CharacterID.h"
#include "G01CharacterManagerInterface.generated.h"

class AG01CharacterVisualActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01CharacterManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01CharacterManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CharacterManager_GetVisualActorClass(const FG01CharacterID& InCharaID, const EG01CharacterVisualActorType InVisualActorType, TSoftClassPtr<AG01CharacterVisualActor>& OutVisualActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CharacterManager_FindCharaMinimalInfo(const FG01CharacterID& InCharaID, FG01CharaMinimalInfoTableRow& ReCharaMinimalInfo);
    
};

