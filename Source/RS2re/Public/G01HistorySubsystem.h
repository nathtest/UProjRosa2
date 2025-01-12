#pragma once
#include "CoreMinimal.h"
#include "G01HistorySaveInfo.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01HistorySubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01HistorySubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01HistorySaveInfo HistorySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StoryRecordMax;
    
public:
    UG01HistorySubsystem();

    UFUNCTION(BlueprintCallable)
    FG01HistorySaveInfo GetHistorySaveData() const;
    
};

