#include <stdio.h>
#include <assert.h>
#include <ColorCode.h>

int main() {
    
    ColorCode_ReferenceManuel();
	
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}

void ColorCode_ReferenceManuel()
{
    int majorColorCount,minorColorCount;
    ColorPair colorpairreference;
    char colorPairNamesManuel[MAX_COLORPAIR_NAME_CHARS];
	
    for(majorColorCount=0;majorColorCount<numberOfMajorColors;majorColorCount++)
    {
        for(minorColorCount=0;minorColorCount<numberOfMinorColors;minorColorCount++)
        {
            colorpairreference.majorColor = (enum MajorColor)majorColorCount;
            colorpairreference.minorColor = (enum MinorColor)minorColorCount;
            int pairnumberReference = GetPairNumberFromColor(&colorpairreference);
	    ColorPairToString(&colorpairreference, colorPairNamesManuel);
	    printf("ColorPairCodeReferenceManuel\n");
            printf(" %s\t%d\n", colorPairNamesManuel,pairnumberReference );

        }
    }
}
