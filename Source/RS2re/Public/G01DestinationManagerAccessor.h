#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01DestinationData.h"
#include "G01DestinationInfo.h"
#include "G01DestinationInfos.h"
#include "OnAddDestinationDelegate.h"
#include "OnRemoveDestinationDelegate.h"
#include "OnUpdateDestinationDelegate.h"
#include "G01DestinationManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01DestinationManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateDestination MOnUpdateDestination;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddDestination OnAddDestination;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveDestination OnRemoveDestination;
    
    UG01DestinationManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDestination(FName InKey, const FG01DestinationInfo& InDest);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBroadcast(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationPriority(FName InKey, int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDestination(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void GetAllDestinationData(TArray<FG01DestinationInfos>& ReDestinationList);
    
    UFUNCTION(BlueprintCallable)
    void FindDestinationData(FName InKey, bool& ReIsFound, FG01DestinationData& ReFoundData);
    
    UFUNCTION(BlueprintCallable)
    bool AddDestination(FName InKey);
    
};

