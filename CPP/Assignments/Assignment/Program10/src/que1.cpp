#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
} Point;

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1 = {0, 0}, p2 = {3, 4};

    printf("Distance between p1 and p2: %.2f\n", distance(p1, p2));

    return 0;
}
