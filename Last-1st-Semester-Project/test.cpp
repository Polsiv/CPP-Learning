#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
int CantidadEntrenadores, CantidadPokemones;
// Setting pokemo's information

struct Pokemon
{
  std::string NombrePokemon;
  std::string TipoPokemon;
  char SexoPokemon;
  int Nivel;
  float CantidadNivel;
};

// Setting player's information
struct Entrenador
{
  std::string nombre;
  std::string apellido;
  int licencia;
  int edad;
  char sexo;
  std::string region;
  int Nivel_de_poder;
  std::vector<Pokemon> pokemones;
  int Poke_cant;
};

std::vector<Entrenador> entrenadores; // provisional

void pedirDatosEntrenador();
void imprimirDatosEntrenadores();
void buscar_entrenador();
void mejor_entrenador();
void peor_entrenador();
void enfrentamientos();
void cargar_archivos();

//------------------------------------------------------------------

int main()
{
  int opcion;
  bool close = true;

  do
  {
    std::cout << "********************************************" << std::endl;
    std::cout << "    ¡BIENVENIDO A POKEMON PLATA Y ORO!  " << std::endl;
    std::cout << "********************************************" << std::endl;
    std::cout << "Este es el menú pokemon:" << std::endl;
    std::cout << " 1) Crear Entrenadores" << std::endl;
    std::cout << " 2) Imprimir Lista de Entrenadores" << std::endl;
    std::cout << " 3) Buscar Entrenador" << std::endl;
    std::cout << " 4) Entrenador más Fuerte y más Debil" << std::endl;
    std::cout << " 5) ¡¡ENFRENTAMIENTOS!!" << std::endl;
    std::cout << " 6) Cargar Archivos en Pantalla" << std::endl;
    std::cout << " 7) Salir del menú" << std::endl;
    std::cout << std::endl;
    std::cout << " Es el momento que elijas uno de los" << std::endl;
    std::cout << " puntos del menú para empezar con " << std::endl;
    std::cout << " la aventura. Buena Suerte!" << std::endl;
    std::cout << "********************************************" << std::endl;
    std::cin >> opcion;

    switch (opcion)
    {
    case 1:
      pedirDatosEntrenador();
      break;

    case 2:
      imprimirDatosEntrenadores();
      break;

    case 3:
      buscar_entrenador();
      break;

    case 4:
      mejor_entrenador();
      peor_entrenador();
      break;

    case 5:
      enfrentamientos();
      break;

    case 6:
      cargar_archivos();
      break;

    case 7:
      close = false;
      break;

    default:
      break;
    }
  } while (close);
};

//-------------------------------------------------------------------

void pedirDatosEntrenador()
{ // funcion caso 1 registro de
  // datos(poke-entrenador)

  std::cout << "Digita la cantidad de entrenadores!" << std::endl;
  std::cin >> CantidadEntrenadores;

  if (CantidadEntrenadores < 0)
  {
    std::cout << "No existen entrenadores negativos" << std::endl;
  }
  else
  {
    for (int i = 0; i < CantidadEntrenadores; i++)
    {

      Entrenador entrenador;

      std::cout << "Digita el nombre del entrenador " << i + 1 << std::endl;
      std::cin >> entrenador.nombre;

      std::cout << "Digita el apellido del entrenador " << i + 1 << std::endl;
      std::cin >> entrenador.apellido;

      std::cout << "Digita la licencia del entrenador " << i + 1 << std::endl;
      std::cin >> entrenador.licencia;

      std::cout << "Digita la edad entrenador " << i + 1 << std::endl;
      std::cin >> entrenador.edad;

      std::cout << "Digita el género del entrenador " << i + 1 << std::endl;
      std::cin >> entrenador.sexo;

      std::cout << "Digita la región del entrenador " << i + 1 << std::endl;
      std::cin >> entrenador.region;

      std::cout << "Cúantos pokemons posee?" << std::endl;
      std::cin >> CantidadPokemones;

      entrenador.Poke_cant =
          CantidadPokemones; // cantidad de pokemones de cada entrenador,

      entrenadores.push_back(entrenador); // guardandolo en el strcut

      int sum = 0;
      for (int j = 0; j < CantidadPokemones; j++)
      {

        std::cout << "Ingresa el nombre del pokemon " << j + 1 << std::endl;
        std::cin >> entrenadores[i].pokemones[j].NombrePokemon;

        std::cout << "Ingresa el Tipo del pokemon " << j + 1 << std::endl;
        std::cin >> entrenadores[i].pokemones[j].TipoPokemon;

        std::cout << "Ingresa el género del pokemon " << j + 1 << std::endl;
        std::cin >> entrenadores[i].pokemones[j].SexoPokemon;

        std::cout << "Ingresa el nivel del pokemon " << j + 1 << std::endl;
        std::cin >> entrenadores[i].pokemones[j].Nivel;

        entrenadores[i].pokemones[j].CantidadNivel =
            entrenadores[i].pokemones[j].Nivel *
            2000; // operacion hallar cantidad de poder del pokemon

        std::cout << "El nivel de poder del pokemon " << j + 1
             << " es: " << entrenadores[i].pokemones[j].CantidadNivel << std::endl;
        sum = sum + entrenadores[i]
                        .pokemones[j]
                        .CantidadNivel; // operacion hallar el nivel de poder
                                        // del entrenador
      }
      entrenadores[i].Nivel_de_poder = sum / CantidadPokemones;
      std::cout << "El nivel de poder del entrenador es: "
           << entrenadores[i].Nivel_de_poder << std::endl
           << std::endl;
    }
  }
}

