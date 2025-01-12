#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01TitlePrologueStaffReqestPlusTypeEnum.h"
#include "EG01TitlePrologueStaffReqestTypeEnum.h"
#include "G01TitlePrologueUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TitlePrologueUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01TitlePrologueUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitlePrologue_RequestStaff(EG01TitlePrologueStaffReqestTypeEnum RequestType, const FText& Position1, const FText& Name1, const FText& Position2, const FText& Name2, const FText& Position3, const FText& Name3, bool IsLongAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitlePrologue_RequestPlusStaff(EG01TitlePrologueStaffReqestPlusTypeEnum RequestType, const FText& Position1, const FText& Name1, const FText& Position2, const FText& Name2, const FText& Position3, const FText& Name3, const FText& Position4, const FText& Name4, const FText& Position5, const FText& Name5, const FText& Position6, const FText& Name6, bool IsLongAnim);
    
};

