#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "Templates/SubclassOf.h"
#include "WidgetSubsystemHelper.generated.h"

class UDataTable;
class UMasterViewWidget;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UWidgetSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WidgetCreateDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMasterViewWidget> MasterWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMasterViewWidget> MasterWidgetDirectXClass;
    
    UWidgetSubsystemHelper();

};

