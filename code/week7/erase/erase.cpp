// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  //creating a vector of integers
  vector<int> vectorInts;  
  //creating an iterator for the vector
  vector<int>::iterator it;

  vectorInts.push_back(0);
  vectorInts.push_back(1);
  vectorInts.push_back(2);
  vectorInts.push_back(3);
  vectorInts.push_back(4);
  vectorInts.push_back(5);
  vectorInts.push_back(6);
  vectorInts.push_back(7);
  
  cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //printing the contents of vectorInts
  cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    cout<<*it<<" ";
 
  //clear the vector
  vectorInts.erase(vectorInts.begin() + 4);
  cout<<"\nAfter clear, the vector has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    cout<<*it<<" ";

  return 0;
}

