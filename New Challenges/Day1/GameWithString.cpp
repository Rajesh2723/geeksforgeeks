/*
Given a string s of lowercase alphabets and a number k, the task is to print the minimum value of the string after removal of k characters. The value of a string is defined as the sum of squares of the count of each distinct character.
 

Example 1:

Input: s = abccc, k = 1
Output: 6
Explaination:
We remove c to get the value as 12 + 12 + 22
 

Example 2:

Input: s = aabcbcbcabcc, k = 3
Output: 27
Explaination: We remove two 'c' and one 'b'. 
Now we get the value as 32 + 32 + 32.

Your Task:
You do not need to read input or print anything. Your task is to complete the function minValue() which takes s and k as input parameters and returns the minimum possible required value.
*/
class Solution{
public:
    int minValue(string s, int k){
        unordered_map<char,int>map;
        for(int i=0;i<s.size();i++)
        map[s[i]]++;
        
        priority_queue<int>pq;
        for(auto x:map)
        pq.push(x.second);
        
        for(int i=0;i<k;i++){
            int temp=pq.top();
            temp=temp-1;
            pq.pop();
            pq.push(temp);
        }
        int ans=0;
        while(!pq.empty()){
            ans+=pow(pq.top(),2);
            pq.pop();
        }
        return ans;
    }
}
