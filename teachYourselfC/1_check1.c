/*自分の体重を入力すると月面での実行体重を計算する
月面の重力は地球の17%*/
#include <stdio.h>

int onTheMoon(double weight);

int main(void)
{
    double originalWeight, moonWeight;

    printf("体重を小数点付きで入力: ");
    scanf("%lf", &originalWeight);
    moonWeight = onTheMoon(originalWeight);
    printf("%.1fkgは月では%.1fkg\n", originalWeight, moonWeight);
    return 0;
}

int onTheMoon(double weight)
{
    double rate;
    rate = 0.17;
    return weight*rate;
}