#pragma once
#include "CoreMinimal.h"
#include "ObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObjectBase -FallbackName=ObjectBase
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "EG01IconTypeEnum.h"
#include "IconObjectBase.generated.h"

class UG01IconActorManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AIconObjectBase : public AObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID RoomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01IconTypeEnum Icontype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID IconRoomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01IconActorManagerAccessor* MIconActorManagerAccessor;
    
    AIconObjectBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnInitialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitParamater();
    
};