// case 2 imprimir datos de entrenadores

void imprimirDatosEntrenadores()
{
  for (int i = 0; i < CantidadEntrenadores; i++)
  {

    std::cout << "---------Entrenador---------" << std::endl;
    std::cout << "Nombre del entrenador: " << entrenadores[i].nombre << std::endl;
    std::cout << "Número de licencia: " << entrenadores[i].licencia << std::endl;
    std::cout << "Edad: " << entrenadores[i].edad << std::endl;
    std::cout << "Sexo: " << entrenadores[i].sexo << std::endl;
    std::cout << "Región: " << entrenadores[i].region << std::endl;
    std::cout << "Nivel de poder: " << entrenadores[i].Nivel_de_poder << std::endl;
  }
}

// case 3 encontrar entrenador

void buscar_entrenador()
{

  int code = 0, puesto = 0, r = 0;

  std::ofstream Buscar_Entrenador;

  std::cout << "Digite la licencia del entrenador a buscar: " << std::endl;
  std::cin >> code;

  Buscar_Entrenador.open("JugadorEncontrado.txt",
                         std::ios::in); // se crea archivo para mostrar en un .txt

  for (int i = 0; i < CantidadEntrenadores;
       i++)
  { // for para comparcion de licencias y encontrar jugador
    if (entrenadores[i].licencia == code)
    {
      puesto = i;
    }
    if (entrenadores[i].licencia != code){
      
    }
  }

  Buscar_Entrenador << "--------Entrenador--------" << std::endl;
  Buscar_Entrenador << "Nombre del entrenador: " << entrenadores[puesto].nombre
                    << std::endl;
  Buscar_Entrenador << "Número de licencia: " << entrenadores[puesto].licencia
                    << std::endl;
  Buscar_Entrenador << "Edad: " << entrenadores[puesto].edad << std::endl;
  Buscar_Entrenador << "Sexo: " << entrenadores[puesto].sexo << std::endl;
  Buscar_Entrenador << "Región: " << entrenadores[puesto].region << std::endl;
  Buscar_Entrenador << "Nivel de poder: " << entrenadores[puesto].Nivel_de_poder
                    << std::endl;
  Buscar_Entrenador << "_______________________________________________"
                    << std::endl;
  Buscar_Entrenador.close();

  std::cout << "----------------------------------------------------------" << std::endl;
  std::cout << "Digite que desea realizar con la información del entrenador" << std::endl;
  std::cout << "1. Modificar los datos básicos del entrenador" << std::endl;
  std::cout << "2. Imprimir lista de Pokémon" << std::endl;
  std::cout << "3. Guardar en un archivo la lista de Pokémon" << std::endl;
  std::cin >> r;

  switch (r)
  {
  case 1: // modificar datos de entrenador encontrado
    std::cout << "Digita el nombre del entrenador " << std::endl;
    std::cin >> entrenadores[puesto].nombre;

    std::cout << "Digita el apellido del entrenador " << std::endl;
    std::cin >> entrenadores[puesto].apellido;

    std::cout << "Digita la licencia del entrenador " << std::endl;
    std::cin >> entrenadores[puesto].licencia;

    std::cout << "Digita la edad entrenador " << std::endl;
    std::cin >> entrenadores[puesto].edad;

    std::cout << "Digita el género del entrenador " << std::endl;
    std::cin >> entrenadores[puesto].sexo;

    std::cout << "Digita la región del entrenador " << std::endl;
    std::cin >> entrenadores[puesto].region;
    break;

  case 2:
    // imprime lista de pokemones que tiene
    std::cout << "---------" << entrenadores[puesto].nombre << "---------" << std::endl;
    for (int i = 0; i < entrenadores[puesto].Poke_cant; i++)
    {
      std::cout << "Pokemon " << (i + 1) << ": "
           << entrenadores[puesto].pokemones[i].NombrePokemon << std::endl;
      std::cout << "Tipo: " << entrenadores[puesto].pokemones[i].TipoPokemon << std::endl;
      std::cout << "Sexo: " << entrenadores[puesto].pokemones[i].SexoPokemon << std::endl;
      std::cout << "Nivel: " << entrenadores[puesto].pokemones[i].Nivel << std::endl;
      std::cout << "Cantidad de poder: "
           << (entrenadores[puesto].pokemones[i].CantidadNivel) << std::endl;
    }

    break;

  case 3: // guardar lista de pokemon en un archivo .txt
   std::ofstream Info_Pokemon;

    Info_Pokemon.open("ListaPokemon.txt");
    Info_Pokemon << "---------" << entrenadores[puesto].nombre << "---------"
                 << std::endl;
    for (int i = 0; i < entrenadores[puesto].Poke_cant; i++)
    {
      Info_Pokemon << "Pokemon: "
                   << entrenadores[puesto].pokemones[i].NombrePokemon << std::endl;
      Info_Pokemon << "Tipo: " << entrenadores[puesto].pokemones[i].TipoPokemon
                   << std::endl;
      Info_Pokemon << "Sexo: " << entrenadores[puesto].pokemones[i].SexoPokemon
                   << std::endl;
      Info_Pokemon << "Nivel: " << entrenadores[puesto].pokemones[i].Nivel
                   << std::endl;
      Info_Pokemon << "Cantidad de poder: "
                   << (entrenadores[puesto].pokemones[i].CantidadNivel) << std::endl;
    }

    break;
  }

  Buscar_Entrenador.close();
}

