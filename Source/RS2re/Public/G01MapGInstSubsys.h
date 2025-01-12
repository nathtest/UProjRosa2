#pragma once
#include "CoreMinimal.h"
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "SaveDataUserSubsystemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataUserSubsystemBase -FallbackName=SaveDataUserSubsystemBase
#include "G01MapMaskParamInfo.h"
#include "G01MapGInstSubsys.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01MapGInstSubsys : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRoomID, FName> MapNameMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomID> MCompletedMaskRoomList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MapMaskParamInfo MMapMaskList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MDebugMapMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MDebugMapMaskRelease;
    
    UG01MapGInstSubsys();

};

