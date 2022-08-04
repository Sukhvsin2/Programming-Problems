/**
 * @file twoNumbers.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an array of integers and have to add them into new array
 * @problemRefrence https://leetcode.com/problems/add-two-numbers/
 * @version 1.0
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> inp1 = {9,9,9,9,9,9,9}, inp2 = {9,9,9,9};
    vector<int> result;
    int size = 0, carry = 0, carryResult = 0;
    
    inp1.size() > inp2.size() ? size = inp1.size() : size = inp2.size();
    for(int i=0;i<size;i++){
        if(inp1.size() > i && inp2.size() > i){
            carry = inp1[i] + inp2[i] + carry;
            carryResult = carry % 10;
            carry /= 10;
        }else if(inp1.size() > i){
            carry += inp1[i];
            carryResult = carry % 10;
            carry /= 10;
        }else if(inp2.size() > i){
            carry += inp2[i];
            carryResult = carry % 10;
            carry /= 10;
        }
        result.push_back(carryResult);
    }
    if(carry) result.push_back(carry);
    for(int i : result)
        cout<<i<<" ";
    
    return 0;
}