//---------------------------------------------------------------------------------------------------

void mejor_entrenador()
{
  std::ofstream mejor_entrenador;

  mejor_entrenador.open("MejorEntrenador.txt");

  int nivelmax = entrenadores[0].Nivel_de_poder, puesto = 0;

  for (int i = 0; i < CantidadEntrenadores;
       i++) // Hacer que se comparen y encontrar el mayor
  {
    if (entrenadores[i].Nivel_de_poder > nivelmax)
    {
      nivelmax = entrenadores[i].Nivel_de_poder;
      puesto = i;
    }
  }
  mejor_entrenador << "----------- ¡EL MÁS FUERTE! -------------" << std::endl
                   << std::endl;
  mejor_entrenador << "El mejor entrenador es: " << entrenadores[puesto].nombre
                   << std::endl
                   << std::endl;
  mejor_entrenador << "-----------------------------------------" << std::endl;
}

//---------------------------------------------------------------------------------------------------

void peor_entrenador()
{
  std::ofstream peor_entrenador;

  peor_entrenador.open("PeorEntrenador.txt");

  int nivelmen = entrenadores[0].Nivel_de_poder, puesto = 0;

  for (int i = 0; i < CantidadEntrenadores;
       i++) // Hacer que se comparen y encontrar el menor
  {
    if (entrenadores[i].Nivel_de_poder < nivelmen)
    {
      nivelmen = entrenadores[i].Nivel_de_poder;
      puesto = i;
    }
  }
  peor_entrenador << "---------- PUEDES HACERLO MEJOR -----------" << std::endl
                  << std::endl;
  peor_entrenador << "El peor entrenador es: " << entrenadores[puesto].nombre
                  << std::endl
                  << std::endl;
  peor_entrenador << "-----------------------------------------" << std::endl;
}

