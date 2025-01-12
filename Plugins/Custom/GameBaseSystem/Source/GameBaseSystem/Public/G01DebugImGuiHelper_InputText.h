#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01DebugImGuiHelper_InputText.generated.h"

class UG01DebugBPImGui;

UCLASS(Blueprintable)
class UG01DebugImGuiHelper_InputText : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> InputBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> Keywords;
    
public:
    UG01DebugImGuiHelper_InputText();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetBufferSize(int32 InBufferSize);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool InputTextMultiline(UG01DebugBPImGui* InImGui, const FText& InText, FText& OutText);
    
    UFUNCTION(BlueprintCallable)
    bool InputText(UG01DebugBPImGui* InImGui, const FText& InText, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetText() const;
    
    UFUNCTION(BlueprintCallable)
    bool Filter(const FString& InStr);
    
};

