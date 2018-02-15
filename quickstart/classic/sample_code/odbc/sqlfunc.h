/*
 * Copyright (c) 1999, 2017, Oracle and/or its affiliates. All rights reserved.
 *
 * Licensed under the Universal Permissive License v 1.0 as shown
 * at http://oss.oracle.com/licenses/upl
 */

#ifndef SQLFUNCH
#define SQLFUN

#include "sql.h"
#include "sqlext.h"

#define SQLFN_ALLOCCONNECT NULL
#define SQLFN_ALLOCENV NULL
#define SQLFN_ALLOCSTMT NULL
#define SQLFN_BINDCOL NULL
#define SQLFN_CANCEL NULL
#define SQLFN_COLATTRIBUTES NULL
#define SQLFN_CONNECT NULL
#define SQLFN_DESCRIBECOL NULL
#define SQLFN_DISCONNECT NULL
#define SQLFN_ERROR NULL
#define SQLFN_EXECDIRECT NULL
#define SQLFN_EXECUTE NULL
#define SQLFN_FETCH NULL
#define SQLFN_FREECONNECT NULL
#define SQLFN_FREEENV NULL
#define SQLFN_FREESTMT NULL
#define SQLFN_GETCURSORNAME NULL
#define SQLFN_NUMRESULTCOLS NULL
#define SQLFN_PREPARE NULL
#define SQLFN_ROWCOUNT NULL
#define SQLFN_SETCURSORNAME NULL
#define SQLFN_SETPARAM NULL
#define SQLFN_TRANSACT NULL
#define SQLFN_BINDPARAMETER NULL
#define SQLFN_COLUMNS NULL
#define SQLFN_DRIVERCONNECT NULL
#define SQLFN_GETCONNECTOPTION NULL
#define SQLFN_GETDATA NULL
#define SQLFN_GETFUNCTIONS NULL
#define SQLFN_GETINFO NULL
#define SQLFN_GETSTMTOPTION NULL
#define SQLFN_GETTYPEINFO NULL
#define SQLFN_PARAMDATA NULL
#define SQLFN_PUTDATA NULL
#define SQLFN_SETCONNECTOPTION NULL
#define SQLFN_SETSTMTOPTION NULL
#define SQLFN_SPECIALCOLUMNS NULL
#define SQLFN_STATISTICS NULL
#define SQLFN_TABLES NULL
#define SQLFN_BROWSECONNECT NULL
#define SQLFN_COLUMNPRIVILEGES NULL
#define SQLFN_DATASOURCES NULL
#define SQLFN_DESCRIBEPARAM NULL
#define SQLFN_DRIVERS NULL
#define SQLFN_EXTENDEDFETCH NULL
#define SQLFN_FOREIGNKEYS NULL
#define SQLFN_MORERESULTS NULL
#define SQLFN_NATIVESQL NULL
#define SQLFN_NUMPARAMS NULL
#define SQLFN_PARAMOPTIONS NULL
#define SQLFN_PRIMARYKEYS NULL
#define SQLFN_PROCEDURECOLUMNS NULL
#define SQLFN_PROCEDURES NULL
#define SQLFN_SETPOS NULL
#define SQLFN_SETSCROLLOPTIONS NULL
#define SQLFN_TABLEPRIVILEGES NULL

#define NELEMS(x) (sizeof(x)/sizeof(x[0]))

typedef struct
 {
  SQLUSMALLINT id;
  char *name;
  void *func;
  char *params;
  SQLUSMALLINT supported;
 } sqlfuncType;

