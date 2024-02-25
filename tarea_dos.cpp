#include <iostream>
using namespace std;
main (){
/*	//numero es positivo>0 o negativo<0
	int num=0;
	cout<<"ingrese el numero:";
	cin>>num;
	if(num>0){ //>0
		//entra aca cuando la condicion es verdadero
		cout<<"Positivo"<<endl;
	}else { //<=0
	         if(num==0){ //0
	         cout<<"Neutro"<<endl;
			    }else{//<0
			        cout<<"Negativo"<<endl;
			 }
	*/
	
/*	//numero es positivo>0 o negativo<0
	string pais= "";
	cout<<"Ingrese el pais: ";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<< " mi pais"<<endl;
		
	}else{
		cout<<pais<<endl;
	}
*/
/*
// DETERMINAR SI UN NUMERO ES PAR O IMPAR
    int num=0;
    cout<<"ingrese numero";
    cin>>num;
    //dividir un numero entre dos su residuo es cero entonces es par caso contrario es impar
    if ((num%2)==0){
    	cout<<"par"<<endl;
    	
	}else{
		cout<<"impar"<<endl;
	}
*/

/*
//and(y)&& , or (o) //

char lapiz,lapicero;
cout<<"traeme lapiz(s/n)";
cin>> lapiz;
cout<<"trae lapicero (s/n)";
cin>>lapicero;
//puede entrar a mi clase si usted trae un lapiz y un lappicero
//and = el valor es verdadero si ambas son verdaderas
if(lapiz=='s' && lapicero=='s' ){
	cout<<"ingresa"<<endl;

}else{
	cout<<"lo siento no puede ingresar"<<endl;
}		
	
	
	system("pause");
	
	*/
	int codigo=0
	cout<<"Ingrese codigo de area:";
	cin>>codigo;
	switch(codigo){
		case 501 :cout<<"Belice"endl;
		    break;
		case 502 :cout<<"Guatemala"endl;
		    break;
		case 503 :cout<<"El Salvador"endl;
		    break;
		case 504 :cout<<"Honduras"endl;
		    break;	    
		case 505 :cout<<"Nicaragua"endl;
		    break;
		case 506 :cout<<"Costa Rica"endl;
		    break;	
		case 507 :cout<<"Panama"endl;
		    break;	
		default : cout<<"Este codigo no es de centreoamerica"<<endl;	
			   
	}
}
	
	
	

