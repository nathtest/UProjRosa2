#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "EG01TitlePrologueStaffReqestPlusTypeEnum.h"
#include "EG01TitlePrologueStaffReqestTypeEnum.h"
#include "G01TitlePrologueUiControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01TitlePrologueUiControllerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01TitlePrologueUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OpenPlus(EG01TitlePrologueStaffReqestPlusTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, FText Position4, FText Name4, FText Position5, FText Name5, FText Position6, FText Name6, bool IsLongAnim);
    
    UFUNCTION(BlueprintCallable)
    void Open(EG01TitlePrologueStaffReqestTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, bool IsLongAnim);
    
};

