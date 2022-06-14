#include <stdio.h>
#include "ColorCode.h"
ColorPair colorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    //ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void colorCodeReferenceManuel(void)
{
    int majorColorCount,minorColorCount;
    //ColorPair colorPair;
    char colorPairNamesManuel[MAX_COLORPAIR_NAME_CHARS];
    printf("ColorPairCodeReferenceManuel\n");
    for(majorColorCount=0;majorColorCount<numberOfMajorColors;majorColorCount++)
    {
        for(minorColorCount=0;minorColorCount<numberOfMinorColors;minorColorCount++)
        {
            colorPair.majorColor = (enum MajorColor)majorColorCount;
            colorPair.minorColor = (enum MinorColor)minorColorCount;
            int pairnumberReference = GetPairNumberFromColor(&colorPair);
            ColorPairToString(&colorPair, colorPairNamesManuel);
            printf(" %s\t%d\n", colorPairNamesManuel,pairnumberReference );
        }
    }
}
