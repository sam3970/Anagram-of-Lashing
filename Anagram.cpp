#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

/* utility�� include �ؾ� �Ѵٰ� �ϴµ� vector �ᵵ �Ǵµ�.. */
pair<string, string> munja;

/* �Ƴ��׷� �Ǻ��� ���� �Լ� */
bool isAnagram(string one, string two)
{
	sort(one.begin(), one.end());
	sort(two.begin(), two.end());

	return one == two;
}

int main()
{
	//int number = 0;
	//cout << "�� �� �����Ͻðڽ��ϱ�? :";
	//cin >> number;

	//for (int i = 0; i < number; i++)
	//{
		munja = make_pair(string(), string());
		/* ���鵵 �Է¹ޱ� ���� ��ȯ */
		cout << "ù ��° �ܾ� �Է� : "; getline(cin,munja.first);
		cout << "�� ��° �ܾ� �Է� : "; getline(cin,munja.second);

		if (isAnagram(munja.first, munja.second))
		{
			cout << endl;
			cout << munja.first << "��" << munja.second << "�� Anagram �Դϴ�." << endl;
		}
		else
		{
			cout << endl;
			cout << munja.first << "��" << munja.second << "�� Anagram�� �ƴմϴ�." << endl;
		}
	//}
	system("pause");
}