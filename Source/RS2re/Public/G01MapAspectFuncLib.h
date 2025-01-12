#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleArtsType.h"
#include "EG01MapAspectType.h"
#include "G01BattleArtsAttrFlags.h"
#include "G01BattleArtsTableRow.h"
#include "G01MapAspectAction.h"
#include "G01MapAspectFlowTableRow.h"
#include "G01MapAspectFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01MapAspectFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MapAspectFuncLib();

    UFUNCTION(BlueprintCallable)
    static void MakeMapAspectActionByArts(FName InArtsID, const FG01BattleArtsTableRow& InArts, FG01MapAspectAction& OutAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMapAspectNum(int32& OutNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetArtsTypeToMapAspect(EG01BattleArtsType InArtsType, EG01MapAspectType& OutType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetArtsAttrToMapAspect(EG01BattleArtsAttribute InAttr, EG01MapAspectType& OutType);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArtsTypeToMapAspect(EG01BattleArtsType InArtsType, TArray<EG01MapAspectType>& OutTypeList);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArtsAttrToMapAspect(const FG01BattleArtsAttrFlags& InAttrFlags, TArray<EG01MapAspectType>& OutTypeList);
    
    UFUNCTION(BlueprintCallable)
    static void CheckMapAspectReactAction(const FG01MapAspectFlowTableRow& InFlow, const FG01MapAspectAction& InAction, bool& OutIsReact, bool& OutPositive, bool& OutNegative);
    
};

