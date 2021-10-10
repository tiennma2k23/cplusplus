#include<stdio.h>
#include<conio.h>

void xuLy(int n, int X[], int T[], int i)
{
    int j;
    for(j = X[i - 1]; j <= (n - T[i - 1]); j++)  // X[i-1] <= X[i] <= n - T[i-1]
    {
        X[i] = j;
        T[i] = T[i - 1] + j;

        if(T[i] == n&&i==6)   // nếu T[i] = n
        {
            int temp;
            for(temp = 1;  temp <= i; temp++)   // in ra từ X[1] tới X[i]
            {
                printf("%d  ", X[temp]);
            }
            printf("\n");
        }

        else
        {
            xuLy(n, X, T, i + 1);
        }
    }
}

int main()
{
    int n;
    printf("Nhap vao n : ");
    scanf("%d", &n);

    int X[n + 1];  // mảng X có N + 1 phần tử
    int T[n + 1];

    X[0] = 1;
    T[0] = 0;

    xuLy(n, X, T, 1);  // mảng nghiệm tính từ i = 1

    getch();
    return 0;
}
