#pragma once
#include "CoreMinimal.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01NoticeUiControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01NoticeUiControllerAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01NoticeUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestNotice(const FG01ThroneMenuUiControllerDataStructID& ThroneID);
    
    UFUNCTION(BlueprintCallable)
    void EndRequestNotice();
    
};

