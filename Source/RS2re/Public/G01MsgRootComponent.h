#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChildAttachPositionComponentBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ChildAttachPositionComponentBase -FallbackName=ChildAttachPositionComponentBase
#include "G01MsgRootComponent.generated.h"

class UG01MsgWindowComponent;
class URelativePositionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgRootComponent : public UChildAttachPositionComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgWindowComponent* MMsgWindowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URelativePositionComponent* MSimpleTalkComponent;
    
public:
    UG01MsgRootComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupComponent(URelativePositionComponent* InSimpleTalkComponent, UG01MsgWindowComponent* InMsgWindowComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01MsgWindowComponent* GetTalkComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URelativePositionComponent* GetSimpleTalkComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInvalidRangeRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInvalidRangePosition() const;
    
};

