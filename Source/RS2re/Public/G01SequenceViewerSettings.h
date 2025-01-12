#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "G01SeqViewerTableRow.h"
#include "G01SequenceViewerSettings.generated.h"

class UDataTable;
class ULevelSequence;

UCLASS(Blueprintable)
class RS2RE_API UG01SequenceViewerSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SetupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SequenceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFlagIDListViewStruct, bool> CommonSetupFlags;
    
public:
    UG01SequenceViewerSettings();

    UFUNCTION(BlueprintCallable)
    void UpdateSetupTable();
    
    UFUNCTION(BlueprintCallable)
    void Find(bool& OutIsFound, FG01SeqViewerTableRow& OutRow, TSoftObjectPtr<ULevelSequence> InSequence);
    
};

