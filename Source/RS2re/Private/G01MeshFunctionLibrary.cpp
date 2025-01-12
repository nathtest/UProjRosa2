#include "G01MeshFunctionLibrary.h"

UG01MeshFunctionLibrary::UG01MeshFunctionLibrary() {
}

void UG01MeshFunctionLibrary::SetStaticMeshOverrideMinLod(UStaticMeshComponent* InSkeletalMesh, bool InFlag) {
}

void UG01MeshFunctionLibrary::SetStaticMeshMinLodModel(UStaticMeshComponent* InSkeletalMesh, int32 InIndex) {
}

void UG01MeshFunctionLibrary::SetPrimitiveComponentCullDistanceVolume(UPrimitiveComponent* InPrimitiveComponent, bool Flag) {
}

void UG01MeshFunctionLibrary::SetPositiveBoundsExtension(UStaticMesh* InMesh, FVector InBounds) {
}

void UG01MeshFunctionLibrary::SetNegativeBoundsExtension(UStaticMesh* InMesh, FVector InBounds) {
}

void UG01MeshFunctionLibrary::SetIsEditorOnly(UPrimitiveComponent* InPrimitiveComponent, bool Flag) {
}

void UG01MeshFunctionLibrary::SetFarShadow(UPrimitiveComponent* InPrimitiveComponent, bool Flag) {
}

TArray<FLinearColor> UG01MeshFunctionLibrary::GetVertexColorFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32 InLODIndex, int32 InSectionIndex) {
    return TArray<FLinearColor>();
}

int32 UG01MeshFunctionLibrary::GetStaticMeshMaterialIndex(UStaticMesh* InMesh, int32 LODIndex, int32 SetcionIndex) {
    return 0;
}

void UG01MeshFunctionLibrary::GetProceduralMeshComponentColorUV1(UProceduralMeshComponent* InProcMeshComp, int32 SectionIndex, TArray<FLinearColor>& Colors, TArray<FVector2D>& UV1s) {
}

FVector UG01MeshFunctionLibrary::GetPositiveBoundsExtension(UStaticMesh* InMesh) {
    return FVector{};
}

FVector UG01MeshFunctionLibrary::GetNegativeBoundsExtension(UStaticMesh* InMesh) {
    return FVector{};
}

float UG01MeshFunctionLibrary::GetInstancedStaticMeshCustomDataValue(UInstancedStaticMeshComponent* InComponent, int32 InstanceIndex, int32 CustomDataIndex) {
    return 0.0f;
}

TArray<float> UG01MeshFunctionLibrary::GetCustomPrimitiveDataArray(UPrimitiveComponent* InPrimitiveComponen) {
    return TArray<float>();
}

void UG01MeshFunctionLibrary::GetCollisionProfileNameByStaticMesh(UStaticMesh* InStaticMesh, FName& OutCollisionProfileName) {
}

void UG01MeshFunctionLibrary::CreateStaticMesh(UProceduralMeshComponent* InProcMeshComp, const FString& InOutputAssetPath) {
}

void UG01MeshFunctionLibrary::CalculateExtendedBounds(UStaticMesh* InMesh) {
}


