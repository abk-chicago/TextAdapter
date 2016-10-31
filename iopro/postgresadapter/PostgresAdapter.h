/* Generated by Cython 0.24.1 */

#ifndef __PYX_HAVE__iopro__postgresadapter__PostgresAdapter
#define __PYX_HAVE__iopro__postgresadapter__PostgresAdapter


#ifndef __PYX_HAVE_API__iopro__postgresadapter__PostgresAdapter

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C DL_IMPORT(PyObject) *create_list(void **);
__PYX_EXTERN_C DL_IMPORT(void) create_string(void **, char const *);
__PYX_EXTERN_C DL_IMPORT(void) add_to_list(void *, double *, int);
__PYX_EXTERN_C DL_IMPORT(void) append_list(void *, void *);
__PYX_EXTERN_C DL_IMPORT(AdapterError) convert_str2object(char const *, char const *, void **);
__PYX_EXTERN_C DL_IMPORT(AdapterError) convert_str2str(char const *, char const *, void **, int);
__PYX_EXTERN_C DL_IMPORT(void) cast_arrays(PyArrayObject *, PyArrayObject *, int, int);
__PYX_EXTERN_C DL_IMPORT(void) cast_dataframes(PyObject *, PyObject *, int, int, int);
__PYX_EXTERN_C DL_IMPORT(void) *convert_list_to_array(void *);

#endif /* !__PYX_HAVE_API__iopro__postgresadapter__PostgresAdapter */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initPostgresAdapter(void);
#else
PyMODINIT_FUNC PyInit_PostgresAdapter(void);
#endif

#endif /* !__PYX_HAVE__iopro__postgresadapter__PostgresAdapter */
