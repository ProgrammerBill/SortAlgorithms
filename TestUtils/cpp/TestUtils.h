/*************************************************************************
    > File Name: TestUtils.h
    > Author: bill
    > Mail: cjcbill@gmail.com 
    > Created Time: 2019年05月25日 星期六 23时00分41秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include"selection_sort.h"
using namespace std;

void testSelectionSort(vector<int> & vec){
	//Selection Sort
	sortBase *mSort = new SortSelection();
	vector<int> ret = mSort->sortArray(vec);	
	cout<<"SelectionSort:"<<endl;
	for(int i = 0; i < ret.size();i++){
		cout<<ret.at(i)<<" ";
	}
	cout<<endl;
	delete mSort;
}
