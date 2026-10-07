#include<iostream>
using namespace std;
class company{
    public:
  string company_name;
  string location;
  company(string c,string l){
    company_name=c;
    location=l;
  }
  void displayCompany()
    {
        cout << "Company Name: " << company_name << endl;
        cout << "Location: " << location << endl;
    }

};
class team:public company{
    public:
    string team_name;
    string project;
    team(string n,string l,string t,string p):company(n,l){
        team_name=t;
        project=p;
    }
     void displayTeam()
    {
        cout << "Team Name: " << team_name << endl;
        cout << "Project: " << project << endl;
    }


};
class developer : public team{
    public:
   string developer_name;
   string programming_language;
   developer(string c,string l,string t,string p,string d,string lang):team(c,l,t,p){
         developer_name=d;
         programming_language=lang;
   }

    void displayDeveloper()
    {
        cout << "Developer Name: " << developer_name << endl;
        cout << "Programming Language: "
             << programming_language << endl;
    }

};
int main(){
    developer d("google" , "California","developmentteam","webproject","ramya","c++");
    d.displayCompany();
    d.displayTeam();
    d.displayDeveloper();

}