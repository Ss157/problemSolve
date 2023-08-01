#include <stdio.h>
#include <math.h>
void ten_to_B(int C, int B)
{
	if (C != 0)
	{
		ten_to_B(C / B, B);
		printf("%d ", C % B);
	}
}

int main(void){
    int future_base, present_base, base_10 = 0, digit;
    scanf("%d %d", &future_base, &present_base);
    scanf("%d", &digit);

    int num;
    while(digit--){
        scanf("%d", &num);
        base_10 += num * pow(future_base, digit);
    }
    
    ten_to_B(base_10, present_base);
}