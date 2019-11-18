#include <stdio.h>
#include <mpi.h>
int main(int argc, char **argv)
{
int rank, size, left, tag=99;
MPI_Status status;
MPI_Init(&argc,&argv);
MPI_Comm_rank(MPI_COMM_WORLD,&rank);
MPI_Comm_size(MPI_COMM_WORLD,&size);
MPI_Send(&rank,1,MPI_INTEGER,(rank+1)%size,tag,MPI_COMM_WORLD);
MPI_Recv(&left,1,MPI_INTEGER,(rank+size-1)%size,tag,MPI_COMM_WORLD,&status);
printf("Yo soy MPI procesador %d de %d, mi left es %d\n",rank,size,left);
MPI_Finalize();
return 0;
}