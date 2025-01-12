#pragma once
#include "CoreMinimal.h"
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01MapRoomInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01MapRoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomID> MVisitRoomIDList;
    
    RS2RE_API FG01MapRoomInfo();
};

