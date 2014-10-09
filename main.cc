#include <iostream>
#include "my_stack.h"
using namespace std;

int main(){

	My_Stack<int> sta(5);
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	for(int i = 0; i < 8; i++) if(!sta.isFull()) sta.push(a[i]);
	while(!sta.isEmpty()) cout << sta.pop() << ", ";
   	cout << endl;

	return 0;
}