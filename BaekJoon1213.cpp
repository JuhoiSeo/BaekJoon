/*
	Coded by J.H.Seo
	
	http://boj.kr/09259067f75643aa8fe865a5ebd6c879
*/

#include<bits/stdc++.h>

using namespace std;

vector<char> name, half, ret;
vector<int> num;
string s;
int cnt, chk = -1;

int main(){
	cin >> s;
	
	for(int i = 0; i < s.length(); i++){
		auto a = find(name.begin(), name.end(), s[i]);
		if(a == name.end()){
			name.push_back(s[i]);
			num.push_back(1);
		}
		else num[a - name.begin()]++;
	}
	
	for(int i = 0; i < num.size(); i++){
		if((num[i] % 2) > 0){
			chk = i;
			cnt++;
		}
		if(cnt > 1){
			cout << "I'm Sorry Hansoo";
			goto a;
		}
		else for(int j = 0; j < num[i] / 2; j++) half.push_back(name[i]);
	}
	
	sort(half.begin(), half.end());
	
	for(int i = 0; i < half.size(); i++) ret.push_back(half[i]);
	if(chk > -1) ret.push_back(name[chk]);
	for(int i = half.size() - 1; i >= 0; i--) ret.push_back(half[i]);
	
	for(int i = 0; i < ret.size(); i++) cout << ret[i];
	
	a:
	return 0;
}

/*
	���Ѽ��� �ӹ����� ���� ����ϴ� �����̴�.
	���Ѽ��� ���󿡼� �Ӹ������ ���ڿ��� �ʹ� �����ϱ� ������, ���� ������ ����ؼ� �ӹ����� �Ӹ������ �������ַ��� �Ѵ�.
	�ӹ����� ���Ѽ��� ���� �̸����� �Ӹ������ ������� �ϴµ�, ���Ѽ��� ���� �̸��� ���ĺ� ������ ������ �ٲ㼭 �Ӹ������ ������� �Ѵ�.
	�ӹ����� ���� ���Ѽ��� ���� �̸��� �Ӹ�������� �ٲٴ� ���α׷��� �ۼ��Ͻÿ�.
	
	�Է�
	ù° �ٿ� ���Ѽ��� ���� �̸��� �ִ�.
	���ĺ� �빮�ڷθ� �� �ִ� 50�����̴�.
	
	���
	ù° �ٿ� ������ ������ ����Ѵ�.
	���� �Ұ����� ���� "I'm Sorry Hansoo"�� ����Ѵ�.
	������ ���� ���� ��쿡�� ���������� �ռ��� ���� ����Ѵ�.
	
	https://www.acmicpc.net/problem/1213
*/
