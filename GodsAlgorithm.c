#include <stdio.h>

void main(){
	int cube  [54] = 
	{
	 1,1,1,1,1,1,1,1,1,
	 2,2,2,2,2,2,2,2,2,
	 3,3,3,3,3,3,3,3,3,
	 4,4,4,4,4,4,4,4,4,
	 5,5,5,5,5,5,5,5,5,
	 6,6,6,6,6,6,6,6,6
	};

	
	//test-------------------------------
	
	printf("\nSolved state array: "); for(int i = 0; i < 54; i++){printf("%d", cube[i]);}
	
	//test move
	R(cube);
	
	//print array
	printf("\nArray: "); for(int i = 0; i < 54; i++){printf("%d", cube[i]);}
	
	//sum array, if sum = 189, method is correct
	printf("\nThe sum is: "); int sum = 0;for(int i = 0; i < 54; i++){sum = sum + cube[i];} printf("%d", sum);
	
	if(sum == 189)
		printf("\ncompile success!");
	else
		printf("\nbug exists!");
}

void R(int cube[54]){
 int temp1 = cube[2], temp2 = cube[5], temp3 = cube[8];
 
 cube[2]  = cube[20];
 cube[5]  = cube[23];
 cube[8]  = cube[26];
 
 cube[20] = cube[47]; 
 cube[23] = cube[50];
 cube[26] = cube[53];
 
 cube[47] = cube[42];
 cube[50] = cube[39];
 cube[53] = cube[36];
 
 cube[36] = temp3;
 cube[39] = temp2;
 cube[42] = temp1;
 
 int tempA = cube[28], tempB = cube[29];
 
 cube[28] = cube[30];
 cube[29] = cube[27];
 
 cube[30] = cube[34];
 cube[27] = cube[33];
 
 cube[34] = cube[32];
 cube[33] = cube[35];
 
 cube[32] = tempA;
 cube[35] = tempB;
}

void RPrime(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/
}

void L(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void LPrime(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
 */	
}

void F(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void FPrime(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void B(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void BPrime(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void U(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void UPrime(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void D(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

void DPrime(int cube[54]){
	/*
	int temp1 = cube[], temp2 = cube[], temp3 = cube[];
	
	cube[]  = cube[];
	cube[]  = cube[];
	cube[]  = cube[];
	
	cube[] = cube[]; 
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = temp3;
	cube[] = temp2;
	cube[] = temp1;
	
	int tempA = cube[], tempB = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = cube[];
	cube[] = cube[];
	
	cube[] = tempA;
	cube[] = tempB;
	*/	
}

