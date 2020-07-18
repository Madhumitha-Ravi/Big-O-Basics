// This is basically a beginner understanding on the Big O concepts 
// problem : Find Nemo - to understand - Time Complexity - O(n)
#include<iostream>
#include <string>
#include<chrono>
#include<array>
using namespace std;
using namespace std::chrono;
// What does this do ? 
/*We will have 3 arrays of Size of 5,100,1000. On these array we need to find nemo.
  We will user a timer to measure the time taken for finding the element "nemo".
  We can see that has the number of elements increases the time taken will also increase.
  Here I have considered the worst case scenario - What happens if the element we need is at the last ? It needs to travell through all the elements to reach the last*/
int main()
{
 array<string,5>FishArray = {"Gill","Dory","Marlin","Bloat","Nemo"};
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
 
  // Lets check the same if nemo is the last element of a big array
  array<string,100>FishArray1;
  FishArray1.fill("Dory"); // filling 100 elements with dory and replacing the last with nemo
   FishArray1[99] = "Nemo";
  start = high_resolution_clock::now();
  for(auto it: FishArray1)
  {
    if(it == "Nemo")
    {
      cout<<"Found Nemo of FishArray1"<<endl;
      break;
    }
  }
  end = high_resolution_clock::now();
  duration =duration_cast<microseconds>(end-start);
  cout<<"Time Taken to find Nemo of FishArray1 size of 100 : "<<duration.count()<<" microseconds"<<endl;

  // What if we do the same with array size of 1000?
  array<string,1000>FishArray2;
  FishArray2.fill("Dory");
  FishArray2[999] = "Nemo";
  start = high_resolution_clock::now();
  for(auto it: FishArray2)
  {
    if(it == "Nemo")
    {
      cout<<"Found Nemo FishArray2"<<endl;
      break;
    }
  }
  end = high_resolution_clock::now();
  duration =duration_cast<microseconds>(end-start);
  cout<<"Time Taken to find Nemo of FishArray2 size of 1000: "<<duration.count()<<" microseconds"<<endl;

  // This is a classic example of O(n) time complexity-- As the number of elements inreases the time taken to find also increases
  /*Output
  Found Nemo of FishArray
  Time Taken to find Nemo of FishArray size of 5 : 53 microseconds
  Found Nemo of FishArray1
  Time Taken to find Nemo of FishArray1 size of 100 : 184 microseconds
  Found Nemo FishArray2
  Time Taken to find Nemo of FishArray2 size of 1000: 301 microseconds*/
  // Note the time taken depends upon the processor , Ram and other factors

}
