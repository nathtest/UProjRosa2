#pragma once
#include "CoreMinimal.h"
#include "PlayerStartBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=PlayerStartBase -FallbackName=PlayerStartBase
#include "EG01PlayerType.h"
#include "G01PlayerStart.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01PlayerStart : public APlayerStartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOverridePlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PlayerType MPlayerTypeOverride;
    
    AG01PlayerStart(const FObjectInitializer& ObjectInitializer);

};

