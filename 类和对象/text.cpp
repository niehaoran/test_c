#include<iostream>
//�ؼ��� class
using namespace std;
//���һ���ࣺ������
//���ԣ��������Ա�����
//��������·���Է�
//���ж�������Ժ���Ϊ����˽��Ȩ��
//�����Ҫ���ʵĻ�����Ҫ�޸�Ȩ�ޣ�public

//���ʺ���
// private - ˽��Ȩ��
// protected - ����Ȩ��
// public - ����Ȩ��


class Person
{
public://������������з���
	string name;
	int age;
	string gender;//�Ա�
	int score;//�ɼ�

	void walk()
	{
		cout << "�������·" << endl;
	}

	void eat()
	{
		cout << "�����Է�" << endl;
	}

	void sleep()
	{
		cout << "���඼��˯��" << endl;
	}
};

int main()
{
	//��������
	//��һ�ַ�ʽ
	Person xiaoming = Person();//��ջ�Ͽ��ٿռ�
	//�ڶ��ַ�ʽ
	Person* xiaoli = new Person();//new�����ڶ��Ͻ���ʹ�ÿ���,����ʹ��ָ��,��Ҫ�Լ��ͷ�(ʹ��delete����)
	//����û�����ԣ�ռ�ÿռ��С��1
	//������
	Person xiaobai;//�ȼ����һ��


	// ��Ա����
	// ���ö��������� "."�﷨
	cout << "ջ��" << endl;
	xiaoming.name = "xiaoming";
	xiaoming.age = 19;
	xiaoming.gender = "male";
	xiaoming.score = 100;
	cout << xiaoming.name << endl;
	cout << xiaoming.age << endl;
	cout << xiaoming.gender << endl;
	cout << xiaoming.score << endl;
	//���ʺ���
	xiaoming.eat();
	xiaoming.sleep();

	cout << "\n";

	cout << "����" << endl;
	xiaoli->name = "xiaoli";//����(*xiaoli).name;
	xiaoli->age = 19;
	xiaoli->gender = "women";
	xiaoli->score = 99;
	cout << xiaoli->name << endl;
	cout << xiaoli->age << endl;
	cout << xiaoli->gender << endl;
	cout << xiaoli->score << endl;
	//���ʺ���
	xiaoli->eat();
	xiaoli->sleep();

	return 0;
}