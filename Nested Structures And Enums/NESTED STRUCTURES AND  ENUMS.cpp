#include <iostream>
#include <string>

using namespace std;

enum EnStatus{Married, Single = 12};
enum EnGender{Male = 7777, Female };

struct StAddress
{
	string City;
	int ZipCode;
};

struct StInfo
{
	string PhoneNo;
	string Email;
	StAddress Address;
};

struct StPerson
{
	string FullName;
	int Age;
	StInfo Info;
	EnStatus Status;
	EnGender Gender;
};

int main()
{
	StPerson Person1;
	Person1.FullName = "Abdeslam Elgarh";
	Person1.Age = 26;
	Person1.Gender = EnGender::Male;
	Person1.Info.Address.City = "Essaouira";
	Person1.Info.Address.ZipCode = 40000;
	Person1.Info.Email = "abdeslamelgarh@gmail.com";
	Person1.Info.PhoneNo = "+2124848382";
	Person1.Status = EnStatus::Single;
	cout << Person1.Gender;


	return 0;
}

