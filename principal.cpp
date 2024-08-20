#include <string>
#include <iostream>
#include "presentacion.hpp"
#include <ctime>
#include <cstdlib>
#include <conio.h>

using namespace std;



// Este es el programa principal donde va toda la logica y datos, para la estructura he creado un encabezado llamado presentacion.hpp




int main () {
	
	
	
	
	
	//La declaracion de la clase persona la tenemos en el Encabezado
	// aqui la inicializo con mis datos.
	Persona  Alumno1 ("Jorge" , "Guillen", "Villalba",33);	

	// Dejo un par de declaraciones cout para a�adir algo de informacion sobre mi.
	
	cout << "Hola bienvenidos a mi espacio, he creado un sencillo programa con un poco de todo lo que he ido aprendiendo a lo largo de este a�o de c++, les voy a mostrar un ejemplo para mi presentacion y ademas un minijuego de logica, que siempre son divertidos."<< endl<<endl;
	
	cout << "DATOS PERSONALES:"<< endl <<"Me presento, mi nombre es "<< Alumno1.nombre<<" " << Alumno1.apellido1<< " " << Alumno1.apellido2 << " tengo  "<< Alumno1.edad <<" primaveras, y poco a poco, ando aprendiendo mas de lo que me apasiona, la programacion."<< endl << endl;
	
	cout << "ESTUDIOS:"<< endl  <<"He estudiado Grado Formativo medio  de Explotacion de sistemas informaticos en red y Grado Formativo superior de Administacion de sistemas en red ,y actualmente estoy haciendo cursos online de programacion con openwebinars llevo un total de 6 cursos."<< endl << endl ;
		
	cout << "MOTIVACIONES:"<< endl << "Por que me gustaria participar en los grupos de trabajo?.. Pues tengo varias razones, la principal es aprender durante el viaje, pienso que esta experiencia me haria desarrollarme mucho mejor como persona y me daria la oportunidad de ver distintos puntos de vistas, creciendo y adaptandome a ellos."<< endl << endl;
	
	cout << "SOBRE MI:"<< endl << "Actualmente trabajo de conserje en una comunidad de vecinos, aparte de mis tareas, me encargo de la base de datos de propietarios de la comunidad, base de datos de llaves electronicas y , en mis ratos libres con microsoft access he hecho un buscador de matriculas con una base de datos de matriculas que he ido haciendo de 0." << endl << endl;
	
	
	cout << "Pulse cualquier tecla para continuar con el minijuego que he creado"<< endl << endl;
	
	_getch();
	
	system("cls"); // para sistemas windows
	system("clear"); // para linux y macos
	
	
	
	// A continuacion aqui monto la logica del minijuego

	
	//Este minijuego trata de averiguar la combinacion de la caja fuerte de 4 digitos en el menor numeros de intentos posibles.
	// Para ello necesitare inicializar varias variables
	
	// semilla para generar los numeros y letras aleatorias
	 srand(time(0));
	 
int digito1,digito2,digito3,digito4,contador,aleatorio,aciertos,respuesta;
char letra,respchar;
	
aleatorio=aleatoriador(aleatorio);
letra=aleatoriadorchar();
//cout << aleatorio<< endl;//Funcion para hacer un numero de 4 digitos aleatorios, despues daremos forma a esto.
//cout << aleatoriadorchar<< endl;//Funcion para generar letras aleatorias.


	// Ahora que tenemos el numero aleatorio para nuestro mini juego de caja fuerte necesitamos separarlos en digitos, un caracter  y a�adirlos a las variables


 	digito1 = aleatorio / 1000;         // Primer D�gito
    digito2 = (aleatorio / 100) % 10;   // Segundo D�gito
    digito3 = (aleatorio / 10) % 10;    // Tercer D�gito
    digito4 = aleatorio % 10; 			// Cuarto Digito
    

    //inicializo las variables para el minijuego
    contador =0;
    aciertos=0;
    respuesta=0;
	respchar=' ';

//cout << digito1<<" "<< digito2 <<" " << digito3 << " " << digito4 <<endl; // esta linea es para comprobar que los digitos son correctos.


cout << "Bienvenido al juego de la caja fuerte, es sencillo tienes que adivinar el código de nuestra caja fuerte (4 dígitos y una letra) en los menores intentos posibles, cada vez que cometas un error, te ire dando pistas, y si aciertas uno de los digitos te lo dire, si aciertas la clave habra acabado el juego, te animas?"<< endl << endl;

cout <<"Por favor por cada digito introduzca un numero entre el 0-9"<< endl << endl;

while (aciertos < 5) {

contador++; // Esto contara los intentos realizados a la hora de intentar adivinar la combinacion ganadora
aciertos=0; // Esto me servira para reiniciar la variable si no se ha acertado correctamente todos los numeros

cout <<endl<< "PRIMER DIGITO" << endl; cin >> respuesta;

if (respuesta == digito1) {
	
	
	
	// Condicionales para el primer digito
	
	cout << "Enorabuena, acertaste el primer digito!"<< endl;
	aciertos++;
	
	}
	
		else if (respuesta > digito1) {
	
		cout << "El primer digito es menor, que el numero que has introducido"<< endl;
	
		}
		
			else if (respuesta < digito1){
			
			cout << "El primer digito es mayor, que el numero que has introducido"<< endl;	
				
				
			};



//Condicionales para el segundo digito
cout << endl << "SEGUNDO DIGITO" << endl; cin >> respuesta;

if (respuesta == digito2) {
	
	cout << "Enorabuena, acertaste el segundo digito!"<< endl;
	
	aciertos++;
	}
	
		else if (respuesta > digito2) {
	
		cout << "El segundo digito es menor, que el numero que has introducido"<< endl;
	
		}
		
			else if (respuesta < digito2){
			
			cout << "El  segundo digito es mayor, que el numero que has introducido"<< endl;	
				
				
			

};

// Condicionales para el tercer digito
cout << endl<< "TERCER DIGITO" << endl ; cin >> respuesta;

if (respuesta == digito3) {
	
	cout << "Enorabuena, acertaste el tercer digito!"<< endl;
	
	aciertos++;
	}
	
		else if (respuesta > digito3) {
	
		cout << "El tercer digito es menor, que el numero que has introducido"<< endl;
	
		}
		
			else if (respuesta < digito3){
			
			cout << "El tercer digito es mayor, que el numero que has introducido"<< endl;	
				
				
			};
			
// Condicionales para el ultimo digito
cout << endl<< "CUARTO DIGITO" << endl; cin >> respuesta;

if (respuesta == digito4) {
	
	cout << "Enorabuena, acertaste el cuarto digito!"<< endl;
	
	aciertos++;
	
	}
	
		else if (respuesta > digito4) {
	
		cout << "El cuarto digito es menor, que el numero que has introducido"<< endl;
	
		}
		
			else if (respuesta < digito4){
			
			cout << "El cuarto digito es mayor, que el numero que has introducido"<< endl;	
				
				
			

				};		

// Condicionales para la letra

cout << endl<< "LETRA MAYÚSCULA" << endl; cin >> respchar;

if (respchar == letra) {
	
	cout << "Enorabuena, acertaste la letra de la clave!"<< endl;
	
	aciertos++;
	
	}
	
		else if (respuesta != respchar) {
	
		cout << "La letra nos es correcta, sigue intentádolo"<< endl;
	
		}
		
			

};


cout << "Has completado con exito la caja fuerte con un total de "<< contador << " intentos, espero que lo hayas disfrutado tanto como yo programandolo, este es el fin de mi presentacion, espero les haya gustado.";

    return 0;
};



// aqui dejo la funcion de numeros aleatorios

int aleatoriador(int aleatorio) {
    aleatorio = rand()  % 9000 +1000;
    return aleatorio;


}

// aqui dejo la funcion para generar letras aleatorias

char aleatoriadorchar() {
    char letra_aleatoria = 'A' + rand() % 26; 
    return letra_aleatoria;
}
