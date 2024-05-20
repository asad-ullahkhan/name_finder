/*this is namefinderv1.0 its has a limitation of only four letter
also contain many mistakes */


#include<iostream>
using namespace std;

int main(){
    int ans;
    cout<<"think of a 4 letter word"<<endl;
    cout<<"For yes write 1 if no write 0 : "<<endl;
    cin>> ans;

    int col1,col2,col3,col4;
  
    cout<<" a b c d \n e f g h\n i j k l \n m n o p \n q r s t  \n y z    "<<endl;

    cout<<"select columns between 1 to 4"<<endl;

    cout<<"which column does your first letter belong : ";
    cin>> col1;
    cout<<"which column does your first letter belong : ";
    cin>> col2;
    cout<<"which column does your first letter belong : ";
    cin>> col3;
    cout<<"which column does your first letter belong : ";
    cin>> col4;
    int let1,let2,let3,let4;
    cout<<"choose which column does it belong now "<<endl;

    switch (col1)
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

    switch (col2)
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

    switch (col3)
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

    switch (col4)
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
    
    cout<<"choose from 1 to 6 "<<endl;
    cout<<"which column does your first letter belong : ";
    cin>> let1;
    cout<<"which column does your first letter belong : ";
    cin>> let2;
    cout<<"which column does your first letter belong : ";
    cin>> let3;
    cout<<"which column does your first letter belong : ";
    cin>> let4;

switch (col1)
{
case 1:
    switch (let1)
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
    switch (let1)
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
    switch (let1)
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
    switch (let1)
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

switch (col2)
{
case 1:
    switch (let2)
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
    switch (let2)
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
    switch (let2)
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
    switch (let2)
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

switch (col3)
{
case 1:
    switch (let3)
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
    switch (let3)
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
    switch (let3)
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
    switch (let3)
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

switch (col4)
{
case 1:
    switch (let4)
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
    switch (let4)
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
    switch (let4)
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
    switch (let4)
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