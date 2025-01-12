#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h"
#include "ELoadScreenType.h"
#include "LoadScreenCustomTaskCompleteCheckDelegate.h"
#include "LoadScreenCustomTaskData.h"
#include "LoadScreenSubsystem.generated.h"

class ULoadScreenSubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ULoadScreenSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadScreenSubsystemHelper* HelperObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadScreenType MLoadScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLoadScreenCustomTaskData> CustomTaskData;
    
public:
    ULoadScreenSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterCustomTask(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadScreenType(ELoadScreenType InType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCustomTask(FName InKey, const FLoadScreenCustomTaskCompleteCheck& InCheckFunction);
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleteCustomTask(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    ELoadScreenType GetLoadScreenType();
    
};

