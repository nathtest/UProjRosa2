#include "AutoSpawnNavLinkNavMesh.h"

AAutoSpawnNavLinkNavMesh::AAutoSpawnNavLinkNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MEdgeDivisor = 2.00f;
    this->MCheckHeight = 500.00f;
    this->MNotSetLinkHeight = 80.00f;
    this->MCanJumpHeight = 0.00f;
    this->MSlantDegree = 30.00f;
    this->MRegenerateNavLink = false;
    this->MBpNavLinkClass = NULL;
}


