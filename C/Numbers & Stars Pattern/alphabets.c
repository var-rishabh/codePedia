#include <stdio.h>
#include <math.h>

// to print letter A

void main() {
    int height = 5, width = 9;
    int n = width / 2, i, j;
    for (i=0; i<height; i++) {
        for (j=0; j<=width; j++) {
            if (j==n || j==(width - n) || (i == height / 2 && j > n && j < (width - n))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        n--;
    }
}


// ============================================================================
// ============================================================================


// to print letter B

void main() {
    int height=7, width=7;
    int i, j, half = (height / 2);
    for (i=0; i<height; i++) {
        printf("*");
        for (j=0; j<width; j++) {
            if ((i == 0 || i == height - 1 || i == half) && j < (width - 2)) {
                printf("*");
            }
            else if (j == (width - 2) && !(i == 0 || i == height - 1 || i == half)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter C

void main() {
    int height = 5; 
    int i, j;
    for (i=0; i<height; i++) {
        printf("*");
        for (j=0; j<(height-1); j++) {
            if (i==0 || i==height-1)
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter D

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                printf("*");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter E

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height-1) || (i == height/2 && j <= height/2))
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter F

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0) || (i == height/2 && j <= height/2))
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter G

void main() {
    int height=7, width=9;
    int i, j;
    width--;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1)
                && (j == 0 || j == width - 1))
                printf(" ");
            else if (j == 0)
                printf("*");
            else if (i == 0 && j <= height)
                printf("*");
            else if (i == height/2 && j > height/2)
                printf("*");
            else if (i > height/2 && j == width-1)
                printf("*");
            else if (i == height-1 && j < width)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter H

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((j == height - 1)
                || (i == height / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter I

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1)
                printf("*");
            else if (j == height / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter J

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == height-1 && (j > 0 && j < height-1))
                printf("*");
            else if ((j == height-1 && i!=height-1) || (i > (height/2)-1 && j==0 && i!=height - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter K

void main() {
    int height=7;
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j <= half; j++) {
            if (j == abs(dummy))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        dummy--;
    }
}


// ============================================================================
// ============================================================================


// to print letter L

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j <= height; j++) {
            if (i == height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
} 


// ============================================================================
// ============================================================================


// to print letter M

void main() {
    int height=7;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("*");
            else if (j == counter || j == height - counter - 1)
                printf("*");
            else
                printf(" ");
        }
        if (counter == height / 2) {
            counter = -99999;
        }
        else
            counter++;
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter N

void main() {
    int height=7;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("*");
            else if (j == counter)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter O

void main() {
    int height=7;
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == width - abs(space) || j == abs(space))
                printf("*");
            else if ((i == 0 || i == height-1) && j>abs(space) && j < width-abs(space))
                printf("*");
            else
                printf(" ");
        }
        if (space != 0 && i < height / 2) {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter P

void main() {
    int height=7;
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2) && j < height-1)
                printf("*");
            else if (i < height/2 && j == height-1 && i != 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter Q

void main() {
    int height=7;
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == width - abs(space) || j == abs(space))
                printf("*");
            else if ((i == 0 || i == height-1) && j>abs(space) && j < width-abs(space))
                printf("*");
            else
                printf(" ");
        }
        if (space != 0 && i < height / 2) {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        printf("\n");
    }
    int g, r, d = height;
    for (g = 0; g < height / 2; g++) {
        for (r = 0; r <= d; r++) {
            if (r == d)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        d++;
    }
}


// ============================================================================
// ============================================================================


// to print letter R

void main()
{
    int height = 7, width = 9;
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == half) && j < (width - 2))
                printf("*");
            else if (j == (width - 2) && !(i == 0 || i == half))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter S

void main() {
    int height = 7;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height/2 || i == height-1))
                printf("*");
            else if (i < height/2 && j == 0)
                printf("*");
            else if (i > height/2 && j == height-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter T

void main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
                printf("*");
            else if (j == height / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter U

void main() {
    int height = 7;
    int i, j;
    for (i = 0; i < height; i++) {
        if (i != 0 && i != height - 1)
            printf("*");
        else
            printf(" ");
        for (j = 0; j < height; j++) {
            if (((i == height - 1) && j >= 0 && j < height - 1))
                printf("*");
            else if (j == height - 1 && i != 0 && i != height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter V

void main() {
    int height = 5, width = 9;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == counter || j == width-counter-1)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter W

void main() {
    int height = 8;
    int i, j, counter = height / 2;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("*");
            else if ((i >= height / 2) && (j==counter || j==height-counter-1))
                printf("*");
            else
                printf(" ");
        }
        if (i >= height / 2) {
            counter++;
        }
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter X

void main() {
    int height = 8;
    int i, j, counter = 0;
    for (i = 0; i <= height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter || j == height - counter)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}


// ============================================================================
// ============================================================================


// to print letter Y

void main() {
    int height = 8;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter || j == height-counter && i <= height/2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if (i < height / 2)
            counter++;
    }
}


// ============================================================================
// ============================================================================


// to print letter Z

void main() {
    int height = 8;
    int i, j, counter = height - 1;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i==0 || i==height - 1 || j==counter)
                printf("*");
            else
                printf(" ");
        }
        counter--;
        printf("\n");
    }
}


// ============================================================================
// ============================================================================