//---------------------------------------------------------------------------------------------------

void enfrentamientos()
{

  int j1 = 0, j2 = 0, n1 = 0, n2 = 0;

  std::cout << "Digite el número de licencia del primer combatiente!" << std::endl;
  std::cin >> j1;

  std::cout << "Digite el número de licencia del segundo combatiente!" << std::endl;
  std::cin >> j2;

  for (int i = 0; i < CantidadEntrenadores; i++)
  {
    if (j1 == entrenadores[i].licencia)
    {
      n1 = i;
    }

    if (j2 == entrenadores[i].licencia)
    {
      n2 = i;
    }
  }
  std::ofstream entrenador_ganador;
  entrenador_ganador.open("Resultados.txt");

  entrenador_ganador << "--------------------------" << std::endl;
  entrenador_ganador << "------ ¡RESULTADOS! ------" << std::endl;
  entrenador_ganador << entrenadores[n1].nombre << " VS "
                     << entrenadores[n2].nombre << std::endl;
  entrenador_ganador << entrenadores[n1].Nivel_de_poder << " VS "
                     << entrenadores[n2].Nivel_de_poder << std::endl;

  if (entrenadores[n1].Nivel_de_poder > entrenadores[n2].Nivel_de_poder)
  {
    entrenador_ganador << std::endl;
    entrenador_ganador << "GANADOR: " << entrenadores[n1].nombre << std::endl;
    entrenador_ganador << "PERDEDOR: " << entrenadores[n2].nombre << std::endl;
  }
  else if (entrenadores[n1].Nivel_de_poder <
           entrenadores[n2].Nivel_de_poder)
  {
    entrenador_ganador << std::endl;
    entrenador_ganador << "GANADOR: " << entrenadores[n2].nombre << std::endl;
    entrenador_ganador << "PERDEDOR: " << entrenadores[n1].nombre << std::endl;
  }
  else
  {
    entrenador_ganador << std::endl;
    entrenador_ganador << "¡EMPATE!" << std::endl;
  }
  entrenador_ganador << "--------------------------" << std::endl;
}

//---------------------------------------------------------------------------------------

void cargar_archivos()
{
  char res;

  std::cout << "Digite qué archivo desea ver en la pantalla" << std::endl
       << std::endl;
  std::cout << "a. Entrenador más fuerte y más débil" << std::endl;
  std::cout << "b. Entrenador Ganador y el perdedor del enfrentamiento" << std::endl;
  std::cout << "c. Lista de Pokémon" << std::endl;
  std::cout << "----------------------------------------------" << std::endl;
  std::cin >> res;

  switch (res)
  {
  case 'a':
  {
    std::fstream nuevoarchivo;
    nuevoarchivo.open("MejorEntrenador.txt", std::ios::in);
    if (nuevoarchivo.is_open())
    {
      std::string nuevalinea;
      while (getline(nuevoarchivo, nuevalinea))
      {
        std::cout << nuevalinea << std::endl;
      }
      nuevoarchivo.close();
    }
    std::fstream nuevoarchivo2;
    nuevoarchivo2.open("PeorEntrenador.txt", std::ios::in);
    if (nuevoarchivo2.is_open())
    {
      std::string nuevalinea;
      while (getline(nuevoarchivo2, nuevalinea))
      {
        std::cout << nuevalinea << std::endl;
      }
      nuevoarchivo2.close();
    }
    break;
  }
  case 'b':
  {
    std::fstream nuevoarchivo3;
    nuevoarchivo3.open("Resultados.txt", std::ios::in);
    if (nuevoarchivo3.is_open())
    {
      std::string nuevalinea;
      while (getline(nuevoarchivo3, nuevalinea))
      {
        std::cout << nuevalinea << std::endl;
      }
      nuevoarchivo3.close();
    }
    break;
  }
  case 'c':
  {
    std::fstream nuevoarchivo4;
    nuevoarchivo4.open("ListaPokemon.txt", std::ios::in);
    if (nuevoarchivo4.is_open())
    {
      std::string nuevalinea;
      while (getline(nuevoarchivo4, nuevalinea))
      {
        std::cout << nuevalinea << std::endl;
      }
      nuevoarchivo4.close();
    }
    break;
  }
  default:
    std::cout << "No digitaste una opción correcta" << std::endl;
    break;
  }
}