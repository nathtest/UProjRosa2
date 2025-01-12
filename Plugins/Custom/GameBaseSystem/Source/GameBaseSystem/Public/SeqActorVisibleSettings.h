#pragma once
#include "CoreMinimal.h"
#include "ESeqActorVisibleType.h"
#include "SeqActorVisibleSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqActorVisibleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqActorVisibleType VisibleNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqActorVisibleType VisibleFieldEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqActorVisibleType VisibleGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqActorVisibleType VisiblePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeqActorVisibleType VisibleBattleEnemy;
    
    FSeqActorVisibleSettings();
};

