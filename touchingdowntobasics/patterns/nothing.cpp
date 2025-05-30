#include <iostream>
using namespace std;

void print1(int n)
{
  // no. of rows = no. of stars.

  // outer loops-> coloums.
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void print2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

// printing the row number now
void print3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}
void print4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= n - i; j++)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }
}

void print5(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < n - i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void print8(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  // this is for the inner loop.
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j < n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void print9(int n)
{

  for (int i = 0; i < 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    for (int j = 1; j < stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void print10(int n)
{
  int start = 1;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;

    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start; // this will get the value to 0...
    }
    cout << endl;
  }
}

void print11(int n){

  for (int i = 0; i < n;i++){
    // numbers are twice the row number.
    
  }
}

int main()
{
  int n;
  cin >> n;
  print1(n);
  print2(n);
  print3(n);
  print4(n);
  print5(n);
  print8(n);
  print9(n);
  print10(n);
  return 0;
}
