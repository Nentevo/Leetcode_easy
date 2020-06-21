
//一开始的想法是输入数字逆序，随后输入至数组，再由数组a[i]*10+a[i+1]恢复数据。实际可以一步到位
//同时没有考虑溢出问题

#include <stdio.h>

int reverse(int x);

int main()
{
	int n, total;
	scanf ("%d", &n);
	total = reverse(n);
	printf ("%d", total);
	return 0;
}

int reverse(int x)
{
    int max = 0x7fffffff;//2^31-1
	  int min = 0x80000000;//-2^31
    long num = 0;//可以规避溢出问题
    while (x != 0) 
	  {
        num = num * 10 + x % 10;//一步到位，且无需判断正负
        x = x / 10;
    }
  	if(num > max || num < min)
	 	  return 0;
	  else
	  	return num;
}
