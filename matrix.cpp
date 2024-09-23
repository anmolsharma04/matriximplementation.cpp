#include<iostream>
using namespace std;

int main(){
int matrix[3][3];

cout<<"enter the choices"<<endl;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>matrix[i][j];
        
    }
}

cout<<"resultant matrix is"<<endl;
for(int i=0;i<3;i++){
    for(int j =0;j<3;j++){
        cout<<matrix[i][j]<<endl;
        cout<<endl;
    }
}
return 0;

}