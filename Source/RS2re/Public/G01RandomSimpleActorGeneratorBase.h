#pragma once
#include "CoreMinimal.h"
#include "G01GenerateSimpleActorParamStruct.h"
#include "G01SimpleActorGeneratorBase.h"
#include "G01RandomSimpleActorGeneratorBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01RandomSimpleActorGeneratorBase : public AG01SimpleActorGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01GenerateSimpleActorParamStruct> GenerateSimpleActorParamList;
    
public:
    AG01RandomSimpleActorGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

