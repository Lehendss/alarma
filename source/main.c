#include <stdio.h>
#include <time.h>
#include <unistd.h>


void	working_intervals(int numIntervalsPtr, int workingTimePtr, int restTimePtr);
void	alarmCallback();
void	get_intervals();

int	main(void) 
{   
	get_intervals();
    

	return 0;
}

void	get_intervals()
{
	
	int workingTime;

	int restTime;
	int numIntervals;


    	printf("Ingrese el tiempo de trabajo en minutos: ");
	scanf("%d", &workingTime);
	
	printf("Ingrese el tiempo de descanso en minutos: ");
	scanf("%d", &restTime);
	
	printf("Ingrese el número de intervalos: ");
	scanf("%d", &numIntervals);
    
	working_intervals(numIntervals, workingTime, restTime);

}


void	working_intervals(int numIntervals, int workingTime, int restTime)
{
	int i;


	for (i = 0; i < numIntervals; i++) 
	{
	    printf("Inicio del intervalo %d de trabajo\n", i + 1);
	    sleep(workingTime * 60);  // Convierte minutos a segundos
	    alarmCallback();

        if (i != numIntervals - 1) 
	{
            printf("Inicio del intervalo %d de descanso\n", i + 1);
            sleep(restTime * 60);  // Convierte minutos a segundos
        }
    }

}


void	alarmCallback() 
{
	printf("¡Its time to stop!\n");
}
