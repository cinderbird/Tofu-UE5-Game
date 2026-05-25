// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausGameDate.generated.h"

/*
 * FKausGameDate
 *
 * 게임 내 날짜를 표현하는 구조체. (연, 월, 일)
 *
 * 단순한 POD 구조체로, 캘린더 시스템이 날짜 계산을 담당한다.
 * 사전식 비교 연산자와 문자열 변환 메서드 제공.
*/

USTRUCT(BlueprintType)
struct KAUS_API FKausGameDate
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar",
        meta = (ClampMin = 1))
    int32 Year = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar",
        meta = (ClampMin = 1))
    int32 Month = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar",
        meta = (ClampMin = 1))
    int32 Day = 1;

    FKausGameDate() = default;

    FKausGameDate(int32 InYear, int32 InMonth, int32 InDay)
        : Year(InYear), Month(InMonth), Day(InDay) {}

    bool operator==(const FKausGameDate& Other) const
    {
        return Year == Other.Year && Month == Other.Month && Day == Other.Day;
    }

    bool operator!=(const FKausGameDate& Other) const { return !(*this == Other); }

    /** 사전식 비교. 캘린더 종류 무관. */
    bool operator<(const FKausGameDate& Other) const
    {
        if (Year != Other.Year) return Year < Other.Year;
        if (Month != Other.Month) return Month < Other.Month;
        return Day < Other.Day;
    }

    bool operator<=(const FKausGameDate& Other) const { return *this < Other || *this == Other; }
    bool operator>(const FKausGameDate& Other) const { return Other < *this; }
    bool operator>=(const FKausGameDate& Other) const { return !(*this < Other); }

    /** "Y0001-M03-D15" 형식 */
    FString ToString() const
    {
        return FString::Printf(TEXT("Y%04d-M%02d-D%02d"), Year, Month, Day);
    }

    /** TMap/TSet 키로 사용 가능 */
    friend uint32 GetTypeHash(const FKausGameDate& InDate)
    {
        const uint32 H1 = ::GetTypeHash(InDate.Year);
        const uint32 H2 = ::GetTypeHash(InDate.Month);
        const uint32 H3 = ::GetTypeHash(InDate.Day);
        return HashCombine(HashCombine(H1, H2), H3);
    }
};
