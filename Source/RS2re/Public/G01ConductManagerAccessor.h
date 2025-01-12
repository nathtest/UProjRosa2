#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01ConductCacheStruct.h"
#include "G01ConductIDHelper.h"
#include "G01ConductItemIDHelper.h"
#include "G01ConductRequestHandler.h"
#include "G01ConductRequestInfoStruct.h"
#include "G01ConductManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ConductManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01ConductManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestBy(const FG01ConductIDHelper& InConductID, const FName& InDebugRequestClass, FG01ConductRequestHandler& OutHandler);
    
    UFUNCTION(BlueprintCallable)
    void Request(const FG01ConductIDHelper& InConductID);
    
    UFUNCTION(BlueprintCallable)
    void GetAllRequest(TArray<FG01ConductRequestInfoStruct>& OutRequestList);
    
    UFUNCTION(BlueprintCallable)
    void GetAll(TArray<FG01ConductCacheStruct>& OutConductList);
    
    UFUNCTION(BlueprintCallable)
    void Get(FG01ConductCacheStruct& OutConduct);
    
    UFUNCTION(BlueprintCallable)
    void Destroy(const FG01ConductRequestHandler& InHandler);
    
    UFUNCTION(BlueprintCallable)
    void Check(const FG01ConductItemIDHelper& InItemID, bool& OutIsEnable);
    
};

