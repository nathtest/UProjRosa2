#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DebugMenuPageBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=DebugMenuPageBase -FallbackName=DebugMenuPageBase
#include "ImGuiComboExecDelegateDelegate.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiComboExecDelegate__DelegateSignature -FallbackName=ImGuiComboExecDelegateDelegate
#include "ImGuiComboOptionStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiComboOptionStruct -FallbackName=ImGuiComboOptionStruct
#include "ImGuiInputBufferStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiInputBufferStruct -FallbackName=ImGuiInputBufferStruct
#include "ImGuiInputFloatExecDelegateDelegate.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiInputFloatExecDelegate__DelegateSignature -FallbackName=ImGuiInputFloatExecDelegateDelegate
#include "ImGuiInputFloatOptionStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiInputFloatOptionStruct -FallbackName=ImGuiInputFloatOptionStruct
#include "ImGuiInputIntExecDelegateDelegate.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiInputIntExecDelegate__DelegateSignature -FallbackName=ImGuiInputIntExecDelegateDelegate
#include "ImGuiInputIntOptionStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiInputIntOptionStruct -FallbackName=ImGuiInputIntOptionStruct
#include "ImGuiInputTextStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=ImGuiInputTextStruct -FallbackName=ImGuiInputTextStruct
#include "G01ArtsViewerFontCreateParam.h"
#include "G01ArtsViewerSimpleDelegateIntDelegate.h"
#include "G01DebugArtsViewerTabTableRow.h"
#include "G01DebugArtsViewerWindowSettings.h"
#include "G01DebugArtsViewer_ImGuiScrollBoxParam.h"
#include "G01SeqNotifyBattleDamageParam.h"
#include "Templates/SubclassOf.h"
#include "G01DebugArtsViewerMenu.generated.h"

class AActor;
class ASeqActorAnimControllerBinder;
class UAnimMontage;
class UDataTable;
class UG01DebugBPImGui;
class ULevelStreamingDynamic;
class UWorld;

UCLASS(Blueprintable)
class RS2RE_API UG01DebugArtsViewerMenu : public UDebugMenuPageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TabSettingTable;
    
public:
    UG01DebugArtsViewerMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void UnloadLevelInstance(ULevelStreamingDynamic* InStream);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActor(TSubclassOf<AActor> InClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCreateSettings(const FG01DebugArtsViewerWindowSettings& InSettings);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveImGuiTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveImGuiTabUpdate(UG01DebugBPImGui* InImGuiBP, const FName& InTabName, const FG01DebugArtsViewerTabTableRow& InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveDeinit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamagedBySeqNotifyController(ASeqActorAnimControllerBinder* InBinder, FG01SeqNotifyBattleDamageParam InParam);
    
    UFUNCTION(BlueprintCallable)
    float MontageSectionStartTime(UAnimMontage* InMontage, FName InSectionName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadLevelIsntance(const TSoftObjectPtr<UWorld>& InLevel, FVector InLocation, FRotator InRotation, const FString& InOptions, bool& OutResult, ULevelStreamingDynamic*& OutStream);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_TextToolTip(const FText& InMessage, FName InFontName);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_TextColored(const FText& InText, FLinearColor InColor, FName InFontName);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_Text(const FText& InText, FName InFontName);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_SplitH(const FString& InName, int32 InSplitNum, const FG01ArtsViewerSimpleDelegateInt& InDelegate, float InHeight);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_Separator();
    
    UFUNCTION(BlueprintCallable)
    void ImGui_ScrollBox(const FG01DebugArtsViewer_ImGuiScrollBoxParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_SameLine(int32 InPadding, int32 InOffsetLeft);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_LoopClipper(const FG01ArtsViewerSimpleDelegateInt& InImpl, const int32& InSize);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_LineSpace();
    
    UFUNCTION(BlueprintCallable)
    bool ImGui_IsItemActive();
    
    UFUNCTION(BlueprintCallable)
    bool ImGui_IsHovered();
    
    UFUNCTION(BlueprintCallable)
    void ImGui_InputText(const FImGuiInputTextStruct& InParam, UPARAM(Ref) FImGuiInputBufferStruct& InInputBuffer);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_InputInt(const FImGuiInputIntOptionStruct& InParam, int32 InValue, FImGuiInputIntExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_InputFloat(const FImGuiInputFloatOptionStruct& InParam, float InValue, FImGuiInputFloatExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_Combo(const FImGuiComboOptionStruct& InParam, int32 InSelectedIndex, FImGuiComboExecDelegate OnValueChanged);
    
    UFUNCTION(BlueprintCallable)
    void ImGui_CheckBox(const FString& InName, bool InIsActive, bool& OutIsActive, bool& OutIsPressed);
    
    UFUNCTION(BlueprintCallable)
    bool ImGui_Button(const FString& InName, const FVector2D& InSize);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01DebugBPImGui* GetImGuiBP() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01DebugArtsViewerWindowSettings GetCreateSettings() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetAllActorOfClass(TSubclassOf<AActor> InClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    void CreateFont(const FG01ArtsViewerFontCreateParam& InParam);
    
};

