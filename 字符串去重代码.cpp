#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    getchar();
    while (n--) {
        string input1;
        getline(cin, input1);
        string::iterator iter = input1.begin();
        while (iter != input1.end()) 
		{
            for (string::iterator check2 = iter + 1; check2 != input1.end(); check2++) {
                if (*iter == *check2)
				 {
                    input1.erase(check2);
                    check2--;
                    // Ϊ��ʹ�����һ���ַ���ɾ��ʱ��check2���ᳬ��input1�ķ�Χ��
                }
            }
            iter++;
        }
        cout << input1 << endl;
    }
    return 0;
}

