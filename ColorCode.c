#include <stdio.h>
#include <assert.h>
#include "ColorCode.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void colorCodeReferenceManuel(void)
{
    int majorColorCount,minorColorCount;
    ColorPair colorpairreference;
    char colorPairNamesManuel[MAX_COLORPAIR_NAME_CHARS];
    printf("ColorPairCodeReferenceManuel\n");
    for(majorColorCount=0;majorColorCount<numberOfMajorColors;majorColorCount++)
    {
        for(minorColorCount=0;minorColorCount<numberOfMinorColors;minorColorCount++)
        {
            colorpairreference.majorColor = (MajorColor)majorColorCount;
            colorpairreference.minorColor = (MinorColor)minorColorCount;
            int pairnumberReference = GetPairNumberFromColor(&colorpairreference);
            ColorPairToString(&colorpairreference, colorPairNamesManuel);
            printf(" %s\t%d\n", colorPairNamesManuel,pairnumberReference );

        }
    }
}
