#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
  vector<int> Vector = {1,3,5,7,9}; // Can change this to input a custom vector by looping through the vector and cin >> Vector[i]
  vector<int> OutputVector; // Empty output cevtor
  cout << "Your Vector:" << endl;
  for (int i; i < Vector.size(); i++) // This loops throught he vector and prints each element. size() is included within the vector library.
  {
    cout << Vector[i] << " ";
  }
  cout << endl;
  cout << "Enter a number, every number lower than this number will be removed from your vector: ";
  int Input;
  cin >> Input; 
  for (int i; i < Vector.size(); i++)
  {
    if (Vector[i] >= Input) // If the element is greater than or equal to the number you enteres, it gets pushed to a new output vector.
    {
      OutputVector.push_back(Vector[i]); // Push_back is included in the vector library.
    }
  }
  cout << "Here is your output\n";
  for (int i; i < OutputVector.size(); i++) // Prints the output vector.
  {
    cout << OutputVector[i] << " ";
  }
  cout << "\nInput Size: " << Vector.size(); // These lines just post the sizes for the heck of it.
  cout << "\nOutput Size: " << OutputVector.size() << endl;

}
