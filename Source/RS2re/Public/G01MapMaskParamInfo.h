#pragma once
#include "CoreMinimal.h"
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01MapMaskParam.h"
#include "G01MapRoomInfo.h"
#include "G01MapMaskParamInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01MapMaskParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRoomID, FG01MapMaskParam> MMapMaskParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01MapRoomInfo> MMapRoomInfoList;
    
    RS2RE_API FG01MapMaskParamInfo();
};

