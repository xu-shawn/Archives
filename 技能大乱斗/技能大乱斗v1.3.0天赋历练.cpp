//技能大乱斗v1.3.0天赋历练
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
long long q, p, m, ji[10001] = { 0 }, dji[10001] = { 0 }, hp = 1000, dhp = 1000, pg = 100, dpg = 100, pw, dpw, c = 1, b = 0, a = 0, s = 0, ss = 0, dc = 0, db = 0, da = 0, ds = 0, dss = 0, u = 3, o, r = 1, l, www = 0, god = 0, lv = 1, sa = 1, d = 1, win = 0, lose = 0, jie, e = 0, du = 0, GFS, dGFS;
long long firecircle = 0, Feline = 0, mindctrl = 0, cawnoodles = 0, angry = 0, oldman = 0, cheater = 0, electricity = 0, ghost = 0, zombie = 0, sea = 0, fruitice = 0, Greatwall = 0, seller = 0, reliver = 0, ghosttomb = 0, roundcut = 0, useless = 0;
long long dfirecircle = 0, dFeline = 0, dmindctrl = 0, dcawnoodles = 0, dangry = 0, doldman = 0, dcheater = 0, delectricity = 0, dghost = 0, dzombie = 0, dsea = 0, dfruitice = 0, dGreatwall = 0, dseller = 0, dreliver = 0, dghosttomb = 0, droundcut = 0, duseless = 0;
long long x_maxrecharge = 0, x_change = 0, x_angry = 0, x_destorylight_c = 0, x_sea = 0, x_fruitice = 0, x_destorylight_b = 0, x_destorylight_a = 0, x_turtlesoup = 0, x_singer = 0, x_gzkill = 0;
long long dx_maxrecharge = 0, dx_change = 0, dx_angry = 0, dx_destorylight_c = 0, dx_sea = 0, dx_fruitice = 0, dx_destorylight_b = 0, dx_destorylight_a = 0, dx_turtlesoup = 0, dx_singer = 0, dx_gzkill = 0;
void save()
{
	ifstream fin("技能大乱斗存档.txt");
	while (fin >> sa)
	{
		c = sa % 100000000;
		lv = (sa - c) / 100000000;
	}
	if (c >= 2)
	{
		p = c % 2;
		c -= p;
		c /= 2;
		b += c;
		c = p;
	}
	if (b >= 2)
	{
		p = b % 2;
		b -= p;
		b /= 2;
		a += b;
		b = p;
	}
	if (a >= 2)
	{
		p = a % 2;
		a -= p;
		a /= 2;
		s += a;
		a = p;
	}
	if (s >= 2)
	{
		p = s % 2;
		s -= p;
		s /= 2;
		ss += s;
		s = p;
	}
}
int main()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "///////////////////////////////////技能大乱斗///////////////////////////////////";
	Sleep(2000);
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "///////////////////////////////////史诗工作室///////////////////////////////////";
	Sleep(2000);
	system("cls");
	cout << "健康游戏忠告：" << endl << "抵制不良游戏,拒绝盗版游戏。" << endl << "注意自我保护,谨防受骗上当。" << endl << "适度游戏益脑,沉迷游戏伤身。" << endl << "合理安排时间,享受健康生活。";
	Sleep(5000);
	system("cls");
	cout << "v1.3.0天赋历练" << endl << "更新说明:" << endl << "1.开放了更完善的段位系统" << endl << "2.开放了天赋技能" << endl << "3.修复了一些已知bug" << endl;
	cout << "注意，想退游戏必须在主界面扣4，否则存档不会更新" << endl;
	system("pause");
	save();
	ji[1] = 1;
	ji[2] = 1;
	ji[3] = 1;
	dji[1] = 1;
	dji[2] = 1;
	dji[3] = 1;
	srand((unsigned)time(NULL));
CGFS:system("cls");
	cout << "选择你的天赋：" << endl;
	cout << "1.水系" << endl;
	cout << "2.火系" << endl;
	cout << "3.木系" << endl;
	cin >> q;
	if (q <= 0 || q >= 4)goto CGFS;
	if (q >= 1 && q <= 3)
	{
		GFS = q;
		l = rand() % 3 + 1;
		dGFS = l;
		cout << "敌人选择了";
		if (dGFS == 1)cout << "水系,";
		if (dGFS == 2)cout << "火系,";
		if (dGFS == 3)cout << "木系,";
		if (GFS == dGFS)cout << "跟你一样！" << endl;
		if (GFS == 1 && dGFS == 3 || GFS == 2 && dGFS == 1 || GFS == 3 && dGFS == 2)cout << "克你！" << endl;
		if (GFS == 1 && dGFS == 2 || GFS == 2 && dGFS == 3 || GFS == 3 && dGFS == 1)cout << "被你克！" << endl;
		system("pause");
	}
