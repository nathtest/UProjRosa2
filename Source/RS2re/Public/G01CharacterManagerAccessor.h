#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01CharacterVariationType.h"
#include "EG01CharacterVisualActorType.h"
#include "EG01CharacterVisualType.h"
#include "G01CharaMinimalInfoTableRow.h"
#include "G01CharacterID.h"
#include "G01VariationCharaIDStruct.h"
#include "G01CharacterManagerAccessor.generated.h"

class AG01CharacterVisualActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01CharacterManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01CharacterManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCharacterVisualType(const FG01CharacterID& InCharacterId, const EG01CharacterVisualType& InVisualType);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterVariationType(const FG01VariationCharaIDStruct& InVariationCharacterID, const EG01CharacterVariationType& InVariationType);
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterVisualType(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterVariationType(const FG01VariationCharaIDStruct& InVariationCharacterID);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCharacterVisualType();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCharacterVariationType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVisualActorClass(const FG01CharacterID InCharaID, const EG01CharacterVisualActorType InCharacterVisualActorType, TSoftClassPtr<AG01CharacterVisualActor>& OutVisualActorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterVisualType(const FG01CharacterID& InCharacterId, EG01CharacterVisualType& OutVisualType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterVariationType(const FG01VariationCharaIDStruct& InVariationCharacterID, EG01CharacterVariationType& OutVariationType) const;
    
    UFUNCTION(BlueprintCallable)
    FG01CharaMinimalInfoTableRow FindCharaMinimalInfo(const FG01CharacterID& InCharaID);
    
};

