#include "SkeletalMeshMergeParams.h"

FSkeletalMeshMergeParams::FSkeletalMeshMergeParams() {
    this->MNumRemoveStripTopLOD = 0;
    this->MIsNeedsCpuAccess = false;
    this->MIsSkeletonBefore = false;
    this->MSkeleton = NULL;
}

