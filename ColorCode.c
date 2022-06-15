#include <stdio.h>
#include "ColorCode.h"

void ColorCode_ColorPairToString(const ColorPair_t* colorPair_t, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair_t->majorColor_e],
        MinorColorNames[colorPair_t->minorColor_e]);
}

ColorPair_t ColorCode_GetColorFromPairNumber(int pairNumber) {
    ColorPair_t colorPair_t;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair_t.majorColor_e = 
        (MajorColor_t)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair_t.minorColor_e =
        (MinorColor_t)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair_t;
}

int ColorCode_GetPairNumberFromColor(const ColorPair_t* colorPair_t) {
    return colorPair_t->majorColor_e * numberOfMinorColors +
            colorPair_t->minorColor_e + 1;
}

void ColorCode_PrintReferenceManuel(void)
{
    int majorColorCount,minorColorCount;
    ColorPair_t colorpairreference_t;
    char colorPairNamesManuel[MAX_COLORPAIR_NAME_CHARS];
    printf("ColorPairCodeReferenceManuel\n");
    for(majorColorCount=0;majorColorCount<numberOfMajorColors;majorColorCount++)
    {
        for(minorColorCount=0;minorColorCount<numberOfMinorColors;minorColorCount++)
        {
            colorpairreference_t.majorColor_e = (MajorColor_t)majorColorCount;
            colorpairreference_t.minorColor_e = (MinorColor_t)minorColorCount;
            int pairnumberReference = ColorCode_GetPairNumberFromColor(&colorpairreference_t);
            ColorCode_ColorPairToString(&colorpairreference_t, colorPairNamesManuel);
            printf(" %s\t%d\n", colorPairNamesManuel,pairnumberReference );
        }
    }
}
