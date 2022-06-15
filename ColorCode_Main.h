typedef enum
{
   WHITE = 0,
   RED,
   BLACK, 
   YELLOW,
   VIOLET
 }MajorColor_t;

typedef enum
{
   BLUE= 0,
   ORANGE,
   GREEN,
   BROWN,
   SLATE
}MinorColor_t;

typedef struct {
    MajorColor_t majorColor_e;
    MinorColor_t minorColor_e;
} ColorPair_t;

extern ColorPair_t colorpair_t;
extern MajorColor_t majorcolor_e;
extern MinorColor_t minorcolor_e;
extern const int MAX_COLORPAIR_NAME_CHARS;

void ColorCodeMain_TestNumberToPair(int pairNumber,MajorColor_t expectedMajor_e,MinorColor_t expectedMinor_e);
void ColorCodeMain_TestPairToNumber(MajorColor_t major_e,MinorColor_t minor_e,int expectedPairNumber);
void ColorCode_PrintReferenceManuel(void);
void ColorCode_ColorPairToString(const ColorPair_t* colorPair_t, char* buffer);
int ColorCode_GetPairNumberFromColor(const ColorPair_t* colorPair_t);
ColorPair_t ColorCode_GetColorFromPairNumber(int pairNumber);
