#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGEdgeInfo.h"
#include "G01EdgeInfo.h"
#include "G01GeometryFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01GeometryFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01GeometryFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RelaxVectorArray(UPARAM(Ref) TArray<FVector>& InVectorArray, const int32 InIteration);
    
    UFUNCTION(BlueprintCallable)
    static void RecursiveReductionSplinePointsAndRightVector(UPARAM(Ref) TArray<FVector>& InPointArray, UPARAM(Ref) TArray<FVector>& InRightVectorArray, int32 InFixedIndex, float InReductionBias);
    
    UFUNCTION(BlueprintCallable)
    static void OutLineCulling(const TArray<FVector>& InVertexArray, const TArray<FG01EdgeInfo>& InEdgeInfoArray, const FVector& InAddPoint, const float InDistanceThreshhold, UPARAM(Ref) TArray<FVector>& InPointArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetVerticesBoundBox(const TArray<FVector>& InVertexArray, FVector& OutMax, FVector& OutMin, FVector& OutCenter);
    
    UFUNCTION(BlueprintCallable)
    static void GetDelaunayTriangles(const TArray<FVector>& InVertexArray, TArray<int32>& OutIndexArray, TArray<FVector>& OutVertexArray);
    
    UFUNCTION(BlueprintCallable)
    static float CalcDistancePointAndEdge(const FVector InPointPos, const FVector InEdge0Pos, const FVector InEdge1Pos);
    
    UFUNCTION(BlueprintCallable)
    static void AGOutLineCulling(const TArray<FVector>& InVertexArray, const TArray<FAGEdgeInfo>& InEdgeInfoArray, const FVector& InAddPoint, const float InDistanceThreshhold, UPARAM(Ref) TArray<FVector>& InPointArray);
    
};

