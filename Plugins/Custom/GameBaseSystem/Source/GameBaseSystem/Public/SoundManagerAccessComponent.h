#pragma once
#include "CoreMinimal.h"
#include "ESoundCategoryID.h"
#include "ESoundLoadType.h"
#include "ManagerAccessor.h"
#include "RegisterArgs2D.h"
#include "RegisterArgs3D.h"
#include "Sound2DPlayParam.h"
#include "Sound3DPlayParamAtTransform.h"
#include "Sound3DPlayParamAttachActor.h"
#include "Sound3DPlayParamAttachComponent.h"
#include "SoundAccessParameter.h"
#include "SoundManagerAccessComponent.generated.h"

class ASoundSystemManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USoundManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASoundSystemManager* MSoundManager;
    
public:
    USoundManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StopSound(const FSoundAccessParameter& InAccessParam);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound3DAtTransformByID(const FName& InSoundID, FSound3DPlayParamAtTransform InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound3DAtTransformByClass(const FRegisterArgs3D& InArgs, const FSound3DPlayParamAtTransform& InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound3DAttachComponentByID(const FName& InSoundID, FSound3DPlayParamAttachComponent InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound3DAttachComponentByClass(const FRegisterArgs3D& InArgs, const FSound3DPlayParamAttachComponent& InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound3DAttachActorByID(const FName& InSoundID, FSound3DPlayParamAttachActor InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound3DAttachActorByClass(const FRegisterArgs3D& InArgs, const FSound3DPlayParamAttachActor& InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound2DByID(const FName& InSoundID, FSound2DPlayParam InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySound2DByClass(const FRegisterArgs2D& InArgs, const FSound2DPlayParam& InParam, FSoundAccessParameter& OutResult);
    
    UFUNCTION(BlueprintCallable)
    bool PauseSound(const FSoundAccessParameter& InAccessParam);
    
    UFUNCTION(BlueprintCallable)
    void LoadSoundResources(ESoundLoadType InLoadType, const TArray<FName>& InSoundIDArray, bool InIsAsyncLoad);
    
    UFUNCTION(BlueprintCallable)
    void LoadSoundResource(ESoundLoadType InLoadType, FName InSoundID, bool InIsAsyncLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoundPlaying(const FSoundAccessParameter& InAccessParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySoundPlaying(ESoundCategoryID InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSoundPlaySeconds(const FSoundAccessParameter& InAccessParam) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyResidentSound(const FName& InSoundID);
    
    UFUNCTION(BlueprintCallable)
    void DestroyNormalSound(const FName& InSoundID);
    
};

