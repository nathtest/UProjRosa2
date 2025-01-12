#pragma once
#include "CoreMinimal.h"
#include "LevelMoveCollisionEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelMoveCollisionEventInfo -FallbackName=LevelMoveCollisionEventInfo
#include "G01GimmickObjectBase.h"
#include "G01LevelMoveInf.h"
#include "G01GimmickLevelMoveBase.generated.h"

class APlayerStart;
class UG01StageManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickLevelMoveBase : public AG01GimmickObjectBase, public IG01LevelMoveInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01StageManagerAccessor* StageManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelMoveCollisionEventInfo MDestinationLevelParam;
    
public:
    AG01GimmickLevelMoveBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSoundLevelMoveFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartSoftReference(TSoftObjectPtr<APlayerStart> InPlayerStart);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartReference(APlayerStart* InPlayerStart);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySoundLevelMoveFinished();
    

    // Fix for true pure virtual functions not being implemented
};

