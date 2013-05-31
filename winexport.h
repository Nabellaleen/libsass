/* winexport.h - SASS utilities */


#ifndef WINEXPORT_H
#define WINEXPORT_H
		    
#if defined(_WINDOWS) && !defined(ISLIBSASS_NODLL)
#  ifndef LIBSASS_BUILD
#    define LIBSASS_EXPORT __declspec(dllimport)
#  else
#    define LIBSASS_EXPORT __declspec(dllexport)
#  endif
#else
#  define LIBSASS_EXPORT 
#endif

#endif // WINEXPORT_H
