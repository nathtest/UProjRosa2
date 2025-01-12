#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "Templates/SubclassOf.h"
#include "NavMesh/RecastNavMesh.h"
#include "AutoSpawnNavLinkNavMesh.generated.h"

class AAINavLinkProxyBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AAutoSpawnNavLinkNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MEdgeDivisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MCheckHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MNotSetLinkHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MCanJumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSlantDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MRegenerateNavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAINavLinkProxyBase> MBpNavLinkClass;
    
    AAutoSpawnNavLinkNavMesh(const FObjectInitializer& ObjectInitializer);

};

