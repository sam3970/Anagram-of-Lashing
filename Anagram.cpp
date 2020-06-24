#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

/* utility를 include 해야 한다고 하는데 vector 써도 되는듯.. */
pair<string, string> munja;

/* 아나그램 판별을 위한 함수 */
bool isAnagram(string one, string two)
{
	sort(one.begin(), one.end());
	sort(two.begin(), two.end());

	return one == two;
}

int main()
{
	//int number = 0;
	//cout << "몇 번 진행하시겠습니까? :";
	//cin >> number;

	//for (int i = 0; i < number; i++)
	//{
		munja = make_pair(string(), string());
		/* 공백도 입력받기 위한 변환 */
		cout << "첫 번째 단어 입력 : "; getline(cin,munja.first);
		cout << "두 번째 단어 입력 : "; getline(cin,munja.second);

		if (isAnagram(munja.first, munja.second))
		{
			cout << endl;
			cout << munja.first << "와" << munja.second << "는 Anagram 입니다." << endl;
		}
		else
		{
			cout << endl;
			cout << munja.first << "와" << munja.second << "는 Anagram이 아닙니다." << endl;
		}
	//}
	system("pause");
}