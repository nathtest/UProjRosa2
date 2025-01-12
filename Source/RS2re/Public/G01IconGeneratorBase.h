#pragma once
#include "CoreMinimal.h"
#include "GeneratorBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GeneratorBase -FallbackName=GeneratorBase
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "EG01IconTypeEnum.h"
#include "G01IconGeneratorBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API AG01IconGeneratorBase : public AGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> MGenerateActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID RoomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01IconTypeEnum Icontype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID IconRoomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconTextID;
    
public:
    AG01IconGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

