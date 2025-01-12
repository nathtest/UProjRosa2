#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01IconActorManagerAccessor.generated.h"

class AIconObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01IconActorManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01IconActorManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FindIconActorByRoomID(FRoomID InRoomId, TArray<AIconObjectBase*>& OutIconActorList, TArray<AIconObjectBase*>& InRoomActor);
    
};

