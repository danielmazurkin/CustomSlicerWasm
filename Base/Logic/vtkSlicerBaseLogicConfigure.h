/*
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#if defined(WIN32) && !defined(VTKSLICER_STATIC)
#pragma warning ( disable : 4275 )
#endif

/* #undef CMAKE_WORDS_BIGENDIAN */
#ifdef CMAKE_WORDS_BIGENDIAN
  #define WORDS_BIGENDIAN
#else
  #define WORDS_LITTLEENDIAN
#endif

/* #undef BUILD_SHARED_LIBS */
#ifndef BUILD_SHARED_LIBS
#define VTKSLICER_STATIC
#endif
