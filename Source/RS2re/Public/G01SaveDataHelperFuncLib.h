#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "SaveDataHelperFuncLib.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataHelperFuncLib -FallbackName=SaveDataHelperFuncLib
#include "G01SaveDataVersion.h"
#include "G01SaveTime.h"
#include "G01SaveDataHelperFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SaveDataHelperFuncLib : public USaveDataHelperFuncLib {
    GENERATED_BODY()
public:
    UG01SaveDataHelperFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Func_VersionToString(const FG01SaveDataVersion& InVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan Func_SaveTimeToSpan(const FG01SaveTime& InTime);
    
};

