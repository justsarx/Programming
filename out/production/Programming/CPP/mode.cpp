#include <iostream>
using namespace std;

int main()
{
  int arr[10] {2,4,4,5,6,3,4,8,6,6};
  int a[10] = {0};
  int maxCount = 0, mode = -1;

  for (int i = 0; i < 10; i++)
  {
    int count = 0;
    for (int j = 0; j < 10; j++)
    {
      if (arr[i] == arr[j])
      {
        ++count;
      }
    }

    a[i] = count;

    if (count > maxCount)
    {
      maxCount = count;
      mode = arr[i];
    }
  }

  cout << "The mode is: " << mode << " with a count of " << maxCount << endl;

  return 0;
}
