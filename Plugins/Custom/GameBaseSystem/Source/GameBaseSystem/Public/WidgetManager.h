#pragma once
#include "CoreMinimal.h"
#include "EWidgetType.h"
#include "ManagerBase.h"
#include "WidgetManagerInf.h"
#include "WidgetTypeDataInfo.h"
#include "WidgetManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AWidgetManager : public AManagerBase, public IWidgetManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWidgetType, FWidgetTypeDataInfo> MWidgetList;
    
public:
    AWidgetManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

