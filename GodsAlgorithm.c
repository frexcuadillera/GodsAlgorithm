#include <stdio.h>

//blue in front value 1
//orange in left value 2
//red in right value 3
//green in back value 4
//yellow in top value 5
//white in bottom value 6

//method convention moveMethod(face, U, R, D, L);

void main(){
	int blue [3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int orange [3][3] = {{2,2,2},{2,2,2},{2,2,2}};
	int red [3][3] = {{3,3,3},{3,3,3},{3,3,3}};
	int green [3][3] = {{4,4,4},{4,4,4},{4,4,4}};
	int yellow [3][3] = {{5,5,5},{5,5,5},{5,5,5}};
	int white [3][3] = {{6,6,6},{6,6,6},{6,6,6}};
	
	printf("compile success");
}

void R(int red[3][3], int yellow[3][3], int green[3][3], int white[3][3], int blue[3][3]){

}

void RPrime(int red[3][3], int yellow[3][3], int green[3][3], int white[3][3], int blue[3][3]){
	
}

void L(int orange[3][3], int yellow[3][3], int blue[3][3], int white[3][3], int green[3][3]){
	
}

void LPrime(int orange[3][3], int yellow[3][3], int blue[3][3], int white[3][3], int green[3][3]){
	
}

void F(int blue[3][3], int yellow[3][3], int red[3][3], int white[3][3], int orange[3][3]){
}

void FPrime(int blue[3][3], int yellow[3][3], int red[3][3], int white[3][3], int orange[3][3]){
	
}

void B(int green[3][3], int yellow[3][3], int orange[3][3], int white[3][3], int red[3][3]){
	
}

void BPrime(int green[3][3], int yellow[3][3], int orange[3][3], int white[3][3], int red[3][3]){
	
}

void U(int yellow[3][3], int green[3][3], int red[3][3], int blue[3][3], int orange[3][3]){
	
}

void UPrime(int yellow[3][3], int green[3][3], int red[3][3], int blue[3][3], int orange[3][3]){
	
}

void D(int white[3][3], int blue[3][3], int red[3][3], int green[3][3], int orange[3][3]){
	
}

void DPrime(int white[3][3], int blue[3][3], int red[3][3], int green[3][3], int orange[3][3]){
	
}

