/*
09-排序1 排序（25 分）
给定N个（长整型范围内的）整数，要求输出从小到大排序后的结果。
本题旨在测试各种不同的排序算法在各种数据情况下的表现。各组测试数据特点如下：
数据1：只有1个元素；
数据2：11个不相同的整数，测试基本正确性；
数据3：103个随机整数；
数据4：104个随机整数；
数据5：105个随机整数；
数据6：105个顺序整数；
数据7：105个逆序整数；
数据8：105个基本有序的整数；
数据9：105个随机正整数，每个数字不超过1000。
输入格式:

输入第一行给出正整数N（≤10
?5
?? ），随后一行给出N个（长整型范围内的）整数，其间以空格分隔。
输出格式:

在一行中输出从小到大排序后的结果，数字间以1个空格分隔，行末不得有多余空格。
输入样例:

11
4 981 10 -17 0 -20 29 50 8 43 -5
输出样例:

-20 -17 -5 0 4 8 10 29 43 50 981
*/
#include <stdio.h>



int main(){
	int num;
	int count = 0;
	scanf("%d",&num);
	int nums[num];
	while(num--){
		scanf("%d",&nums[count]);
		count++;
	}
/*冒泡排序,三个运行超时	
	int temp;
	int flag = 0;
	for(int i=count-1;i>=0;i--) {

		for(int j=0;j<i;j++) {
			if(nums[j]>nums[j+1]){
				temp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
		
	}
*/
	int temp;
	int i,j;
	for(i = 1;i<count;i++) {
		temp=nums[i];
		for(j=i;temp<nums[j-1]&&j>0;j--) {
			nums[j]=nums[j-1]; 
		}
		nums[j]=temp;
	} 
	for(int i=0;i<count;i++) {
		if(i==count-1){
			printf("%d",nums[i]);
		}
		else{
			printf("%d ",nums[i]);
		}
	}
	return 0;
	
}
