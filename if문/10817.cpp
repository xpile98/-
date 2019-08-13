#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	int result;
	cin >> A >> B >> C;

	if (1 <= A && A <= 100 &&
		1 <= B && B <= 100 &&
		1 <= C && C <= 100) {

		if (A > B)
		{
			if (C > A)				result = A;
			else
			{
				if (B > C)			result = B;
				else					result = C;
			}
		}
		else
		{
			if (C > B)				result = B;
			else
			{
				if (A > C)			result = A;
				else					result = C;
			}
		}
		cout << result;
	}
	return 0;
}