/*************************************************************************
    > File Name: SortCommon.h
    > Author: bill
    > Mail: cjcbill@gmail.com 
    > Created Time: 2019年05月25日 星期六 22时43分50秒
 ************************************************************************/

#include<vector>
using namespace std;
class sortBase{
public:
	sortBase(){}
	virtual ~sortBase(){}
	virtual vector<int> sortArray(vector<int> &nums) = 0;
};

