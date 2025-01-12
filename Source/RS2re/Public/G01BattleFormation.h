#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "G01BattleFormationLineFx.h"
#include "Templates/SubclassOf.h"
#include "G01BattleFormation.generated.h"

class AActor;
class AG01BattleFormation;
class AG01FormationPoint;
class AG01VFXObjectBase;
class UChildActorComponent;
class UCurveFloat;
class ULoadControlActorComponent;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleFormation : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULoadControlActorComponent> LoadController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> MOptionTargetPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VanishFxCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReviveFxCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FxParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01VFXObjectBase> VanishFxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01VFXObjectBase> ReviveFxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointCountLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraComponent*, FG01BattleFormationLineFx> LineFxRelation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AG01FormationPoint*> FormationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AG01FormationPoint*> IgnoreFormationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AG01VFXObjectBase*> VanishFxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AG01VFXObjectBase*> ReviveFxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* MBasePoint;
    
public:
    AG01BattleFormation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePointLookAt(AG01BattleFormation* InOtherSide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFxVanish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFxRevive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SortByName(UPARAM(Ref) TArray<AG01FormationPoint*>& InFormationPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetupFormationPointLine();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLineUnused(int32 InLineNo, bool InUnused);
    
    UFUNCTION(BlueprintCallable)
    void SetFxVisibility(bool Invisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFormationPointList(UPARAM(Ref) TArray<AG01FormationPoint*>& InFormationPoints);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCompressUnusedLine(bool InEnableCompress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocatedBattleField();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedCharacter(const TArray<AActor*>& InActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MakeInclusionBox(const TArray<AActor*>& InActor, bool& ReSuccess, FBox& ReBox);
    
    UFUNCTION(BlueprintCallable)
    void LookupFormationPoints(TArray<AG01FormationPoint*>& ReFormationPointList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLineNum(int32& ReLineNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFormationPointTransform(int32 InPointNo, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFormationPointList(TArray<AG01FormationPoint*>& ReFormationPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetElemNumForLine(int32 InLineNo, int32& ReElemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterCenterPoint(AActor*& RePointActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCenterPoint(AActor*& RePointActor);
    
    UFUNCTION(BlueprintCallable)
    void FindOptionPoint(FName InPointLabel, AActor*& RePointActor, bool& ReFound);
    
    UFUNCTION(BlueprintCallable)
    void FindNearestPoint(AG01FormationPoint* InPoint, int32 InLineNo, bool& ReSuccess, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable)
    void ConvertToIndex(int32 InLineNo, int32 InElemNo, bool& ReSuccess, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable)
    void ConvertFromIndex(int32 InIndex, bool& ReSuccess, int32& ReLineNo, int32& ReElemNo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CollectFormationFx();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_SettingLineFx(bool& OutFailed);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SetLineFx(UNiagaraComponent* InLineFx, USceneComponent* InStartPoint, USceneComponent* InEndPoint);
    
public:
    UFUNCTION(BlueprintCallable)
    void CalcLineMoveDirection(int32 InLineFrom, int32 InLineTo, FVector& ReDir);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcCenterOfBox(const FBox& InBox, FVector& ReCenter);
    
    UFUNCTION(BlueprintCallable)
    void AddOptionPointComponent(FName InPointLabel, TSubclassOf<AActor> InActorClass, bool& ReSuccess, UChildActorComponent*& ReActorComponent);
    
};

