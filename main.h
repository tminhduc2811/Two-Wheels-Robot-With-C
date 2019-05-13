#include <stdio.h>

typedef struct SelfPosition
{
    double x;
    double y;
    double w_left;
    double w_right;
    double R = 1;
    double L = 2;
    double theta;
} SelfPosition;

void SelfPositionUpdateParams(SelfPosition *selfPos, double w_left, double w_right, double sampleTime);
void OverWritePosition(SelfPosition *selfPos, double x, double y);

extern SelfPosition selfPosition;