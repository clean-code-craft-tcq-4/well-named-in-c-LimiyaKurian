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

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

extern ColorPair colorpairExtern;
extern MajorColor majorcolor;
extern MinorColor minorcolor;


ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void colorCodeReferenceManuel(void);

