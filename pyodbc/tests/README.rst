Tests for IOPro/pyodbc
======================

In order to test pyodbc access to a database and a properly configured
ODBC driver setup is needed.

A valid ODBC connection string should be provided in order to run the
test suite. All configuration needed to run the test suite is
performed via environment variables.


Configuring the test suite
==========================

The following environment variables are used to configure the test
suite:


IOPRO_PYODBC_TEST_CONNSTR <required>
<<<<<<< HEAD
***REMOVED******REMOVED***--
=======
------------------------------------
>>>>>>> 14dcbb9542f8d05344fd4a2cc4ef07c47528a8f1

The connection string to use when performing database connections.

For example:
'DRIVER={FreeTDS};SERVER=192.168.1.135;DATABASE=test;Port=1433;Uid=test;Pwd=test'

IOPRO_PYODBC_TEST_DBMS <recommended>
<<<<<<< HEAD
***REMOVED******REMOVED***--
=======
------------------------------------
>>>>>>> 14dcbb9542f8d05344fd4a2cc4ef07c47528a8f1

If set, specifies which DBMS is behind the ODBC connection. Some
tests containing DBMS specific SQL will be skipped unless the
appropriate DBMS is set in this variable.

Supported values are:
'sql_server' - Microsoft SQL server.
'postgresql' - PostgreSQL.


IOPRO_PYODBC_TEST_LOGGING <optional>
<<<<<<< HEAD
***REMOVED******REMOVED***--
=======
------------------------------------
>>>>>>> 14dcbb9542f8d05344fd4a2cc4ef07c47528a8f1

If set to a value that evaluates to True, enable tracing when
executing the test suite. This results in very verbose actions on
whats going on inside pyodbc. This is mostly a debugging tool.

It basically sets "enable_tracing" in IOPro/pyodbc when running the
tests.


IOPRO_PYODBC_TEST_UNICODE_RESULTS <optional>
<<<<<<< HEAD
***REMOVED******REMOVED******REMOVED***
=======
--------------------------------------------
>>>>>>> 14dcbb9542f8d05344fd4a2cc4ef07c47528a8f1

If set to a value that evaluates to True, tell pyodbc to use unicode
results when connecting to the database. This means that connection to
the database is performed by setting the unicode_results keyword
argument for connect to True.


A word of warning about side effects of running the test suite
==============================================================

The test suite creates and drops tables in order to perform the
tests. This means that the database used for test may have tables
created and dropped. Needless to say, use a blank database meant for
testing to run the tests on, using a database user meant for testing.
