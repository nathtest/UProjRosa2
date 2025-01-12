#pragma once
#include "CoreMinimal.h"
#include "QuestDataAsset.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestDataAsset -FallbackName=QuestDataAsset
#include "G01QuestDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UG01QuestDataAsset : public UQuestDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChronicleTable;
    
public:
    UG01QuestDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetChronicleTable() const;
    
};

