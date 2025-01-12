#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CameraFuncLib.generated.h"

class UCameraComponent;
class UCineCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UCameraFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool Func_CopySpringArmParams(USpringArmComponent* InSource, USpringArmComponent* InDest, bool InIsCopyTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool Func_CopyCineCameraParams(UCameraComponent* InSource, UCineCameraComponent* InDest, bool InIsCopyTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool Func_CopyCameraParams(UCameraComponent* InSource, UCameraComponent* InDest, bool InIsCopyTransform);
    
};

