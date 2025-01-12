#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "GameFramework/PlayerStart.h"
#include "PlayerStartBase.generated.h"

class AActor;
class URoomInfoComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API APlayerStartBase : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* MRoomInfoComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> MLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableTraceGround;
    
public:
    APlayerStartBase(const FObjectInitializer& ObjectInitializer);

};

