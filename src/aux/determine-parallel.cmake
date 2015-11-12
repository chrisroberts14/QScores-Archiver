FIND_PACKAGE (OpenMP)
IF (OPENMP_FOUND)
  SET (HAVE_OPENMP 1)
ENDIF ()

FIND_PACKAGE (MPI)
IF (MPI_CXX_FOUND)
  SET (HAVE_MPI 1)
ENDIF ()
