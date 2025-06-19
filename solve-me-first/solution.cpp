#include <iostream>

using namespace std;
int solvemefirst(int a , int b)
{
    return a + b;
}
int main()
{
    int a , b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;

  cout << a << " + " << b << " = " << solvemefirst(a , b) << endl;


    return 0;
}
