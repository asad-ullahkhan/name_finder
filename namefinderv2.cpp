/*This is the best version yet.
this is namefinderv2.1 with a small improvments.*/
#include <iostream>
using namespace std;
int main(){
    int f;
int ans;             //for no of letters.
    cout<<"think of a word"<<endl;
    cout<<"how many letter are there in it : ";
    cin>> ans;
    int col[ans];                //for no. of columns.
    int let[ans];                //for no. of letters.

   cout<<" a b c d \n e f g h\n i j k l \n m n o p \n q r s t \n u v w x \n y z    "<<endl;
   cout<<"select columns between 1 to 4"<<endl;
   for (int i = 0; i < ans; i++)
   {
    f=i+1;
    cout<<"which column does your "<< f<< " letter belong : ";
    cin>> col[i];
   }
    
   cout<<"choose which column does it belong now "<<endl;

   for (int j = 0; j < ans; j++)
   {
     switch (col[j])
    {
    case 1:
         cout<<"a e i m q u y"<<endl;
     
        break;
    case 2:
         cout<<"b f j n r v z"<<endl;
     
         break;
    case 3:
         cout<<"c g k o s w  "<<endl;
     
         break;
    case 4:
         cout<<"d h l p t x  "<<endl;
     
        break;
    }
   }
     cout<<"choose from 1 to 7 "<<endl;
   for (int k = 0; k < ans; k++)
   {
    f=k+1;
     cout<<"which column does your " << f<< " letter belong : ";
    cin>> let[k];
   }
   for ( int l = 0; l < ans; l++)
   {
    switch (col[l])
   {
    case 1:
    switch (let[l])
    {
    case 1:
        cout<<"A";
        break;
    
    case 2:
        cout<<"E";
        break;
    
    case 3:
        cout<<"I";
        break;
    
    case 4:
        cout<<"M";
        break;
    
    case 5:
        cout<<"Q";
        break;

    case 6:
        cout<<"U";
        break;
    case 7:

        cout<<"Y";
        break;
    
    default:
        break;
    }
    break;
    
case 2:
    switch (let[l])
    {
    case 1:
        cout<<"B";
        break;
    
    case 2:
        cout<<"F";
        break;
    
    case 3:
        cout<<"J";
        break;
    
    case 4:
        cout<<"N";
        break;
    
    case 5:
        cout<<"R";
        break;

    case 6:
        cout<<"V";
        break;
    case 7:

        cout<<"Z";
        break;
    
    default:
        break;
    }
    break;
case 3:
    switch (let[l])
    {
    case 1:
        cout<<"C";
        break;
    
    case 2:
        cout<<"G";
        break;
    
    case 3:
        cout<<"K";
        break;
    
    case 4:
        cout<<"O";
        break;
    
    case 5:
        cout<<"S";
        break;

    case 6:
        cout<<"W";
        break;
    default:
        break;
    }
    break;
case 4:
    switch (let[l])
    {
    case 1:
        cout<<"D";
        break;
    
    case 2:
        cout<<"H";
        break;
    
    case 3:
        cout<<"L";
        break;
    
    case 4:
        cout<<"P";
        break;
    
    case 5:
        cout<<"T";
        break;

    case 6:
        cout<<"X";
        break;
    
    default:
        break;
    }
    break;


default:
    break;
}
   }
   cout<<""<<endl;
   system("pause");
   return 0;
} 
