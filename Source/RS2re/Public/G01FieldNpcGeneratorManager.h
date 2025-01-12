#pragma once
#include "CoreMinimal.h"
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01FieldGeneratorBaseManager.h"
#include "G01FieldNpcGeneratorManagerInterface.h"
#include "G01FieldNpcGeneratorManager.generated.h"

class AG01FieldNpcBase;
class AG01FieldNpcGeneratorBase;
class UDataTable;
class UG01RoomManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01FieldNpcGeneratorManager : public AG01FieldGeneratorBaseManager, public IG01FieldNpcGeneratorManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MFriendNpcParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VariationNpcParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDither;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01FieldNpcBase* FollowNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForceHideFollowNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherStartLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherEndLength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01FieldNpcGeneratorBase*> UpdateFieldNpcGeneratorList;
    
public:
    AG01FieldNpcGeneratorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFollowNpcDither(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAIStateAllNpc(EAIState InAiState);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcBase*> GetNpcListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcBase*> GetNpcList();
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcGeneratorBase*> GetNpcGeneratorListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldNpcGeneratorBase*> GetNpcGeneratorList();
    
    UFUNCTION(BlueprintCallable)
    void EnableTickNpcGeneratorByRoomID(UG01RoomManagerAccessor* InRoomManagerAccessor, bool InIsDisp);
    
    UFUNCTION(BlueprintCallable)
    void EnableTickAllNpcGenerator();
    
    UFUNCTION(BlueprintCallable)
    void DisableTickAllNpc(bool InIsHide);
    

    // Fix for true pure virtual functions not being implemented
};

