#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "G01DebugMenuSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuSubWindow -FallbackName=G01DebugMenuSubWindow
#include "G01DebugLevelTransitionData.h"
#include "G01DebugLevelTransitionSubWindow.generated.h"

class UDataTable;
class UTexture;

UCLASS(Blueprintable)
class RS2RE_API UG01DebugLevelTransitionSubWindow : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* texture_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* table_;
    
public:
    UG01DebugLevelTransitionSubWindow();

    UFUNCTION(BlueprintCallable)
    void UnLoadTexture();
    
    UFUNCTION(BlueprintCallable)
    void RenderTexture();
    
    UFUNCTION(BlueprintCallable)
    void ParseToLocation(const FString& InStr, FName& OutLevelID, FName& OutRoomID, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    void LoadTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    TArray<FG01DebugLevelTransitionData> GetFilteredData(FText InFilter);
    
    UFUNCTION(BlueprintCallable)
    FText CopyLocationToClipBoard(FName InLevelID, FName InRoomId, FVector InLocation);
    
};

