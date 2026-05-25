// Copyright Project Kaus. All Rights Reserved.

#include "KausDisplayClockSettings.h"

UKausDisplayClockSettings::UKausDisplayClockSettings()
{
    // CategoryName은 GetCategoryName()에서 반환 (UDeveloperSettings 패턴).
    // SectionName은 UCLASS(meta=DisplayName)으로 처리.
    // 기본값은 헤더의 멤버 초기화로 충분 — 별도 설정 없음.
}
