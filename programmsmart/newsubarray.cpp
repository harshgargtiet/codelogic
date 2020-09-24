
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,-9,-9,8,70,89};
   // int cssum[10]={0};// arr[0],cssum[0]+arr[1],cssum[1]+arr[2],

    int currentsum=0 ;
    int maxsum=0;
    //int left =0;
    //int right =0;
    int i,j,k;
   // cssum[0]=arr[0];cssum[-1]=0;
   /* for(int c=1;c<10;c++)//making cssum or precounting sum
    {
        cssum[c]=cssum[c-1] + arr[c];

    }*/
  /* for(int r =0;r<5;r++)
        cout<<cssum[r]<<endl;*/

  /* for (i=0;i<10;i++)//left
    {
        for(j=i;j<10;j++)//righr
        {
           currentsum=0;

            currentsum=cssum[j]-cssum[i-1];

           /* for(k=i;k<=j;k++)
            {
              // currentsum=currentsum+arr[k];

              cout<<arr[k]<<",";

            }*/

      /*  if(currentsum>maxsum)
            {
                maxsum=currentsum;
                left=i;
                right=j;
            }
           // cout<<currentsum<<" ," ;
          // cout<<endl;


        }


    }*/

//cout<<"maxsum is"<<maxsum<< endl << "from : index ->" <<left << " ," << right<<endl;

/*for(k=left;k<=right;k++)
{
  cout<<arr[k]<<" ," ;
}*/

// kadanes algo

for (i=0;i<10;i++)
{
     currentsum=currentsum+arr[i];
    if(arr[i]<0)
    {
        currentsum=0;
    }
    maxsum=max(currentsum,maxsum);



}
cout<<"max sum is" << maxsum;


return 0;
}
