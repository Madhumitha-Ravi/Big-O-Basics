#include<iostream>
#include<string>
#include<array>
#include<chrono>
using namespace std ;
using namespace std::chrono;

int main()
{
   /*This one is similar to the previous one , here we are going to see an example for time complexity O(1)*/
   /*Here we will be having 3 arrays of size 5,100,1000, we will measure the access time for the first element or of nth index.
   Basically all the 3 should have neary equivalent access time.
   Lets Check on that*/
  /* If we know the index to access or only going to access the first element of n size , the operation performed is 1. so it is O(1)*/
   array<string,5>FishArray;
   FishArray.fill("Nemo");
  auto start = high_resolution_clock::now();
  cout<<FishArray[0]<<endl;
  auto end = high_resolution_clock::now();
  auto duration =duration_cast<microseconds>(end-start);
  cout<<"Time Taken to access first element of FA : "<<duration.count()<<" microseconds"<<endl;
 
  array<string,100>FishArray1;
  FishArray1.fill("Dory"); // filling 100 elements with dory 
  start = high_resolution_clock::now();
  cout<<FishArray1[1]<<endl;
  end = high_resolution_clock::now();
  duration =duration_cast<microseconds>(end-start);
  cout<<"Time Taken to access first element of FA1 : "<<duration.count()<<" microseconds"<<endl;

  // What if we do the same with array size of 1000?
  array<string,1000>FishArray2;
  FishArray2.fill("Marlow");
  start = high_resolution_clock::now();
  cout<<FishArray2[0]<<endl;
  end = high_resolution_clock::now();
  duration =duration_cast<microseconds>(end-start);
  cout<<"Time Taken to access the first element of FA2: "<<duration.count()<<" microseconds"<<endl;

/*OutPut:
Nemo
Time Taken to access first element of FA : 306 microseconds
Dory
Time Taken to access first element of FA1 : 320 microseconds
Marlow
Time Taken to access the first element of FA2: 286 microseconds*/
}
