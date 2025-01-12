#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01MeshFunctionLibrary.generated.h"

class UInstancedStaticMeshComponent;
class UPrimitiveComponent;
class UProceduralMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01MeshFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MeshFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetStaticMeshOverrideMinLod(UStaticMeshComponent* InSkeletalMesh, bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetStaticMeshMinLodModel(UStaticMeshComponent* InSkeletalMesh, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrimitiveComponentCullDistanceVolume(UPrimitiveComponent* InPrimitiveComponent, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetPositiveBoundsExtension(UStaticMesh* InMesh, FVector InBounds);
    
    UFUNCTION(BlueprintCallable)
    static void SetNegativeBoundsExtension(UStaticMesh* InMesh, FVector InBounds);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsEditorOnly(UPrimitiveComponent* InPrimitiveComponent, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetFarShadow(UPrimitiveComponent* InPrimitiveComponent, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FLinearColor> GetVertexColorFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32 InLODIndex, int32 InSectionIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStaticMeshMaterialIndex(UStaticMesh* InMesh, int32 LODIndex, int32 SetcionIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetProceduralMeshComponentColorUV1(UProceduralMeshComponent* InProcMeshComp, int32 SectionIndex, TArray<FLinearColor>& Colors, TArray<FVector2D>& UV1s);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetPositiveBoundsExtension(UStaticMesh* InMesh);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNegativeBoundsExtension(UStaticMesh* InMesh);
    
    UFUNCTION(BlueprintCallable)
    static float GetInstancedStaticMeshCustomDataValue(UInstancedStaticMeshComponent* InComponent, int32 InstanceIndex, int32 CustomDataIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> GetCustomPrimitiveDataArray(UPrimitiveComponent* InPrimitiveComponen);
    
    UFUNCTION(BlueprintCallable)
    static void GetCollisionProfileNameByStaticMesh(UStaticMesh* InStaticMesh, FName& OutCollisionProfileName);
    
    UFUNCTION(BlueprintCallable)
    static void CreateStaticMesh(UProceduralMeshComponent* InProcMeshComp, const FString& InOutputAssetPath);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateExtendedBounds(UStaticMesh* InMesh);
    
};

