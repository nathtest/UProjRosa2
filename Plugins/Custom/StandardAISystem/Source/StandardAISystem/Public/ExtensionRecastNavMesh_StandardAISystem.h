#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "NavMesh/RecastNavMesh.h"
#include "ExtensionRecastNavMesh_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API AExtensionRecastNavMesh_StandardAISystem : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AExtensionRecastNavMesh_StandardAISystem(const FObjectInitializer& ObjectInitializer);

};

