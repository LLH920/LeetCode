#include<iostream>
#include<vector>
using namespace std;
class star {
public:
	int x; 
	int y;
};
int main()
{
	int num;
	cin >> num;
	vector<star> map;
	for (int i = 0; i < num;i++) {
		int mapx1;
		cin >> mapx1;
		int mapy1;
		cin >> mapy1;
		star s1;
		s1.x = mapx1;
		s1.y = mapy1;
		map.push_back(s1);
	}
	int qnum;
	cin >> qnum;
	vector<star> ques;
	for (int j = 0; j < qnum; j++)
	{
		int qx1, qy1,qx2,qy2;
		cin >> qx1 >> qy1 >> qx2 >> qy2;
		star qstart,qend;
		qstart.x = qx1;
		qstart.y = qy1;
		qend.x = qx2;
		qend.y = qy2;
		ques.push_back(qstart);
		ques.push_back(qend);
	}
	for (int i = 0; i < qnum; i++) {
		int x1, y1, x2, y2;
		x1 = ques[i*2].x;
		y1 = ques[i*2].y;
		x2 = ques[i*2+1].x;
		y2 = ques[i*2+1].y;
		int geshu=0;
		for (int j = 0; j < num; j++) {
			if (map[j].x > x1&&map[j].y>y1&&map[j].x<x2&&map[j].y<y2) {
				geshu++;
			}
			if ((map[j].x == x1 && map[j].y==y1)|| (map[j].x == x1 && map[j].y == y2)|| (map[j].x == x2 && map[j].y == y1) || (map[j].x == x2 && map[j].y == y2) ||(map[j].x==x1&&map[j].y>y1&&map[j].y<y2)|| (map[j].y == y1 && map[j].x>=x1&&map[j].x<x2)|| (map[j].x == x2 && map[j].y>y1&&map[j].y<y2)|| (map[j].y == y2 && map[j].x>x1&&map[j].x<x2))
			{
				geshu++;
			}
		}
		cout << geshu << endl;
	}
	return 0;
}

#include<iostream>
namespace name1 {
	int map[1000][1000];
	int num[1000][1000];
	int main()
	{
		int n;
		cin >> n;
		for (int i = 0; i < n;i++) {
			int x, y;
			cin >> x >> y;
			map[x][y]++;
		}

		return 0;
	}
}

#include<iostream>
#include<vector>
#include<algorithm>
namespace name2
{
	class Solution {
	public:
		int candy(vector<int> &ratings) 
		{
			int size = ratings.size();
			vector<int> num1(size, 1);
			for (int i = 1; i < size; i++)
			{
				if (ratings[i] > ratings[i - 1])
				{
					num1[i] = num1[i - 1] + 1;
				}
			}
			for (int i = size - 2; i >= 0; i--)
			{
				if (ratings[i] > ratings[i + 1]&&num1[i]<=num1[1+1])
				{
					num1[i] = num1[i + 1] + 1;
				}
			}

		}
	};
}