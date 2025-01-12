#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "Interfaces/Interface_BoneReferenceSkeletonProvider.h"  //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceSkeletonProvider -FallbackName=BoneReferenceSkeletonProvider
#include "Kismet/KismetSystemLibrary.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "VAPartsKey.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VAPartsKey -FallbackName=VAPartsKey
#include "EG01VisualActorPlaySeType.h"
#include "G01AnimNotify.h"
#include "VAPartsKey.h"
#include "G01AnimNotify_VisualActorPlaySE.generated.h"

class AActor;
class USQEXSEADSoundAttenuation;
class USQEXSEADSoundBank;

UCLASS(Blueprintable, CollapseCategories)
class RS2RE_API UG01AnimNotify_VisualActorPlaySE : public UG01AnimNotify, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VisualActorPlaySeType PlayType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference AttachBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundAttenuation* AttenuationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAPartsKey TraceStartPartsKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerWeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult TraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInGameWorld;
    
public:
    UG01AnimNotify_VisualActorPlaySE();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTraceSettings(TEnumAsByte<ETraceTypeQuery>& OutTraceChannel, bool& OutTraceComplex, TEnumAsByte<EDrawDebugTrace::Type>& OutDrawDebugType, FLinearColor& OutTraceColor, FLinearColor& OutTraceHitColor, float& OutDrawTime) const;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USQEXSEADSoundBank* FindPlayBank(AActor* InVisualActor) const;
    

    // Fix for true pure virtual functions not being implemented
};

