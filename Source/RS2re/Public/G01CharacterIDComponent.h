#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01CharacterID.h"
#include "G01CharacterIDComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01CharacterIDComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID MCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEnemyIDDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MPartyIDDataTable;
    
public:
    UG01CharacterIDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRawCharacterID(const FName& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterID(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRawCharacterID(FName& OutCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterText(FText& OutCharacterText);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterName(FName& OutCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterID(FG01CharacterID& OutCharacterId);
    
};

