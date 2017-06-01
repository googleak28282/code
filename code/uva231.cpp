#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int Case = 1, LIS[100000];
    while (1) {
        int num;
        vector<int> height;

        scanf("%d", &num);
        if (num == -1) return 0;
        height.push_back(num);

        while (scanf("%d", &num) && num != -1)
            height.push_back(num);

        int Max = 0;
        for (int i = height.size() - 1; i >= 0; --i) {
            LIS[i] = 1;
            for (int j = height.size() - 1; j > i; --j)
                if (height[j] < height[i] && LIS[i] < LIS[j]+1)
                    LIS[i] = LIS[j]+1;
            if (LIS[i] > Max) Max = LIS[i];
        }
        if (Case != 1) putchar('\n');
        printf("Test #%d:\n", Case++);
        printf("  maximum possible interceptions: %d\n", Max);
    }
}
