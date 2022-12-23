
#include <iostream>
using namespace std;
        void print_month(int monthcounter){
        switch(monthcounter){
            case 1:
            cout<<"-------ordibehest-------"<<endl;
            break;
            case 2:
            cout<<"-------khordad-------"<<endl;
            break;
            case 3:
            cout<<"-------tiir-------"<<endl;
            break;
            case 4:
            cout<<"-------mordad-------"<<endl;
            break;
            case 5:
            cout<<"-------shahrivar-------"<<endl;
            break;
            case 6:
            cout<<"-------mehr-------"<<endl;
            break;
            case 7:
            cout<<"-------ababn-------"<<endl;
            break;
            case 8:
            cout<<"-------azar-------"<<endl;
            break;
            case 9:
            cout<<"-------deey-------"<<endl;
            break;
            case 10:
            cout<<"-------bahman-------"<<endl;
            break;
            case 11:
            cout<<"-------esfand-------"<<endl;
            break;
        }
  }
    void roozshomar(int daystart){
    int weekcounter = daystart;
    int i , monthcounter=1;
    cout<<"-------farvardin-------";
    cout<<"\nsh 1sh 2sh 3sh 4sh 5sh jome\n";
     for (i=1;i<=daystart-1;i++) {
        cout <<" "<<"   ";
     }
        for (int i = 1; i<=30; i++){
    if (i < 10)
        cout << i << "   ";
    else
        cout << i << "  ";
    if (weekcounter == 7)
    {
        cout << "\n";
        weekcounter = 1;
    }
    else{
        weekcounter += 1;
    }
    if(i==30 && monthcounter<=6){
        cout<<i+1;
        weekcounter +=1;

    }
   
    if(weekcounter==8){
        weekcounter -=1;
    }
     if (i % 30 == 0)
    {      
        while(monthcounter <= 12){
        cout << "\n";
        print_month(monthcounter);
        if(monthcounter == 12){
            i=32;
            break;
        }
        cout << "sh 1sh 2sh 3sh 4sh 5sh jome\n";
        
        for (int k = 1; k <= weekcounter - 1; k++)
        {
            cout << "    ";
            
           i=0;
                 }
                 i=0;
          monthcounter++;
        if(monthcounter==13){
            i=32; // end of  loop
        }
        break;  
                  }
               }
           }

        }

      
  int main(int argc, char *argv[]){
    int daystart;
    cout<<"plese enter number between 1_7"<<endl;
    cin>>daystart;
    roozshomar(daystart);
  
	return 0;
  }
  