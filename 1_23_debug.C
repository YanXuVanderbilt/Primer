#include <iostream>
using namespace std;

void p1(long long* ptr, int size) {
	for (int i=0; i<size; ++i) {
		printf("location of ptr is %lli, value of ptr is %lli, ptr points to %lli\n", &ptr, *ptr, ptr);
		printf("%lli ", *ptr);
		ptr+=1;
	}
	printf("\b\n");
}

void p2(long long* ptr, int size) {
	long long *ptr_rep = ptr;
	for (int i=0; i<size; ++i) {
		printf("location of ptr_rep is %lli, value of ptr_rep is %lli, ptr_rep points to %lli\n", &ptr_rep, *ptr_rep, ptr_rep);
		printf("%lli ", *ptr_rep);
		ptr_rep+=1;
	}
	printf("\b\n");
}

int main() {
	long long arr[] = {1,3,5,7};
	p2(arr,4);
}

		
