#include "RichTextWidgetSettings.h"
#include "RichTextElemDelay.h"
#include "RichTextElemFontColor.h"
#include "RichTextElemFontSize.h"
#include "RichTextElemFontStyle.h"
#include "RichTextElemText.h"

URichTextWidgetSettings::URichTextWidgetSettings() {
    this->ElemClass_Text = URichTextElemText::StaticClass();
    this->ElemClass_Delay = URichTextElemDelay::StaticClass();
    this->Tag_DelayPrefix = TEXT("<wait=");
    this->Tag_DelaySuffix = TEXT(">");
    this->ElemClass_Style = URichTextElemFontStyle::StaticClass();
    this->Tag_FontStyleBeginPrefix = TEXT("<style=");
    this->Tag_FontStyleBeginSuffix = TEXT(">");
    this->Tag_FontStyleEnd = TEXT("</style>");
    this->Res_FontStyleTable = NULL;
    this->ElemClass_Color = URichTextElemFontColor::StaticClass();
    this->Tag_FontColorBeginPrefix = TEXT("<color=");
    this->Tag_FontColorBeginSuffix = TEXT(">");
    this->Tag_FontColorEnd = TEXT("</color>");
    this->Res_FontColorTable = NULL;
    this->ElemClass_Size = URichTextElemFontSize::StaticClass();
    this->Tag_FontSizeBeginPrefix = TEXT("<size=");
    this->Tag_FontSizeBeginSuffix = TEXT(">");
    this->Tag_FontSizeEnd = TEXT("</size>");
}


