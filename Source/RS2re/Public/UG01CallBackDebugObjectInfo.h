#pragma once
#include "CoreMinimal.h"
#include "UG01CallBackDebugObjectInfo.generated.h"

class UObject;

/*/USTRUCT(BlueprintType)
struct RS2RE_API FUG01CallBackDebugObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjectList;
    
    FUG01CallBackDebugObjectInfo();
};*/

USTRUCT(BlueprintType)
struct RS2RE_API FUG01CallBackDebugObjectInfo {
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
        TArray<UObject*> ObjectList;

    FUG01CallBackDebugObjectInfo();

    // Equality operator
    bool operator==(const FUG01CallBackDebugObjectInfo& Other) const {
        // Compare ObjectList based on the number of elements and individual element comparison
        return ObjectList == Other.ObjectList;  // Will check if both arrays are the same
    }

    // Hash function
    friend FORCEINLINE uint32 GetTypeHash(const FUG01CallBackDebugObjectInfo& Key) {
        uint32 Hash = 0;
        // Combine hashes of each object in the ObjectList
        for (UObject* Obj : Key.ObjectList) {
            Hash = HashCombine(Hash, GetTypeHash(Obj));  // Combine each object's hash
        }
        return Hash;
    }
};
