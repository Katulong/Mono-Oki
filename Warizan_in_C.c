#include<stdio.h>

int x = 3120345;

int z = 15;

int main()
{
    printf("%dってぇ、数があるんですけど...\n", x);
    printf("これってぇ、%dで割れますか？\n",z);
    printf("\n");
    printf("お答えします！%dを%dで割ることは...", x,z);

    int y = x % z;
    if (y == 0) {
        printf("できます！\n");
        printf("割ったときの商は%dですね！\n", x / z);
    }
    else {
        printf("できません！\n");
        printf("%dを%dで割ろうとすると、商は%d、余りは%dになります！\n", x, z,x / z, x % z);
    }
    
    printf("\n\nそれでは、おやすみなさい。良い夜を。");
    return 0;
}
