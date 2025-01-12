#include "G01RichTextWidgetSettings.h"
#include "G01RichTextElemButton.h"
#include "G01RichTextElemImage.h"

UG01RichTextWidgetSettings::UG01RichTextWidgetSettings() {
    this->ElemClass_Button = UG01RichTextElemButton::StaticClass();
    this->Tag_ButtonPrefix = TEXT("<btn=");
    this->Tag_ButtonSuffix = TEXT(">");
    this->Res_ButtonTable = NULL;
    this->ElemClass_Image = UG01RichTextElemImage::StaticClass();
    this->Tag_ImagePrefix = TEXT("<img=");
    this->Tag_ImageSuffix = TEXT(">");
    this->Res_ImageTable = NULL;
}


