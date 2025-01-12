#pragma once
#include "CoreMinimal.h"
#include "G01SaveDataSubsystemFeatureBase.h"
#include "G01SaveDataSubsystemIcon.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01SaveDataSubsystemIcon : public UG01SaveDataSubsystemFeatureBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayMinTime;
    
public:
    UG01SaveDataSubsystemIcon();

};

