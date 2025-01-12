#include "G01GeometryFunctionLibrary.h"

UG01GeometryFunctionLibrary::UG01GeometryFunctionLibrary() {
}

void UG01GeometryFunctionLibrary::RelaxVectorArray(TArray<FVector>& InVectorArray, const int32 InIteration) {
}

void UG01GeometryFunctionLibrary::RecursiveReductionSplinePointsAndRightVector(TArray<FVector>& InPointArray, TArray<FVector>& InRightVectorArray, int32 InFixedIndex, float InReductionBias) {
}

void UG01GeometryFunctionLibrary::OutLineCulling(const TArray<FVector>& InVertexArray, const TArray<FG01EdgeInfo>& InEdgeInfoArray, const FVector& InAddPoint, const float InDistanceThreshhold, TArray<FVector>& InPointArray) {
}

void UG01GeometryFunctionLibrary::GetVerticesBoundBox(const TArray<FVector>& InVertexArray, FVector& OutMax, FVector& OutMin, FVector& OutCenter) {
}

void UG01GeometryFunctionLibrary::GetDelaunayTriangles(const TArray<FVector>& InVertexArray, TArray<int32>& OutIndexArray, TArray<FVector>& OutVertexArray) {
}

float UG01GeometryFunctionLibrary::CalcDistancePointAndEdge(const FVector InPointPos, const FVector InEdge0Pos, const FVector InEdge1Pos) {
    return 0.0f;
}

void UG01GeometryFunctionLibrary::AGOutLineCulling(const TArray<FVector>& InVertexArray, const TArray<FAGEdgeInfo>& InEdgeInfoArray, const FVector& InAddPoint, const float InDistanceThreshhold, TArray<FVector>& InPointArray) {
}


