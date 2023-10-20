#include <iostream>
using namespace std;
int main() {
   
   int size;
   cout<<"Enter the size :";
   cin>>size;
   
   cout<<"Enter the sub-array";
   
   int Alpha[size];
   
   for( int i=0;i<size;i++)
   {
       cin>>Alpha[i];
   }
   
   bool is = false;
   for(int i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {

       for(int k=j+1;k<size;k++)
       {
           if(Alpha[i] == Alpha[j] or Alpha[i] == Alpha[j] == Alpha[k] or (Alpha[k]-Alpha[j] == 1 and  Alpha[j]-Alpha[i]==1) )
           {
               is = true;
               break;
       }
   }
   }
}

   if(is == true)
   {
    cout<<"True";
   }
   else{
    cout<<"False";
   }
   
    return 0;
}
