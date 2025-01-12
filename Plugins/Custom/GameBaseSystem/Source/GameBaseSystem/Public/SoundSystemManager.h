#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ESoundCategoryID.h"
#include "ManagerBase.h"
#include "SoundInstanceMap.h"
#include "SoundLoadingParam.h"
#include "SoundSlotList.h"
#include "SoundSystemManager.generated.h"

class USoundAttenuation;
class USoundGameInstanceSubsystem;
class USoundSystemDataAsset;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASoundSystemManager : public AManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSystemDataAsset* MSoundSystemDataAasset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* MDefaultSoundAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESoundCategoryID> MPlayAllowTypes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundCategoryID, FSoundSlotList> MSoundSlotByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundGameInstanceSubsystem* MSoundSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundCategoryID, FSoundInstanceMap> MSoundByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FSoundLoadingParam> MLoadingSoundParams;
    
public:
    ASoundSystemManager(const FObjectInitializer& ObjectInitializer);

};

