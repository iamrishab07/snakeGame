#include<bits/stdc++.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x,y,fruitY,fruitX,score;
enum eDirection{
	STOP =0,LEFT,RIGHT,UP,DOWN
};

eDirection dir;


void Setup(){
	gameOver = false;
	dir = STOP;
	x = width/2;
	y = height/2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score  = 0;
}

void Draw(){
	system("cls");// for linux change it to system(clear);
	for(int i=0;i<width;i++)
		cout<< "#";
	cout<<endl;
// printing the 
	for(int i = 0;i<height;i++){
		for (int j = 0; j < width; j++)
		{
			if(j == 0)cout<<"#";
			
			if(i==y && j==x) cout<<"0";
			else if(i==fruitY && j == fruitX)
				cout<<"F";
			else cout<<" ";
			
			if( j==width-1) cout<<"#";
		}
		cout<<endl;
	}

	for(int i=0;i<width;i++)
		cout<< "#";

}

void Input(){
	if(_kbhit()){
		switch(_getch()){
			case 'a':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'x':
				gameOver = true;
				break;
		}
	}
}

void Logic(){
	
}


int main(){
	Setup();
	while(!gameOver){
		Draw();
		Input();
		Logic();
		// Sleep(5);
	}
	
	return 0;
}
