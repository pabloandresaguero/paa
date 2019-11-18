#include <stdio.h>
#include <mpi.h>

int main (argc, argv)
    int argc;
    char *argv[];
{
int rank, size;
double inicio, fin;

MPI_Init(&argc,&argv);

MPI_Comm_rank(MPI_COMM_WORLD,&rank);
MPI_Comm_size(MPI_COMM_WORLD,&size);
printf("Hola mundo: procesador %d de %d\n",rank,size);

MPI_Finalize();

return 0;

}