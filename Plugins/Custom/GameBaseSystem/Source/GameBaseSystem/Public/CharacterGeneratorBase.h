#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "GeneratorBase.h"
#include "CharacterGeneratorBase.generated.h"

class AActor;
class ACharacterBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACharacterGeneratorBase : public AGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacterBase* MCreatedObject;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MCreateObjectClassEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterBase> MCreateObjectSoftPtr;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsUseController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActiveAttachmentKeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsDebugConstructionProcess;
    
public:
    ACharacterGeneratorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOverrideAIParam(ACharacterBase* InPlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacterBase* GetCreatedObject() const;
    
    UFUNCTION(BlueprintCallable)
    void DestoryCreatedObject(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DebugGetCreateCharaHalfHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugConstructionProcessInitialization();
    
    UFUNCTION(BlueprintCallable)
    void ActiveDebugConstructionProcess();
    
};

