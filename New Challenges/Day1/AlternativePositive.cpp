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
	
