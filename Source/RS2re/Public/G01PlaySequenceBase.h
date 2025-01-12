#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01BattleManagerObserverInf.h"
#include "G01PlaySequenceRandomStartParamStruct.h"
#include "G01RoomManagerObserverInf.h"
#include "G01PlaySequenceBase.generated.h"

class ASequenceController;
class UG01BattleManagerAccessor;
class UG01RoomManagerAccessor;
class UG01SequenceManagerAccessor;
class ULevelSequence;
class URoomInfoComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01PlaySequenceBase : public AAppActor, public IG01RoomManagerObserverInf, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01SequenceManagerAccessor* SequenceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* RoomManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* BattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* RoomInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* SequenceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> RequestSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayFromGeneratePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PlaySequenceRandomStartParamStruct> RandomStartParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomID> TargetRoomIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStopsInBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPauseInBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInBattle;
    
public:
    AG01PlaySequenceBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAvailableSequence();
    

    // Fix for true pure virtual functions not being implemented
};

