/*
	Coded by J.H.Seo
	
	http://boj.kr/78021d15e7694c0289c799bb8cc053cf
*/

#include<bits/stdc++.h>

using namespace std;

unordered_map<int, string> num2po;
unordered_map<string, int> po2num;
vector<string> lst;
string s;
int M, N, a;

int main(){
	cin >> N >> M;
	
	for(int i = 1; i <=N; i++){
		cin >> s;
		num2po.insert({i, s});
		po2num.insert({s, i});
	}
	
	for(int i = 0; i < M; i++){
		cin >> s;
		
		if('0' <= s[0] && s[0] <= '9'){
			a = stoi(s);
			lst.push_back(num2po[a]);
		}
		else lst.push_back(to_string(po2num[s]));
	}
	
	for(int i = 0; i < M; i++) cout << lst[i] << "\n";
	
	return 0;
}

/*
	������ ���ϸ� �����Ͱ� �Ǳ� ���� ������ �ϼ���Ű���� �Ͽ���.
	�ϴ� �װ� ���� ������ �ִ� ���ϸ� �������� ���ϸ��� �̸��� ���� ���ϸ��� ��ȣ�� ���ϰų�,
	���ϸ��� ��ȣ�� ���� ������� �̸��� ���ϴ� ������ �ϵ��� �Ͽ���.
	���� ������ ����ϸ�, ���� ���� ���� ������ �ֵ��� �ϰڳ�.
	
	�Է�
	ù° �ٿ��� ������ ���ϵǾ� �ִ� ���ϸ��� ���� N�̶� ���� ����� �ϴ� ������ ���� M�� �־���.
	N�� M�� 1���� ũ�ų� ����, 100,000���� �۰ų� ���� �ڿ����ε�, �ڿ����� ������ ����?
	�𸣸� ������� ������. ���� �������� ������ ������ �غ� �Ǿ��־�.
	��° �ٺ��� N���� �ٿ� ���ϸ��� ��ȣ�� 1���� ���ϸ���� N���� �ش��ϴ� ���ϸ���� �� �ٿ� �ϳ��� �Է����� ����.
	���ϸ��� �̸��� ��� ����θ��̷���� �ְ�,
	��, ��... ù ���ڸ� �빮���̰�, ������ ���ڴ� �ҹ��ڷθ� �̷���� �־�.
	����! �Ϻ� ���ϸ��� ������ ���ڸ� �빮���� ���� �־�.
	���ϸ� �̸��� �ִ� ���̴� 20, �ּ� ���̴� 2��.
	�� ���� �ٺ��� �� M���� �ٿ� ���� ����� �ϴ� ������ �Է����� ����.
	������ ���ĺ����θ� ������ ����� ��ȣ�� ���ؾ� �ϰ�, ���ڷθ� ������, ���ϸ� ��ȣ�� �ش��ϴ� ���ڸ� ����ؾ� ��.
	�Է����� ������ ���ڴ� �ݵ�� 1���� ũ�ų� ����, N���� �۰ų� ����, �Է����� ������ ���ڴ� �ݵ�� ������ �ִ� ���ϸ��� �̸��� �־���.
	�׷� ȭ����!!!
	
	���
	ù° �ٺ��� ���ʴ�� M���� �ٿ� ������ ������ ���� ���� ���������� ���ھ�!!!
	�Է����� ���ڰ� ���Ӵٸ� �� ���ڿ� �ش��ϴ� ���ϸ��� �̸���,
	���ڰ� �������� �� ���ϸ��� �̸��� �ش��ϴ� ��ȣ�� ����ϸ� ��. �׷� ��ť~
	
	https://www.acmicpc.net/problem/1620
*/