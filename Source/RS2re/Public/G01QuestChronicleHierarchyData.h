#pragma once
#include "CoreMinimal.h"
#include "G01QuestChronicleHierarchyData.generated.h"

class UG01QuestCoreData;

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestChronicleHierarchyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChronicleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionLogIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01QuestCoreData* CoreData;
    
    FG01QuestChronicleHierarchyData();
};

