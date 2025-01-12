#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SQEXSEADAutoSeComponent.generated.h"

class UPawnMovementComponent;
class USQEXSEADAutoSeComponentCallback;
class USQEXSEADAutoSeComponentSetting;
class USQEXSEADAutoSeProcessorLODSettings;
class USQEXSEADAutoSeProcessorSettingsData;
class USQEXSEADSoundAttenuation;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADAutoSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeComponentCallback* AutoSeCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeComponentSetting* SettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeProcessorSettingsData* ProcessorSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowMeshVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeProcessorLODSettings* ProcLodSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundAttenuation* OverrideAttenuationAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CachedMeshReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* CachedMovementComponent;
    
public:
    USQEXSEADAutoSeComponent(const FObjectInitializer& ObjectInitializer);

};

