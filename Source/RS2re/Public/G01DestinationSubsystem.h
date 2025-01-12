#pragma once
#include "CoreMinimal.h"
#include "LevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectID -FallbackName=LevelObjectID
#include "G01DestinationData.h"
#include "G01DestinationInfo.h"
#include "G01DestinationInfos.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01DestinationSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API UG01DestinationSubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01DestinationInfos> MDestinations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsParallelUpdate;
    
    UG01DestinationSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    bool UpdateDetailInfo(FName InKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateDestinationInfo(FName InKey, const FG01DestinationInfo& InDest);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBroadcast(FName InKey, bool InIsUpdateDetail);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationPriority(FName InKey, int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDestinationInfo(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBroadcast(const FG01DestinationInfos& InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01DestinationInfos> GetDestinationList() const;
    
    UFUNCTION(BlueprintCallable)
    void FindDestinationData(FName InKey, bool& ReIsFound, FG01DestinationData& ReData);
    
    UFUNCTION(BlueprintCallable)
    void DestroyCheckDestinationActor(const FLevelObjectID& InLevelObjectID, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void CreateCheckDestinationActor(const FLevelObjectID& InLevelObjectID, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    bool AddDestinationInfo(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void AddBroadcast(const FName& InKey);
    
};

