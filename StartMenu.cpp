#include<iostream>
using namespace std;

string name;
void moveright(){
 cout<<name<<" Move right";
}
void moveleft(){
 cout<<name<<" Move left";
}
void movedown(){
    cout<<name<<" Move down";
}
void moveup(){
    cout<<name<<" Move up";
}
int main (){
    char x,d,o,game;
    cout<<"You have enter subterranean cave where you have to explore the underground to find the tressure\n";
    cout<<"Press y if you want to play or n to exit\n";
    cin>>game;
    cout<<" |-----------||-----------||-----------| " <<endl;
    cout<<" |           ||           ||           | "<<endl;
    cout<<" |-----------||-----------||-----------|  "<<endl;
    cout<<" |-----------||-----------||-----------| " <<endl;
    cout<<" |           ||           ||           | "<<endl;
    cout<<" |-----------||-----------||-----------|  "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;

    switch(game){
    case 'y':
        if(game=='y'){
    cout<<"You have started the game\n Please enter your name:\n";
    cin>>name;
    cout<<"Welcome "<<name<<endl;
    }
    else if(game=='n'){
        cout<<"You exit the game";
    }
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"You have to move down to enter the cave\n";
    cout<<"Press d to move down\n";
    cin>>d;
    case'd':
     movedown();

    cout<<"\n              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;
    cout<<"              |-----------|              "<<endl;
    cout<<"              |           |              "<<endl;
    cout<<"              |-----------|             "<<endl;

     cout<<"\nYou are at the entrance of the cave where the monsters are waiting \n To open the door press o\n to run away press r \n";
     cin>>o;
     case 'o': if(o=='o'){
         cout<<"You opened The door\n";
         cout<<"You are a brave thief \n"<<name;
         }
    else if(o=='r'){
        cout<<"YOU  LEFT THE GAME";
    }
    }

}


