// This is basically a beginner understanding on the Big O concepts 
// problem : Find Nemo 
#include<iostream>
#include <string>
#include<chrono>
#include<array>
using namespace std;
using namespace std::chrono;
// What does this do ? 
// It is a program to find whether Nemo Exist in the array or not
int main()
{
 array<string,5>FishArray = {"Nemo","Dory","Marlin","Bloat","Gill"};
  //timer starts to measure the time taken 
  auto start = high_resolution_clock::now();
  for(auto it: FishArray)
  {
    if(it == "Nemo")
    {
      cout<<"Found Nemo of FishArray"<<endl;
      break;
    }
  }
  auto end = high_resolution_clock::now();
  auto duration =duration_cast<microseconds>(end-start);
  cout<<"Time Taken to find Nemo of FishArray size of 5 : "<<duration.count()<<" microseconds"<<endl;

// In this case of Fish Array - It took 64 microseconds to find nemo which is the first element 
// Lets check the same if nemo is the last element of a big array
 array<string,100>FishArray1;
FishArray1.fill("Dory");
FishArray1[99] = "Nemo";

  //timer starts to measure the time taken 
  auto start1 = high_resolution_clock::now();
  for(auto it: FishArray1)
  {
    if(it == "Nemo")
    {
      cout<<"Found Nemo of FishArray1"<<endl;
      break;
    }
  }
  auto end1 = high_resolution_clock::now();
  auto duration1 =duration_cast<microseconds>(end1-start1);
  cout<<"Time Taken to find Nemo of FishArray1 size of 100 : "<<duration1.count()<<" microseconds"<<endl;

// What if we do the same with array size of 1000?
 array<string,1000>FishArray2;
FishArray2.fill("Dory");
FishArray2[999] = "Nemo";

  //timer starts to measure the time taken 
  auto start2 = high_resolution_clock::now();
  for(auto it: FishArray2)
  {
    if(it == "Nemo")
    {
      cout<<"Found Nemo FishArray2"<<endl;
      break;
    }
  }
  auto end2 = high_resolution_clock::now();
  auto duration2 =duration_cast<microseconds>(end2-start2);
  cout<<"Time Taken to find Nemo of FishArray2 size of 1000: "<<duration2.count()<<" microseconds"<<endl;

// This is a classic example of O(n) time complexity-- As the number of elements inreases the time taken to find also increases
}
