#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "TextSysParamTables.h"
#include "TextTagPropertyParam.h"
#include "TextSystemManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ATextSystemManager : public AManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextSysParamTables MTables;
    
public:
    ATextSystemManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    FString GetPropID_Default(const FTextTagPropertyParam& InTagPropParam) const;
    
};

