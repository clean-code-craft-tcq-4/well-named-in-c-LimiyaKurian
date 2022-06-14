typedef enum
{
   WHITE =0, 
   RED,
   BLACK, 
   YELLOW,
   VIOLET
 }MajorColor;
 
typedef enum
{
   BLUE=0, 
   ORANGE,
   GREEN, 
   BROWN,
   SLATE
} MinorColor;

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
	
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const int MAX_COLORPAIR_NAME_CHARS = 16;

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern ColorPair colorpairExtern;
