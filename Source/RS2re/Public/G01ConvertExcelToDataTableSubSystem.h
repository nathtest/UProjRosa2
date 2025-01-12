#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01ConvertExcelDataStruct.h"
#include "G01ConvertExcelToDataTableSubSystem.generated.h"

UCLASS(Blueprintable)
class UG01ConvertExcelToDataTableSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UG01ConvertExcelToDataTableSubSystem();

    UFUNCTION(BlueprintCallable)
    void ReloadDataTable();
    
    UFUNCTION(BlueprintCallable)
    void GetTataTableAllRow(const FName& InTableName, TArray<FName>& OutRowList);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInt(const FName& InTableName, const FName& InRow, const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    FString GetFString(const FName& InTableName, const FName& InRow, const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    FName GetFName(const FName& InTableName, const FName& InRow, const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    float GetFloat(const FName& InTableName, const FName& InRow, const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    void GetDataTable(const FName& InTableName, FG01ConvertExcelDataStruct& OutDataTable);
    
    UFUNCTION(BlueprintCallable)
    bool GetBool(const FName& InTableName, const FName& InRow, const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    void GetArrayInt(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<int32>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetArrayFString(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<FString>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetArrayFName(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<FName>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetArrayFloat(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<float>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetArrayBool(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<bool>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void GetAllDataTable(TArray<FG01ConvertExcelDataStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    bool ExistRow(const FName& InTableName, const FName& InRow);
    
};

