#include <stdio.h>
#include <assert.h>
#include "ColorCode_Main.h"

int main() {
    
    ColorCode_PrintReferenceManuel();
    ColorCodeMain_TestNumberToPair(4, WHITE, BROWN);
    ColorCodeMain_TestNumberToPair(5, WHITE, SLATE);

    ColorCodeMain_TestPairToNumber(BLACK, ORANGE, 12);
    ColorCodeMain_TestPairToNumber(VIOLET, SLATE, 25);

    return 0;
}

void ColorCodeMain_TestNumberToPair(int pairNumber,
    MajorColor_t expectedMajor_e,
    MinorColor_t expectedMinor_e)
{
    ColorPair_t colorPair_t = ColorCode_GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorCode_ColorPairToString(&colorPair_t, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair_t.majorColor_e == expectedMajor_e);
    assert(colorPair_t.minorColor_e == expectedMinor_e);
}

void ColorCodeMain_TestPairToNumber(
    MajorColor_t major_e,
    MinorColor_t minor_e,
    int expectedPairNumber)
{
    ColorPair_t colorPair_t;
    colorPair_t.majorColor_e = major_e;
    colorPair_t.minorColor_e = minor_e;
    int pairNumber = ColorCode_GetPairNumberFromColor(&colorPair_t);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
