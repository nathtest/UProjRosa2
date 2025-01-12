#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ConductCacheStruct.h"
#include "G01ConductIDHelper.h"
#include "G01ConductItemIDHelper.h"
#include "G01ConductRequestHandler.h"
#include "G01ConductRequestInfoStruct.h"
#include "G01ConductManagerInf.generated.h"

class UG01ConductManagerReciever;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ConductManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ConductManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_Unregister(UG01ConductManagerReciever* InUnregister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_RequestBy(const FG01ConductIDHelper& InConductID, const FName& InDebugRequestClass, FG01ConductRequestHandler& OutHandler);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_Request(const FG01ConductIDHelper& InConductID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_Register(UG01ConductManagerReciever* InRegister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_GetAllRequest(TArray<FG01ConductRequestInfoStruct>& OutRequestList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_GetAll(TArray<FG01ConductCacheStruct>& OutConductList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_Get(FG01ConductCacheStruct& OutConduct);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_Destroy(const FG01ConductRequestHandler& InHandler);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ConductMng_Check(const FG01ConductItemIDHelper& InItemID, bool& OutIsEnable);
    
};

