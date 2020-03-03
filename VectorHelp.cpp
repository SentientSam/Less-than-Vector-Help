#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
  vector<int> Vector = {1,3,5,7,9};
  vector<int> OutputVector;
  cout << "Your Vector:" << endl;
  for (int i; i < Vector.size(); i++)
  {
    cout << Vector[i] << " ";
  }
  cout << endl;
  cout << "Enter a number, every number lower than this number will be removed from your vector: ";
  int Input;
  cin >> Input;
  for (int i; i < Vector.size(); i++)
  {
    if (Vector[i] >= Input)
    {
      OutputVector.push_back(Vector[i]);
    }
  }
  cout << "Here is your output\n";
  for (int i; i < OutputVector.size(); i++)
  {
    cout << OutputVector[i] << " ";
  }
  cout << "\nInput Size: " << Vector.size();
  cout << "\nOutput Size: " << OutputVector.size() << endl;

}