#include <iostream>
#define MAX_ELEMENT 100
#define Sentinel 0
#define TRUE 1
#define FALSE 0
using namespace std;

int GetIntegerArray(int array[], int max, int sentinel);
int GetInteger();
void PrintintegerArray(int* array, int n);
void ReverseIntegerArray(int* array, int n);
void SwapIntegerElements(int* array, int p1, int p2);

int GetIntegerArray(int* array, int max, int sentinel){
	int n = 0, value;
	
	while(TRUE){
		cout << "==> ";
		value = GetInteger();
		
		if(value == sentinel)
			break;
			
		if(n == max)
			cout << "�� ������ �ʰ��߽��ϴ�" << endl;
			
		array[n] = value;
		n++;
	}
	
	return n;
	
}

int GetInteger(){
	int n;
	cin >> n;
	return n;
}

void PrintIntegerArray(int* array, int n){
	int i;
	
	for(int i = 0; i < n; i++)
		cout << array[i] << endl;
}

void ReverseIntegerArray(int* array, int n){
	int i;
	for(int i = 0; i < n / 2; i++)
		SwapIntegerElements(array, i, n-i-1);
}

void SwapIntegerElements(int* array, int p1, int p2){
	int temp;
	temp = array[p1];
	
	array[p1] = array[p2];
	array[p2] = temp;
}

int main(){
	int list[MAX_ELEMENT];
	int n;
	
	cout << "������ �������� �Է��ϼ���" << endl;
	cout << "0�� �Է��ϸ� �Է��� �����մϴ�." << endl;
	
	n = GetIntegerArray(list, MAX_ELEMENT, Sentinel);
	ReverseIntegerArray(list, n);
	PrintIntegerArray(list, n);
	
	return 0;
}





