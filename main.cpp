#include<iostream>
#include"TestUtils.h"
using namespace std;
int main(){
	vector<int>myVector = vector<int>{5,7,3,4,100,2,3,59};
	cout<<"Original Vector:"<<endl;
	for(int i = 0; i < myVector.size();i++){
		cout<<myVector.at(i)<<" ";
	}
	cout<<endl;
	testSelectionSort(myVector);
	return 0;
}
