#pragma once
#include "CoreMinimal.h"
#include "EG01PartyCharacteristic.h"
#include "G01CharaClassID.h"
#include "G01CharacterBase.h"
#include "G01PartyCharacterBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01PartyCharacterBase : public AG01CharacterBase {
    GENERATED_BODY()
public:
    AG01PartyCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSpeciesID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInspirationID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01CharaClassID GetClassID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EG01PartyCharacteristic> GetCharacteristic() const;
    
};

