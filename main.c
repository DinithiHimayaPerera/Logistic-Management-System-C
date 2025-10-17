#include <stdio.h>
#include <stdlib.h>


#define MAX_CITIES 30
#define NAME_LENGTH 50
#define VEHICLES 3
#define FUEL_PRICE 310.00


const char *vehicleTypes[VEHICLES]= { "Van", "Truck", "Lorry" };
const int capacity[VEHICLES]= { 1000, 5000, 10000 };
const float rate[VEHICLES]= { 30, 40, 80 };
const float avgSpeed[VEHICLES]= { 60, 50, 45 };
const float fuelEfficiency[VEHICLES]= { 12, 6, 4 };


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
    int choice;
    char cityName[MAX_CITIES][NAME_LENGTH];
    int cityCount=0;
    int distance[MAX_CITIES][NAME_LENGTH]= {0};

    printf("\tLogistics Management System\n");
    printf("\t==========================\n");

    do
    {
        printf("\n");

        printf("1. City Management\n");
        printf("2. Distance Management\n");
        printf("3. Delivery Request Handling\n");
        printf("4. Delivery Cost \n");
        printf("5. Exit\n");

        printf("\nEnter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
            cityManagement( cityName,&cityCount);
            break;

        case 2:
            distanceManagement( cityName,cityCount,distance);
            break;

        case 3:
            deliveryRequest( cityName,cityCount,distance);
            break;

        case 4:
            printBill( cityName,&cityCount);
            break;

        case 5:
            printf("Exit from the Logistics Management System.......!\n\n ");
            break;

        default:
            printf("\nInvalid choice....!\n\n");

        }

    }
    while(choice != 5);


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
