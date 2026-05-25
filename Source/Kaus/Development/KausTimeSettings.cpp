// Copyright Project Kaus. All Rights Reserved.

#include "KausTimeSettings.h"

#if WITH_EDITOR

#define LOCTEXT_NAMESPACE "KausTimeSettings"

FText UKausTimeSettings::GetSectionText() const
{
    return LOCTEXT("SectionText", "Time");
}

FText UKausTimeSettings::GetSectionDescription() const
{
    return LOCTEXT("SectionDescription",
        "Kaus 시간 시스템(Calendar / DayCycle)에서 사용할 기본 자산을 지정합니다.");
}

#undef LOCTEXT_NAMESPACE

#endif
