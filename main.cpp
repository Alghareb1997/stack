#include <iostream>

using namespace std;
 class Array{
   private :
       int lenght;
       int Size ;
       int*items;

   public:
    void arraY(int Size){
      lenght = 0;
      this->Size=Size ;
      items = new int[Size];
    }
    void Fill(){
     int no_of_items ;
     cout << "entre number of items: " <<endl;
     cin >> no_of_items ;
     if(no_of_items > Size ){
        cout << "sorry, number of items bigger than size of array "<<endl;
        return ;
     }
     else {
        for(int i=0;i<no_of_items;i++){
            cout <<"entre item : " << i <<endl;
            cin >> items[i];
            lenght++;
        }
     }
    }
    void display(){
     cout << "items of array  Is : " << endl ;
  for (int i=0;i<lenght;i++){
    cout << items[i]<< endl ;
  }
 }
    void Search (){
     int target ;
     cout << "number to search on it"<< endl ;
     cin >> target ;
 for(int i=0;i<lenght;i++){
    if(items[i]==target){
        cout << "this number is item of array in place : "<<i+1<<endl ;
        return;
    }
    }
     cout << "This number is not item of array   "<<endl ;
 }
    void Append(){
            int new_item;
           if(lenght<Size ){
            cout << "entre new item"<<endl;
            cin >> new_item ;
            items[lenght]= new_item;
            lenght++;
            }
            else
            cout <<"Array not empty"<<endl;

    }
    void Insert (){
    int index ,value ,swaP;
 cout << "Entre the index " <<endl ;
 cin >> index ;
 cout <<"Entre the Value " <<endl ;
 cin >> value ;
 while(lenght<Size ){
      items[lenght]= items[lenght-1] ;
      }
      items[index] = value ;


}

 };

int main()
{
 Array a1 ;
 int a ;
 cout <<"hello with array entre size please " ;
 cin >> a ;
 a1.arraY(a);
 a1.Fill( );
 a1.Search( );
 a1.Append();
 a1.Insert();
 a1.display() ;




    return 0;
}
