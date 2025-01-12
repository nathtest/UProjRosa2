#include "RigUnit_CustomCCDIKPerItem.h"

FRigUnit_CustomCCDIKPerItem::FRigUnit_CustomCCDIKPerItem() {
    this->Precision = 0.00f;
    this->Weight = 0.00f;
    this->MaxIterations = 0;
    this->bStartFromTail = false;
    this->BaseRotationLimit = 0.00f;
    this->bPropagateToChildren = false;
}

