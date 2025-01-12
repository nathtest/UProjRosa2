#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EManagerID.h"
#include "ManagerData.h"
#include "ManagerGameInstanceSubsystem.generated.h"

class AManagerBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UManagerGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EManagerID, FManagerData> MManagerDatas;
    
public:
    UManagerGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetManagers(AManagerBase* InManager, const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    AManagerBase* GetManagerOnManagerID(EManagerID InManagerId);
    
};

