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
	LPrime(cube);
	
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
	
	cube[42] = temp1;
	cube[39] = temp2;
	cube[36] = temp3;

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
	int temp1 = cube[2], temp2 = cube[5], temp3 = cube[8];
	
	cube[2] = cube[42];
	cube[5] = cube[39];
	cube[8] = cube[36];

	cube[42] = cube[47];
	cube[39] = cube[50];
	cube[36] = cube[53];
		
	cube[47] = cube[20]; 
	cube[50] = cube[23];
	cube[53] = cube[26];
		
	cube[20]  = temp1;
	cube[23]  = temp2;
	cube[26]  = temp3;
	
	int tempA = cube[27], tempB = cube[28];
	
	cube[27] = cube[29];
	cube[28] = cube[32];
	
	cube[29] = cube[35];
	cube[32] = cube[34];
	
	cube[35] = cube[33];
	cube[34] = cube[30];
	
	cube[33] = tempA;
	cube[30] = tempB;	
}

void L(int cube[54]){
	int temp1 = cube[0], temp2 = cube[3], temp3 = cube[6];
	
	cube[0]  = cube[44];
	cube[3]  = cube[41];
	cube[6]  = cube[38];
	
	cube[44] = cube[45]; 
	cube[41] = cube[48];
	cube[38] = cube[51];
	
	cube[45] = cube[18];
	cube[48] = cube[21];
	cube[51] = cube[24];
	
	cube[18] = temp1;
	cube[21] = temp2;
	cube[24] = temp3;
	
	int tempA = cube[10], tempB = cube[11];
	
	cube[10] = cube[12];
	cube[11] = cube[9];
	
	cube[12] = cube[16];
	cube[9] = cube[15];
	
	cube[16] = cube[14];
	cube[15] = cube[17];
	
	cube[14] = tempA;
	cube[17] = tempB;
}

void LPrime(int cube[54]){
	int temp1 = cube[0], temp2 = cube[3], temp3 = cube[6];
	
	cube[0]  = cube[18];
	cube[3]  = cube[21];
	cube[6]  = cube[24];
	
	cube[18] = cube[45]; 
	cube[21] = cube[48];
	cube[24] = cube[51];
	
	cube[45] = cube[44];
	cube[48] = cube[41];
	cube[51] = cube[38];
	
	cube[44] = temp1;
	cube[41] = temp2;
	cube[38] = temp3;
	
	int tempA = cube[9], tempB = cube[10];
	
	cube[9] = cube[11];
	cube[10] = cube[14];
	
	cube[11] = cube[17];
	cube[14] = cube[16];
	
	cube[17] = cube[15];
	cube[16] = cube[12];
	
	cube[15] = tempA;
	cube[12] = tempB;	
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

