#include <iostream>
using namespace std;

int arr[7];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "7:";
		cin >> n;
		if ((n > 0) && (n <= 7))
			break;
		else
			cout << "\nArray minimum 1 and maxsimum 7 element. \n\n";
	}

	cout << "\n----------\n";
	cout << "\n 7 \n";
	cout << "\n----------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void search()
{
		int lowerbound = 0;
		int upperbound = n - 1;

		do
		{
			cout << "\n n-1 :";
			int item;
			cin >> item;

			upperbound = 0;
			for (i = 0; i < n; i++)
			{
				upperbound++;
				if (arr[i]==item)
				{
					cout << "\n" << item << "found position" << (i + 1) << endl;
					break;
				}
			}
			if (i == n)
				cout << "\n" << item << "not found in the array \n";
			cout << "\nN-1:"; upperbound;

			cout << "\nContinue search (y/n):";
			cin >> lowerbound;
		} while ((lowerbound == 'y') || (lowerbound == 'y'));
	
}

int main()
{
	input();
	search();
}

