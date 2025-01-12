#pragma once
#include "CoreMinimal.h"
#include "G01EventSimpleTalkDisplayPreset.h"
#include "G01EventUnitTalkBase.h"
#include "G01MsgSimpleParamArray.h"
#include "G01EventUnitSimpleTalk.generated.h"

class AActor;
class UDataTable;
class UG01MsgSimpleUiContAccessor;
class UG01TextManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01EventUnitSimpleTalk : public AG01EventUnitTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SettingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DisplayPresetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EventSimpleTalkDisplayPreset DefaultDisplayPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MsgSimpleUiContAccessor* MMessageSimpleUiAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01TextManagerAccessor* TextManagerAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgSimpleParamArray MSimpleWindowParams;
    
public:
    AG01EventUnitSimpleTalk(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUnregisterSimpleWindow(AActor* InUser);
    
};

