/*
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#ifndef __vtkSlicerConfigure_h
#define __vtkSlicerConfigure_h

#define Slicer_ORGANIZATION_DOMAIN ""
#define Slicer_ORGANIZATION_NAME ""

#define SLICER_REVISION_SPECIFIC_USER_SETTINGS_FILEBASENAME ""

#define Slicer_DEFAULT_HOME_MODULE ""
#define Slicer_DEFAULT_FAVORITE_MODULES ""

#define Slicer_DISCLAIMER_AT_STARTUP ""

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

/* #undef Slicer_STORE_SETTINGS_IN_APPLICATION_HOME_DIR */

/* #undef Slicer_USE_IGSTK */
/* #undef Slicer_USE_NAVITRACK */
/* #undef Slicer_USE_NUMPY */
/* #undef Slicer_USE_PYTHONQT */
/* #undef Slicer_USE_PYTHONQT_WITH_OPENSSL */
/* #undef Slicer_USE_QtTesting */
/* #undef Slicer_USE_OPENTRACKER */

/* #undef Slicer_HAVE_QT5 */
/* #undef Slicer_HAVE_WEBKIT_SUPPORT */

#define VTKSLICER_CONFIGURATION_TYPES ""
/* #undef Slicer_BUILD_WIN32_CONSOLE */
/* #undef Slicer_BUILD_WIN32_CONSOLE_LAUNCHER */

#define Slicer_MAIN_PROJECT_APPLICATION_NAME "build_mrml_test"
#define Slicer_BIN_DIR ""
#define Slicer_LIB_DIR ""
#define Slicer_INCLUDE_DIR ""
#define Slicer_SHARE_DIR ""
#define Slicer_ITKFACTORIES_DIR ""

#define Slicer_QtPlugins_DIR ""

#define Slicer_BUNDLE_LOCATION ""

/* #undef Slicer_BUILD_EXTENSIONMANAGER_SUPPORT */
#ifdef Slicer_BUILD_EXTENSIONMANAGER_SUPPORT
#  define Slicer_EXTENSIONS_DIRBASENAME ""
#  define Slicer_EXTENSIONS_DIRNAME ""
#endif

/* #undef Slicer_BUILD_APPLICATIONUPDATE_SUPPORT */

/* #undef Slicer_BUILD_DICOM_SUPPORT */
/* #undef Slicer_BUILD_DIFFUSION_SUPPORT */
/* #undef Slicer_BUILD_I18N_SUPPORT */
/* #undef Slicer_BUILD_MULTIMEDIA_SUPPORT */
/* #undef Slicer_BUILD_PARAMETERSERIALIZER_SUPPORT */
/* #undef Slicer_BUILD_WEBENGINE_SUPPORT */

/* #undef Slicer_BUILD_CLI_SUPPORT */
/* #undef Slicer_BUILD_CLI */
#define Slicer_CLIMODULES_SUBDIR ""
#define Slicer_CLIMODULES_BIN_DIR ""
#define Slicer_CLIMODULES_LIB_DIR ""
#define Slicer_CLIMODULES_SHARE_DIR ""

#define Slicer_CLI_PREFER_EXECUTABLE_DEFAULT true

/* #undef Slicer_USE_PYTHONQT */
#ifdef Slicer_USE_PYTHONQT
#  define Slicer_PYTHON_VERSION_DOT ""
#  define Slicer_PYTHON_VERSION ""
#  define PYTHON_SITE_PACKAGES_SUBDIR ""
#endif //Slicer_USE_PYTHONQT

/* #undef Slicer_BUILD_QTLOADABLEMODULES */
#define Slicer_QTLOADABLEMODULES_SUBDIR ""
#define Slicer_QTLOADABLEMODULES_BIN_DIR ""
#define Slicer_QTLOADABLEMODULES_LIB_DIR ""
#define Slicer_QTLOADABLEMODULES_INCLUDE_DIR ""
#define Slicer_QTLOADABLEMODULES_SHARE_DIR ""
#ifdef Slicer_USE_PYTHONQT
#  define Slicer_QTLOADABLEMODULES_PYTHON_LIB_DIR ""
#endif

/* #undef Slicer_BUILD_QTSCRIPTEDMODULES */
#ifdef Slicer_USE_PYTHONQT
#  define Slicer_QTSCRIPTEDMODULES_SUBDIR ""
#  define Slicer_QTSCRIPTEDMODULES_BIN_DIR ""
#  define Slicer_QTSCRIPTEDMODULES_LIB_DIR ""
#  define Slicer_QTSCRIPTEDMODULES_INCLUDE_DIR ""
#  define Slicer_QTSCRIPTEDMODULES_SHARE_DIR ""
#endif //Slicer_USE_PYTHONQT

// ThirdParty: Corresponds to superbuild projects built
// in Slicer extension.
#define Slicer_THIRDPARTY_BIN_DIR ""
#define Slicer_THIRDPARTY_LIB_DIR ""

/* #undef Slicer_VTK_RENDERING_USE_OpenGL_BACKEND */
/* #undef Slicer_VTK_RENDERING_USE_OpenGL2_BACKEND */
/* #undef Slicer_VTK_USE_QVTKOPENGLWIDGET */

// Library sub-directory - The following macros define directories only valid for a given build tree.
#define VTK_DIR "/usr/local/lib/cmake/vtk-9.2"
#define CTK_DIR ""
//#define Teem_DIR ""

#define Slicer_QM_DIR ""
#define Slicer_QM_OUTPUT_DIRS ""
#define Slicer_LANGUAGES ""

#endif //__vtkSlicerConfigure_h
