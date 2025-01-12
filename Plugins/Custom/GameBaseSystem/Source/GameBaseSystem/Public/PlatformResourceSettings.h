#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EPlatformType.h"
#include "PlatformResourceInfo.h"
#include "Templates/SubclassOf.h"
#include "PlatformResourceSettings.generated.h"

class UPlatformResource;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UPlatformResourceSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlatformType, FPlatformResourceInfo> ResourceInfoByPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlatformResource> ResourceClass;
    
public:
    UPlatformResourceSettings();

};

