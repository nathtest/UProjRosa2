#pragma once
#include "CoreMinimal.h"
#include "SeqActorAnimBindParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqActorAnimBindParam -FallbackName=SeqActorAnimBindParam
#include "EG01InventoryItemEquiomentType.h"
#include "EG01SeqWeaponBinderTargetType.h"
#include "G01SeqWeaponBindParam.generated.h"

class AG01ObjectVisualActor;

USTRUCT(BlueprintType)
struct FG01SeqWeaponBindParam : public FSeqActorAnimBindParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01ObjectVisualActor> MDefaultVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01SeqWeaponBinderTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VisualActorAttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01InventoryItemEquiomentType EquipmentType;
    
    RS2RE_API FG01SeqWeaponBindParam();
};

