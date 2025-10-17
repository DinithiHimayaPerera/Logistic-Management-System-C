#include <stdio.h>
#include <stdlib.h>

#define MAX_CITIES 30
#define NAME_LENGTH 50
#define VEHICLES 3
#define FUEL_PRICE 310.00


const char *vehicleTypes[VEHICLES]={ "Van" , "Truck" , "Lorrry" };
const int capacity[VEHICLES]={ 1000 , 5000 , 10000 };
const float rate[VEHICLES]={ 30 , 40 , 80 };
const float avgSpeed[VEHICLES]={ 60 , 50 , 45 };
const float fuelEfficiency[VEHICLES]={ 12 , 6 , 4 };


void cityManagement(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount);
void addCity(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount);
void removeCity(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount);
void renameCity(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount);
void printAllCities(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount);
void checkRepition(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount, int newCityId);
void distanceManagement(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount,int distance[MAX_CITIES][NAME_LENGTH]);
void printChart(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount,int distance[MAX_CITIES][NAME_LENGTH]);
void deliveryRequest(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount,int distance[MAX_CITIES][NAME_LENGTH]);
void printBill(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount);




int main()
{

    return 0;
}


void cityManagement(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount)
{

}
void addCity(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount)
{

}
void removeCity(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount)
{

}
void renameCity(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount)
{

}
void printAllCities(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount)
{

}
void checkRepition(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount, int newCityId)
{

}
void distanceManagement(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount,int distance[MAX_CITIES][NAME_LENGTH])
{

}
void printChart(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount,int distance[MAX_CITIES][NAME_LENGTH])
{

}
void deliveryRequest(char cityName[MAX_CITIES][NAME_LENGTH], int cityCount,int distance[MAX_CITIES][NAME_LENGTH])
{

}
void printBill(char cityName[MAX_CITIES][NAME_LENGTH], int *cityCount)
{

}
