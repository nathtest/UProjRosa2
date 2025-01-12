#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h"
#include "LevelMoveCollisionEventInfo.h"
#include "LevelMoveCollisionObjectBase.generated.h"

class APlayerStart;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ALevelMoveCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelMoveCollisionEventInfo MDestinationLevelParam;
    
public:
    ALevelMoveCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartSoftReference(TSoftObjectPtr<APlayerStart> InPlayerStart);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartReference(APlayerStart* InPlayerStart);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetEventArg_PlayerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetEventArg_DestLevelID();
    
};

