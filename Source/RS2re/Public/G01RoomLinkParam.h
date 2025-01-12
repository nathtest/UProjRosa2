#pragma once
#include "CoreMinimal.h"
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01RoomScaleParam.h"
#include "G01RoomLinkParam.generated.h"

USTRUCT(BlueprintType)
struct FG01RoomLinkParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID RoomID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01RoomScaleParam ScaleParam;
    
    RS2RE_API FG01RoomLinkParam();
};

