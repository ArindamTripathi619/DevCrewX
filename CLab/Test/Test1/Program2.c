#include <stdio.h>

int main() {
    printf("Enter the x and y coordinates : ");
    float x,y;
    scanf("%f %f",&x,&y);
    if(x==0 || y==0) {
        if(x==0) {
            printf("Point lies on y axis.\n");
        }
        else {
            printf("Point lies on x axis.\n");
        }
    }
    else if(x>0 && y>0) {
        printf("Point lies in first quadrant.\n");
    }
    else if(x<0 && y>0) {
        printf("Point lies in second quadrant.\n");
    }
    else if(x<0 && y<0) {
        printf("Point lies in third quadrant.\n");
    }
    else {
        printf("Point lies in fourth quadrant.\n");
    }

    return 0;
}