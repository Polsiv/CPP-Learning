#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
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
  std::vector<Pokemon> pokemones;
};

std::vector<Entrenador> entrenadores;

void pedirDatosEntrenador();
void imprimirDatosEntrenadores();
void buscar_entrenador();

//------------------------------------------------------------------

int main()
{
  int opcion;
  bool close = true;

  do
  {

    std::cout << "****************************************" << std::endl;
    std::cout << "  ¡BIENVENIDO A POKEMON PLATA Y ORO!    " << std::endl;
    std::cout << "****************************************" << std::endl;
    std::cout << "Este es el menú pokemon:" << std::endl;
    std::cout << " 1) Crear Entrenadores" << std::endl;
    std::cout << " 2) Imprimir Lista de Entrenadores" << std::endl;
    std::cout << " 3) Buscar Entrenador" << std::endl;
    std::cout << " 4) Entrenador más Fuerte y más Debil" << std::endl;
    std::cout << " 5) ¡¡ENFRENTAMIENTOS!!" << std::endl;
    std::cout << " 6) Cargar Archivos en Pantalla" << std::endl;
    std::cout << std::endl;
    std::cout << " Es el momento que elijas uno de los" << std::endl;
    std::cout << " puntos del menú para empezar con " << std::endl;
    std::cout << " la aventura. Buena Suerte" << std::endl;
    std::cout << "****************************************" << std::endl;
    std::cin >> opcion;

    switch (opcion)
    {
    case 7:
      close = false;
      break;

    default:
      break;
    }
  } while (close);

  // Llamar funciones
  pedirDatosEntrenador();
  imprimirDatosEntrenadores();
  buscar_entrenador();
};

//-------------------------------------------------------------------

void pedirDatosEntrenador()
{

  std::cout << "Digita la cantidad de entrenadores!" << std::endl;
  std::cin >> CantidadEntrenadores;

  for (int i = 0; i < CantidadEntrenadores; i++)
  {

    std::cout << "Digita el nombre del entrenador " << i + 1 << std::endl;
    std::cin >> entrenadores[i].nombre;

    std::cout << "Digita el apellido del entrenador " << i + 1 << std::endl;
    std::cin >> entrenadores[i].apellido;

    std::cout << "Digita la licencia del entrenador " << i + 1 << std::endl;
    std::cin >> entrenadores[i].licencia;

    std::cout << "Digita la edad entrenador " << i + 1 << std::endl;
    std::cin >> entrenadores[i].edad;

    std::cout << "Digita el género del entrenador " << i + 1 << std::endl;
    std::cin >> entrenadores[i].sexo;

    std::cout << "Digita la región del entrenador " << i + 1 << std::endl;
    std::cin >> entrenadores[i].region;

    std::cout << "Cúantos pokemons posee?" << std::endl;
    std::cin >> CantidadPokemones;

    for (int i = 0; i < CantidadPokemones; i++)
    {

      std::cout << "Ingresa el nombre del pokemon " << i + 1 << std::endl;
      std::cin >> entrenadores[i].pokemones[i].NombrePokemon;

      std::cout << "Ingresa el Tipo del pokemon " << i + 1 << std::endl;
      std::cin >> entrenadores[i].pokemones[i].TipoPokemon;

      std::cout << "Ingresa el género del pokemon " << i + 1 << std::endl;
      std::cin >> entrenadores[i].pokemones[i].SexoPokemon;

      std::cout << "Ingresa el nivel del pokemon " << i + 1 << std::endl;
      std::cin >> entrenadores[i].pokemones[i].Nivel;
    }
  }
}
//-------------------------------------------------------------------

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
    std::cout << "Nivel de poder: " << std::endl;
  }
}

//--------------------------------------------------------------------------

void buscar_entrenador()
{

  int code = 0, puesto = 0, r = 0;

  std::ofstream Buscar_Entrenador;

  std::cout << "Digite la licencia del entrenador a buscar: " << std::endl;
  std::cin >> code;

  Buscar_Entrenador.open("Jugador Encontrado.txt");

  for (int i = 0; i < CantidadEntrenadores; i++)
  {
    if (entrenadores[i].licencia == code)
    {
      puesto = i;
      std::cout << puesto;
    }
  }

  std::cout << "---------Entrenador---------" << std::endl;
  std::cout << "Nombre del entrenador: " << entrenadores[puesto].nombre << std::endl;
  std::cout << "Número de licencia: " << entrenadores[puesto].licencia << std::endl;
  std::cout << "Edad: " << entrenadores[puesto].edad << std::endl;
  std::cout << "Sexo: " << entrenadores[puesto].sexo << std::endl;
  std::cout << "Región: " << entrenadores[puesto].region << std::endl;
  std::cout << "Nivel de poder: " << std::endl;
  std::cout << "____________________________________" << std::endl;
  std::cout << "¿Desea modificar la información de este entrenador?" << std::endl;
  std::cout << "1=Si        2=No" << std::endl;
  std::cin >> r;
}

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
  }
}