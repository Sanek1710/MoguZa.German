#define __STDC_WANT_LIB_EXT1__ 1

#include <malloc.h>
#include <iostream>
#include <cstdlib>

#define CMD_PRINT	1
#define CMD_ADD		2
#define CMD_EDIT	3
/*#useless
#define CMD_REMOVE	4
#define CMD_LOAD	5
#define CMD_SAVE	6
*/
#define CMD_EXIT	0

#define DATABASE_NAME "input.txt"


using namespace std;

struct Student
{
public:
	void print()
	{
		printf("%-10s %-10s %-10s | %4d-%02d-%02d |  %4d  | %-10s | %-10s | %-10s | %-10s|\n",
			surname,
			name,
			patronymic,
			byear, bmounth, bday,
			enter_year,
			faculty,
			department,
			group,
			university
		);
	}

	void read()
	{
		cout << "������� �������: ";
		while (scanf_s("%s", surname, 40) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� ���: ";
		while (scanf_s("%s", name, 40) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� ��������: ";
		while (scanf_s("%s", patronymic, 40) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� ��� ��������: ";
		while (scanf_s("%d", &byear) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� ����� ��������: ";
		while (true)
		{
			while (scanf_s("%d", &bmounth) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}

			if (bmounth < 1 || 12 < bmounth)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
				continue;
			}
			break;
		}

		cout << "������� ���� ��������: ";
		while (true)
		{
			while (scanf_s("%d", &bday) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			if (bday < 1 || 31 < bday)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
				continue;
			}
			else
			{
				if (bday == 31)
				{
					if (bmounth == 2
						|| bmounth == 4
						|| bmounth == 6
						|| bmounth == 9
						|| bmounth == 11
						)
					{
						cout << "  #incorrect data" << endl;
						while (getchar() != '\n');
						cout << "  > ";
						continue;
					}
				}
				else if (bmounth == 2 && bday > 29)
				{
					cout << "  #incorrect data" << endl;
					while (getchar() != '\n');
					cout << "  > ";
					continue;
				}
			}
			break;
		}

		cout << "������� ��� �����������: ";
		while (scanf_s("%d", &enter_year) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� �������� ����������: ";
		while (scanf_s("%s", faculty, 40) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� �������� �������: ";
		while (scanf_s("%s", department, 40) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� ����� ������: ";
		while (scanf_s("%s", group, 40) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}

		cout << "������� �������� ����: ";
		while (scanf_s("%s", university, 40) != 1)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}
	}

	void edit()
	{
		int c = 0;
		c = getchar();

		cout << "ENTER ����� �������� ������ ��������" << endl;

		cout << "������� �������: [" << surname << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%s", surname, 40) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}


		cout << "������� ���: [" << name << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%s", name, 40) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}


		cout << "������� ��������: [" << patronymic << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%s", patronymic, 40) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}

		cout << "������� ��� ��������: [" << byear << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%d", &byear) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}

		cout << "������� ����� ��������: [" << bmounth << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (true)
			{
				while (scanf_s("%d", &bmounth) != 1)
				{
					cout << "  #incorrect data" << endl;
					while (getchar() != '\n');
					cout << "  > ";
				}

				if (bmounth < 1 || 12 < bmounth)
				{
					cout << "  #incorrect data" << endl;
					while (getchar() != '\n');
					cout << "  > ";
					continue;
				}
				break;
			}
			while (getchar() != '\n');
		}

		cout << "������� ���� ��������: [" << bday << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (true)
			{
				while (scanf_s("%d", &bday) != 1)
				{
					cout << "  #incorrect data" << endl;
					while (getchar() != '\n');
					cout << "  > ";
				}
				if (bday < 1 || 31 < bday)
				{
					cout << "  #incorrect data" << endl;
					while (getchar() != '\n');
					cout << "  > ";
					continue;
				}
				else
				{
					if (bday == 31)
					{
						if (bmounth == 2
							|| bmounth == 4
							|| bmounth == 6
							|| bmounth == 9
							|| bmounth == 11
							)
						{
							cout << "  #incorrect data" << endl;
							while (getchar() != '\n');
							cout << "  > ";
							continue;
						}
					}
					else if (bmounth == 2 && bday > 29)
					{
						cout << "  #incorrect data" << endl;
						while (getchar() != '\n');
						cout << "  > ";
						continue;
					}
				}
				break;
			}
			while (getchar() != '\n');
		}

		cout << "������� ��� �����������: [" << enter_year << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%d", &enter_year) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}

		cout << "������� �������� ����������: [" << faculty << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%s", faculty, 40) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}

		cout << "������� �������� �������: [" << department << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%s", department, 40) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}

		cout << "������� ����� ������: [" << group << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%s", group, 40) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
			while (getchar() != '\n');
		}

		cout << "������� �������� ����: [" << university << "]: ";
		c = getchar();
		if (c != '\n')
		{
			ungetc(c, stdin);
			while (scanf_s("%s", university, 40) != 1)
			{
				cout << "  #incorrect data" << endl;
				while (getchar() != '\n');
				cout << "  > ";
			}
		}
	}

	int read_line(FILE* file)
	{
		int c;

		do
		{
			if (fscanf_s(file, "%s", surname, 40) != 1)
			{
				c = fgetc(file);
				if (c == EOF)
				{
					return EOF;
				}
				else
				{
					ungetc(c, file);
				}
				cout << "ERROR: [input]: <surname>" << endl;
				break;
			}

			if (fscanf_s(file, "%s", name, 40) != 1)
			{
				cout << "ERROR: [input]: <name>" << endl;
				break;
			}

			if (fscanf_s(file, "%s", patronymic, 40) != 1)
			{
				cout << "ERROR: [input]: <patronymic>" << endl;
				break;
			}

			if (fscanf_s(file, "%d", &byear) != 1)
			{
				cout << "ERROR: [input]: <year>" << endl;
				break;
			}

			if (fscanf_s(file, "%d", &bmounth) != 1)
			{
				cout << "ERROR: [input]: <bmounth>" << endl;
				break;
			}

			if (bmounth < 1 || 12 < bmounth)
			{
				cout << "ERROR: [input]: <bmounth> = " << bmounth << endl;
				break;
			}

			if (fscanf_s(file, "%d", &bday) != 1)
			{
				cout << "ERROR: [input]: <bday>" << endl;
				break;
			}

			if (bday < 1 || 31 < bday)
			{
				cout << "ERROR: [input]: <bday> = " << bday << " <bmounth> = " << bmounth << endl;
				break;
			}
			else
			{
				if (bday == 31)
				{
					if (bmounth == 2
						|| bmounth == 4
						|| bmounth == 6
						|| bmounth == 9
						|| bmounth == 11
						)
					{
						cout << "ERROR: [input]: <bday> = " << bday << " <bmounth> = " << bmounth << endl;
						break;
					}
				}
				else if (bmounth == 2 && bday > 29)
				{
					cout << "ERROR: [input]: <bday> = " << bday << " <bmounth> = " << bmounth << endl;
					break;
				}
			}


			if (fscanf_s(file, "%d", &enter_year) != 1)
			{
				cout << "ERROR: [input]: <enter_year>" << endl;
				break;
			}

			if (fscanf_s(file, "%s", faculty, 40) != 1)
			{
				cout << "ERROR: [input]: <faculty>" << endl;
				break;
			}

			if (fscanf_s(file, "%s", department, 40) != 1)
			{
				cout << "ERROR: [input]: <department>" << endl;
				break;
			}

			if (fscanf_s(file, "%s", group, 40) != 1)
			{
				cout << "ERROR: [input]: <group>" << endl;
				break;
			}

			if (fscanf_s(file, "%s", university, 40) != 1)
			{
				cout << "ERROR: [input]: <university>" << endl;
				break;
			}

			return 0;

		} while (0);

		do
		{
			c = getc(file);
		} while (c != '\n' && c != EOF);

		return c;
	}

	void write_line(FILE* file)
	{
		fprintf(file, "%-10s %-10s %-10s  %4d  %02d  %02d  %4d  %-10s  %-10s  %-10s  %-10s\n",
			surname,
			name,
			patronymic,
			byear, bmounth, bday,
			enter_year,
			faculty,
			department,
			group,
			university
		);
	}

private:
	char surname[40];
	char name[40];
	char patronymic[40];
	int byear;
	int bmounth;
	int bday;

	int enter_year;
	char faculty[40];
	char department[40];
	char group[40];
	char university[40];
};

class StudentDatabase
{
public:
	StudentDatabase()
	{
		max_count = 10;
		count = 0;

		students = new Student[max_count];

		if (students == NULL)
		{
			std::cout << "ERROR: StudentDatabase::StudentDatabase: new -> NULL" << std::endl;
			exit(0);
		}
	}

	~StudentDatabase()
	{
		if (students != NULL)
		{
			delete[] students;
		}
	}

	int add_student(Student student)
	{
		if (count == max_count)
		{
			max_count += 10;

			Student* new_array = new Student[max_count];
			if (new_array == NULL)
			{
				std::cout << "ERROR: StudentDatabase::add_student: new -> NULL" << std::endl;
				max_count -= 10;
				return -1;
			}
			else
			{
				memcpy(new_array, students, count * sizeof(Student));
				delete[] students;
				students = new_array;
			}
		}

		new (students + count) Student(student);
		count += 1;

		return count - 1;
	}

	int del_student(int index)
	{
		if (index < 0 || count <= index)
		{
			return -1;
		}

		count--;
		for (int i = index; i < count; i++)
		{
			memcpy(students + i, students + i + 1, sizeof(Student));
		}
		return 0;
	}

	int edit_student(int index)
	{
		if (index < 0 || count <= index)
		{
			return -1;
		}

		students[index].edit();

		return 0;
	}

	void print()
	{
		printf("���:\n");
		printf("|_�|_�������____���________��������___|_����_����._|_������_|_���������__|__�������___|___������___|____���____|\n");
		for (int i = 0; i < count; i++)
		{
			printf("|%2d| ", i + 1);
			students[i].print();
		}
		printf("\n");
	}

	int load(const char* fname)
	{
		clear();

		FILE* file = NULL;
		fopen_s(&file, fname, "r");
		if (file == NULL)
		{
			std::cout << "ERROR: StudentDatabase::read_file fopen -> NULL" << std::endl;
			return -1;
		}

		Student student;

		int read_stat = 0;
		do
		{
			read_stat = student.read_line(file);
			if (read_stat == 0)
			{
				this->add_student(student);
			}

		} while (read_stat != EOF);

		fclose(file);

		return 0;
	}

	int save(const char* fname)
	{
		FILE* file = NULL;
		fopen_s(&file, fname, "w");
		if (file == NULL)
		{
			std::cout << "ERROR: StudentDatabase::read_file fopen -> NULL" << std::endl;
			return -1;
		}

		for (int i = 0; i < count; i++)
		{
			students[i].write_line(file);
		}

		fclose(file);

		return 0;
	}

	void clear()
	{
		count = 0;
	}

private:
	Student* students;
	int count;
	int max_count;
};

int handle_command(StudentDatabase* stList)
{
	int cmd = 0;
	system("cls");
	cout << "�������:" << endl;
	cout << CMD_PRINT << " - ������" << endl;
	cout << CMD_ADD << " - ��������" << endl;
	cout << CMD_EDIT << " - �������������" << endl;
	/*#useless
	cout << CMD_REMOVE << " - �������" << endl;
	cout << CMD_LOAD << " - ���������" << endl;
	cout << CMD_SAVE << " - ���������" << endl;
	*/
	cout << CMD_EXIT << " - �����" << endl;

	cout << "������� �������: ";
	while (scanf_s("%d", &cmd) == 0)
	{
		cout << "  #incorrect command" << endl;
		while (getchar() != '\n');
		cout << "  > ";
	}

	Student student;
	int index = 0;
	char fname[260];

	switch (cmd)
	{

	case CMD_PRINT:
		stList->print();
		break;

	case CMD_ADD:
		student.read();
		stList->add_student(student);
		stList->print();
		stList->save(DATABASE_NAME);
		break;
/*#useless
	case CMD_REMOVE:
		stList->print();
		cout << "������� �����: ";
		while (scanf_s("%d", &index) == 0)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}
		if (stList->del_student(index - 1) == -1)
		{
			cout << "  #index out of range" << endl;
		}
		else
		{
			stList->print();
		}
		break;
*/
	case CMD_EDIT:
		stList->print();
		cout << "������� �����: ";
		while (scanf_s("%d", &index) == 0)
		{
			cout << "  #incorrect data" << endl;
			while (getchar() != '\n');
			cout << "  > ";
		}
		if (stList->edit_student(index - 1) == -1)
		{
			cout << "  #index out of range" << endl;
		}
		else
		{
			stList->print();
			stList->save(DATABASE_NAME);
		}
		break;
		/*#useless
	case CMD_LOAD:
		cout << "������� ��� �����: ";
		scanf_s("%s", fname, 260);
		cout << "�������� ���� ������..." << endl;
		if (stList->load(fname) != -1)
		{
			cout << "���������: ["<< fname <<"]" << endl;
			stList->print();
		}
		break;

	case CMD_SAVE:
		cout << "������� ��� �����: ";
		scanf_s("%s", fname, 260);
		if (stList->save(fname) != -1)
		{
			cout << "���������: [" << fname << "]" << endl;
			stList->print();
		}
		break;
		*/
	case CMD_EXIT:
		cout << "�����..." << endl;
		stList->save(DATABASE_NAME);
		break;

	default:
		cout << "  #incorrect command" << endl;
		break;
	}

	return cmd;
}

int main()
{
	system("chcp 1251 > nul");
	setlocale(LC_ALL, "Russian");

	StudentDatabase stList;
	stList.load(DATABASE_NAME);

	while (handle_command(&stList))
	{
		system("pause");
	}

	return 0;
}