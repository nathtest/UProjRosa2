#pragma once
#include "CoreMinimal.h"
#include "QuestCoreData.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestCoreData -FallbackName=QuestCoreData
#include "G01DestinationInfo.h"
#include "G01QuestChronicleParam.h"
#include "G01QuestChronicleTableRow.h"
#include "G01QuestCoreData.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestCoreData : public UQuestCoreData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01DestinationInfo DestinationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDestinationPrecedenced;
    
public:
    UG01QuestCoreData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestinationPrecedenced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumChronicleData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FG01DestinationInfo GetDestinationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FText> GenerateSynopsisChronicleTexts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FG01QuestChronicleParam> GenerateChronicleList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindChronicleData(int32 InChronicleIndex, bool& OutIsValid, FG01QuestChronicleTableRow& OutData) const;
    
};

