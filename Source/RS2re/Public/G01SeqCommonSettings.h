#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqCategoryView -FallbackName=SeqCategoryView
#include "Templates/SubclassOf.h"
#include "G01SeqCommonSettings.generated.h"

class AG01FieldEnemyGeneratorBase;
class AG01FieldNpcGeneratorBase;
class AGimmickObjectBase;
class UDataTable;

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqCommonSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CategoryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> PauseableCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> EventCutCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> FieldEventCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> PlayerArtsCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> EnemyArtsCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> ArtsEventCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> BattleEventCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> BattleCameraCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AG01FieldNpcGeneratorBase>> HiddenTargetClasses_NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AG01FieldEnemyGeneratorBase>> HiddenTargetClasses_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGimmickObjectBase>> HiddenTargetClasses_Gimmick;
    
    FG01SeqCommonSettings();
};

