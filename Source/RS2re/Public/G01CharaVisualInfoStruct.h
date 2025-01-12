#pragma once
#include "CoreMinimal.h"
#include "EG01CharacterVisualActorType.h"
#include "G01CharaVisualInfoStruct.generated.h"

class AG01CharacterVisualActor;

USTRUCT(BlueprintType)
struct FG01CharaVisualInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01CharacterVisualActorType, TSoftClassPtr<AG01CharacterVisualActor>> CharaVisualClassList;
    
    RS2RE_API FG01CharaVisualInfoStruct();
};

