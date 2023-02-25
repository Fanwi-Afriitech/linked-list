#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class link{
	private:
		string item;
		double cost;
	public:
		link *pnext;
		link(string i,double c){
			item=i;
			cost=c;
			pnext=NULL;
			
		}
		
		void display(){
			cout<<"{"<<item<<","<<cost<<"}-->";
		}
		
};

class linklist{
	private: 
	  link *pfirst;
	public:
		linklist(){
			pfirst=NULL;
		}
		
	void insert(string i,double c){
		link *pnewlink=new link(i,c);
		pnewlink->pnext=pfirst;
		
	   pfirst=pnewlink;
	
	}
	
	void displaylist(){
		link *pcuurrent =pfirst;
		while(pcurrent!=NULL){
			pcurrent->display();
			pcurrent=pcurrent->pnext;
		}
	}
};
int main() {
	linklist l1;
	l1.insert("bread",20);
	l1.insert("rice",80);
	l1.insert("salt",70);
	l1.displaylist();
	l1.insert("sugar",10);

}