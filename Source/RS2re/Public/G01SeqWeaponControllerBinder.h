#pragma once
#include "CoreMinimal.h"
#include "SeqActorAnimControllerBinder.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqActorAnimControllerBinder -FallbackName=SeqActorAnimControllerBinder
#include "G01SeqWeaponBindParam.h"
#include "G01SeqWeaponControllerBinder.generated.h"

class AActor;
class UG01ItemManagerAccessor;
class UG01PartyManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqWeaponControllerBinder : public ASeqActorAnimControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FG01SeqWeaponBindParam MBindParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ItemManagerAccessor* ItemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WeaponVisualActor;
    
public:
    AG01SeqWeaponControllerBinder(const FObjectInitializer& ObjectInitializer);

};

