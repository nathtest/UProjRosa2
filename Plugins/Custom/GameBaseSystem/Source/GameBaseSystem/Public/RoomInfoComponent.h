#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RoomID.h"
#include "RoomInfoComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API URoomInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID RoomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RoomChangerList;
    
    URoomInfoComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterRoomChanger(AActor* InChanger);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRoomChanger(AActor* InChanger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetRoomChangerList() const;
    
};

