/*
	Coded by J.H.Seo
	
	http://boj.kr/63ce5f00d95d45e39c3482c6b6ab71d1
*/

#include<bits/stdc++.h>

using namespace std;

int N;
int cnt[26];
string name, available;

int main(){
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> name;
		cnt[name[0] - 'a']++;
	}
	
	for(int i = 0; i < 26; i++) if(cnt[i] > 4) available += (i + 'a');
	
	if(available.length() == 0) cout << "PREDAJA";
	else cout << available;
	
	return 0;
}

/*
	����̴� ���� ���迡�� ���� ������� �������� �ִ�.
	ó���� �״� �� ��⸦ �����ϴ� ����̾���.
	�󱸿� ���� ������ �׸� ���� �� ������, �ᱹ ����̴� ������ û���ϴ� ���� �����ߴ�.
	��� �� �׿��� ������ �� ���γ����� ������ ��ȸ�� ����� �Ǿ���.
	�״� ��û�� �������� �����ָ� ���� ���׿��� ����� �߰�, ���� ������ǥ���� ������ �Ǿ���.
	������ �Ϻ��� ������ǥ ģ�� ��Ⱑ �ִ� ���̴�.
	����̴� ���� ��⿡ ���� ���� ������ �ۼ��ؾ� �Ѵ�.
	������ǥ���� ������ �� ���Ŀ� ����̴� �ſ� ����������.
	�״� ������ �̸��� ������� ���ϰ�, �� ������ �ɷµ� ���� ���Ѵ�.
	����, ���� �������� ����ϱ� ���� �ϱ� ���� ���� ù ���ڰ� ���� ���� 5���� �����Ϸ��� �Ѵ�.
	����, ���� ù ���ڰ� ���� ������ 5������ ���ٸ�, ����̴� ���� ���� ģ�� ��⸦ ����Ϸ��� �Ѵ�.
	����̴� ���� ��⸦ ���� ���� �� �ִ� ���� ù ���ڸ� ��� ���غ����� �Ѵ�.
	
	�Է�
	ù° �ٿ� ������ �� N(1 <= N <= 150)�� �־�����.
	���� N�� �ٿ��� �� ������ ���� �־�����. (���� ���ĺ� �ҹ��ڷθ� �̷���� �ְ�, �ִ� 30�����̴�)
	
	���
	����̰� ���� �ټ� ���� ������ �� ���� ��쿡�� "PREDAJA" (����ǥ ����)�� ����Ѵ�.
	PREDAJA�� ũ�ξ�Ƽ�ƾ�� �׺��� �ǹ��Ѵ�.
	������ �� �ִ� ��쿡�� ������ ���� ù ���ڸ� ���������� ������� ��� ����Ѵ�.
	
	https://www.acmicpc.net/problem/1159
*/