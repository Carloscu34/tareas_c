#include <iostream>
using namespace std;
main(){
	
      /*           	//variable inicio; finaliza;  incrementar o decrementar
         //i++, i+=1, i=i+1  
	int contar=0;	       	
	for (int i=0;i<=10;i++){ 
	    cout<<i<<endl;
	    contar++;
	}
	cout<<"ciclos: "<<contar<<endl;	
*/
    // inverso
    /*
    for (int i=10;i>=0;i--){ 
	    cout<<i<<endl;	
}
*/
 
 /*
 	for (int i=0;i<=10;i++){
	
	if (i==5){
		break;
		cout<<"if"<<endl;
	}
	 
    cout<<i<<endl;
}
    cout<<"fuera de for"<<endl;
*/
  /*     //int 4 bytes
int datos[] = {10,40,100,250};

  for (int i : datos){
  	cout<<i<<endl;
  }


	system("pause"); */
	
	int inicio = 0, fin = 0,res = 0;
	
	cout<<"Ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"Ingrese tabla final: ";
	cin>>fin;
	
	for (int rango=inicio;rango<=fin;rango++){
	cout<<"tabla del "<<rango<<endl;
	    for (int i=1;i<=10;i++){
	    res = rango * i;
	    cout<<rango<<"x" << i <<" = "<<res<<endl;
		}
	}
}
