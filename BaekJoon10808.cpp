/*
	Coded by J.H.Seo
	
	http://boj.kr/fd118168ec7e45f384c36a955fc62cb1
*/

#include<bits/stdc++.h>

using namespace std;

string S;
int a[26];

int main(){
	cin >> S;
	
	for(int i = 0; i < S.length(); i++) a[S[i] - 97]++;
	for(int i = 0; i < 26; i++) cout << a[i] << " ";
	
	return 0;
}

/*
	���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����.
	�� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	�Է�
	ù° �ٿ� �ܾ� S�� �־�����.
	�ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
	
	���
	�ܾ ���ԵǾ� �ִ� a�� ����, b�� ����, ..., z�� ������ �������� �����ؼ� ����Ѵ�.
	
	https://www.acmicpc.net/problem/10808
*/ 
