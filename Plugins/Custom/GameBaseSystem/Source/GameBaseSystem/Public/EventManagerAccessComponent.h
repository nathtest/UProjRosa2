#pragma once
#include "CoreMinimal.h"
#include "EventArguments.h"
#include "EventCategory.h"
#include "EventObjectList.h"
#include "ManagerAccessor.h"
#include "EventManagerAccessComponent.generated.h"

class AEventObjectBase;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UEventManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UEventManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetAllActiveEventsBySingleList(TArray<AEventObjectBase*>& OutAllEvents);
    
    UFUNCTION(BlueprintCallable)
    TMap<FEventCategory, FEventObjectList> GetAllActiveEvent();
    
    UFUNCTION(BlueprintCallable)
    AEventObjectBase* CreateEventByClass(TSoftClassPtr<AEventObjectBase> InEventSoftClass, const FEventArguments& InArgs, UObject* InRequester);
    
    UFUNCTION(BlueprintCallable)
    AEventObjectBase* CreateEvent(FName InEventID, const FEventArguments& InArgs, UObject* InRequester);
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<AEventObjectBase> ConvertEventIDtoSoftClass(FName InEventID);
    
    UFUNCTION(BlueprintCallable)
    bool CheckEventPlaying();
    
};

