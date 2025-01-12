#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h"
#include "Templates/SubclassOf.h"
#include "QuestSubsystemHelper.generated.h"

class UDataTable;
class UQuestCoreData;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestSubsystemHelper : public UGameInstanceSubsystemHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestCoreData> CoreDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AllQuestTable;
    
    UQuestSubsystemHelper();

};

