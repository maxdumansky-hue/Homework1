#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   
   int n;
   
   cin>>n;
   for(int i=0; i<n;i++){
      int rand[n][n];  
      for(int j=0;j<n;j++){
           if (i < n && j < n) {
            cout<<rand[i][j]%n<<" ";
         }
      }
      cout<<endl;
   }

/*string cars[][3]={{"mustang","camaro","challenger"},
               {"corvette","silverado","ram"},
               {"charger","tahoe","durango"}};
int rows=sizeof(cars)/sizeof(cars[0]);
int columns=sizeof(cars[0])/sizeof(cars[0][0]);
for(int i=0;i<rows;i++){
   for(int j=0;j<columns;j++){
      cout<<cars[i][j]<<" ";

}
cout<<endl;
}*/
      return 0;
   }
