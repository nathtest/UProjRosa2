#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01IconActorManagerInf.generated.h"

class AIconObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01IconActorManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01IconActorManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01IconActorManager_UnRegisterIconActor(AIconObjectBase* IconActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01IconActorManager_RegisterIconActor(AIconObjectBase* IconActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01IconActorManager_FindIconActorByRoomID(FRoomID InRoomId, TArray<AIconObjectBase*>& ReActorList, TArray<AIconObjectBase*>& InRoomActor);
    
};

