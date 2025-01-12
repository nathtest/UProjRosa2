#pragma once
#include "CoreMinimal.h"
#include "G01VAIkTargetSocket.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FG01VAIkTargetSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    RS2RE_API FG01VAIkTargetSocket();
};

