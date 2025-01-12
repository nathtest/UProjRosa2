#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ESoundCategoryID.h"
#include "SoundInstanceMap.h"
#include "SoundGameInstanceSubsystem.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USoundGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundCategoryID, FSoundInstanceMap> MSoundByCategory;
    
public:
    USoundGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveSound(const FName& InSoundID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllSound();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterSound(const FName& InSoundID, USoundBase* InSound);
    
};

