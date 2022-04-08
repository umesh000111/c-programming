#include<stdio.h>

// Addition , multiplication , division ,substraction of two intiger


//Function : addition 
//input : two int
//output : int
//code by : umesh_c
void Addition(int i_NO1 ,int i_NO2 )
{
	if(i_NO1 < 0 || i_NO2 < 0)
	{
		printf("Sorry: Please enter the valid number\n");
		return;
	}
	
	int i_ret = 0;
	
	i_ret = i_NO1 + i_NO2;
	printf("Addition is succecfully: %d\n",i_ret);
	printf("================================================\n");

	return;	

}
 



//function :substraction function
//input : two int
//output : int
//code_by : umesh_c
void sub(int i_NO1 , int i_NO2)
{
	int i_ret = 0;
	if(i_NO1 < 0 || i_NO2 < 0)
	{
		printf("Sorry: Please enter the valid number\n");
		return;
	}

	else if(i_NO1 > i_NO2)
	{
		printf("inside first block\n");
		i_ret = i_NO1 - i_NO2;
		printf("subtraction is %d\n",i_ret);
		
		return;
	}
	else if(i_NO1 < i_NO2 )
	{
		printf("inside second block\n");
		i_ret = i_NO2 - i_NO1;
		printf("subtraction is %d\n",i_ret);
		printf("================================================\n");
	
		return;

	}


}

//function :Multiplay function
//input : two int
//output : int
//code_by : umesh_c
void mult(int i_NO1 , int i_NO2)
{
	int i_ret = 0;
	if(i_NO1 < 0  || i_NO2 < 0)
	{
		printf("Sorry: Please enter the valid number\n");
		return;
	}
	i_ret = i_NO1 * i_NO2;
	printf("multiplication of two number is: %d\n",i_ret);
	printf("================================================\n");

	return;
}

//function : Division function
//input : two int
//output : int
//code_by : umesh_c
void Div(int i_NO1,int i_NO2)
{
	int i_ret = 0;
	if(i_NO1 < 0  || i_NO2 < 0)
	{
		printf("Sorry: Please enter the valid number\n");
		printf("================================================\n");
		return;
	}


}

//function : function

int main()
{
	int i_x = 0; 
	int i_y = 0;

	printf("================================================\n");
	printf("enter any two number: ");
	scanf("%d, %d", &i_x , &i_y);
	printf("================================================\n");
	

	//function calling
	Addition(i_x,i_y);
	sub(i_x,i_y);
	mult(i_x,i_y);
	return 0;
}