#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;
class demo_List{
      protected:
      string create_list;
      string task[5];
      int i;
      public:
      void get_list(){
          cout<<"*************** Welcome to To Do LIST ***************"<<endl;
          cout<<"Your Tasks: "<<endl;
          cout<<"currently you don't have any task\nupdate your task list ................!"<<endl;
      }
      void create_task(){
          cout<<"create your task list"<<endl;
          for(i = 0; i<3; i++){
              cin>>create_list;
              task[i] = create_list;
          }

          
      }
};

class Display : public demo_List{
    public:
    void show_list(){
        cout<<"*************** YOUR To Do LIST ***************"<<endl;
        for(string i: task){
            cout<<i<<endl;
        }
    }
    void Suggest(){
        cout<<"Hai i'm JARVIIS i can suggest some tasks\nThese are some tasks:"<<endl;
        cout<<"WORK"<<endl;
        cout<<"REPEAR your tasks"<<endl;

    }

    void profile(){
        cout<<"name: ElonMusk"<<endl;
        cout<<"Profession: CEO\nyou can update your profiles later........"<<endl;
    }
     
};


int main(){
    time_t now = time(0);
    char *data = ctime(&now);
    cout<<"Today day and time: "<<data<<endl;
    cout<<" "<<endl;
    Display obj;
    int optn;
    cout<<"****** _______TO-DO-LIST____________ *****"<<endl;
    cout<<"1. Display your list"<<endl;
    cout<<"2. Create new list"<<endl;
    cout<<"3. Suggest some new tasks"<<endl;
    cout<<"4. Your account"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your option "<<endl;
    cin>>optn;
    switch(optn){
        case 1:
        obj.get_list();
        break;
        case 2:
        obj.create_task();
        cout<<"* task list will be created"<<endl;
        cout<<" "<<endl;
        obj.show_list();
        break;
        case 3:
        obj.Suggest();
        break;
        case 4:
        obj.profile();
        break;
        case 5:
        cout<<"Exited successfully."<<endl;
        exit(0);
        break;
        default:
        cout<<"ERROR: unknown input"<<endl;

    }
    return 0;
}