/*REVERSE INTEGER-(LEETCODE-7)
Problem Statement-
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
Time Complexity-
O(n) depending upon the number of digits in the number.
Space Complexity-
O(1)
Approach-
1)Take a while loop until x=0
2)Check everytime whether ans is greater than modulo 10 of maximum integer or less than modulo 10 of minimum integer
3)Add the modulo 10 of x in ans(here ans is the variable which holds the reversed value which is multiplied by 10 with each iteration)
4)Also divide x by 10 with each iteration
5)After the loop terminates,return ans
Code-*/
class Solution {
public:
    int reverse(int x) {
    int i,number,ans=0; 
    while(x!=0){
    number=x%10;
    if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
    return 0;}
    ans=(ans*10)+number;
    x=x/10;}
return ans;
}
};
