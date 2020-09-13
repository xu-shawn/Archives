//技能大乱斗v1.1.5神迹永存
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
long long q, p, m, ji[10001] = { 0 }, dji[10001] = { 0 }, hp = 1000, dhp = 1000, pg = 100, dpg = 100, pw, dpw, c = 1, b = 0, a = 0, s = 0, ss = 0, dc = 0, db = 0, da = 0, ds = 0, dss = 0, u = 3, o, r = 1, l, www = 0, god = 0, lv = 1, sa = 1;
long long z3 = 0, z4 = 0, z6 = 0, z10 = 0, z11 = 0, z12 = 0, z13 = 0, z15 = 0, z16 = 0, z17 = 0, z18 = 0, z20 = 0, z21 = 0, z23 = 0, z28 = 0, z30 = 0;
long long dz3 = 0, dz4 = 0, dz6 = 0, dz10 = 0, dz11 = 0, dz12 = 0, dz13 = 0, dz15 = 0, dz16 = 0, dz17 = 0, dz18 = 0, dz20 = 0, dz21 = 0, dz23 = 0, dz28 = 0, dz30 = 0;
long long x8 = 0, x9 = 0, x11 = 0, x14 = 0, x18 = 0, x20 = 0, x22 = 0, x23 = 0, x25 = 0, x26 = 0, x27 = 0, x29 = 0;
long long dx8 = 0, dx9 = 0, dx11 = 0, dx14 = 0, dx18 = 0, dx20 = 0, dx22 = 0, dx23 = 0, dx25 = 0, dx26 = 0, dx27 = 0, dx29 = 0;
void save()
{
	ifstream fin("技能大乱斗存档.txt");
	while (fin >> sa)c = sa;
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
	cout << "v1.1.5神迹永存" << endl << "更新说明:" << endl << "1.开放了存档系统(只存你的技能券，你学过的技能会等价转化为技能券，段位不存，会在你桌面上生成一个叫技能大乱斗存档.txt的文件，删除会清空存档)" << endl;
	cout << "注意，想退游戏必须在主界面扣4，否则存档不会更新" << endl;
	system("pause");
	save();
	ji[1] = 1;
	ji[2] = 1;
	dji[1] = 1;
	dji[2] = 1;
	dji[3] = 1;
	srand((unsigned)time(NULL));
play:system("cls");
choose:cout << "段位：";
	if (lv == 1)cout << "兵" << endl;
	if (lv == 2)cout << "将" << endl;
	if (lv == 3)cout << "君" << endl;
	if (lv == 4)cout << "王" << endl;
	if (lv == 5)cout << "帝" << endl;
	if (lv == 6)cout << "圣" << endl;
	if (lv == 7)cout << "神" << endl;
	if (lv >= 8)cout << "超神" << lv - 7 << "星" << endl;
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
			m = 1;
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
			if (ji[3] == 1)cout << "火圈" << endl;
			if (ji[4] == 1)cout << "铁索连环" << endl;
			if (ji[5] == 1)cout << "火球术" << endl;
			if (ji[6] == 1)cout << "附身" << endl;
			if (ji[7] == 1)cout << "毁灭飞弹" << endl;
			if (ji[8] == 1)cout << "极限治愈术" << endl;
			if (ji[9] == 1)cout << "反转术" << endl;
			if (ji[10] == 1)cout << "牛犇面" << endl;
			if (ji[11] == 1)cout << "狂暴" << endl;
			if (ji[12] == 1)cout << "老头胡拉茬" << endl;
			if (ji[13] == 1)cout << "当老千" << endl;
			if (ji[14] == 1)cout << "初等毁灭之光" << endl;
			if (ji[15] == 1)cout << "封雷斩" << endl;
			if (ji[16] == 1)cout << "死灵之术" << endl;
			if (ji[17] == 1)cout << "生化危机" << endl;
			if (ji[18] == 1)cout << "海纳百川" << endl;
			if (ji[19] == 1)cout << "火锅诱惑" << endl;
			if (ji[20] == 1)cout << "果冻之海" << endl;
			if (ji[21] == 1)cout << "伟大的墙" << endl;
			if (ji[22] == 1)cout << "中等毁灭之光" << endl;
			if (ji[23] == 1)cout << "战争商贩" << endl;
			if (ji[24] == 1)cout << "机关长枪" << endl;
			if (ji[25] == 1)cout << "完全毁灭之光" << endl;
			if (ji[26] == 1)cout << "逆天十全王八大补汤" << endl;
			if (ji[27] == 1)cout << "歌者入侵" << endl;
			if (ji[28] == 1)cout << "秽土转生" << endl;
			if (ji[29] == 1)cout << "尸鬼封尽" << endl;
			if (ji[30] == 1)cout << "圣灵墓地" << endl;
			system("pause");
			goto skill;
		}
		if (q == 2)
		{
			system("cls");
			cout << "你想学什么技能？(输入技能编号)" << endl;
			cout << "3.火圈" << endl;
			cout << "4.铁索连环" << endl;
			cout << "5.火球术" << endl;
			cout << "6.附身" << endl;
			cout << "7.毁灭飞弹" << endl;
			cout << "8.极限治愈术" << endl;
			cout << "9.反转术" << endl;
			cout << "10.牛犇面" << endl;
			cout << "11.狂暴" << endl;
			cout << "12.老头胡拉茬" << endl;
			cout << "13.当老千" << endl;
			cout << "14.初等毁灭之光" << endl;
			cout << "15.封雷斩" << endl;
			cout << "16.死灵之术" << endl;
			cout << "17.生化危机" << endl;
			cout << "18.海纳百川" << endl;
			cout << "19.火锅诱惑" << endl;
			cout << "20.果冻之海" << endl;
			cout << "21.伟大的墙" << endl;
			cout << "22.中等毁灭之光" << endl;
			cout << "23.战争商贩" << endl;
			cout << "24.机关长枪" << endl;
			cout << "25.完全毁灭之光" << endl;
			cout << "26.逆天十全王八大补汤" << endl;
			cout << "27.歌者入侵" << endl;
			cout << "28.秽土转生" << endl;
			cout << "29.尸鬼封尽" << endl;
			cout << "30.圣灵墓地" << endl;
			cin >> q;
			if (q >= 3 && q <= 30)goto learn;
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
		for (int i = 3; i <= 30; i++)
		{
			if (3 <= i <= 5 && ji[i] == 1)sa += 1;
			if (6 <= i <= 13 && ji[i] == 1)sa += 2;
			if (14 <= i <= 21 && ji[i] == 1)sa += 4;
			if (22 <= i <= 24 && ji[i] == 1)sa += 8;
			if (25 <= i <= 30 && ji[i] == 1)sa += 16;
		}
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
	if (q == 3 && ji[3] == 0)
	{
		cout << "火圈需1初级券" << endl;
		if (c >= 1 || b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 3;
		goto buy;
	}
	if (q == 4 && ji[4] == 0)
	{
		cout << "铁索连环需1初级券" << endl;
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
		cout << "火球术需1初级券" << endl;
		if (c >= 1 || b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		cin >> q;
		www = 5;
		goto buy;
	}
	if (q == 6 && ji[6] == 0)
	{
		cout << "附身需1中级券" << endl;
		if (b >= 1 || a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
		else
		{
			cout << "券不够！" << endl;
			system("pause");
			goto skill;
		}
		www = 6;
		goto buy;
	}
	if (q == 7 && ji[7] == 0)
	{
		cout << "毁灭飞弹需1中级券" << endl;
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
		cout << "极限治愈术需1中级券" << endl;
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
		cout << "反转术需1中级券" << endl;
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
		cout << "牛犇面需1中级券" << endl;
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
		cout << "狂暴需1中级券" << endl;
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
		cout << "老头胡拉茬需1中级券" << endl;
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
		cout << "当老千需1中级券" << endl;
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
		cout << "初等毁灭之光需1高级券" << endl;
		if (a >= 1 || s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
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
		cout << "封雷斩需1高级券" << endl;
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
		cout << "死灵之术需1高级券" << endl;
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
		cout << "生化危机需1高级券" << endl;
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
		cout << "海纳百川需1高级券" << endl;
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
		cout << "火锅诱惑需1高级券" << endl;
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
		cout << "果冻之海需1高级券" << endl;
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
		cout << "伟大的墙需1高级券" << endl;
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
		cout << "中等毁灭之光需1特级券" << endl;
		if (s >= 1 || ss >= 1)cout << "确认学习？(1确认2取消，可能需要分解更高级的技能券，高一级技能券可分解为2张低一级技能券)" << endl;
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
		cout << "战争商贩需1特级券" << endl;
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
		cout << "机关长枪需1特级券" << endl;
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
		cout << "完全毁灭之光需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
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
		cout << "逆天十全王八大补汤需1神级券" << endl;
		if (ss >= 1)cout << "确认学习？(1确认2取消)" << endl;
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
		cout << "歌者入侵需1神级券" << endl;
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
		cout << "秽土转生需1神级券" << endl;
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
		cout << "尸鬼封尽需1神级券" << endl;
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
		cout << "圣灵墓地需1神级券" << endl;
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
	goto play;
fight:system("cls");
	z3 = 0;
	z4 = 0;
	z6 = 0;
	z10 = 0;
	z11 = 0;
	z12 = 0;
	z13 = 0;
	z15 = 0;
	z16 = 0;
	z20 = 0;
	z21 = 0;
	z23 = 0;
	z28 = 0;
	z30 = 0;
	dz3 = 0;
	dz4 = 0;
	dz6 = 0;
	dz10 = 0;
	dz11 = 0;
	dz12 = 0;
	dz13 = 0;
	dz15 = 0;
	dz16 = 0;
	dz20 = 0;
	dz21 = 0;
	dz23 = 0;
	dz28 = 0;
	dz30 = 0;
	x8 = 0;
	x9 = 0;
	x11 = 0;
	x14 = 0;
	x18 = 0;
	x20 = 0;
	x22 = 0;
	x23 = 0;
	x25 = 0;
	x26 = 0;
	x27 = 0;
	x29 = 0;
	dx8 = 0;
	dx9 = 0;
	dx11 = 0;
	dx14 = 0;
	dx18 = 0;
	dx20 = 0;
	dx22 = 0;
	dx23 = 0;
	dx25 = 0;
	dx26 = 0;
	dx27 = 0;
	dx29 = 0;
	if (god == 0)hp = 1000;
	dhp = 1000;
	if (god == 0)pg = 100;
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
		if (z6 == 1)
		{
			z6 = 0;
			goto win;
		}
		if (dz6 == 1)
		{
			dz6 = 0;
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
			if (z3 == 1)
			{
				cout << "你被火圈烧掉了100滴血" << endl;
				hp -= 100;
			}
			if (dz3 == 1)
			{
				cout << "敌人被火圈烧掉了100滴血" << endl;
				dhp -= 100;
			}
			if (z16 >= 1)
			{
				cout << "敌人被" << z16 << "只死灵打掉了" << 50 * z16 << "滴血" << endl;
				dhp -= 50 * z16;
			}
			if (dz16 >= 1)
			{
				cout << "你被" << dz16 << "只死灵打掉了" << 50 * dz16 << "滴血" << endl;
				hp -= 50 * z16;
			}
			if (z17 >= 1)
			{
				cout << "敌人被" << z17 << "只丧尸打掉了" << 50 * z17 << "滴血" << endl;
				dhp -= 50 * z17;
			}
			if (dz17 >= 1)
			{
				cout << "你被" << dz17 << "只丧尸打掉了" << 50 * dz17 << "滴血" << endl;
				hp -= 50 * z17;
			}
			if (z18 == 1)
			{
				cout << "浩然正气汇成涓涓细流，给你回了100滴血" << endl;
				hp += 100;
			}
			if (dz18 == 1)
			{
				cout << "弥天邪气汇成涓涓细流，给敌人回了100滴血" << endl;
				dhp += 100;
			}
			if (z23 >= 1 || dz23 >= 1)
			{
				cout << "你从" << z23 + dz23 << "名商人那里买到了" << 50 * (z23 + dz23) << "点普攻伤害" << endl;
				pg += 50 * (z23 + dz23);
				cout << "敌人从" << z23 + dz23 << "名商人那里买到了" << 50 * (z23 + dz23) << "点普攻伤害" << endl;
				dpg += 50 * (z23 + dz23);
			}
			if (z28 >= 1)
			{
				cout << "敌人被" << z28 << "只转生体打掉了" << 100 * z28 << "滴血" << endl;
				dhp -= 100 * z28;
			}
			if (dz28 >= 1)
			{
				cout << "你被" << dz28 << "只转生体打掉了" << 100 * dz28 << "滴血" << endl;
				hp -= 100 * z28;
			}
			if (z30 == 1)
			{
				z16++;
				cout << "我方圣灵墓地派出了一只亡灵" << endl;
			}

		winn:system("pause");
			system("cls");
			cout << "胜！" << endl;
			if (z21 >= 1)
			{
				z21--;
				goto AImod;
			}
			if (z20 >= 1)
			{
				z20--;
				goto AImod;
			}
			if (z15 == 1)
			{
				z15 = 0;
				goto AImod;
			}
			if (z10 == 1)
			{
				z10 = 0;
				goto AImod;
			}
			Sleep(1000);
			cout << "选择一个已学习的技能来释放：" << endl;
			cout << "1.普攻" << endl;
			cout << "2.治愈术" << endl;
			cout << "3.火圈" << endl;
			cout << "4.铁索连环" << endl;
			cout << "5.火球术" << endl;
			cout << "6.附身" << endl;
			cout << "7.毁灭飞弹" << endl;
			cout << "8.极限治愈术" << endl;
			cout << "9.反转术" << endl;
			cout << "10.牛犇面" << endl;
			cout << "11.狂暴" << endl;
			cout << "12.老头胡拉茬" << endl;
			cout << "13.当老千" << endl;
			cout << "14.初等毁灭之光" << endl;
			cout << "15.封雷斩" << endl;
			cout << "16.死灵之术" << endl;
			cout << "17.生化危机" << endl;
			cout << "18.海纳百川" << endl;
			cout << "19.火锅诱惑" << endl;
			cout << "20.果冻之海" << endl;
			cout << "21.伟大的墙" << endl;
			cout << "22.中等毁灭之光" << endl;
			cout << "23.战争商贩" << endl;
			cout << "24.机关长枪" << endl;
			cout << "25.完全毁灭之光" << endl;
			cout << "26.逆天十全王八大补汤" << endl;
			cout << "27.歌者入侵" << endl;
			cout << "28.秽土转生" << endl;
			cout << "29.尸鬼封尽" << endl;
			cout << "30.圣灵墓地" << endl;
			cin >> q;
			if (ji[q] == 1)goto pow;
			goto winn;
		pow:if (q == 1)//普攻
		{
			if (z11 == 1)pg *= 2;
			if (z12 == 1)pg /= 2;
			if (z13 == 1)pg /= 2;
			z12 = 0;
			z13 = 0;
			dhp -= pg;
			cout << "你打了敌人一拳造成了" << pg << "点伤害" << endl;
			if (z4 == 1)
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
			z12 = 0;
			z13 = 0;
			cout << "你给自己回了100滴血" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 3)//火圈
		{
			pw = 100;
			if (z11 == 1)pw *= 2;
			if (z12 == 1)pw /= 2;
			if (z13 == 1)pw /= 2;
			dhp -= pw;
			cout << "你给敌人套了一个会持续造成伤害的火圈";
			if (dz3 == 1)cout << "(已存在，本次只造成100点伤害)";
			cout << endl;
			if (z4 == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			dz3 = 1;
			z12 = 0;
			z13 = 0;
			system("pause");
			goto AImod;
		}
		if (q == 4)//铁索连环
		{
			z12 = 0;
			z13 = 0;
			if (dz4 < 1)
			{
				dz4 = 1;
				cout << "你给敌人套了一层会自动反噬伤害的铁索" << endl;
				system("pause");
				goto AImod;
			}
			cout << "铁索已存在！" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 5)//火球术
		{
			pw = 200;
			if (z11 == 1)pw *= 2;
			if (z12 == 1)pw /= 2;
			if (z13 == 1)pw /= 2;
			dhp -= pw;
			z12 = 0;
			z13 = 0;
			cout << "你用一个火球轰掉了敌人" << pw << "滴血" << endl;
			if (z4 == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 6)//附身
		{
			q = rand() % 2 + 1;
			if (q == 1)
			{
				cout << "你附在了敌人身上，下次猜拳你必胜" << endl;
				z6 = 1;
			}
			if (q == 2)cout << "附身失败" << endl;
			z12 = 0;
			z13 = 0;
			system("pause");
			goto AImod;
		}
		if (q == 7)//毁灭飞弹
		{
			pw = 300;
			if (z11 == 1)pw *= 2;
			if (z12 == 1)pw /= 2;
			if (z13 == 1)pw /= 2;
			dhp -= pw;
			z12 = 0;
			z13 = 0;
			cout << "你用一颗飞弹轰掉了敌人" << pw << "滴血" << endl;
			if (z4 == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 8)//极限治愈术
		{
			if (x8 == 1)
			{
				x8 = 0;
				hp = 1000;
				z12 = 0;
				z13 = 0;
				cout << "你给自己回满了血" << endl;
				x8 = 0;
				system("pause");
				goto AImod;
			}
			cout << "极限治愈术蓄能完成" << endl;
			x8 = 1;
			system("pause");
			goto AImod;
		}
		if (q == 9)//反转术
		{
			if (x9 == 1)
			{
				x9 = 0;
				swap(hp, dhp);
				z12 = 0;
				z13 = 0;
				cout << "你跟敌人的血量互换了" << endl;
				system("pause");
				goto AImod;
			}
			cout << "反转术蓄能完成" << endl;
			x9 = 1;
			system("pause");
			goto AImod;
		}
		if (q == 10)//牛犇面
		{
			pw = 200;
			if (z11 == 1)pw *= 2;
			if (z12 == 1)pw /= 2;
			if (z13 == 1)pw /= 2;
			dhp -= pw;
			cout << "你给敌人扣了一碗牛犇面" << endl;
			if (z4 == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			dz10++;
			z12 = 0;
			z13 = 0;
			system("pause");
			goto AImod;
		}
		if (q == 11)//狂暴
		{
			z12 = 0;
			z13 = 0;
			if (x11 == 1)
			{
				z11 = 1;
				cout << "你狂暴了，伤害翻倍" << endl;
				system("pause");
				goto AImod;
			}
			cout << "狂暴蓄能完成" << endl;
			x11 = 1;
			system("pause");
			goto AImod;
		}
		if (q == 12)//老头胡拉茬
		{
			z12 = 1;
			z13 = 0;
			cout << "你把敌人变成了伤害减半的老头，持续一回合" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 13)//当老千
		{
			z12 = 0;
			z13 = 1;
			cout << "你让敌人因为出千而心存愧疚，伤害减半，持续一回合" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 14)//初等毁灭之光
		{
			z12 = 0;
			z13 = 0;
			if (x14 == 5)
			{
				cout << "你放出毁灭之光，毁灭了除你以外的一切" << endl;
				system("pause");
				goto live;
			}
			x14++;
			if (x14 == 5)
			{
				cout << "初等毁灭之光蓄能完成" << endl;
				system("pause");
				goto AImod;

			}
			cout << "初等毁灭之光蓄能" << x14 << "/5次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 15)//封雷斩
		{
			pw = 300;
			if (z11 == 1)pw *= 2;
			if (z12 == 1)pw /= 2;
			if (z13 == 1)pw /= 2;
			dhp -= pw;
			q = rand() % 2 + 1;
			if (q == 1)
			{
				cout << "你砍了敌人一刀，并成功封印了他" << endl;
				dz15 = 1;
				z12 = 0;
				z13 = 0;
				system("pause");
				goto AImod;
			}
			cout << "你砍了敌人一刀，但没封住他" << endl;
			z12 = 0;
			z13 = 0;
			if (z4 == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 16)//死灵之术
		{
			z12 = 0;
			z13 = 0;
			z16++;
			cout << "你召唤了一只死灵" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 17)//生化危机
		{
			z12 = 0;
			z13 = 0;
			z17++;
			cout << "你召唤了一只丧尸" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 18)//海纳百川
		{
			z12 = 0;
			z13 = 0;
			z18 = 1;
			cout << "你周身环绕着浩然正气，喃喃自语：“海纳百川，有容乃大，壁立千仞，无欲则刚！！！”" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 19)//火锅诱惑
		{
			z12 = 0;
			z13 = 0;
			dz3 = 0;
			dz4 = 0;
			dz6 = 0;
			dz10 = 0;
			dz11 = 0;
			dz12 = 0;
			dz13 = 0;
			dz15 = 0;
			dz18 = 0;
			dz20 = 0;
			dz21 = 0;
			dz28 = 0;
			dz30 = 0;
			cout << "你将敌人用火锅从各种加成中引了出来" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 20)//果冻之海
		{
			z12 = 0;
			z13 = 0;
			dz20++;
			cout << "你将敌人泡在了" << dz20 << "层的果冻之海里" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 21)//伟大的墙
		{
			z12 = 0;
			z13 = 0;
			dz21++;
			cout << "你建起了第" << z21 << "层伟大的墙" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 22)//中等毁灭之光
		{
			z12 = 0;
			z13 = 0;
			if (x22 == 4)
			{
				cout << "你放出毁灭之光，毁灭了除你以外的一切" << endl;
				system("pause");
				goto live;
			}
			x22++;
			if (x25 == 4)
			{
				cout << "中等毁灭之光蓄能完成" << endl;
				system("pause");
				goto AImod;

			}
			cout << "中等毁灭之光蓄能" << x22 << "/4次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 23)//战争商贩
		{
			z12 = 0;
			z13 = 0;
			z23++;
			cout << "你招来了一名战争商人，他会卖给你伤害" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 24)//机关长枪
		{
			pw = 400;
			if (z11 == 1)pw *= 2;
			if (z12 == 1)pw /= 2;
			if (z13 == 1)pw /= 2;
			dhp -= pw;
			z12 = 0;
			z13 = 0;
			cout << "你用一根长枪扎掉了敌人" << pw << "滴血" << endl;
			if (z4 == 1)
			{
				hp -= pw;
				cout << "你被铁索勒掉了" << pw << "滴血" << endl;
			}
			system("pause");
			goto AImod;
		}
		if (q == 25)//完全毁灭之光
		{
			z12 = 0;
			z13 = 0;
			if (x25 == 3)
			{
				cout << "你放出毁灭之光，毁灭了除你以外的一切" << endl;
				system("pause");
				goto live;
			}
			x25++;
			if (x25 == 3)
			{
				cout << "完全毁灭之光蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "完全毁灭之光蓄能" << x25 << "/3次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 26)//逆天十全王八大补汤
		{
			z12 = 0;
			z13 = 0;
			if (x26 == 2)
			{
				hp += 1000;
				x26 = 0;
				cout << "你喝下了逆天十全王八大补汤,回了1000滴血(无视血量上限)" << endl;
				system("pause");
				goto AImod;
			}
			x26++;
			if (x26 == 2)
			{
				cout << "逆天十全王八大补汤蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "逆天十全王八大补汤蓄能" << x25 << "/2次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 27)//歌者入侵
		{
			z12 = 0;
			z13 = 0;
			if (x27 == 2)
			{

				x27 = 0;
				cout << "你命令歌者发出二向箔，敌人被二维化" << endl;
				system("pause");
				goto live;
			}
			x27++;
			if (x27 == 2)
			{
				cout << "二向箔蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "歌者入侵了敌人的文明" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 28)//秽土转生
		{
			z12 = 0;
			z13 = 0;
			z28++;
			cout << "你召唤了一名转生体" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 29)//尸鬼封尽
		{
			z12 = 0;
			z13 = 0;
			if (x29 == 3)
			{
				cout << "你放出尸鬼封尽，毁灭了敌人的灵魂" << endl;
				system("pause");
				goto live;
			}
			x29++;
			if (x29 == 3)
			{
				cout << "尸鬼封尽蓄能完成" << endl;
				system("pause");
				goto AImod;
			}
			cout << "尸鬼封尽蓄能" << x29 << "/3次" << endl;
			system("pause");
			goto AImod;
		}
		if (q == 30)//圣灵墓地
		{
			z12 = 0;
			z13 = 0;
			if (z30 < 1)
			{
				z30 = 1;
				cout << "你建起了圣灵墓地，它会不断派出亡灵" << endl;
				system("pause");
				goto AImod;
			}
			cout << "墓地已存在！" << endl;
			system("pause");
			goto AImod;
		}
		}
		if (q == 1 && o == 3 || q == 2 && o == 1 || q == 3 && o == 2)
		{
		lose:r++;
			if (z3 == 1)
			{
				cout << "你被火圈烧掉了100滴血" << endl;
				hp -= 100;
			}
			if (dz3 == 1)
			{
				cout << "敌人被火圈烧掉了100滴血" << endl;
				dhp -= 100;
			}
			if (z16 >= 1)
			{
				cout << "敌人被" << z16 << "只死灵打掉了" << 50 * z16 << "滴血" << endl;
				dhp -= 50 * z16;
			}
			if (dz16 >= 1)
			{
				cout << "你被" << dz16 << "只死灵打掉了" << 50 * dz16 << "滴血" << endl;
				hp -= 50 * z16;
			}
			if (z17 >= 1)
			{
				cout << "敌人被" << z17 << "只丧尸打掉了" << 50 * z17 << "滴血" << endl;
				dhp -= 50 * z17;
			}
			if (dz17 >= 1)
			{
				cout << "你被" << dz17 << "只丧尸打掉了" << 50 * dz17 << "滴血" << endl;
				hp -= 50 * z17;
			}
			if (z18 == 1)
			{
				cout << "浩然正气汇成涓涓细流，给你回了100滴血" << endl;
				hp += 100;
			}
			if (dz18 == 1)
			{
				cout << "弥天邪气汇成涓涓细流，给敌人回了100滴血" << endl;
				dhp += 100;
			}
			if (z23 >= 1 || dz23 >= 1)
			{
				cout << "你从" << z23 + dz23 << "名商人那里买到了" << 50 * (z23 + dz23) << "点普攻伤害" << endl;
				pg += 50 * (z23 + dz23);
				cout << "敌人从" << z23 + dz23 << "名商人那里买到了" << 50 * (z23 + dz23) << "点普攻伤害" << endl;
				dpg += 50 * (z23 + dz23);
			}
			if (z28 >= 1)
			{
				cout << "敌人被" << z28 << "只转生体打掉了" << 100 * z28 << "滴血" << endl;
				dhp -= 100 * z28;
			}
			if (dz28 >= 1)
			{
				cout << "你被" << dz28 << "只转生体打掉了" << 100 * dz28 << "滴血" << endl;
				hp -= 100 * z28;
			}
			system("pause");
			system("cls");
			cout << "败！" << endl;
			Sleep(1000);
			if (z21 >= 1)
			{
				z21--;
				goto AImod;
			}
			if (dz20 >= 1)
			{
				dz20--;
				goto AImod;
			}
			if (dz15 == 1)
			{
				dz15 = 0;
				goto AImod;
			}
			if (dz10 == 1)
			{
				dz10 = 0;
				goto AImod;
			}
			cout << "敌人正在思考......" << endl;
		rand:l = rand() % u + 1;
			if (dji[l] != 1)goto rand;
			if (dji[l] == 1)
			{
				if (l == 1)//普攻
				{
					if (dz11 == 1)dpg *= 2;
					if (dz12 == 1)dpg /= 2;
					if (dz13 == 1)dpg /= 2;
					dz12 = 0;
					dz13 = 0;
					hp -= dpg;
					cout << "敌人打了你一拳造成了" << dpg << "点伤害" << endl;
					if (dz4 == 1)
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
					dz12 = 0;
					dz13 = 0;
					cout << "敌人给自己回了100滴血" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 3)//火圈
				{
					dpw = 100;
					if (dz11 == 1)dpw *= 2;
					if (dz12 == 1)dpw /= 2;
					if (dz13 == 1)dpw /= 2;
					hp -= dpw;
					cout << "敌人给你套了一个会持续造成伤害的火圈";
					if (z3 == 1)cout << "(已存在，本次只造成100点伤害)";
					cout << endl;
					if (dz4 == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					z3 = 1;
					dz12 = 0;
					dz13 = 0;
					system("pause");
					goto AImod;
				}
				if (l == 4)//铁索连环
				{
					dz12 = 0;
					dz13 = 0;
					if (z4 < 1)
					{
						z4 = 1;
						cout << "敌人给你套了一层会自动反噬伤害的铁索" << endl;
						system("pause");
						goto AImod;
					}
					cout << "铁索已存在！" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 5)//火球术
				{
					dpw = 200;
					if (dz11 == 1)dpw *= 2;
					if (dz12 == 1)dpw /= 2;
					if (dz13 == 1)dpw /= 2;
					hp -= dpw;
					dz12 = 0;
					dz13 = 0;
					cout << "敌人用一个火球轰掉了你" << dpw << "滴血" << endl;
					if (dz4 == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 6)//附身
				{
					l = rand() % 2 + 1;
					if (l == 1)
					{
						cout << "敌人附在了你身上，下次猜拳敌人必胜" << endl;
						dz6 = 1;
					}
					if (l == 2)cout << "敌人附身失败" << endl;
					dz12 = 0;
					dz13 = 0;
					system("pause");
					goto AImod;
				}
				if (l == 7)//毁灭飞弹
				{
					dpw = 300;
					if (dz11 == 1)dpw *= 2;
					if (dz12 == 1)dpw /= 2;
					if (dz13 == 1)dpw /= 2;
					hp -= dpw;
					dz12 = 0;
					dz13 = 0;
					cout << "敌人用一颗飞弹轰掉了你" << dpw << "滴血" << endl;
					if (dz4 == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 8)//极限治愈术
				{
					if (dx8 == 1)
					{
						dx8 = 0;
						dhp = 1000;
						dz12 = 0;
						dz13 = 0;
						cout << "敌人给自己回满了血" << endl;
						dx8 = 0;
						system("pause");
						goto AImod;
					}
					cout << "极限治愈术蓄能完成" << endl;
					dz12 = 0;
					dz13 = 0;
					dx8 = 1;
					system("pause");
					goto AImod;
				}
				if (l == 9)//反转术
				{
					if (dx9 == 1)
					{
						dx9 = 0;
						swap(dhp, hp);
						dz12 = 0;
						dz13 = 0;
						cout << "敌人跟你的血量互换了" << endl;
						system("pause");
						goto AImod;
					}
					cout << "反转术蓄能完成" << endl;
					dx9 = 1;
					system("pause");
					goto AImod;
				}
				if (l == 10)//牛犇面
				{
					dpw = 200;
					if (dz11 == 1)dpw *= 2;
					if (dz12 == 1)dpw /= 2;
					if (dz13 == 1)dpw /= 2;
					hp -= dpw;
					cout << "敌人给你扣了一碗牛犇面" << endl;
					if (dz4 == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					z10++;
					dz12 = 0;
					dz13 = 0;
					system("pause");
					goto AImod;
				}
				if (l == 11)//狂暴
				{
					dz12 = 0;
					dz13 = 0;
					if (dx11 == 1)
					{
						dz11 = 1;
						cout << "敌人狂暴了，伤害翻倍" << endl;
						system("pause");
						goto AImod;
					}
					cout << "狂暴蓄能完成" << endl;
					dx11 = 1;
					system("pause");
					goto AImod;
				}
				if (l == 12)//老头胡拉茬
				{
					dz12 = 1;
					dz13 = 0;
					cout << "敌人把你变成了伤害减半的老头，持续一回合" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 13)//当老千
				{
					dz12 = 0;
					dz13 = 1;
					cout << "敌人让你因为出千而心存愧疚，伤害减半，持续一回合" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 14)//初等毁灭之光
				{
					dz12 = 0;
					dz13 = 0;
					if (dx14 == 5)
					{
						cout << "敌人放出毁灭之光，毁灭了除敌人以外的一切" << endl;
						system("pause");
						goto die;
					}
					dx14++;
					if (dx14 == 5)
					{
						cout << "初等毁灭之光蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "初等毁灭之光蓄能" << dx14 << "/5次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 15)//封雷斩
				{
					dpw = 300;
					if (dz11 == 1)dpw *= 2;
					if (dz12 == 1)dpw /= 2;
					if (dz13 == 1)dpw /= 2;
					hp -= dpw;
					l = rand() % 2 + 1;
					if (l == 1)
					{
						cout << "敌人砍了你一刀，并成功封印了你" << endl;
						z15 = 1;
						dz12 = 0;
						dz13 = 0;
						system("pause");
						goto AImod;
					}
					cout << "敌人砍了你一刀，但没封住你" << endl;
					dz12 = 0;
					dz13 = 0;
					if (dz4 == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 16)//死灵之术
				{
					dz12 = 0;
					dz13 = 0;
					dz16++;
					cout << "敌人召唤了一只死灵" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 17)//生化危机
				{
					dz12 = 0;
					dz13 = 0;
					dz17++;
					cout << "敌人召唤了一只丧尸" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 18)//海纳百川
				{
					dz12 = 0;
					dz13 = 0;
					dz18 = 1;
					cout << "敌人周身环绕着弥天邪气，喃喃自语：“酒肉穿肠过，神魔留我心！！！”" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 19)//火锅诱惑
				{
					z12 = 0;
					z13 = 0;
					z3 = 0;
					z4 = 0;
					z6 = 0;
					z10 = 0;
					z11 = 0;
					z12 = 0;
					z13 = 0;
					z15 = 0;
					z18 = 0;
					z20 = 0;
					z21 = 0;
					z28 = 0;
					z30 = 0;
					cout << "敌人将你用火锅从各种加成中引了出来" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 20)//果冻之海
				{
					dz12 = 0;
					dz13 = 0;
					z20++;
					cout << "敌人将你泡在了" << z20 << "层的果冻之海里" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 21)//伟大的墙
				{
					dz12 = 0;
					dz13 = 0;
					dz21++;
					cout << "敌人建起了第" << dz21 << "层伟大的墙" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 22)//中等毁灭之光
				{
					dz12 = 0;
					dz13 = 0;
					if (dx22 == 4)
					{
						cout << "敌人放出毁灭之光，毁灭了除他以外的一切" << endl;
						system("pause");
						goto die;
					}
					dx22++;
					if (dx25 == 4)
					{
						cout << "中等毁灭之光蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "中等毁灭之光蓄能" << dx22 << "/4次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 23)//战争商贩
				{
					dz12 = 0;
					dz13 = 0;
					dz23++;
					cout << "敌人招来了一名战争商人，他会卖给敌人伤害" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 24)//机关长枪
				{
					dpw = 400;
					if (dz11 == 1)dpw *= 2;
					if (dz12 == 1)dpw /= 2;
					if (dz13 == 1)dpw /= 2;
					hp -= dpw;
					dz12 = 0;
					dz13 = 0;
					cout << "敌人用一根长枪扎掉了你" << dpw << "滴血" << endl;
					if (dz4 == 1)
					{
						dhp -= dpw;
						cout << "敌人被铁索勒掉了" << dpw << "滴血" << endl;
					}
					system("pause");
					goto AImod;
				}
				if (l == 25)//完全毁灭之光
				{
					dz12 = 0;
					dz13 = 0;
					if (dx25 == 3)
					{
						cout << "敌人放出毁灭之光，毁灭了除敌人以外的一切" << endl;
						system("pause");
						goto die;
					}
					dx25++;
					if (dx25 == 3)
					{
						cout << "完全毁灭之光蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "完全毁灭之光蓄能" << dx25 << "/3次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 26)//逆天十全王八大补汤
				{
					dz12 = 0;
					dz13 = 0;
					if (dx26 == 2)
					{
						dhp += 1000;
						dx26 = 0;
						cout << "敌人喝下了逆天十全王八大补汤,回了1000滴血(无视血量上限)" << endl;
						system("pause");
						goto AImod;
					}
					dx26++;
					if (dx26 == 2)
					{
						cout << "逆天十全王八大补汤蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "逆天十全王八大补汤蓄能" << dx25 << "/2次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 27)//歌者入侵
				{
					dz12 = 0;
					dz13 = 0;
					if (dx27 == 2)
					{
						dx27 = 0;
						cout << "敌人命令歌者发出二向箔，你被二维化" << endl;
						system("pause");
						goto die;
					}
					dx27++;
					if (dx27 == 2)
					{
						cout << "二向箔蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "歌者入侵了你的文明" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 28)//秽土转生
				{
					dz12 = 0;
					dz13 = 0;
					dz28++;
					cout << "敌人召唤了一名转生体" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 29)//尸鬼封尽
				{
					dz12 = 0;
					dz13 = 0;
					if (dx29 == 3)
					{
						cout << "敌人放出尸鬼封尽，毁灭了你的灵魂" << endl;
						system("pause");
						goto die;
					}
					dx29++;
					if (dx29 == 3)
					{
						cout << "尸鬼封尽蓄能完成" << endl;
						system("pause");
						goto AImod;
					}
					cout << "尸鬼封尽蓄能" << dx29 << "/3次" << endl;
					system("pause");
					goto AImod;
				}
				if (l == 30)//圣灵墓地
				{
					dz12 = 0;
					dz13 = 0;
					if (dz30 < 1)
					{
						dz30 = 1;
						cout << "敌人建起了圣灵墓地，它会不断派出亡灵" << endl;
						system("pause");
						goto AImod;
					}
					cout << "墓地已存在！" << endl;
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
	if (lv >= 2)lv--;
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
	lv++;
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
		if (c >= 1 && www >= 3 && www <= 5)
		{
			c--;
			ji[www] = 1;
			goto play;
		}
		if (b >= 1 && www >= 3 && www <= 13)
		{
			b--;
			if (www >= 3 && www <= 5)c++;
			ji[www] = 1;
			goto play;
		}
		if (a >= 1 && www >= 3 && www <= 21)
		{
			a--;
			if (www >= 3 && www <= 13)b++;
			if (www >= 3 && www <= 5)c++;
			ji[www] = 1;
			goto play;
		}
		if (s >= 1 && www >= 3 && www <= 24)
		{
			s--;
			if (www >= 3 && www <= 21)a++;
			if (www >= 3 && www <= 13)b++;
			if (www >= 3 && www <= 5)c++;
			ji[www] = 1;
			goto play;
		}
		if (ss >= 1 && www >= 3 && www <= 30)
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
自带：普攻，治愈术
初级：火圈，铁索连环，火球术
中级：附身，毁灭飞弹，极限治愈术，反转术，牛犇面，狂暴，老头胡拉茬，当老千
高级：初等毁灭之光，封雷斩，死灵之术，生化危机，海纳百川，火锅诱惑，果冻之海，伟大的墙
特级：中等毁灭之光，战争商贩，机关长枪
神级：完全毁灭之光，逆天十全王八大补汤，歌者入侵，秽土转生，尸鬼封尽，圣灵墓地
*/
