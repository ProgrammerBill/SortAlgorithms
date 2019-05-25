/*************************************************************************
    > File Name: selection_sort.cpp
    > Author: bill
    > Mail: cjcbill@gmail.com 
    > Created Time: 2019年05月25日 星期六 11时05分44秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include <SortCommon.h>
using namespace std;

class SortSelection : public sortBase{
public:
	SortSelection(){}
	virtual ~SortSelection(){}
	virtual vector<int> sortArray(vector<int> &nums)
	{
		int N = nums.size();	
		for(int i = 0; i < N; i++){
			int min = i;
			for(int j = i + 1; j < N; j++){
				if(nums[j] < nums[min]){
					int tmp = nums[min];
					nums[min] = nums[j];
					nums[j] = tmp; 
				}
			}
		}
		return nums;
	}	
};