sqlfuncType SQLFunctions[] = 
 { 
  { SQL_API_SQLALLOCCONNECT, "SQLALLOCCONNECT", SQLFN_ALLOCCONNECT, "", 0 },
  { SQL_API_SQLALLOCENV, "SQLALLOCENV", SQLFN_ALLOCENV, "", 0 },
  { SQL_API_SQLALLOCSTMT, "SQLALLOCSTMT", SQLFN_ALLOCSTMT, "", 0 },
  { SQL_API_SQLBINDCOL, "SQLBINDCOL", SQLFN_BINDCOL, "", 0 },
  { SQL_API_SQLCANCEL, "SQLCANCEL", SQLFN_CANCEL, "", 0 },
  { SQL_API_SQLCOLATTRIBUTES, "SQLCOLATTRIBUTES", SQLFN_COLATTRIBUTES, "", 0 },
  { SQL_API_SQLCONNECT, "SQLCONNECT", SQLFN_CONNECT, "", 0 },
  { SQL_API_SQLDESCRIBECOL, "SQLDESCRIBECOL", SQLFN_DESCRIBECOL, "", 0 },
  { SQL_API_SQLDISCONNECT, "SQLDISCONNECT", SQLFN_DISCONNECT, "", 0 },
  { SQL_API_SQLERROR, "SQLERROR", SQLFN_ERROR, "", 0 },
  { SQL_API_SQLEXECDIRECT, "SQLEXECDIRECT", SQLFN_EXECDIRECT, "", 0 },
  { SQL_API_SQLEXECUTE, "SQLEXECUTE", SQLFN_EXECUTE, "", 0 },
  { SQL_API_SQLFETCH, "SQLFETCH", SQLFN_FETCH, "", 0 },
  { SQL_API_SQLFREECONNECT, "SQLFREECONNECT", SQLFN_FREECONNECT, "", 0 },
  { SQL_API_SQLFREEENV, "SQLFREEENV", SQLFN_FREEENV, "", 0 },
  { SQL_API_SQLFREESTMT, "SQLFREESTMT", SQLFN_FREESTMT, "", 0 },
  { SQL_API_SQLGETCURSORNAME, "SQLGETCURSORNAME", SQLFN_GETCURSORNAME, "", 0 },
  { SQL_API_SQLNUMRESULTCOLS, "SQLNUMRESULTCOLS", SQLFN_NUMRESULTCOLS, "", 0 },
  { SQL_API_SQLPREPARE, "SQLPREPARE", SQLFN_PREPARE, "", 0 },
  { SQL_API_SQLROWCOUNT, "SQLROWCOUNT", SQLFN_ROWCOUNT, "", 0 },
  { SQL_API_SQLSETCURSORNAME, "SQLSETCURSORNAME", SQLFN_SETCURSORNAME, "", 0 },
  { SQL_API_SQLSETPARAM, "SQLSETPARAM", SQLFN_SETPARAM, "", 0 },
  { SQL_API_SQLTRANSACT, "SQLTRANSACT", SQLFN_TRANSACT, "", 0 },
  { SQL_API_SQLBINDPARAMETER, "SQLBINDPARAMETER", SQLFN_BINDPARAMETER, "", 0 },
  { SQL_API_SQLCOLUMNS, "SQLCOLUMNS", SQLFN_COLUMNS, "", 0 },
  { SQL_API_SQLDRIVERCONNECT, "SQLDRIVERCONNECT", SQLFN_DRIVERCONNECT, "", 0 },
  { SQL_API_SQLGETCONNECTOPTION, "SQLGETCONNECTOPTION", SQLFN_GETCONNECTOPTION, "", 0 },
  { SQL_API_SQLGETDATA, "SQLGETDATA", SQLFN_GETDATA, "", 0 },
  { SQL_API_SQLGETFUNCTIONS, "SQLGETFUNCTIONS", SQLFN_GETFUNCTIONS, "", 0 },
  { SQL_API_SQLGETINFO, "SQLGETINFO", SQLFN_GETINFO, "", 0 },
  { SQL_API_SQLGETSTMTOPTION, "SQLGETSTMTOPTION", SQLFN_GETSTMTOPTION, "", 0 },
  { SQL_API_SQLGETTYPEINFO, "SQLGETTYPEINFO", SQLFN_GETTYPEINFO, "", 0 },
  { SQL_API_SQLPARAMDATA, "SQLPARAMDATA", SQLFN_PARAMDATA, "", 0 },
  { SQL_API_SQLPUTDATA, "SQLPUTDATA", SQLFN_PUTDATA, "", 0 },
  { SQL_API_SQLSETCONNECTOPTION, "SQLSETCONNECTOPTION", SQLFN_SETCONNECTOPTION, "", 0 },
  { SQL_API_SQLSETSTMTOPTION, "SQLSETSTMTOPTION", SQLFN_SETSTMTOPTION, "", 0 },
  { SQL_API_SQLSPECIALCOLUMNS, "SQLSPECIALCOLUMNS", SQLFN_SPECIALCOLUMNS, "", 0 },
  { SQL_API_SQLSTATISTICS, "SQLSTATISTICS", SQLFN_STATISTICS, "", 0 },
  { SQL_API_SQLTABLES, "SQLTABLES", SQLFN_TABLES, "", 0 },
  { SQL_API_SQLBROWSECONNECT, "SQLBROWSECONNECT", SQLFN_BROWSECONNECT, "", 0 },
  { SQL_API_SQLCOLUMNPRIVILEGES, "SQLCOLUMNPRIVILEGES", SQLFN_COLUMNPRIVILEGES, "", 0 },
  { SQL_API_SQLDATASOURCES, "SQLDATASOURCES", SQLFN_DATASOURCES, "", 0 },
  { SQL_API_SQLDESCRIBEPARAM, "SQLDESCRIBEPARAM", SQLFN_DESCRIBEPARAM, "", 0 },
  { SQL_API_SQLDRIVERS, "SQLDRIVERS", SQLFN_DRIVERS, "", 0 },
  { SQL_API_SQLEXTENDEDFETCH, "SQLEXTENDEDFETCH", SQLFN_EXTENDEDFETCH, "", 0 },
  { SQL_API_SQLFOREIGNKEYS, "SQLFOREIGNKEYS", SQLFN_FOREIGNKEYS, "", 0 },
  { SQL_API_SQLMORERESULTS, "SQLMORERESULTS", SQLFN_MORERESULTS, "", 0 },
  { SQL_API_SQLNATIVESQL, "SQLNATIVESQL", SQLFN_NATIVESQL, "", 0 },
  { SQL_API_SQLNUMPARAMS, "SQLNUMPARAMS", SQLFN_NUMPARAMS, "", 0 },
  { SQL_API_SQLPARAMOPTIONS, "SQLPARAMOPTIONS", SQLFN_PARAMOPTIONS, "", 0 },
  { SQL_API_SQLPRIMARYKEYS, "SQLPRIMARYKEYS", SQLFN_PRIMARYKEYS, "", 0 },
  { SQL_API_SQLPROCEDURECOLUMNS, "SQLPROCEDURECOLUMNS", SQLFN_PROCEDURECOLUMNS, "", 0 },
  { SQL_API_SQLPROCEDURES, "SQLPROCEDURES", SQLFN_PROCEDURES, "", 0 },
  { SQL_API_SQLSETPOS, "SQLSETPOS", SQLFN_SETPOS, "", 0 },
  { SQL_API_SQLSETSCROLLOPTIONS, "SQLSETSCROLLOPTIONS", SQLFN_SETSCROLLOPTIONS, "", 0 },
  { SQL_API_SQLTABLEPRIVILEGES, "SQLTABLEPRIVILEGES", SQLFN_TABLEPRIVILEGES, "", 0 },
 };

#define SQLFUNCTIONSSZ (NELEMS(SQLFunctions))
#endif