play:system("cls");
choose:cout << "段位：";
	if (lv == 1)cout << "兵I" << endl;
	if (lv == 2)cout << "将I" << endl;
	if (lv == 3)cout << "君II" << endl;
	if (lv == 4)cout << "君I" << endl;
	if (lv == 5)cout << "王III" << endl;
	if (lv == 6)cout << "王II" << endl;
	if (lv == 7)cout << "王I" << endl;
	if (lv == 8)cout << "帝III" << endl;
	if (lv == 9)cout << "帝II" << endl;
	if (lv == 10)cout << "帝I" << endl;
	if (lv == 11)cout << "半圣" << endl;
	if (lv == 12)cout << "圣IV" << endl;
	if (lv == 13)cout << "圣III" << endl;
	if (lv == 14)cout << "圣II" << endl;
	if (lv == 15)cout << "圣I" << endl;
	if (lv == 16)cout << "半神" << endl;
	if (lv == 17)cout << "神V" << endl;
	if (lv == 18)cout << "神IV" << endl;
	if (lv == 19)cout << "神III" << endl;
	if (lv == 20)cout << "神II" << endl;
	if (lv == 21)cout << "神I" << endl;
	if (lv >= 22)cout << "超神" << lv - 21 << "星" << endl;
	cout << "1.游玩" << endl << "2.技能" << endl << "3.自动合成技能券" << endl << "4.退出" << endl;
	cin >> q;
	if (q == 1)
	{
	mod:system("cls");
		cout << "1.人机模式" << endl;
		cout << "2.返回" << endl;
		cin >> q;
		if (q == 1)
		{
			system("cls");
			m = 1;
			cout << "1.段位模式" << endl << "2.休闲模式" << endl;
			cin >> q;
			if (q == 1)d = 1;
			else d = 0;
		bet:system("cls");
			cout << "是否下注？(1下2不下)" << endl;
			cin >> q;
			if (q == 1)
			{
				e = 1;
			bett:system("cls");
				cout << "押多少？(换算成初级券,0取消)" << endl;
				cin >> q;
				if (q > c + 2 * b + 4 * a + 8 * s + 16 * ss)
				{
					cout << "券不够！" << endl;
					system("pause");
					goto bett;
				}
				if (q == 0)goto bet;
				du = q;
			}
			else e = 0;
			goto fight;
		}
		if (q == 2)
		{
			system("cls");
			goto play;
		}
	}
	if (q == 2)
	{
	skill:system("cls");
		cout << "1.查看技能" << endl;
		cout << "2.学习技能" << endl;
		cout << "3.返回" << endl;
		cin >> q;
		if (q == 1)
		{
			system("cls");
			cout << "已学技能：" << endl;
			cout << "普攻" << endl;
			cout << "治愈术" << endl;
			cout << "解印术" << endl;
			if (ji[4] == 1)cout << "火圈" << endl;
			if (ji[5] == 1)cout << "铁索连环" << endl;
			if (ji[6] == 1)cout << "火球术" << endl;
			if (ji[7] == 1)cout << "附身" << endl;
			if (ji[8] == 1)cout << "毁灭飞弹" << endl;
			if (ji[9] == 1)cout << "极限治愈术" << endl;
			if (ji[10] == 1)cout << "反转术" << endl;
			if (ji[11] == 1)cout << "牛犇面" << endl;
			if (ji[12] == 1)cout << "狂暴" << endl;
			if (ji[13] == 1)cout << "老头胡拉茬" << endl;
			if (ji[14] == 1)cout << "当老千" << endl;
			if (ji[15] == 1)cout << "初等毁灭之光" << endl;
			if (ji[16] == 1)cout << "封雷斩" << endl;
			if (ji[17] == 1)cout << "死灵之术" << endl;
			if (ji[18] == 1)cout << "生化危机" << endl;
			if (ji[19] == 1)cout << "海纳百川" << endl;
			if (ji[20] == 1)cout << "火锅诱惑" << endl;
			if (ji[21] == 1)cout << "果冻之海" << endl;
			if (ji[22] == 1)cout << "伟大的墙" << endl;
			if (ji[23] == 1)cout << "中等毁灭之光" << endl;
			if (ji[24] == 1)cout << "战争商贩" << endl;
			if (ji[25] == 1)cout << "机关长枪" << endl;
			if (ji[26] == 1)cout << "无效化" << endl;
			if (ji[27] == 1)cout << "完全毁灭之光" << endl;
			if (ji[28] == 1)cout << "逆天十全王八大补汤" << endl;
			if (ji[29] == 1)cout << "歌者入侵" << endl;
			if (ji[30] == 1)cout << "秽土转生" << endl;
			if (ji[31] == 1)cout << "尸鬼封尽" << endl;
			if (ji[32] == 1)cout << "圣灵墓地" << endl;
			if (ji[33] == 1)cout << "轮回斩" << endl;
			if (GFS == 1)cout << "水漫金山" << endl;
			if (GFS == 2)cout << "星火燎原" << endl;
			if (GFS == 3)cout << "荆棘之触" << endl;
			system("pause");
			goto skill;
		}
		if (q == 2)
		{
			system("cls");
			cout << "你想学什么技能？(输入技能编号)" << endl;
			cout << "4.火圈" << endl;
			cout << "5.铁索连环" << endl;
			cout << "6.火球术" << endl;
			cout << "7.附身" << endl;
			cout << "8.毁灭飞弹" << endl;
			cout << "9.极限治愈术" << endl;
			cout << "10.反转术" << endl;
			cout << "11.牛犇面" << endl;
			cout << "12.狂暴" << endl;
			cout << "13.老头胡拉茬" << endl;
			cout << "14.当老千" << endl;
			cout << "15.初等毁灭之光" << endl;
			cout << "16.封雷斩" << endl;
			cout << "17.死灵之术" << endl;
			cout << "18.生化危机" << endl;
			cout << "19.海纳百川" << endl;
			cout << "20.火锅诱惑" << endl;
			cout << "21.果冻之海" << endl;
			cout << "22.伟大的墙" << endl;
			cout << "23.中等毁灭之光" << endl;
			cout << "24.战争商贩" << endl;
			cout << "25.机关长枪" << endl;
			cout << "26.无效化" << endl;
			cout << "27.完全毁灭之光" << endl;
			cout << "28.逆天十全王八大补汤" << endl;
			cout << "29.歌者入侵" << endl;
			cout << "30.秽土转生" << endl;
			cout << "31.尸鬼封尽" << endl;
			cout << "32.圣灵墓地" << endl;
			cout << "33.轮回斩" << endl;
			cin >> q;
			if (q >= 3 && q <= 33)goto learn;
			goto skill;
		}
		if (q == 3)goto play;
	}
	if (q == 3)
	{
		if (c >= 2)
		{
			p = c % 2;
			c -= p;
			c /= 2;
			b += c;
			c = p;
		}
		if (b >= 2)
		{
			p = b % 2;
			b -= p;
			b /= 2;
			a += b;
			b = p;
		}
		if (a >= 2)
		{
			p = a % 2;
			a -= p;
			a /= 2;
			s += a;
			a = p;
		}
		if (s >= 2)
		{
			p = s % 2;
			s -= p;
			s /= 2;
			ss += s;
			s = p;
		}
		if (dc >= 2)
		{
			p = dc % 2;
			dc -= p;
			dc /= 2;
			db += dc;
			dc = p;
		}
		if (db >= 2)
		{
			p = db % 2;
			db -= p;
			db /= 2;
			da += db;
			db = p;
		}
		if (da >= 2)
		{
			p = da % 2;
			da -= p;
			da /= 2;
			ds += da;
			da = p;
		}
		if (ds >= 2)
		{
			p = ds % 2;
			ds -= p;
			ds /= 2;
			dss += ds;
			ds = p;
		}
	}
	if (q == 4)
	{
		sa = c + 2 * b + 4 * a + 8 * s + 16 * ss;
		for (int i = 4; i <= 33; i++)
		{
			if (4 <= i <= 6 && ji[i] == 1)sa += 1;
			if (7 <= i <= 14 && ji[i] == 1)sa += 2;
			if (15 <= i <= 22 && ji[i] == 1)sa += 4;
			if (23 <= i <= 26 && ji[i] == 1)sa += 8;
			if (27 <= i <= 33 && ji[i] == 1)sa += 16;
		}
		sa += lv * 100000000;
		ofstream out("技能大乱斗存档.txt");
		out << sa;
		out.close();
		cin.get();
		return 0;
	}
	if (q == 1618986342 / 618)
	{
		cout << "开启上帝模式！" << endl;
		god = 1;
		system("pause");
		system("color e0");
		ss = 999;
		hp = 99999;
		pg = 99999;
		goto play;
	}
	goto play;
