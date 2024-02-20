#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101][101];
    for(int i=1; i<=3; i++){
        for(int j=1; j<=4; j++){
            cin >> a[i][j];
        }
    }
    for(int i = -100; i<=100; i++){
        for(int j = -100; j<=100; j++){
            for(int k = -100; k<=100; k++){
                if(a[1][1]*i + a[1][2]*j + a[1][3]*k == a[1][4] && a[2][1]*i + a[2][2]*j +a[2][3]*k == a[2][4] && a[3][1]*i + a[3][2]*j + a[3][3]*k == a[3][4]){
                    printf("X = %d \n", i);
                    printf("Y = %d \n", j);
                    printf("Z = %d \n", k);
                }
            }
        }
    }
}