#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "FlagSystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemObserverInf -FallbackName=FlagSystemObserverInf
#include "G01SaveDataSubsystemFeatureBase.h"
#include "G01SaveFeatureAutoSaveControl.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01SaveFeatureAutoSaveControl : public UG01SaveDataSubsystemFeatureBase, public IFlagSystemObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlagIDListViewStruct> InvalidAutoSaveFlagIDs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFlagAccessParam> FlagAccessParams;
    
public:
    UG01SaveFeatureAutoSaveControl();


    // Fix for true pure virtual functions not being implemented
};

