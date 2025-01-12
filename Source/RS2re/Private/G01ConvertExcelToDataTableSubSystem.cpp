#include "G01ConvertExcelToDataTableSubSystem.h"

UG01ConvertExcelToDataTableSubSystem::UG01ConvertExcelToDataTableSubSystem() {
}

void UG01ConvertExcelToDataTableSubSystem::ReloadDataTable() {
}

void UG01ConvertExcelToDataTableSubSystem::GetTataTableAllRow(const FName& InTableName, TArray<FName>& OutRowList) {
}

int32 UG01ConvertExcelToDataTableSubSystem::GetInt(const FName& InTableName, const FName& InRow, const FName& InTag) {
    return 0;
}

FString UG01ConvertExcelToDataTableSubSystem::GetFString(const FName& InTableName, const FName& InRow, const FName& InTag) {
    return TEXT("");
}

FName UG01ConvertExcelToDataTableSubSystem::GetFName(const FName& InTableName, const FName& InRow, const FName& InTag) {
    return NAME_None;
}

float UG01ConvertExcelToDataTableSubSystem::GetFloat(const FName& InTableName, const FName& InRow, const FName& InTag) {
    return 0.0f;
}

void UG01ConvertExcelToDataTableSubSystem::GetDataTable(const FName& InTableName, FG01ConvertExcelDataStruct& OutDataTable) {
}

bool UG01ConvertExcelToDataTableSubSystem::GetBool(const FName& InTableName, const FName& InRow, const FName& InTag) {
    return false;
}

void UG01ConvertExcelToDataTableSubSystem::GetArrayInt(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<int32>& OutArray) {
}

void UG01ConvertExcelToDataTableSubSystem::GetArrayFString(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<FString>& OutArray) {
}

void UG01ConvertExcelToDataTableSubSystem::GetArrayFName(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<FName>& OutArray) {
}

void UG01ConvertExcelToDataTableSubSystem::GetArrayFloat(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<float>& OutArray) {
}

void UG01ConvertExcelToDataTableSubSystem::GetArrayBool(const FName& InTableName, const FName& InRow, const FName& InTag, TArray<bool>& OutArray) {
}

void UG01ConvertExcelToDataTableSubSystem::GetAllDataTable(TArray<FG01ConvertExcelDataStruct>& OutList) {
}

bool UG01ConvertExcelToDataTableSubSystem::ExistRow(const FName& InTableName, const FName& InRow) {
    return false;
}


