#include <iostream>
using namespace std;

int
remove (int arr[], int len, int target)
{
  int times_found = 0;
  int difference = 0;

  for (int ii = 0; ii < len; ii++)
    {
      if (ii == len)
	{
	  times_found++;

	}

    }

  if (times_found > 0)
    {
      int iterator = 0;
      difference = len - times_found;
      int temp_array[difference];
      for (int jj = 0; jj < len; jj++)
	{
	  if (arr[jj] != target)
	    {
	      temp_array[iterator] = arr[jj];
	      iterator++;
	    }

	  delete[]arr;

	  for (int kk = 0; kk < difference; kk++)
	    {
	      arr[kk] = temp_array[kk];
	    }
	}

      return times_found;

    }

  else

    return times_found;
}


int
removea (int array[], int length, int number)
{
  int shift (0);
  int removedcount (0);
  for (int i = 0; i < length; ++i)
    {
      if (array[i] == number)
	{
	  removedcount++;
	}
      else
	{
	  array[shift++] = array[i];
	}
    }
  length = length - removedcount;
  return (removedcount);
}


int
removeb (int array[], int length, int number)
{
  int mover = 0;
  int removed =0;
  for (int i = 0; i < length; ++i)
    {
      if (array[i] == number)
	{
	  removed++;
	}
      else
	{
	  array[mover++] = array[i];
	}
    }
  length = length - removed;
  return (removed);
}

int
main ()
{
  printf ("Hello World\n");
  int arr[8] = {1,2,3,4,3,2,1,4};
n = 8;
  int printed_num = remove (arr, n, 8);
  cout << printed_num << endl;


  int printed_num2 = removeb (arr, n, 8);
  cout << printed_num2 << endl;

for (int i = n - 1; i >= 0; i--) 
    cout << arr[i];


  return 0;
}
