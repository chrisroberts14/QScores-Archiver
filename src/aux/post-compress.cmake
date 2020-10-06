IF (ZLIB_FOUND)
  INCLUDE_DIRECTORIES (${ZLIB_INCLUDE_DIRS})
  TARGET_LINK_LIBRARIES (${TARGET_NAME_EXEC} ${ZLIB_LIBRARIES})
ENDIF (ZLIB_FOUND)

IF (BZIP2_FOUND)
  INCLUDE_DIRECTORIES (${BZIP2_INCLUDE_DIR})
  TARGET_LINK_LIBRARIES (${TARGET_NAME_EXEC} ${BZIP2_LIBRARIES})
  IF (NOT BZIP2_NEED_PREFIX)
    MESSAGE (WARNING "BZIP2 with functions beginning with BZ2_ is needed.  Please upgrade to version 1.0 if you wish to use it.")
  ENDIF (NOT BZIP2_NEED_PREFIX)
ENDIF (BZIP2_FOUND)
