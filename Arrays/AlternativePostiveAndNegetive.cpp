/*
Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
Note: Array should start with a positive number.
 

Example 1:

Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
Explanation : Positive elements : 9,4,5,0,2
Negative elements : -2,-1,-5,-3
As we need to maintain the relative order of
postive elements and negative elements we will pick
each element from the positive and negative and will
store them. If any of the positive and negative numbers
are completed. we will continue with the remaining signed
elements.The output is 9,-2,4,-1,5,-5,0,-3,2.
*/
void rearrange(int arr[], int n) {
	     vector<int>x;

     vector<int>y;

     

     

     for(int i=0;i<n;i++)

     {

        if(arr[i]>=0)

        x.push_back(arr[i]);

        else

        y.push_back(arr[i]);

     }

     

     int a=x.size();

     int b=y.size();

     int j=0,k=0;

     for(int i=0;i<n;i++)

     {

         if(a>0 && b>0)

         {

          if(i%2==0)

          {

          arr[i]=x[j];

          j++;

          a--;

          }

          

          else

          {

              arr[i]=y[k];

              k++;

              b--;

          }

         }

         else if(a==0 &b!=0)

         {

            arr[i]=y[k];

              k++;

              b--;

         }

         

         else if(a!=0 &b==0)

         {

          arr[i]=x[j];

          j++;

          a--;

         }

         

     }

 }
	
