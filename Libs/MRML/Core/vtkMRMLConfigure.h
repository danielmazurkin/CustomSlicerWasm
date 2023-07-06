/*
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#if defined(WIN32) && !defined(VTKMRML_STATIC)
#pragma warning ( disable : 4275 )
#endif

/* #undef BUILD_SHARED_LIBS */
#ifndef BUILD_SHARED_LIBS
#define VTKMRML_STATIC
#endif

/* #undef MRML_USE_TEEM */
#define MRML_USE_vtkTeem

#define MRML_APPLICATION_NAME "build_mrml_test"
#define MRML_APPLICATION_VERSION 0x040000
#define MRML_APPLICATION_REVISION 0
#define MRML_APPLICATION_SUPPORT_VERSION 0x030000

#define MRML_APPLICATION_HOME_DIR_ENV ""
#define MRML_APPLICATION_OPENGL_PROFILE_ENV ""
#define MRML_APPLICATION_SHARE_SUBDIR ""
