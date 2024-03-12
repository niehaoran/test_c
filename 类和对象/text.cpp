#include<iostream>
//关键字 class
using namespace std;
//设计一个类：描述人
//属性：姓名，性别，年龄
//方法：走路，吃饭
//类中定义的属性和行为都是私有权限
//如果需要访问的话，需要修改权限，public

//访问函数
// private - 私有权限
// protected - 保护权限
// public - 公开权限


class Person
{
public://可以在内外进行访问
	string name;
	int age;
	string gender;//性别
	int score;//成绩

	void walk()
	{
		cout << "人类会走路" << endl;
	}

	void eat()
	{
		cout << "人类会吃饭" << endl;
	}

	void sleep()
	{
		cout << "人类都会睡觉" << endl;
	}
};

int main()
{
	//创建对象
	//第一种方式
	Person xiaoming = Person();//在栈上开辟空间
	//第二种方式
	Person* xiaoli = new Person();//new代表在堆上进行使用开辟,必须使用指针,需要自己释放(使用delete销毁)
	//类中没有属性，占用空间大小是1
	//第三种
	Person xiaobai;//等价与第一种


	// 成员访问
	// 适用对象来访问 "."语法
	cout << "栈区" << endl;
	xiaoming.name = "xiaoming";
	xiaoming.age = 19;
	xiaoming.gender = "male";
	xiaoming.score = 100;
	cout << xiaoming.name << endl;
	cout << xiaoming.age << endl;
	cout << xiaoming.gender << endl;
	cout << xiaoming.score << endl;
	//访问函数
	xiaoming.eat();
	xiaoming.sleep();

	cout << "\n";

	cout << "堆区" << endl;
	xiaoli->name = "xiaoli";//或者(*xiaoli).name;
	xiaoli->age = 19;
	xiaoli->gender = "women";
	xiaoli->score = 99;
	cout << xiaoli->name << endl;
	cout << xiaoli->age << endl;
	cout << xiaoli->gender << endl;
	cout << xiaoli->score << endl;
	//访问函数
	xiaoli->eat();
	xiaoli->sleep();

	return 0;
}