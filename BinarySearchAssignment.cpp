/*


// given a sorted arr of n elements and a target x . Find the last occurence of x in the array .
 // if x does not exist return -1;

 #include <bits/stdc++.h>
using namespace std;
 int LastOccIdx( int a[],int n, int x){
     int i = 0;
      int j = n-1;
       int idx = -1;
        while( i<=j){
             int mid = (i+j)/2;
              if( a[mid] == x){
                idx = mid;
                i = mid+1;
                 // for first occurance j = mid-1;
              }
              else if( a[mid]< x) i = mid+1;
              else j = mid-1;  
        }
        return idx;
 }
int main(){
   int arr[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
     cout<<LastOccIdx(arr,n,x);


   return 0;
}



//

// given a sorted array count the number of 1's in it;

   #include <bits/stdc++.h>
using namespace std;
 int LastOccIdx( int a[],int n, int x){
     int i = 0;
      int j = n-1;
       int idx = -1;
        while( i<=j){
             int mid = (i+j)/2;
              if( a[mid] == x){
                idx = mid;
                i = mid+1;
                 // for first occurance j = mid-1;
              }
              else if( a[mid]< x) i = mid+1;
              else j = mid-1;  
        }
        return idx;
 }
 int FirstOccIdx( int a[],int n, int x){
     int i = 0;
      int j = n-1;
       int idx = -1;
        while( i<=j){
             int mid = (i+j)/2;
              if( a[mid] == x){
                idx = mid;
               j = mid-1;
                 // for first occurance j = mid-1;
              }
              else if( a[mid]< x) i = mid+1;
              else j = mid-1;  
        }
        return idx;
 }
int main(){
   int arr[] = {0,0,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1;
      int z =LastOccIdx(arr,n,x);
      int y = FirstOccIdx(arr,n,x);
      int no_of_x = (z-y)+1;
       cout<<no_of_x;


   return 0;
}


*/

// Given a matrix having 0-1 only where each row is sorted in increasing order find
// rows with maximum number of 1's                   // 




/*

#include <bits/stdc++.h>
using namespace std;
int LastOccIdx( int a[],int n, int x){
     int i = 0;
      int j = n-1;
       int idx = -1;
        while( i<=j){
             int mid = (i+j)/2;
              if( a[mid] == x){
                idx = mid;
                i = mid+1;
                 // for first occurance j = mid-1;
              }
              else if( a[mid]< x) i = mid+1;
              else j = mid-1;  
        }
        return idx;
 }
 int FirstOccIdx( int a[],int n, int x){
//      int i = 0;
//       int j = n-1;
//        int idx = -1;
//         while( i<=j){
//              int mid = (i+j)/2;
//               if( a[mid] == x){
//                 idx = mid;
//                j = mid-1;
//                  // for first occurance j = mid-1;
//               }
//               else if( a[mid]< x) i = mid+1;
//               else j = mid-1;  
//         }
//         return idx;
//  }
 
int main(){
   int matrix[][4] = { {0,1,1,1},
                    { 0,0,1,1},
                    {1,1,1,1},
                    { 0,0,0,0},
                  };
  int x = 1;
 int m = sizeof(matrix)/sizeof(matrix[0]);  // row number 
 int n = sizeof(matrix[0])/sizeof(matrix[0][0]);   // column number
         int maxNo = 0;
          int row = 0;
      for(int i1 = 0; i1<m;i1++){
         // first occurence idx
         int i = 0;
          int j =n-1;
            int fidx = 0; 
           while( i<=j){
              int mid = (i+j)/2;
               if(matrix[i1][mid] == x){
                   fidx = mid;
                    j = mid-1;
               }else if( matrix[i1][mid] < x) i = mid+1;
                else j = mid-1;
           }
           //last occurance idx
            i = 0;
           j =n-1;
            int lidx = 0; 
           while( i<=j){
              int mid = (i+j)/2;
               if(matrix[i1][mid] == x){
                   lidx = mid;
                    i = mid+1;
               }else if( matrix[i1][mid] < x) i = mid+1;
                else j = mid-1;
           }
           
           int currNo ;
           if( lidx == 0 && fidx== 0)
             currNo= 0;
             else  currNo =  (lidx-fidx)+1;

             if( maxNo <currNo){
                 maxNo = currNo;
                  row = i1;
             }   
      }
      cout<<row<<" "<<maxNo;
      
       
   return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
void printrow( int *row, int column){
    for( int i = 0; i< column;i++){
      cout<<row[i]<<" ";
    }
    cout<<"\n";
}
int main(){
   int matrix[][4] = { {0,1,1,1},
                    { 0,0,1,1},
                    {1,1,1,1},
                    { 0,0,0,0},
                  };

        printrow(matrix[1],4);
   return 0;
}


*/


/*

//  Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
//inclusive in sorted order.
//There is only one repeated number in nums, return this repeated number.



#include <bits/stdc++.h>
 using namespace std;
  int ReturnRepeatedNum( vector<int>&v){
     int i = 0;
      int j = v.size();
       while( i <=j ){
          int mid = (j-i)/2+i;
           if( v[mid]== mid ) j = mid-1;
           else i = mid+1;
            if(i == j){
               return v[i];
               break;
            }

       }
  }
  int main(){
    vector<int>v = {1,2,3,4,4};

          cout<<ReturnRepeatedNum(v);

   return 0;
  }

*/


/*

// Given a number 'n . predict whether 'n' is a valid perfect square or not

#include <bits/stdc++.h>
 using namespace std;
  bool IsvalidSquare( int n){
    int i =  0;
     int j =n-1;
      bool chek = false;
      while( i <= j){
         int mid = (i+j)/2;
          if( mid*mid > n) j = mid-1;
           else i = mid+1;
           if( mid *mid == n){ 
             chek = true;
             break;
           }
      }
       return chek;
  }
  int main(){
    cout<<IsvalidSquare(99);
   return 0;
  }


  */


 


//  You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.


class Solution {
typedef long long ll;
public:
    int arrangeCoins(ll n) {
        // linear serach approach
        //  ll sum = 0;
        //  ll idx = 0;
        //   if( n== 1) return 1;
        //   for(  ll i = 1; i<=n;i++){
        //      sum = sum +i;
        //       if( sum > n){
        //         idx = i-1;
        //          break;
        //       }
        //   }
        //   return idx;

       if( n == 1) return 1;
        ll k = (-1 + sqrt( 1 + 8*n))/2;
     
        return k;
    }
};