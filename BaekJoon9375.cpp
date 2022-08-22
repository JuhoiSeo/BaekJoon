/*
	Coded by J.H.Seo
	
	http://boj.kr/7cbccfb451264503ac4d44b0496b8d7c
*/

#include<bits/stdc++.h>

using namespace std;

vector<int> ret;
string s, t;
int testnum, n;

int main(){
	cin >> testnum;
	
	for(int i = 0; i < testnum; i++){
		vector<string> v;
		vector<int> num;
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			cin >> s >> t;
			
			auto a = find(v.begin(), v.end(), t);
			if(a == v.end()) {
				v.push_back(t);
				num.push_back(1);
			}
			else num[a - v.begin()]++;
		}
		
		int k = 1;
		for(int j = 0; j < num.size(); j++) k *= (num[j] + 1);
		k--;
		ret.push_back(k);
	}
	
	for(int i = 0; i < ret.size(); i++) cout << ret[i] << "\n";
	
	return 0;
}

/*
	�غ��̴� �мǿ� �ſ� �ΰ��ؼ� �� �� �Ծ��� �ʵ��� ������ ���� �ٽ� ���� �ʴ´�.
	���� ��� ���� �غ��̰� �Ȱ�, ��Ʈ, ����, �Ź��� �Ծ��ٸ�, �������� ������ �߰��� �԰ų� �Ȱ� ��� ��� �������ϰų� �ؾ� �Ѵ�.
	�غ��̰� ���� �ǻ���� �־����� �� ���� �غ��̴� �˸��� �ƴ� ���·� ��ĥ���� �ۿ� ���ƴٴ� �� ������?
	
	�Է�
	ù° �ٿ� �׽�Ʈ ���̽��� �־�����. �׽�Ʈ ���̽��� �ִ� 100�̴�.
	-�� �׽�Ʈ ���̽��� ù° �ٿ��� �غ��̰� ���� �ǻ��� �� n(0 <= n <= 30)�� �־�����.
	-���� n������ �غ��̰� ���� �ǻ��� �̸��� �ǻ��� ������ �������� ���еǾ� �־�����.
	-���� ������ �ǻ��� �ϳ��� ���� �� �ִ�.
	��� ���ڿ��� 1�̻� 20������ ���ĺ� �ҹ��ڷ� �̷���� ������ ���� �̸��� ���� �ǻ��� �������� �ʴ´�. 
	
	���
	�� �׽�Ʈ ���̽��� ���� �غ��̰� �˸��� �ƴ� ���·� �ǻ��� ���� �� �ִ� ��츦 ����Ͻÿ�.
	
	https://www.acmicpc.net/problem/9375 
*/
