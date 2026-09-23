#include<iostream>
using namespace std;

struct AgentPersonal
{
	string AgentName;
	string AgentAge;

};
struct AgenOrganisations
{
	string OrganName;
	int Members;
};
struct AgentData
{
	string AgentLevel;
	int Killer;
	int AgentMission;
	string Mistake;
};
struct FullInformations
{
	AgentPersonal Info1;
	AgenOrganisations Info2;
	AgentData Info3;

};

int main()
{
	FullInformations Agent1;

	cout << "\a";

	cout << "PLEASE ENTER YOUR NAME: \n";
	cin >> Agent1.Info1.AgentName;
	cout << "PLEASE ENTER YOUR AGE: \n";
	cin >> Agent1.Info1.AgentAge;
	cout << "PLEASE ENTER YOUR ORGANISATINS NAME: \n";
	cin >> Agent1.Info2.OrganName;
	cout << "PLEASE ENTER YOUR ORGANISATINS MEMBERS: \n";
	cin >> Agent1.Info2.Members;
	cout << "PLEASE ENTER YOUR PROFESSIONEL LEVEL: \n";
	cin >> Agent1.Info3.AgentLevel;
	cout << "PLEASE ENTER HOW MUCH KILLER: \n";
	cin >> Agent1.Info3.Killer;
	cout << "PLEASE ENTER YOUR MISSION: \n";
	cin >> Agent1.Info3.AgentMission;
	cout << "PLEASE ENTER ALL YOUR PROFESSIONEL MISSION MISTAKE: \n";
	cin >> Agent1.Info3.Mistake;

	cout << "NAME           : " << Agent1.Info1.AgentName << endl;
	cout << "AGE            : " << Agent1.Info1.AgentAge << endl;
	cout << "ORGAN NAME     : " << Agent1.Info2.OrganName << endl;
	cout << "ORGAN MEMBER   : " << Agent1.Info2.Members << endl;
	cout << "LEVEL	       : " << Agent1.Info3.AgentLevel << endl;
	cout << "KILLER	       : " << Agent1.Info3.Killer << endl;
	cout << "MISSION	       : " << Agent1.Info3.AgentMission << endl;
	cout << "MISTAKE	       : " << Agent1.Info3.Mistake << endl;

	return 0;
}