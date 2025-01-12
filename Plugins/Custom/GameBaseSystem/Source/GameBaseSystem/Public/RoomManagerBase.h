#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "RoomID.h"
#include "RoomManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ARoomManagerBase : public AManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID CurrentRoomID;
    
    ARoomManagerBase(const FObjectInitializer& ObjectInitializer);

};

