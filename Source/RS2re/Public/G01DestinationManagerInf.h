#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01DestinationData.h"
#include "G01DestinationInfo.h"
#include "G01DestinationInfos.h"
#include "G01DestinationLocationInfo.h"
#include "G01DestinationManagerInf.generated.h"

class UG01DestinationManagerAccessor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DestinationManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01DestinationManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_UpdateDestination(FName InKey, const FG01DestinationInfo& InDest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_UpdateBroadcast(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_UnregisterAccessor(UG01DestinationManagerAccessor* InAccessor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_SetDestinationPriority(FName InKey, int32 InPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_RemoveDestination(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_RegisterAccessor(UG01DestinationManagerAccessor* InAccessor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_GetPriority(FName InKey, int32& OutPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_GetAllDestinationData(TArray<FG01DestinationInfos>& ReDestinationList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_FindDestinationData(FName InKey, bool& ReIsFound, FG01DestinationData& ReFoundData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestManager_CreateDestLocationInfo(const FRoomID& InRoomId, FG01DestinationLocationInfo& ReDestLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01DestManager_AddDestination(FName InKey);
    
};