learn:system("cls");
	cout << "你拥有：" << endl;
	cout << "初级券*" << c << endl;
	cout << "中级券*" << b << endl;
	cout << "高级券*" << a << endl;
	cout << "特级券*" << s << endl;
	cout << "神级券*" << ss << endl;
	if (q == 4 && ji[4] == 0)
	{
		cout << "火圈需1初级券" << endl;
		if (c >= 1 || b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 4;
		goto buy;
	}
	if (q == 5 && ji[5] == 0)
	{
		cout << "铁索连环需1初级券" << endl;
		if (c >= 1 || b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 5;
		goto buy;
	}
	if (q == 6 && ji[6] == 0)
	{
		cout << "火球术需1初级券" << endl;
		if (c >= 1 || b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		cin >> q;
		www = 6;
		goto buy;
	}
	if (q == 7 && ji[7] == 0)
	{
		cout << "附身需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 7;
		goto buy;
	}
	if (q == 8 && ji[8] == 0)
	{
		cout << "毁灭飞弹需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 8;
		goto buy;
	}
	if (q == 9 && ji[9] == 0)
	{
		cout << "极限治愈术需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 9;
		goto buy;
	}
	if (q == 10 && ji[10] == 0)
	{
		cout << "反转术需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 10;
		goto buy;
	}
	if (q == 11 && ji[11] == 0)
	{
		cout << "牛犇面需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 11;
		goto buy;
	}
	if (q == 12 && ji[12] == 0)
	{
		cout << "狂暴需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 12;
		goto buy;
	}
	if (q == 13 && ji[13] == 0)
	{
		cout << "老头胡拉茬需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 13;
		goto buy;
	}
	if (q == 14 && ji[14] == 0)
	{
		cout << "当老千需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 14;
		goto buy;
	}
	if (q == 15 && ji[15] == 0)
	{
		cout << "初等毁灭之光需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 15;
		goto buy;
	}
	if (q == 16 && ji[16] == 0)
	{
		cout << "封雷斩需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 16;
		goto buy;
	}
	if (q == 17 && ji[17] == 0)
	{
		cout << "死灵之术需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 17;
		goto buy;
	}
	if (q == 18 && ji[18] == 0)
	{
		cout << "生化危机需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 18;
		goto buy;
	}
	if (q == 19 && ji[19] == 0)
	{
		cout << "海纳百川需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 19;
		goto buy;
	}
	if (q == 20 && ji[20] == 0)
	{
		cout << "火锅诱惑需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 20;
		goto buy;
	}
	if (q == 21 && ji[21] == 0)
	{
		cout << "果冻之海需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 21;
		goto buy;
	}
	if (q == 22 && ji[22] == 0)
	{
		cout << "伟大的墙需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 22;
		goto buy;
	}
	if (q == 23 && ji[23] == 0)
	{
		cout << "中等毁灭之光需1特级券" << endl;
		if (s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 23;
		goto buy;
	}
	if (q == 24 && ji[24] == 0)
	{
		cout << "战争商贩需1特级券" << endl;
		if (s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 24;
		goto buy;
	}
	if (q == 25 && ji[25] == 0)
	{
		cout << "机关长枪需1特级券" << endl;
		if (s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 25;
		goto buy;
	}
	if (q == 26 && ji[26] == 0)
	{
		cout << "无效化需1特级券" << endl;
		if (s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 26;
		goto buy;
	}
	if (q == 27 && ji[27] == 0)
	{
		cout << "完全毁灭之光需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 27;
		goto buy;
	}
	if (q == 28 && ji[28] == 0)
	{
		cout << "逆天十全王八大补汤需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 28;
		goto buy;
	}
	if (q == 29 && ji[29] == 0)
	{
		cout << "歌者入侵需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 29;
		goto buy;
	}
	if (q == 30 && ji[30] == 0)
	{
		cout << "秽土转生需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 30;
		goto buy;
	}
	if (q == 31 && ji[31] == 0)
	{
		cout << "尸鬼封尽需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 31;
		goto buy;
	}
	if (q == 32 && ji[32] == 0)
	{
		cout << "圣灵墓地需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 32;
		goto buy;
	}
	if (q == 33 && ji[33] == 0)
	{
		cout << "轮回斩需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 33;
		goto buy;
	}
	goto play;
fight:system("cls");
	firecircle = 0;
	Feline = 0;
	mindctrl = 0;
	cawnoodles = 0;
	angry = 0;
	oldman = 0;
	cheater = 0;
	electricity = 0;
	ghost = 0;
	fruitice = 0;
	Greatwall = 0;
	seller = 0;
	reliver = 0;
	ghosttomb = 0;
	roundcut = 1;
	dfirecircle = 0;
	dFeline = 0;
	dmindctrl = 0;
	dcawnoodles = 0;
	dangry = 0;
	doldman = 0;
	dcheater = 0;
	delectricity = 0;
	dghost = 0;
	dfruitice = 0;
	dGreatwall = 0;
	dseller = 0;
	dreliver = 0;
	dghosttomb = 0;
	droundcut = 1;
	x_maxrecharge = 0;
	x_change = 0;
	x_angry = 0;
	x_destorylight_c = 0;
	x_sea = 0;
	x_fruitice = 0;
	x_destorylight_b = 0;
	x_destorylight_a = 0;
	x_turtlesoup = 0;
	x_singer = 0;
	x_gzkill = 0;
	dx_maxrecharge = 0;
	dx_change = 0;
	dx_angry = 0;
	dx_destorylight_c = 0;
	dx_sea = 0;
	dx_fruitice = 0;
	dx_destorylight_b = 0;
	dx_destorylight_a = 0;
	dx_turtlesoup = 0;
	dx_singer = 0;
	dx_gzkill = 0;
	if (god == 0)hp = 1000;
	else hp = 99999;
	dhp = 1000;
	if (god == 0)pg = 100;
	else pg = 99999;
	dpg = 100;
	r = 1;
	if (m == 1)
	{
	AImod:system("cls");
		if (hp <= 0)goto die;
		if (dhp <= 0)goto live;
		cout << "第" << r << "回合" << endl;
		cout << "敌人血量：" << dhp << endl;
		cout << "你的血量：" << hp << endl;
		cout << "本回合你出：(1石头2剪刀3布)" << endl;
		cin >> q;
		o = rand() % 3 + 1;
		if (mindctrl == 1)
		{
			mindctrl = 0;
			goto win;
		}
		if (dmindctrl == 1)
		{
			dmindctrl = 0;
			goto lose;
		}
		if (q == 1 && o == 1 || q == 2 && o == 2 || q == 3 && o == 3)
		{
			cout << "平！" << endl;
			Sleep(1000);
			goto AImod;
		}
		if (q == 1 && o == 2 || q == 2 && o == 3 || q == 3 && o == 1)
		{
		win:r++;
			if (firecircle == 1)
			{
				cout << "你被火圈烧掉了100滴血" << endl;
				hp -= 100;
			}
			if (dfirecircle == 1)
			{
				cout << "敌人被火圈烧掉了100滴血" << endl;
				dhp -= 100;
			}
			if (ghost >= 1)
			{
				cout << "敌人被" << ghost << "只死灵打掉了" << 50 * ghost << "滴血" << endl;
				dhp -= 50 * ghost;
			}
			if (dghost >= 1)
			{
				cout << "你被" << dghost << "只死灵打掉了" << 50 * dghost << "滴血" << endl;
				hp -= 50 * ghost;
			}
			if (zombie >= 1)
			{
				cout << "敌人被" << zombie << "只丧尸打掉了" << 50 * zombie << "滴血" << endl;
				dhp -= 50 * zombie;
			}
			if (dzombie >= 1)
			{
				cout << "你被" << dzombie << "只丧尸打掉了" << 50 * dzombie << "滴血" << endl;
				hp -= 50 * zombie;
			}
			if (sea == 1)
			{
				cout << "浩然正气汇成涓涓细流，给你回了100滴血" << endl;
				hp += 100;
			}
			if (dsea == 1)
			{
				cout << "弥天邪气汇成涓涓细流，给敌人回了100滴血" << endl;
				dhp += 100;
			}
			if (seller >= 1 || dseller >= 1)
			{
				cout << "你从" << seller + dseller << "名商人那里买到了" << 50 * (seller + dseller) << "点普攻伤害" << endl;
				pg += 50 * (seller + dseller);
				cout << "敌人从" << seller + dseller << "名商人那里买到了" << 50 * (seller + dseller) << "点普攻伤害" << endl;
				dpg += 50 * (seller + dseller);
			}
			if (reliver >= 1)
			{
				cout << "敌人被" << reliver << "只转生体打掉了" << 100 * reliver << "滴血" << endl;
				dhp -= 100 * reliver;
			}
			if (dreliver >= 1)
			{
				cout << "你被" << dreliver << "只转生体打掉了" << 100 * dreliver << "滴血" << endl;
				hp -= 100 * reliver;
			}
			if (ghosttomb == 1)
			{
				ghost++;
				cout << "我方圣灵墓地派出了一只亡灵" << endl;
			}
		winn:system("pause");
			system("cls");
			cout << "胜！" << endl;
			if (Greatwall >= 1)
			{
				Greatwall--;
				goto AImod;
			}
			if (fruitice >= 1)
			{
				fruitice--;
				goto AImod;
			}
			if (electricity == 1)
			{
				electricity = 0;
				goto AImod;
			}
			if (cawnoodles == 1)
			{
				cawnoodles = 0;
				goto AImod;
			}
			if (useless >= 1)
			{
				useless--;
				goto AImod;
			}
			Sleep(1000);
			cout << "选择一个已学习的技能来释放：" << endl;
			cout << "1.普攻" << endl;
			cout << "2.治愈术" << endl;
			cout << "3.解印术" << endl;
			cout << "4.火圈" << endl;
			cout << "5.铁索连环" << endl;
			cout << "6.火球术" << endl;
			cout << "7.附身" << endl;
			cout << "8.毁灭飞弹" << endl;
			cout << "9.极限治愈术" << endl;
			cout << "10.反转术" << endl;
			cout << "11.牛犇面" << endl;
			cout << "12.狂暴" << endl;
			cout << "13.老头胡拉茬" << endl;
			cout << "14.当老千" << endl;
			cout << "15.初等毁灭之光" << endl;
			cout << "16.封雷斩" << endl;
			cout << "17.死灵之术" << endl;
			cout << "18.生化危机" << endl;
			cout << "19.海纳百川" << endl;
			cout << "20.火锅诱惑" << endl;
			cout << "21.果冻之海" << endl;
			cout << "22.伟大的墙" << endl;
			cout << "23.中等毁灭之光" << endl;
			cout << "24.战争商贩" << endl;
			cout << "25.机关长枪" << endl;
			cout << "26.无效化" << endl;
			cout << "27.完全毁灭之光" << endl;
			cout << "28.逆天十全王八大补汤" << endl;
			cout << "29.歌者入侵" << endl;
			cout << "30.秽土转生" << endl;
			cout << "31.尸鬼封尽" << endl;
			cout << "32.圣灵墓地" << endl;
			cout << "33.轮回斩" << endl;
			if (GFS == 1)cout << "34.水漫金山" << endl;
			if (GFS == 2)cout << "34.星火燎原" << endl;
			if (GFS == 3)cout << "34.荆棘之触" << endl;
			cin >> q;
			if (ji[q] == 1 || q == 34)goto pow;
			goto winn;
		pow:if (q == 1)//普攻
		{
			if (angry == 1)pg *= 2;
			if (oldman == 1)pg /= 2;
			if (cheater == 1)pg /= 2;
			oldman = 0;
			cheater = 0;
			dhp -= pg;
			cout << "你打了敌人一拳造成了" << pg << "点伤害" << endl;
			if (Feline == 1)
			{
				hp -= pg;
				cout << "你被铁索勒掉了" << pg << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 2)//治愈术
		{
			hp += 100;
			oldman = 0;
			cheater = 0;
			cout << "你给自己回了100滴血" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 3)//解印术
		{
			oldman = 0;
			cheater = 0;
			if (firecircle == 1)
			{
				firecircle = 0;
				jie = 4;
			}
			if (Feline == 1)
			{
				Feline = 0;
				jie = 5;
			}
		out3:cout << "你解除了你身上的";
			if (jie == 4)cout << "火圈" << endl;
			if (jie == 5)cout << "铁索" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 4)//火圈
		{
			pw = 100;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			cout << "你给敌人套了一个会持续造成伤害的火圈";
			if (dfirecircle == 1)cout << "(已存在，本次只造成伤害)";
			cout << endl;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			dfirecircle = 1;
			oldman = 0;
			cheater = 0;
			system("pause");
			goto AImod;
		}
		if (q == 5)//铁索连环
		{
			oldman = 0;
			cheater = 0;
			if (dFeline < 1)
			{
				dFeline = 1;
				cout << "你给敌人套了一层会自动反噬伤害的铁索" << endl;
				system("pause");
				goto AImod;
			}
			cout << "铁索已存在！" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 6)//火球术
		{
			pw = 200;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			oldman = 0;
			cheater = 0;
			cout << "你用一个火球轰掉了敌人" << pw << "滴血" << endl;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 7)//附身
		{
			q = rand() % 2 + 1;
			if (q == 1)
			{
				cout << "你附在了敌人身上，下次猜拳你必胜" << endl;
				mindctrl = 1;
			}
			if (q == 2)cout << "附身失败" << endl;
			oldman = 0;
			cheater = 0;
			system("pause");
			goto AImod;
		}
		if (q == 8)//毁灭飞弹
		{
			pw = 300;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			oldman = 0;
			cheater = 0;
			cout << "你用一颗飞弹轰掉了敌人" << pw << "滴血" << endl;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 9)//极限治愈术
		{
			if (x_maxrecharge == 1)
			{
				x_maxrecharge = 0;
				hp = 1000;
				oldman = 0;
				cheater = 0;
				cout << "你给自己回满了血" << endl;
				x_maxrecharge = 0;
				system("pause");
				goto AImod;
			}
			cout << "极限治愈术蓄能完成" << endl;
			x_maxrecharge = 1;
			system("pause");
			goto AImod;
		}
		if (q == 10)//反转术
		{
			if (x_change == 1)
			{
				x_change = 0;
				swap(hp, dhp);
				oldman = 0;
				cheater = 0;
				cout << "你跟敌人的血量互换了" << endl;
				system("pause");
				goto AImod;
			}
			cout << "反转术蓄能完成" << endl;
			x_change = 1;
			system("pause");
			goto AImod;
		}
		if (q == 11)//牛犇面
		{
			pw = 200;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			cout << "你给敌人扣了一碗牛犇面" << endl;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			dcawnoodles++;
			oldman = 0;
			cheater = 0;
			system("pause");
			goto AImod;
		}
		if (q == 12)//狂暴
		{
			oldman = 0;
			cheater = 0;
			if (x_angry == 1)
			{
				angry = 1;
				cout << "你狂暴了，伤害翻倍" << endl;
				system("pause");
				goto AImod;
			}
			cout << "狂暴蓄能完成" << endl;
			x_angry = 1;
			system("pause");
			goto AImod;
		}
		if (q == 13)//老头胡拉茬
		{
			oldman = 1;
			cheater = 0;
			cout << "你把敌人变成了伤害减半的老头，持续一回合" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 14)//当老千
		{
			oldman = 0;
			cheater = 1;
			cout << "你让敌人因为出千而心存愧疚，伤害减半，持续一回合" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 15)//初等毁灭之光
		{
			oldman = 0;
			cheater = 0;
			if (x_destorylight_c == 5)
			{
				cout << "你放出毁灭之光，毁灭了除你以外的一切" << endl;
				system("pause");
				goto live;
			}
			x_destorylight_c++;
			if (x_destorylight_c == 5)
			{
				cout << "初等毁灭之光蓄能完成" << endl;
				system("pause");
				goto AImod;

			}
			cout << "初等毁灭之光蓄能" << x_destorylight_c << "/5次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 16)//封雷斩
		{
			pw = 300;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			q = rand() % 2 + 1;
			if (q == 1)
			{
				cout << "你砍了敌人一刀，并成功封印了他" << endl;
				delectricity = 1;
				oldman = 0;
				cheater = 0;
				system("pause");
				goto AImod;
			}
			cout << "你砍了敌人一刀，但没封住他" << endl;
			oldman = 0;
			cheater = 0;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 17)//死灵之术
		{
			oldman = 0;
			cheater = 0;
			ghost++;
			cout << "你召唤了一只死灵" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 18)//生化危机
		{
			oldman = 0;
			cheater = 0;
			zombie++;
			cout << "你召唤了一只丧尸" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 19)//海纳百川
		{
			oldman = 0;
			cheater = 0;
			sea = 1;
			cout << "你周身环绕着浩然正气，喃喃自语：“海纳百川，有容乃大，壁立千仞，无欲则刚！！！”" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 20)//火锅诱惑
		{
			oldman = 0;
			cheater = 0;
			dfirecircle = 0;
			dFeline = 0;
			dmindctrl = 0;
			dcawnoodles = 0;
			dangry = 0;
			doldman = 0;
			dcheater = 0;
			delectricity = 0;
			dsea = 0;
			dfruitice = 0;
			dGreatwall = 0;
			dreliver = 0;
			dghosttomb = 0;
			cout << "你将敌人用火锅从各种加成中引了出来" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 21)//果冻之海
		{
			oldman = 0;
			cheater = 0;
			dfruitice++;
			cout << "你将敌人泡在了" << dfruitice << "层的果冻之海里" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 22)//伟大的墙
		{
			oldman = 0;
			cheater = 0;
			dGreatwall++;
			cout << "你建起了第" << Greatwall << "层伟大的墙" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 23)//中等毁灭之光
		{
			oldman = 0;
			cheater = 0;
			if (x_destorylight_b == 4)
			{
				cout << "你放出毁灭之光，毁灭了除你以外的一切" << endl;
				system("pause");
				goto live;
			}
			x_destorylight_b++;
			if (x_destorylight_a == 4)
			{
				cout << "中等毁灭之光蓄能完成" << endl;
				system("pause");
				goto AImod;

			}
			cout << "中等毁灭之光蓄能" << x_destorylight_b << "/4次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 24)//战争商贩
		{
			oldman = 0;
			cheater = 0;
			seller++;
			cout << "你招来了一名战争商人，他会卖给你伤害" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 25)//机关长枪
		{
			pw = 400;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			oldman = 0;
			cheater = 0;
			cout << "你用一根长枪扎掉了敌人" << pw << "滴血" << endl;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 26)
		{
			oldman = 0;
			cheater = 0;
			duseless++;
			cout << "下次敌人释放的技能将无效" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 27)//完全毁灭之光
		{
			oldman = 0;
			cheater = 0;
			if (x_destorylight_a == 3)
			{
				cout << "你放出毁灭之光，毁灭了除你以外的一切" << endl;
				system("pause");
				goto live;
			}
			x_destorylight_a++;
			if (x_destorylight_a == 3)
			{
				cout << "完全毁灭之光蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "完全毁灭之光蓄能" << x_destorylight_a << "/3次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 28)//逆天十全王八大补汤
		{
			oldman = 0;
			cheater = 0;
			if (x_turtlesoup == 2)
			{
				hp += 1000;
				x_turtlesoup = 0;
				cout << "你喝下了逆天十全王八大补汤,回了1000滴血(无视血量上限)" << endl;
				system("pause");
				goto AImod;
			}
			x_turtlesoup++;
			if (x_turtlesoup == 2)
			{
				cout << "逆天十全王八大补汤蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "逆天十全王八大补汤蓄能" << x_turtlesoup << "/2次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 29)//歌者入侵
		{
			oldman = 0;
			cheater = 0;
			if (x_singer == 2)
			{

				x_singer = 0;
				cout << "你命令歌者发出二向箔，敌人被二维化" << endl;
				system("pause");
				goto live;
			}
			x_singer++;
			if (x_singer == 2)
			{
				cout << "二向箔蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "歌者入侵了敌人的文明" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 30)//秽土转生
		{
			oldman = 0;
			cheater = 0;
			reliver++;
			cout << "你召唤了一名转生体" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 31)//尸鬼封尽
		{
			oldman = 0;
			cheater = 0;
			if (x_gzkill == 3)
			{
				cout << "你放出尸鬼封尽，毁灭了敌人的灵魂" << endl;
				system("pause");
				goto live;
			}
			x_gzkill++;
			if (x_gzkill == 3)
			{
				cout << "尸鬼封尽蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "尸鬼封尽蓄能" << x_gzkill << "/3次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 32)//圣灵墓地
		{
			oldman = 0;
			cheater = 0;
			if (ghosttomb < 1)
			{
				ghosttomb = 1;
				cout << "你建起了圣灵墓地，它会不断派出亡灵" << endl;
				system("pause");
				goto AImod;
			}
			cout << "墓地已存在！" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 33)
		{
			pw = roundcut * 100;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			oldman = 0;
			cheater = 0;
			cout << "你释放了第" << roundcut << "层轮回斩打掉了敌人" << pw << "滴血" << endl;
			roundcut++;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 34)
		{
			pw = 200;
			if (GFS == 1 && dGFS == 2)pw *= 2;
			if (GFS == 1 && dGFS == 3)pw /= 2;
			if (GFS == 2 && dGFS == 3)pw *= 2;
			if (GFS == 2 && dGFS == 1)pw /= 2;
			if (GFS == 3 && dGFS == 1)pw *= 2;
			if (GFS == 3 && dGFS == 2)pw /= 2;
			if (angry == 1)pw *= 2;
			if (oldman == 1)pw /= 2;
			if (cheater == 1)pw /= 2;
			dhp -= pw;
			oldman = 0;
			cheater = 0;
			cout << "你用自己的天赋技能打掉了敌人" << pw << "滴血" << endl;
			if (Feline == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		}
		if (q == 1 && o == 3 || q == 2 && o == 1 || q == 3 && o == 2)
		{
		lose:r++;
			if (firecircle == 1)
			{
				cout << "你被火圈烧掉了100滴血" << endl;
				hp -= 100;
			}
			if (dfirecircle == 1)
			{
				cout << "敌人被火圈烧掉了100滴血" << endl;
				dhp -= 100;
			}
			if (ghost >= 1)
			{
				cout << "敌人被" << ghost << "只死灵打掉了" << 50 * ghost << "滴血" << endl;
				dhp -= 50 * ghost;
			}
			if (dghost >= 1)
			{
				cout << "你被" << dghost << "只死灵打掉了" << 50 * dghost << "滴血" << endl;
				hp -= 50 * ghost;
			}
			if (zombie >= 1)
			{
				cout << "敌人被" << zombie << "只丧尸打掉了" << 50 * zombie << "滴血" << endl;
				dhp -= 50 * zombie;
			}
			if (dzombie >= 1)
			{
				cout << "你被" << dzombie << "只丧尸打掉了" << 50 * dzombie << "滴血" << endl;
				hp -= 50 * zombie;
			}
			if (sea == 1)
			{
				cout << "浩然正气汇成涓涓细流，给你回了100滴血" << endl;
				hp += 100;
			}
			if (dsea == 1)
			{
				cout << "弥天邪气汇成涓涓细流，给敌人回了100滴血" << endl;
				dhp += 100;
			}
			if (seller >= 1 || dseller >= 1)
			{
				cout << "你从" << seller + dseller << "名商人那里买到了" << 50 * (seller + dseller) << "点普攻伤害" << endl;
				pg += 50 * (seller + dseller);
				cout << "敌人从" << seller + dseller << "名商人那里买到了" << 50 * (seller + dseller) << "点普攻伤害" << endl;
				dpg += 50 * (seller + dseller);
			}
			if (reliver >= 1)
			{
				cout << "敌人被" << reliver << "只转生体打掉了" << 100 * reliver << "滴血" << endl;
				dhp -= 100 * reliver;
			}
			if (dreliver >= 1)
			{
				cout << "你被" << dreliver << "只转生体打掉了" << 100 * dreliver << "滴血" << endl;
				hp -= 100 * reliver;
			}
			system("pause");
			system("cls");
			cout << "败！" << endl;
			Sleep(1000);
			if (Greatwall >= 1)
			{
				Greatwall--;
				goto AImod;
			}
			if (dfruitice >= 1)
			{
				dfruitice--;
				goto AImod;
			}
			if (delectricity == 1)
			{
				delectricity = 0;
				goto AImod;
			}
			if (dcawnoodles == 1)
			{
				dcawnoodles = 0;
				goto AImod;
			}
			if (duseless >= 1)
			{
				duseless--;
				goto AImod;
			}
			cout << "敌人正在思考......" << endl;
		rand:l = rand() % u + 1;
			if (dji[l] != 1)goto rand;
			if (dji[l] == 1)
			{
				if (l == 1)//普攻
				{
					if (dangry == 1)dpg *= 2;
					if (doldman == 1)dpg /= 2;
					if (dcheater == 1)dpg /= 2;
					doldman = 0;
					dcheater = 0;
					hp -= dpg;
					cout << "敌人打了你一拳造成了" << dpg << "点伤害" << endl;
					if (dFeline == 1)
					{
						dhp -= dpg;
						cout << "敌人被铁索勒掉了" << dpg << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 2)//治愈术
				{
					dhp += 100;
					doldman = 0;
					dcheater = 0;
					cout << "敌人给自己回了100滴血" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 3)//解印术
				{
					doldman = 0;
					dcheater = 0;
					if (dfirecircle == 1)
					{
						dfirecircle = 0;
						jie = 4;
						goto dout3;
					}
					if (dFeline == 1)
					{
						dFeline = 0;
						jie = 5;
						goto dout3;
					}
					else goto rand;
				dout3:cout << "敌人解除了身上的";
					if (jie == 4)cout << "火圈" << endl;
					if (jie == 5)cout << "铁索" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 4)//火圈
				{
					dpw = 100;
					if (angry == 1)dpw *= 2;
					if (oldman == 1)dpw /= 2;
					if (cheater == 1)dpw /= 2;
					hp -= dpw;
					cout << "敌人给你套了一个会持续造成伤害的火圈";
					if (dfirecircle == 1)cout << "(已存在，本次只造成伤害)";
					cout << endl;
					if (dFeline == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << pw << "滴血" << endl;
					}
					dfirecircle = 1;
					doldman = 0;
					dcheater = 0;
					system("pause");
					goto AImod;
				}
				if (l == 5)//铁索连环
				{
					doldman = 0;
					dcheater = 0;
					if (dFeline < 1)
					{
						dFeline = 1;
						cout << "敌人给你套了一层会自动反噬伤害的铁索" << endl;
						system("pause");
						goto AImod;
					}
					cout << "铁索已存在！" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 6)//火球术
				{
					dpw = 200;
					if (dangry == 1)dpw *= 2;
					if (doldman == 1)dpw /= 2;
					if (dcheater == 1)dpw /= 2;
					hp -= dpw;
					doldman = 0;
					dcheater = 0;
					cout << "敌人用一个火球轰掉了你" << dpw << "滴血" << endl;
					if (dFeline == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << pw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 7)//附身
				{
					l = rand() % 2 + 1;
					if (l == 1)
					{
						cout << "敌人附在了你身上，下次猜拳敌人必胜" << endl;
						dmindctrl = 1;
					}
					if (l == 2)cout << "附身失败" << endl;
					doldman = 0;
					dcheater = 0;
					system("pause");
					goto AImod;
				}
				if (l == 8)//毁灭飞弹
				{
					dpw = 300;
					if (dangry == 1)dpw *= 2;
					if (doldman == 1)dpw /= 2;
					if (dcheater == 1)dpw /= 2;
					hp -= dpw;
					doldman = 0;
					dcheater = 0;
					cout << "敌人用一颗飞弹轰掉了你" << dpw << "滴血" << endl;
					if (dFeline == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 9)//极限治愈术
				{
					if (dx_maxrecharge == 1)
					{
						dx_maxrecharge = 0;
						dhp = 1000;
						doldman = 0;
						dcheater = 0;
						cout << "敌人给自己回满了血" << endl;
						dx_maxrecharge = 0;
						system("pause");
						goto AImod;
					}
					cout << "极限治愈术蓄能完成" << endl;
					dx_maxrecharge = 1;
					system("pause");
					goto AImod;
				}
				if (l == 10)//反转术
				{
					if (dx_change == 1)
					{
						dx_change = 0;
						swap(hp, dhp);
						doldman = 0;
						dcheater = 0;
						cout << "敌人跟你的血量互换了" << endl;
						system("pause");
						goto AImod;
					}
					cout << "反转术蓄能完成" << endl;
					dx_change = 1;
					system("pause");
					goto AImod;
				}
				if (l == 11)//牛犇面
				{
					dpw = 200;
					if (dangry == 1)dpw *= 2;
					if (doldman == 1)dpw /= 2;
					if (dcheater == 1)dpw /= 2;
					hp -= dpw;
					cout << "敌人给你扣了一碗牛犇面造成了" << dpw << "点伤害" << endl;
					if (dFeline == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					dcawnoodles++;
					doldman = 0;
					dcheater = 0;
					system("pause");
					goto AImod;
				}
				if (l == 12)//狂暴
				{
					doldman = 0;
					dcheater = 0;
					if (dx_angry == 1)
					{
						dangry = 1;
						cout << "敌人狂暴了，伤害翻倍" << endl;
						system("pause");
						goto AImod;
					}
					cout << "狂暴蓄能完成" << endl;
					dx_angry = 1;
					system("pause");
					goto AImod;
				}
				if (l == 13)//老头胡拉茬
				{
					doldman = 1;
					dcheater = 0;
					cout << "敌人把你变成了伤害减半的老头，持续一回合" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 14)//当老千
				{
					doldman = 0;
					dcheater = 1;
					cout << "敌人让你因为出千而心存愧疚，伤害减半，持续一回合" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 15)//初等毁灭之光
				{
					doldman = 0;
					dcheater = 0;
					if (dx_destorylight_c == 5)
					{
						cout << "敌人放出毁灭之光，毁灭了除敌人以外的一切" << endl;
						system("pause");
						goto die;
					}
					dx_destorylight_c++;
					if (dx_destorylight_c == 5)
					{
						cout << "初等毁灭之光蓄能完成" << endl;
						system("pause");
						goto AImod;

					}
					cout << "初等毁灭之光蓄能" << dx_destorylight_c << "/5次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 16)//封雷斩
				{
					dpw = 300;
					if (dangry == 1)dpw *= 2;
					if (doldman == 1)dpw /= 2;
					if (dcheater == 1)dpw /= 2;
					hp -= dpw;
					l = rand() % 2 + 1;
					if (l == 1)
					{
						cout << "敌人砍了你一刀造成了" << dpw << "点伤害，并成功封印了你" << endl;
						electricity = 1;
						doldman = 0;
						dcheater = 0;
						system("pause");
						goto AImod;
					}
					cout << "敌人砍了你一刀，但没封住你" << endl;
					doldman = 0;
					dcheater = 0;
					if (dFeline == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << pw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 17)//死灵之术
				{
					doldman = 0;
					dcheater = 0;
					dghost++;
					cout << "敌人召唤了一只死灵" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 18)//生化危机
				{
					doldman = 0;
					dcheater = 0;
					dzombie++;
					cout << "敌人召唤了一只丧尸" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 19)//海纳百川
				{
					doldman = 0;
					dcheater = 0;
					dsea = 1;
					cout << "敌人周身环绕着浩然正气，喃喃自语：“海纳百川，有容乃大，壁立千仞，无欲则刚！！！”" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 20)//火锅诱惑
				{
					doldman = 0;
					dcheater = 0;
					firecircle = 0;
					Feline = 0;
					mindctrl = 0;
					cawnoodles = 0;
					angry = 0;
					oldman = 0;
					cheater = 0;
					electricity = 0;
					sea = 0;
					fruitice = 0;
					Greatwall = 0;
					reliver = 0;
					ghosttomb = 0;
					cout << "敌人将你用火锅从各种加成中引了出来" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 21)//果冻之海
				{
					doldman = 0;
					dcheater = 0;
					fruitice++;
					cout << "敌人将你泡在了" << fruitice << "层的果冻之海里" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 22)//伟大的墙
				{
					doldman = 0;
					dcheater = 0;
					dGreatwall++;
					cout << "敌人建起了第" << dGreatwall << "层伟大的墙" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 23)//中等毁灭之光
				{
					doldman = 0;
					dcheater = 0;
					if (dx_destorylight_b == 4)
					{
						cout << "敌人放出毁灭之光，毁灭了除敌人以外的一切" << endl;
						system("pause");
						goto die;
					}
					dx_destorylight_b++;
					if (dx_destorylight_a == 4)
					{
						cout << "中等毁灭之光蓄能完成" << endl;
						system("pause");
						goto AImod;

					}
					cout << "中等毁灭之光蓄能" << dx_destorylight_b << "/4次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 24)//战争商贩
				{
					doldman = 0;
					dcheater = 0;
					dseller++;
					cout << "敌人招来了一名战争商人，他会卖给敌人伤害" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 25)//机关长枪
				{
					dpw = 400;
					if (dangry == 1)dpw *= 2;
					if (doldman == 1)dpw /= 2;
					if (dcheater == 1)dpw /= 2;
					hp -= dpw;
					doldman = 0;
					dcheater = 0;
					cout << "敌人用一根长枪扎掉了你" << dpw << "滴血" << endl;
					if (Feline == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 26)
				{
					doldman = 0;
					dcheater = 0;
					duseless++;
					cout << "下次你释放的技能将无效" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 27)//完全毁灭之光
				{
					doldman = 0;
					dcheater = 0;
					if (dx_destorylight_a == 3)
					{
						cout << "敌人放出毁灭之光，毁灭了除敌人以外的一切" << endl;
						system("pause");
						goto die;
					}
					dx_destorylight_a++;
					if (dx_destorylight_a == 3)
					{
						cout << "完全毁灭之光蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "完全毁灭之光蓄能" << dx_destorylight_a << "/3次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 28)//逆天十全王八大补汤
				{
					doldman = 0;
					dcheater = 0;
					if (dx_turtlesoup == 2)
					{
						dhp += 1000;
						dx_turtlesoup = 0;
						cout << "敌人喝下了逆天十全王八大补汤,回了1000滴血(无视血量上限)" << endl;
						system("pause");
						goto AImod;
					}
					dx_turtlesoup++;
					if (dx_turtlesoup == 2)
					{
						cout << "逆天十全王八大补汤蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "逆天十全王八大补汤蓄能" << dx_turtlesoup << "/2次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 29)//歌者入侵
				{
					doldman = 0;
					dcheater = 0;
					if (dx_singer == 2)
					{

						dx_singer = 0;
						cout << "敌人命令歌者发出二向箔，你被二维化" << endl;
						system("pause");
						goto live;
					}
					dx_singer++;
					if (dx_singer == 2)
					{
						cout << "二向箔蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "歌者入侵了你的文明" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 30)//秽土转生
				{
					doldman = 0;
					dcheater = 0;
					dreliver++;
					cout << "敌人召唤了一名转生体" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 31)//尸鬼封尽
				{
					doldman = 0;
					dcheater = 0;
					if (dx_gzkill == 3)
					{
						cout << "敌人放出尸鬼封尽，毁灭了你的灵魂" << endl;
						system("pause");
						goto live;
					}
					dx_gzkill++;
					if (dx_gzkill == 3)
					{
						cout << "尸鬼封尽蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "尸鬼封尽蓄能" << dx_gzkill << "/3次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 32)//圣灵墓地
				{
					doldman = 0;
					dcheater = 0;
					if (dghosttomb < 1)
					{
						dghosttomb = 1;
						cout << "敌人建起了圣灵墓地，它会不断派出亡灵" << endl;
						system("pause");
						goto AImod;
					}
					cout << "墓地已存在！" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 33)//轮回斩
				{
					dpw = droundcut * 100;
					if (dangry == 1)dpw *= 2;
					if (doldman == 1)dpw /= 2;
					if (dcheater == 1)dpw /= 2;
					dhp -= pw;
					doldman = 0;
					dcheater = 0;
					cout << "敌人释放了第" << droundcut << "层轮回斩打掉了你" << dpw << "滴血" << endl;
					droundcut++;
					if (dFeline == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				goto rand;
			}
			goto rand;
		}
	}
	goto AImod;
die:system("cls");
	cout << "输了！" << endl << "获得初级券*1(敌人获得中级券*1)" << endl;
	c++;
	db++;
	if (d == 1 && lv >= 2)
	{
		lv--;
		cout << "段位下降！" << endl;
	}
	if (e == 1)
	{
		cout << "押错了，赌注清零！" << endl;
		c = c + 2 * b + 4 * a + 8 * s + 16 * ss;
		c -= du;
		if (c >= 2)
		{
			p = c % 2;
			c -= p;
			c /= 2;
			b += c;
			c = p;
		}
		if (b >= 2)
		{
			p = b % 2;
			b -= p;
			b /= 2;
			a += b;
			b = p;
		}
		if (a >= 2)
		{
			p = a % 2;
			a -= p;
			a /= 2;
			s += a;
			a = p;
		}
		if (s >= 2)
		{
			p = s % 2;
			s -= p;
			s /= 2;
			ss += s;
			s = p;
		}
	}
	lose++;
	cout << "这是你" << lose << "次失败" << endl;
	cout << "没关系，我相信你不会放弃！" << endl;
	for (int i = 1; i++;)
	{
		if (dji[i] == 0)
		{
			if (i >= 4 && i <= 5 && c >= 1)
			{
				dc--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 6 && i <= 13 && b >= 1)
			{
				db--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 14 && i <= 21 && a >= 1)
			{
				da--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 22 && i <= 24 && s >= 1)
			{
				ds--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 25 && i <= 30 && ss >= 1)
			{
				dss--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
		}
	}
	system("pause");
	goto play;
live:system("cls");
	cout << "赢了！" << endl << "获得中级券*1(敌人获得初级券*1)" << endl;
	b++;
	dc++;
	if (d == 1)
	{
		lv++;
		cout << "段位上升！" << endl;
	}
	if (e == 1)
	{
		cout << "押中了，赌注翻倍！" << endl;
		c = c + 2 * b + 4 * a + 8 * s + 16 * ss;
		c += du;
		if (c >= 2)
		{
			p = c % 2;
			c -= p;
			c /= 2;
			b += c;
			c = p;
		}
		if (b >= 2)
		{
			p = b % 2;
			b -= p;
			b /= 2;
			a += b;
			b = p;
		}
		if (a >= 2)
		{
			p = a % 2;
			a -= p;
			a /= 2;
			s += a;
			a = p;
		}
		if (s >= 2)
		{
			p = s % 2;
			s -= p;
			s /= 2;
			ss += s;
			s = p;
		}
	}
	win++;
	cout << "这是你第" << win << "次胜利！" << endl;
	if (win == 1)
	{
		cout << "当年，我们还都是小学生" << endl;
		Sleep(1000);
		cout << "正处在懵懂无知的年龄" << endl;
		Sleep(1000);
		cout << "却在现在看来似乎很幼稚的“小刀一把”游戏中相识相知" << endl;
		Sleep(1000);
		cout << "不经意间定下了一直维持到现在的缘分" << endl;
	}
	if (win == 2)
	{
		cout << "Z当时在我们中学习最好，人缘也好" << endl;
		Sleep(1000);
		cout << "G有点小腹黑，但也开朗善良" << endl;
		Sleep(1000);
		cout << "S“见多识广”，总是充当了我们的搞笑担当" << endl;
		Sleep(1000);
		cout << "我比较平凡，最大的优点可能就是善于交往……" << endl;
	}
	if (win == 4)
	{
		cout << "这个游戏一开始是个口头游戏（声控游戏，S语）" << endl;
		Sleep(1000);
		cout << "可以说它承载着我们从小学五年级到现在的回忆" << endl;
		Sleep(1000);
		cout << "当时我们已经很好了，还自称“铁四角”" << endl;
		Sleep(1000);
		cout << "那个同名微信群现在还沉寂在我妈的手机里" << endl;
	}
	if (win == 7)
	{
		cout << "时光荏苒，不久后我们小升初了" << endl;
		Sleep(1000);
		cout << "各自奔前程的身影，匆匆渐行渐远" << endl;
		Sleep(1000);
		cout << "原学校附属中学只留下了我和S" << endl;
		Sleep(1000);
		cout << "只有假期或升学，我们铁四角才能聚一聚" << endl;
	}
	if (win == 10)
	{
		cout << "我接触了C++编程，萌生了把它变成真正游戏的念头" << endl;
		Sleep(1000);
		cout << "一开始我提出了这个想法，初中同学没一个支持我的，" << endl;
		Sleep(1000);
		cout << "老师还差点给我停课（他规定不能编写游戏代码）" << endl;
		Sleep(1000);
		cout << "但我默默地把这个想法埋在了心里" << endl;
	}
	if (win == 15)
	{
		cout << "为了编写成功，我开始奋力弥补因“颓废”落下的编程课" << endl;
		Sleep(1000);
		cout << "无数个日夜，左手面包右手鼠标奋战在机房" << endl;
		Sleep(1000);
		cout << "为了它，我还做了几个游戏练手" << endl;
		Sleep(1000);
		cout << "我感觉我在不断地接近梦想" << endl;
	}
	if (win == 20)
	{
		cout << "我在发布的半年前在OJ上筹备，之后销声匿迹了半年" << endl;
		Sleep(1000);
		cout << "导致不少人都以为这游戏烂尾了" << endl;
		Sleep(1000);
		cout << "但只有我知道，我不可能放弃它，不可能放弃我的回忆与羁绊" << endl;
		Sleep(1000);
		cout << "结果大家有目共睹，我成功了" << endl;
	}
	if (win == 21)
	{
		cout << "如果你是连胜，到现在都超神了吧" << endl;
		Sleep(1000);
		cout << "应该已经看开了很多" << endl;
		Sleep(1000);
		cout << "那么，我告诉你一个秘密：" << endl;
		Sleep(1000);
		cout << "26,代表Z," << endl;
		Sleep(1000);
		cout << "19,代表我" << endl;
		Sleep(1000);
		cout << "7,代表G" << endl;
		Sleep(1000);
		cout << "又一个19，代表S" << endl;
		Sleep(1000);
		cout << "连在一起，就能在主界面开启上帝模式" << endl;
		Sleep(1000);
		cout << "祝您游戏愉快，方便的话，在http://noi.openjudge.cn/topic/111677/留个言，" << endl;
		Sleep(1000);
		cout << "愿我们的友谊都能长存" << endl;
	}
	if (win >= 9)cout << "愿我们的友谊都能长存" << endl;
	for (int i = 1; i++;)
	{
		if (dji[i] == 0)
		{
			if (i >= 4 && i <= 5 && c >= 1)
			{
				dc--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 6 && i <= 13 && b >= 1)
			{
				db--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 14 && i <= 21 && a >= 1)
			{
				da--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 22 && i <= 24 && s >= 1)
			{
				ds--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
			if (i >= 25 && i <= 30 && ss >= 1)
			{
				dss--;
				dji[i] = 1;
				u++;
				system("pause");
				goto play;
			}
		}
	}
	system("pause");
	goto play;
buy:cin >> q;
	if (q == 1)
	{
		if (c >= 1 && www >= 4 && www <= 6)
		{
			c--;
			ji[www] = 1;
			goto play;
		}
		if (b >= 1 && www >= 4 && www <= 14)
		{
			b--;
			if (www >= 3 && www <= 5)c++;
			ji[www] = 1;
			goto play;
		}
		if (a >= 1 && www >= 3 && www <= 22)
		{
			a--;
			if (www >= 3 && www <= 13)b++;
			if (www >= 3 && www <= 5)c++;
			ji[www] = 1;
			goto play;
		}
		if (s >= 1 && www >= 3 && www <= 26)
		{
			s--;
			if (www >= 3 && www <= 21)a++;
			if (www >= 3 && www <= 13)b++;
			if (www >= 3 && www <= 5)c++;
			ji[www] = 1;
			goto play;
		}
		if (ss >= 1 && www >= 3 && www <= 33)
		{
			ss--;
			if (www >= 3 && www <= 24)s++;
			if (www >= 3 && www <= 21)a++;
			if (www >= 3 && www <= 13)b++;
			if (www >= 3 && www <= 5)c++;
			ji[www] = 1;
			goto play;
		}
	}
	goto skill;
make:if (c >= 2)
{
	p = c % 2;
	c -= p;
	c /= 2;
	b += c;
	c = p;
}
if (b >= 2)
{
	p = b % 2;
	b -= p;
	b /= 2;
	a += b;
	b = p;
}
if (a >= 2)
{
	p = a % 2;
	a -= p;
	a /= 2;
	s += a;
	a = p;
}
if (s >= 2)
{
	p = s % 2;
	s -= p;
	s /= 2;
	ss += s;
	s = p;
}
if (dc >= 2)
{
	p = dc % 2;
	dc -= p;
	dc /= 2;
	db += dc;
	dc = p;
}
if (db >= 2)
{
	p = db % 2;
	db -= p;
	db /= 2;
	da += db;
	db = p;
}
if (da >= 2)
{
	p = da % 2;
	da -= p;
	da /= 2;
	ds += da;
	da = p;
}
if (ds >= 2)
{
	p = ds % 2;
	ds -= p;
	ds /= 2;
	dss += ds;
	ds = p;
}
goto play;
}
/*
自带：普攻，治愈术，解印术
初级：火圈，铁索连环，火球术
中级：附身，毁灭飞弹，极限治愈术，反转术，牛犇面，狂暴，老头胡拉茬，当老千
高级：初等毁灭之光，封雷斩，死灵之术，生化危机，海纳百川，火锅诱惑，果冻之海，伟大的墙
特级：中等毁灭之光，战争商贩，机关长枪，无效化
神级：完全毁灭之光，逆天十全王八大补汤，歌者入侵，秽土转生，尸鬼封尽，圣灵墓地，轮回斩
*/
