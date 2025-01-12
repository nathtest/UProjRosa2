#pragma once
#include "CoreMinimal.h"
#include "CameraManagerInf.h"
#include "ManagerBase.h"
#include "CameraManagerBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACameraManagerBase : public AManagerBase, public ICameraManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ShakeParamTable;
    
public:
    ACameraManagerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

