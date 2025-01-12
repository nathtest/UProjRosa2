#pragma once
#include "CoreMinimal.h"
#include "SequenceCharaCollectCollision.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceCharaCollectCollision -FallbackName=SequenceCharaCollectCollision
#include "EG01SeqActorCollectRenderType.h"
#include "G01SeqActorCollectParamOpaque.h"
#include "G01SeqActorCollectParamTranslucent.h"
#include "G01SeqActorCollectCollision.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqActorCollectCollision : public ASequenceCharaCollectCollision {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01SeqActorCollectRenderType MRenderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqActorCollectParamOpaque MParamOpaque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqActorCollectParamTranslucent MParamTranslucent;
    
public:
    AG01SeqActorCollectCollision(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01SeqActorCollectRenderType GetRenderType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqActorCollectParamTranslucent GetParamTranslucent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqActorCollectParamOpaque GetParamOpaque() const;
    
};

