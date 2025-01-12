#include "G01SeqActorCollectCollision.h"

AG01SeqActorCollectCollision::AG01SeqActorCollectCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MRenderType = EG01SeqActorCollectRenderType::Opaque;
}

EG01SeqActorCollectRenderType AG01SeqActorCollectCollision::GetRenderType() const {
    return EG01SeqActorCollectRenderType::Opaque;
}

FG01SeqActorCollectParamTranslucent AG01SeqActorCollectCollision::GetParamTranslucent() const {
    return FG01SeqActorCollectParamTranslucent{};
}

FG01SeqActorCollectParamOpaque AG01SeqActorCollectCollision::GetParamOpaque() const {
    return FG01SeqActorCollectParamOpaque{};
}


