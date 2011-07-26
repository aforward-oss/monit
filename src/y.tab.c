#include <config.h>
/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 26 "src/p.y"

  
/*
 * DESCRIPTION
 *   Simple context-free grammar for parsing the control file. 
 *
 *  @author Jan-Henrik Haukeland, <hauk@tildeslash.com>
 *  @author Olivier Beyssac, <ob@r14.freenix.org>
 *  @author Kianusch Sayah Karadji <kianusch.sayah.karadji@sk-tech.net>
 *  @author Martin Pala <martinp@tildeslash.com>
 *  @author Christian Hopp <chopp@iei.tu-clausthal.de>
 *  @author Rory Toma <rory@digeo.com>
 */

#include "config.h"

#ifdef HAVE_STDIO_H
#include <stdio.h>
#endif

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif 

#ifdef HAVE_CTYPE_H
#include <ctype.h>
#endif 

#ifdef HAVE_PWD_H
#include <pwd.h>
#endif 

#ifdef HAVE_GRP_H
#include <grp.h>
#endif 
  
#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
  
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif
  
#ifdef HAVE_TIME_H
#include <time.h>
#endif
  
#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif

#ifdef HAVE_ASM_PARAM_H
#include <asm/param.h>
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#ifdef HAVE_STRINGS_H
#include <strings.h>
#endif

#ifdef HAVE_NETDB_H
#include <netdb.h>
#endif

#ifdef HAVE_SYSLOG_H
#include <syslog.h>
#endif

#ifndef HAVE_SOL_IP
#include <netinet/in_systm.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#endif

#ifdef HAVE_NETINET_IP_ICMP_H
#include <netinet/ip_icmp.h>
#endif

#ifdef HAVE_REGEX_H
#include <regex.h>
#endif
  
#include "net.h"
#include "monit.h"
#include "protocol.h"
#include "engine.h"
#include "alert.h"
#include "process.h"
#include "ssl.h"
#include "device.h"


/* ------------------------------------------------------------- Definitions */

  struct IHavePrecedence {
    int daemon;
    int logfile;
    int pidfile;
  }; 

  struct myrate {
    unsigned count;
    unsigned cycles;
  }; 

  /* yacc interface */
  void  yyerror(const char *,...);
  void  yyerror2(const char *,...);
  void  yywarning(const char *,...);
  void  yywarning2(const char *,...);

  /* lexer interface */
  int yylex(void);
  extern FILE *yyin;
  extern int lineno;
  extern int arglineno;
  extern char *yytext;
  extern char *argyytext;
  extern char *currentfile;
  extern char *argcurrentfile;
  extern int buffer_stack_ptr;

  /* Local variables */
  static int cfg_errflag = FALSE;
  static Service_T tail = NULL;
  static Service_T current = NULL;
  static unsigned int eventset;
  static Request_T urlrequest = NULL;
  static Command_T command = NULL;
  static Command_T command1 = NULL;
  static Command_T command2 = NULL;
  static Service_T depend_list = NULL;
  static struct mygid gidset;
  static struct myuid uidset;
  static struct myperm permset;
  static struct mysize sizeset;
  static struct mymatch matchset;
  static struct myicmp icmpset;
  static struct mymail mailset;
  static struct myport portset;
  static struct mymailserver mailserverset;
  static struct myfilesystem filesystemset;
  static struct myresource resourceset;
  static struct mychecksum checksumset;
  static struct mytimestamp timestampset;
  static struct myactionrate actionrateset;
  static struct IHavePrecedence ihp = {FALSE, FALSE, FALSE};
  static struct myrate rate1 = {1, 1};
  static struct myrate rate2 = {1, 1};
  static char * htpasswd_file = NULL;
  static char * exec = NULL;
  static int    digesttype = DIGEST_CLEARTEXT;
  static int    hassystem = FALSE;

#define BITMAP_MAX (sizeof(long long) * 8)

  
/* -------------------------------------------------------------- Prototypes */

  static void  preparse();
  static void  postparse();
  static void  addservice(Service_T);
  static void  addmail(char *, Mail_T, Mail_T *, unsigned int, unsigned int);
  static void  createservice(int, char *, char *, int (*)(Service_T));
  static void  adddependant(char *);
  static void  addservicegroup(char *);
  static void  addport(Port_T);
  static void  addresource(Resource_T);
  static void  addtimestamp(Timestamp_T, int);
  static void  addactionrate(ActionRate_T);
  static void  addsize(Size_T);
  static void  addfilesystem(Filesystem_T);
  static void  addicmp(Icmp_T);
  static void *addprotocol(int);
  static void  addgeneric(Port_T, char*, char*);
  static void  addcommand(int, unsigned);
  static void  addargument(char *);
  static void  addexec(char *);
  static void  addmmonit(URL_T, int, int, char *);
  static void  addmailserver(MailServer_T);
  static int   addcredentials(char *, char *, int, int);
#ifdef HAVE_LIBPAM
  static void  addpamauth(char *, int);
#endif
  static void  addhtpasswdentry(char *, char *, int);
  static uid_t get_uid(char *, uid_t);
  static gid_t get_gid(char *, gid_t);
  static void  addchecksum(Checksum_T);
  static void  addperm(Perm_T);
  static void  addmatch(Match_T, int, int);
  static void  addmatchpath(Match_T, int);
  static void  adduid(Uid_T);
  static void  addgid(Gid_T);
  static void  addeuid(uid_t);
  static void  addegid(gid_t);
  static void  addeventaction(EventAction_T *, int, int);
  static void  seteventaction(EventAction_T *, int, int);
  static void  prepare_urlrequest(URL_T U);
  static void  seturlrequest(int, char *);
  static void  setlogfile(char *);
  static void  setpidfile(char *);
  static void  reset_mailset();
  static void  reset_mailserverset();
  static void  reset_portset();
  static void  reset_resourceset();
  static void  reset_timestampset();
  static void  reset_actionrateset();
  static void  reset_sizeset();
  static void  reset_checksumset();
  static void  reset_permset();
  static void  reset_uidset();
  static void  reset_gidset();
  static void  reset_filesystemset();
  static void  reset_icmpset();
  static void  reset_rateset();
  static void  check_name(char *);
  static void  check_every(int);
  static int   check_perm(int);
  static void  check_hostname (char *);
  static void  check_exec(char *);
  static int   cleanup_hash_string(char *);
  static void  check_depend();
  static void  setsyslog(char *);
  static Command_T copycommand(Command_T);
  static int verifyMaxForward(int);  



/* Line 189 of yacc.c  */
#line 309 "src/y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     THEN = 260,
     OR = 261,
     FAILED = 262,
     SET = 263,
     LOGFILE = 264,
     FACILITY = 265,
     DAEMON = 266,
     SYSLOG = 267,
     MAILSERVER = 268,
     HTTPD = 269,
     ALLOW = 270,
     ADDRESS = 271,
     INIT = 272,
     READONLY = 273,
     CLEARTEXT = 274,
     MD5HASH = 275,
     SHA1HASH = 276,
     CRYPT = 277,
     DELAY = 278,
     PEMFILE = 279,
     ENABLE = 280,
     DISABLE = 281,
     HTTPDSSL = 282,
     CLIENTPEMFILE = 283,
     ALLOWSELFCERTIFICATION = 284,
     IDFILE = 285,
     STATEFILE = 286,
     SEND = 287,
     EXPECT = 288,
     EXPECTBUFFER = 289,
     CYCLE = 290,
     COUNT = 291,
     REMINDER = 292,
     PIDFILE = 293,
     START = 294,
     STOP = 295,
     PATHTOK = 296,
     HOST = 297,
     HOSTNAME = 298,
     PORT = 299,
     TYPE = 300,
     UDP = 301,
     TCP = 302,
     TCPSSL = 303,
     PROTOCOL = 304,
     CONNECTION = 305,
     ALERT = 306,
     NOALERT = 307,
     MAILFORMAT = 308,
     UNIXSOCKET = 309,
     SIGNATURE = 310,
     TIMEOUT = 311,
     RESTART = 312,
     CHECKSUM = 313,
     EVERY = 314,
     DEFAULT = 315,
     HTTP = 316,
     APACHESTATUS = 317,
     FTP = 318,
     SMTP = 319,
     POP = 320,
     IMAP = 321,
     CLAMAV = 322,
     NNTP = 323,
     NTP3 = 324,
     MYSQL = 325,
     DNS = 326,
     SSH = 327,
     DWP = 328,
     LDAP2 = 329,
     LDAP3 = 330,
     RDATE = 331,
     RSYNC = 332,
     TNS = 333,
     PGSQL = 334,
     POSTFIXPOLICY = 335,
     SIP = 336,
     LMTP = 337,
     GPS = 338,
     RADIUS = 339,
     MEMCACHE = 340,
     STRING = 341,
     PATH = 342,
     MAILADDR = 343,
     MAILFROM = 344,
     MAILREPLYTO = 345,
     MAILSUBJECT = 346,
     MAILBODY = 347,
     SERVICENAME = 348,
     STRINGNAME = 349,
     NUMBER = 350,
     PERCENT = 351,
     LOGLIMIT = 352,
     CLOSELIMIT = 353,
     DNSLIMIT = 354,
     KEEPALIVELIMIT = 355,
     REPLYLIMIT = 356,
     REQUESTLIMIT = 357,
     STARTLIMIT = 358,
     WAITLIMIT = 359,
     GRACEFULLIMIT = 360,
     CLEANUPLIMIT = 361,
     REAL = 362,
     CHECKPROC = 363,
     CHECKFILESYS = 364,
     CHECKFILE = 365,
     CHECKDIR = 366,
     CHECKHOST = 367,
     CHECKSYSTEM = 368,
     CHECKFIFO = 369,
     CHECKSTATUS = 370,
     CHILDREN = 371,
     SYSTEM = 372,
     RESOURCE = 373,
     MEMORY = 374,
     TOTALMEMORY = 375,
     LOADAVG1 = 376,
     LOADAVG5 = 377,
     LOADAVG15 = 378,
     SWAP = 379,
     MODE = 380,
     ACTIVE = 381,
     PASSIVE = 382,
     MANUAL = 383,
     CPU = 384,
     TOTALCPU = 385,
     CPUUSER = 386,
     CPUSYSTEM = 387,
     CPUWAIT = 388,
     GROUP = 389,
     REQUEST = 390,
     DEPENDS = 391,
     BASEDIR = 392,
     SLOT = 393,
     EVENTQUEUE = 394,
     SECRET = 395,
     HOSTHEADER = 396,
     UID = 397,
     GID = 398,
     MMONIT = 399,
     INSTANCE = 400,
     USERNAME = 401,
     PASSWORD = 402,
     TIMESTAMP = 403,
     CHANGED = 404,
     SECOND = 405,
     MINUTE = 406,
     HOUR = 407,
     DAY = 408,
     SSLAUTO = 409,
     SSLV2 = 410,
     SSLV3 = 411,
     TLSV1 = 412,
     CERTMD5 = 413,
     BYTE = 414,
     KILOBYTE = 415,
     MEGABYTE = 416,
     GIGABYTE = 417,
     INODE = 418,
     SPACE = 419,
     PERMISSION = 420,
     SIZE = 421,
     MATCH = 422,
     NOT = 423,
     IGNORE = 424,
     ACTION = 425,
     EXEC = 426,
     UNMONITOR = 427,
     ICMP = 428,
     ICMPECHO = 429,
     NONEXIST = 430,
     EXIST = 431,
     INVALID = 432,
     DATA = 433,
     RECOVERED = 434,
     PASSED = 435,
     SUCCEEDED = 436,
     URL = 437,
     CONTENT = 438,
     PID = 439,
     PPID = 440,
     FSFLAG = 441,
     REGISTER = 442,
     CREDENTIALS = 443,
     URLOBJECT = 444,
     TARGET = 445,
     MAXFORWARD = 446,
     FIPS = 447,
     NOTEQUAL = 448,
     EQUAL = 449,
     LESS = 450,
     GREATER = 451
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define THEN 260
#define OR 261
#define FAILED 262
#define SET 263
#define LOGFILE 264
#define FACILITY 265
#define DAEMON 266
#define SYSLOG 267
#define MAILSERVER 268
#define HTTPD 269
#define ALLOW 270
#define ADDRESS 271
#define INIT 272
#define READONLY 273
#define CLEARTEXT 274
#define MD5HASH 275
#define SHA1HASH 276
#define CRYPT 277
#define DELAY 278
#define PEMFILE 279
#define ENABLE 280
#define DISABLE 281
#define HTTPDSSL 282
#define CLIENTPEMFILE 283
#define ALLOWSELFCERTIFICATION 284
#define IDFILE 285
#define STATEFILE 286
#define SEND 287
#define EXPECT 288
#define EXPECTBUFFER 289
#define CYCLE 290
#define COUNT 291
#define REMINDER 292
#define PIDFILE 293
#define START 294
#define STOP 295
#define PATHTOK 296
#define HOST 297
#define HOSTNAME 298
#define PORT 299
#define TYPE 300
#define UDP 301
#define TCP 302
#define TCPSSL 303
#define PROTOCOL 304
#define CONNECTION 305
#define ALERT 306
#define NOALERT 307
#define MAILFORMAT 308
#define UNIXSOCKET 309
#define SIGNATURE 310
#define TIMEOUT 311
#define RESTART 312
#define CHECKSUM 313
#define EVERY 314
#define DEFAULT 315
#define HTTP 316
#define APACHESTATUS 317
#define FTP 318
#define SMTP 319
#define POP 320
#define IMAP 321
#define CLAMAV 322
#define NNTP 323
#define NTP3 324
#define MYSQL 325
#define DNS 326
#define SSH 327
#define DWP 328
#define LDAP2 329
#define LDAP3 330
#define RDATE 331
#define RSYNC 332
#define TNS 333
#define PGSQL 334
#define POSTFIXPOLICY 335
#define SIP 336
#define LMTP 337
#define GPS 338
#define RADIUS 339
#define MEMCACHE 340
#define STRING 341
#define PATH 342
#define MAILADDR 343
#define MAILFROM 344
#define MAILREPLYTO 345
#define MAILSUBJECT 346
#define MAILBODY 347
#define SERVICENAME 348
#define STRINGNAME 349
#define NUMBER 350
#define PERCENT 351
#define LOGLIMIT 352
#define CLOSELIMIT 353
#define DNSLIMIT 354
#define KEEPALIVELIMIT 355
#define REPLYLIMIT 356
#define REQUESTLIMIT 357
#define STARTLIMIT 358
#define WAITLIMIT 359
#define GRACEFULLIMIT 360
#define CLEANUPLIMIT 361
#define REAL 362
#define CHECKPROC 363
#define CHECKFILESYS 364
#define CHECKFILE 365
#define CHECKDIR 366
#define CHECKHOST 367
#define CHECKSYSTEM 368
#define CHECKFIFO 369
#define CHECKSTATUS 370
#define CHILDREN 371
#define SYSTEM 372
#define RESOURCE 373
#define MEMORY 374
#define TOTALMEMORY 375
#define LOADAVG1 376
#define LOADAVG5 377
#define LOADAVG15 378
#define SWAP 379
#define MODE 380
#define ACTIVE 381
#define PASSIVE 382
#define MANUAL 383
#define CPU 384
#define TOTALCPU 385
#define CPUUSER 386
#define CPUSYSTEM 387
#define CPUWAIT 388
#define GROUP 389
#define REQUEST 390
#define DEPENDS 391
#define BASEDIR 392
#define SLOT 393
#define EVENTQUEUE 394
#define SECRET 395
#define HOSTHEADER 396
#define UID 397
#define GID 398
#define MMONIT 399
#define INSTANCE 400
#define USERNAME 401
#define PASSWORD 402
#define TIMESTAMP 403
#define CHANGED 404
#define SECOND 405
#define MINUTE 406
#define HOUR 407
#define DAY 408
#define SSLAUTO 409
#define SSLV2 410
#define SSLV3 411
#define TLSV1 412
#define CERTMD5 413
#define BYTE 414
#define KILOBYTE 415
#define MEGABYTE 416
#define GIGABYTE 417
#define INODE 418
#define SPACE 419
#define PERMISSION 420
#define SIZE 421
#define MATCH 422
#define NOT 423
#define IGNORE 424
#define ACTION 425
#define EXEC 426
#define UNMONITOR 427
#define ICMP 428
#define ICMPECHO 429
#define NONEXIST 430
#define EXIST 431
#define INVALID 432
#define DATA 433
#define RECOVERED 434
#define PASSED 435
#define SUCCEEDED 436
#define URL 437
#define CONTENT 438
#define PID 439
#define PPID 440
#define FSFLAG 441
#define REGISTER 442
#define CREDENTIALS 443
#define URLOBJECT 444
#define TARGET 445
#define MAXFORWARD 446
#define FIPS 447
#define NOTEQUAL 448
#define EQUAL 449
#define LESS 450
#define GREATER 451




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 262 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;



/* Line 214 of yacc.c  */
#line 746 "src/y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 758 "src/y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   945

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  201
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  157
/* YYNRULES -- Number of rules.  */
#define YYNRULES  482
/* YYNRULES -- Number of states.  */
#define YYNSTATES  845

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   451

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   199,     2,
       2,     2,     2,     2,   200,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   197,     2,   198,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    42,    45,    48,    51,    54,    57,    60,    63,    64,
      67,    69,    71,    73,    75,    77,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    96,    99,   101,   103,   105,
     107,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   132,   135,   137,   139,   141,   143,   145,
     147,   149,   151,   153,   155,   157,   159,   161,   163,   165,
     166,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   223,   226,
     228,   230,   232,   234,   236,   238,   240,   242,   243,   246,
     248,   250,   252,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   273,   276,   278,   280,   282,   284,   286,
     288,   296,   301,   310,   315,   316,   320,   325,   328,   331,
     335,   339,   345,   350,   357,   362,   366,   370,   374,   378,
     381,   385,   390,   391,   394,   400,   406,   412,   414,   417,
     423,   431,   432,   435,   437,   439,   441,   443,   445,   450,
     452,   455,   458,   461,   464,   468,   472,   475,   477,   479,
     482,   485,   488,   491,   494,   497,   498,   501,   502,   504,
     510,   515,   518,   522,   526,   530,   531,   536,   537,   543,
     544,   550,   551,   557,   560,   562,   565,   567,   568,   570,
     575,   580,   585,   590,   595,   600,   605,   610,   613,   618,
     623,   627,   632,   636,   641,   643,   646,   648,   651,   653,
     655,   658,   661,   664,   667,   668,   671,   674,   675,   678,
     679,   682,   694,   705,   716,   727,   728,   731,   734,   737,
     738,   741,   746,   749,   750,   753,   754,   756,   758,   760,
     762,   763,   767,   770,   773,   776,   779,   783,   786,   789,
     792,   795,   798,   803,   806,   809,   812,   815,   818,   821,
     824,   827,   830,   833,   836,   839,   843,   846,   848,   850,
     853,   856,   859,   860,   863,   866,   867,   870,   871,   875,
     881,   882,   885,   888,   890,   894,   899,   904,   909,   914,
     919,   924,   929,   934,   939,   944,   952,   959,   966,   967,
     970,   971,   975,   976,   980,   988,   996,   997,  1001,  1003,
    1005,  1012,  1016,  1024,  1026,  1029,  1032,  1034,  1037,  1039,
    1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,
    1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,  1078,
    1083,  1085,  1088,  1090,  1092,  1094,  1096,  1100,  1103,  1106,
    1109,  1112,  1115,  1117,  1120,  1122,  1129,  1131,  1134,  1136,
    1138,  1140,  1142,  1149,  1151,  1154,  1156,  1158,  1160,  1162,
    1167,  1172,  1177,  1179,  1181,  1183,  1188,  1193,  1198,  1203,
    1208,  1213,  1217,  1221,  1223,  1225,  1227,  1229,  1231,  1241,
    1248,  1249,  1251,  1253,  1255,  1257,  1259,  1260,  1262,  1264,
    1266,  1268,  1270,  1273,  1277,  1279,  1281,  1283,  1285,  1287,
    1289,  1290,  1293,  1297,  1298,  1301,  1305,  1306,  1313,  1320,
    1327,  1336,  1347,  1355,  1356,  1358,  1360,  1369,  1379,  1389,
    1399,  1406,  1407,  1409,  1411,  1413,  1415,  1424,  1432,  1440,
    1445,  1450,  1451,  1453,  1463,  1470,  1479,  1488,  1497,  1506,
    1509,  1510,  1513
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     202,     0,    -1,    -1,   203,    -1,   204,    -1,   203,   204,
      -1,   221,    -1,   222,    -1,   227,    -1,   228,    -1,   232,
      -1,   236,    -1,   237,    -1,   238,    -1,   231,    -1,   229,
      -1,   230,    -1,   224,    -1,   225,    -1,   226,    -1,   261,
     205,    -1,   262,   207,    -1,   263,   209,    -1,   264,   211,
      -1,   265,   213,    -1,   266,   215,    -1,   267,   217,    -1,
     268,   219,    -1,    -1,   205,   206,    -1,   269,    -1,   270,
      -1,   297,    -1,   298,    -1,   299,    -1,   278,    -1,   279,
      -1,   303,    -1,   306,    -1,   314,    -1,   315,    -1,   316,
      -1,   317,    -1,   320,    -1,    -1,   207,   208,    -1,   269,
      -1,   270,    -1,   297,    -1,   335,    -1,   303,    -1,   314,
      -1,   306,    -1,   350,    -1,   354,    -1,   355,    -1,   344,
      -1,   353,    -1,   351,    -1,   315,    -1,   316,    -1,   317,
      -1,    -1,   209,   210,    -1,   269,    -1,   270,    -1,   297,
      -1,   303,    -1,   314,    -1,   306,    -1,   350,    -1,   354,
      -1,   355,    -1,   315,    -1,   316,    -1,   317,    -1,   346,
      -1,   347,    -1,   348,    -1,    -1,   211,   212,    -1,   269,
      -1,   270,    -1,   297,    -1,   335,    -1,   303,    -1,   314,
      -1,   306,    -1,   350,    -1,   354,    -1,   355,    -1,   315,
      -1,   316,    -1,   317,    -1,   214,    -1,   213,   214,    -1,
     269,    -1,   270,    -1,   297,    -1,   278,    -1,   280,    -1,
     303,    -1,   306,    -1,   314,    -1,   315,    -1,   316,    -1,
     317,    -1,    -1,   215,   216,    -1,   269,    -1,   270,    -1,
     303,    -1,   306,    -1,   314,    -1,   316,    -1,   317,    -1,
     323,    -1,    -1,   217,   218,    -1,   269,    -1,   270,    -1,
     297,    -1,   335,    -1,   303,    -1,   314,    -1,   306,    -1,
     350,    -1,   354,    -1,   355,    -1,   315,    -1,   316,    -1,
     317,    -1,    -1,   219,   220,    -1,   303,    -1,   297,    -1,
     306,    -1,   314,    -1,   316,    -1,   317,    -1,     8,   307,
     197,   309,   198,   311,   357,    -1,     8,   307,   311,   357,
      -1,     8,   307,   168,   197,   309,   198,   311,   357,    -1,
       8,    11,    95,   223,    -1,    -1,    39,    23,    95,    -1,
       8,    34,    95,   349,    -1,     8,    17,    -1,     8,   192,
      -1,     8,     9,    87,    -1,     8,     9,    12,    -1,     8,
       9,    12,    10,    86,    -1,     8,   139,   137,    87,    -1,
       8,   139,   137,    87,   138,    95,    -1,     8,   139,   138,
      95,    -1,     8,    30,    87,    -1,     8,    31,    87,    -1,
       8,    38,    87,    -1,     8,   144,   233,    -1,   234,   235,
      -1,   233,   234,   235,    -1,   189,   302,   286,   285,    -1,
      -1,   187,   188,    -1,     8,    13,   239,   302,   277,    -1,
       8,    53,   197,   312,   198,    -1,     8,    14,    44,    95,
     241,    -1,   240,    -1,   239,   240,    -1,    86,   275,   276,
     286,   285,    -1,    86,    44,    95,   275,   276,   286,   285,
      -1,    -1,   241,   242,    -1,   243,    -1,   246,    -1,   249,
      -1,   253,    -1,   245,    -1,   244,   250,   251,   252,    -1,
      27,    -1,    27,    25,    -1,    25,    27,    -1,    27,    26,
      -1,    26,    27,    -1,   245,    24,    87,    -1,   245,    28,
      87,    -1,   245,    29,    -1,   247,    -1,   248,    -1,    55,
      25,    -1,    25,    55,    -1,    55,    26,    -1,    26,    55,
      -1,    16,    86,    -1,    24,    87,    -1,    -1,    28,    87,
      -1,    -1,    29,    -1,    15,    86,   199,    86,   260,    -1,
      15,   200,    86,   260,    -1,    15,    87,    -1,    15,    19,
      87,    -1,    15,    20,    87,    -1,    15,    22,    87,    -1,
      -1,    15,    87,   254,   258,    -1,    -1,    15,    19,    87,
     255,   258,    -1,    -1,    15,    20,    87,   256,   258,    -1,
      -1,    15,    22,    87,   257,   258,    -1,    15,    86,    -1,
     259,    -1,   258,   259,    -1,    86,    -1,    -1,    18,    -1,
     108,    93,    38,    87,    -1,   108,    93,    41,    87,    -1,
     108,    93,   167,    86,    -1,   108,    93,   167,    87,    -1,
     110,    93,    41,    87,    -1,   109,    93,    41,    87,    -1,
     111,    93,    41,    87,    -1,   112,    93,    16,    86,    -1,
     113,    93,    -1,   114,    93,    41,    87,    -1,   115,    93,
      41,    87,    -1,    39,   271,   301,    -1,    39,   271,   272,
     301,    -1,    40,   271,   301,    -1,    40,   271,   272,   301,
      -1,   273,    -1,   271,   273,    -1,   274,    -1,   272,   274,
      -1,    86,    -1,    87,    -1,   142,    86,    -1,   143,    86,
      -1,   142,    95,    -1,   143,    95,    -1,    -1,   146,    88,
      -1,   146,    86,    -1,    -1,   147,    86,    -1,    -1,    43,
      86,    -1,     3,     7,   281,   282,   284,   287,   302,   341,
       5,   339,   343,    -1,     3,     7,   182,   189,   304,   302,
     341,     5,   339,   343,    -1,     3,     7,   283,   284,   287,
     302,   341,     5,   339,   343,    -1,     3,     7,   173,   356,
     300,   302,   341,     5,   339,   343,    -1,    -1,    42,    86,
      -1,    44,    95,    -1,    54,    87,    -1,    -1,    45,    47,
      -1,    45,    48,   286,   285,    -1,    45,    46,    -1,    -1,
     158,    86,    -1,    -1,   155,    -1,   156,    -1,   157,    -1,
     154,    -1,    -1,    49,    62,   295,    -1,    49,    60,    -1,
      49,    71,    -1,    49,    73,    -1,    49,    63,    -1,    49,
      61,   292,    -1,    49,    66,    -1,    49,    67,    -1,    49,
      74,    -1,    49,    75,    -1,    49,    70,    -1,    49,    81,
     290,   291,    -1,    49,    68,    -1,    49,    69,    -1,    49,
      80,    -1,    49,    65,    -1,    49,    64,    -1,    49,    72,
      -1,    49,    76,    -1,    49,    77,    -1,    49,    78,    -1,
      49,    79,    -1,    49,    82,    -1,    49,    83,    -1,    49,
      84,   294,    -1,    49,    85,    -1,   288,    -1,   289,    -1,
     288,   289,    -1,    32,    86,    -1,    33,    86,    -1,    -1,
     190,    88,    -1,   190,    86,    -1,    -1,   191,    95,    -1,
      -1,   135,    87,   293,    -1,   135,    87,    58,    86,   293,
      -1,    -1,   141,    86,    -1,   140,    86,    -1,   296,    -1,
     295,     6,   296,    -1,    97,   336,    95,    96,    -1,    98,
     336,    95,    96,    -1,    99,   336,    95,    96,    -1,   100,
     336,    95,    96,    -1,   101,   336,    95,    96,    -1,   102,
     336,    95,    96,    -1,   103,   336,    95,    96,    -1,   104,
     336,    95,    96,    -1,   105,   336,    95,    96,    -1,   106,
     336,    95,    96,    -1,     3,   168,   176,   341,     5,   339,
     343,    -1,     3,   149,   184,   341,     5,   339,    -1,     3,
     149,   185,   341,     5,   339,    -1,    -1,    36,    95,    -1,
      -1,    56,    95,   150,    -1,    -1,    56,    95,   150,    -1,
       3,    95,    57,    95,    35,     5,   339,    -1,     3,    95,
      57,    95,    35,     5,    56,    -1,    -1,   183,   305,    86,
      -1,   194,    -1,   193,    -1,   307,   197,   309,   198,   311,
     357,    -1,   307,   311,   357,    -1,   307,   168,   197,   309,
     198,   311,   357,    -1,   308,    -1,    51,    88,    -1,    52,
      88,    -1,   310,    -1,   309,   310,    -1,   170,    -1,    58,
      -1,    50,    -1,   183,    -1,   178,    -1,   171,    -1,   186,
      -1,   143,    -1,   173,    -1,   145,    -1,   177,    -1,   175,
      -1,   165,    -1,   184,    -1,   185,    -1,   118,    -1,   166,
      -1,    56,    -1,   148,    -1,   142,    -1,    -1,    53,   197,
     312,   198,    -1,   313,    -1,   312,   313,    -1,    89,    -1,
      90,    -1,    91,    -1,    92,    -1,    59,    95,    35,    -1,
     125,   126,    -1,   125,   127,    -1,   125,   128,    -1,   134,
      94,    -1,   136,   318,    -1,   319,    -1,   318,   319,    -1,
      93,    -1,     3,   321,   341,     5,   339,   343,    -1,   322,
      -1,   321,   322,    -1,   326,    -1,   329,    -1,   331,    -1,
     332,    -1,     3,   324,   341,     5,   339,   343,    -1,   325,
      -1,   324,   325,    -1,   332,    -1,   329,    -1,   330,    -1,
     327,    -1,   129,   336,    95,    96,    -1,   130,   336,    95,
      96,    -1,   328,   336,    95,    96,    -1,   131,    -1,   132,
      -1,   133,    -1,   119,   336,   334,   349,    -1,   119,   336,
      95,    96,    -1,   120,   336,   334,   349,    -1,   120,   336,
      95,    96,    -1,   124,   336,   334,   349,    -1,   124,   336,
      95,    96,    -1,   116,   336,    95,    -1,   333,   336,   334,
      -1,   121,    -1,   122,    -1,   123,    -1,   107,    -1,    95,
      -1,     3,   148,   336,    95,   337,   341,     5,   339,   343,
      -1,     3,   149,   148,   341,     5,   339,    -1,    -1,   196,
      -1,   195,    -1,   194,    -1,   193,    -1,   149,    -1,    -1,
     150,    -1,   151,    -1,   152,    -1,   153,    -1,    51,    -1,
     171,   271,    -1,   171,   271,   272,    -1,    57,    -1,    39,
      -1,    40,    -1,   172,    -1,   338,    -1,   338,    -1,    -1,
      95,    35,    -1,    95,    95,    35,    -1,    -1,    95,    35,
      -1,    95,    95,    35,    -1,    -1,     4,     3,   179,   342,
       5,   340,    -1,     4,     3,   180,   342,     5,   340,    -1,
       4,     3,   181,   342,     5,   340,    -1,     3,     7,   345,
      58,   341,     5,   339,   343,    -1,     3,     7,   345,    58,
      33,    86,   341,     5,   339,   343,    -1,     3,   149,   345,
      58,   341,     5,   339,    -1,    -1,    20,    -1,    21,    -1,
       3,   163,   336,    95,   341,     5,   339,   343,    -1,     3,
     163,   336,    95,    96,   341,     5,   339,   343,    -1,     3,
     164,   336,   334,   349,   341,     5,   339,   343,    -1,     3,
     164,   336,    95,    96,   341,     5,   339,   343,    -1,     3,
     149,   186,   341,     5,   339,    -1,    -1,   159,    -1,   160,
      -1,   161,    -1,   162,    -1,     3,     7,   165,    95,   341,
       5,   339,   343,    -1,     3,   352,   167,    87,   341,     5,
     339,    -1,     3,   352,   167,    86,   341,     5,   339,    -1,
     169,   352,   167,    87,    -1,   169,   352,   167,    86,    -1,
      -1,   168,    -1,     3,   166,   336,    95,   349,   341,     5,
     339,   343,    -1,     3,   149,   166,   341,     5,   339,    -1,
       3,     7,   142,    86,   341,     5,   339,   343,    -1,     3,
       7,   142,    95,   341,     5,   339,   343,    -1,     3,     7,
     143,    86,   341,     5,   339,   343,    -1,     3,     7,   143,
      95,   341,     5,   339,   343,    -1,    45,   174,    -1,    -1,
      37,    95,    -1,    37,    95,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   308,   308,   309,   312,   313,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   340,   341,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   360,   361,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   382,   383,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   403,
     404,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   422,   423,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   439,   440,   443,
     444,   445,   446,   447,   448,   449,   450,   453,   454,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   472,   473,   476,   477,   478,   479,   480,   481,
     484,   487,   490,   498,   508,   509,   512,   517,   522,   529,
     537,   540,   545,   548,   552,   558,   563,   568,   576,   579,
     580,   583,   589,   590,   595,   601,   610,   616,   617,   620,
     639,   658,   659,   662,   663,   664,   665,   668,   669,   676,
     677,   678,   681,   682,   683,   684,   685,   688,   689,   692,
     693,   696,   697,   700,   703,   710,   711,   719,   723,   729,
     732,   740,   744,   748,   752,   756,   756,   763,   763,   770,
     770,   777,   777,   784,   792,   793,   796,   800,   801,   804,
     807,   810,   817,   826,   831,   836,   841,   847,   853,   858,
     863,   866,   871,   874,   879,   880,   891,   892,   895,   896,
     899,   900,   901,   902,   905,   906,   907,   910,   911,   914,
     915,   918,   924,   933,   941,   951,   957,   960,   963,   968,
     971,   974,   982,   987,   988,   991,   992,   993,   994,   995,
     998,  1001,  1004,  1007,  1010,  1013,  1016,  1019,  1022,  1025,
    1028,  1031,  1034,  1037,  1040,  1044,  1047,  1050,  1053,  1056,
    1059,  1062,  1065,  1068,  1071,  1074,  1077,  1080,  1085,  1086,
    1089,  1090,  1093,  1094,  1097,  1102,  1103,  1108,  1109,  1113,
    1120,  1121,  1126,  1131,  1132,  1135,  1139,  1143,  1147,  1151,
    1155,  1159,  1163,  1167,  1171,  1177,  1183,  1188,  1193,  1196,
    1201,  1204,  1209,  1212,  1217,  1223,  1231,  1232,  1238,  1239,
    1242,  1245,  1248,  1251,  1256,  1259,  1262,  1263,  1266,  1267,
    1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,
    1278,  1279,  1280,  1281,  1282,  1283,  1284,  1285,  1288,  1289,
    1292,  1293,  1296,  1297,  1298,  1299,  1302,  1309,  1312,  1315,
    1321,  1325,  1328,  1329,  1332,  1335,  1341,  1342,  1345,  1346,
    1347,  1348,  1351,  1357,  1358,  1361,  1362,  1363,  1364,  1367,
    1372,  1379,  1386,  1387,  1388,  1391,  1396,  1401,  1406,  1413,
    1418,  1425,  1432,  1439,  1440,  1441,  1444,  1445,  1448,  1454,
    1461,  1462,  1463,  1464,  1465,  1466,  1469,  1470,  1471,  1472,
    1473,  1476,  1477,  1478,  1479,  1480,  1481,  1482,  1485,  1494,
    1503,  1504,  1510,  1520,  1521,  1527,  1537,  1540,  1543,  1546,
    1551,  1555,  1562,  1568,  1569,  1570,  1573,  1580,  1589,  1598,
    1607,  1612,  1613,  1614,  1615,  1616,  1619,  1626,  1633,  1639,
    1646,  1654,  1657,  1663,  1669,  1676,  1682,  1689,  1695,  1702,
    1705,  1706,  1707
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "THEN", "OR", "FAILED",
  "SET", "LOGFILE", "FACILITY", "DAEMON", "SYSLOG", "MAILSERVER", "HTTPD",
  "ALLOW", "ADDRESS", "INIT", "READONLY", "CLEARTEXT", "MD5HASH",
  "SHA1HASH", "CRYPT", "DELAY", "PEMFILE", "ENABLE", "DISABLE", "HTTPDSSL",
  "CLIENTPEMFILE", "ALLOWSELFCERTIFICATION", "IDFILE", "STATEFILE", "SEND",
  "EXPECT", "EXPECTBUFFER", "CYCLE", "COUNT", "REMINDER", "PIDFILE",
  "START", "STOP", "PATHTOK", "HOST", "HOSTNAME", "PORT", "TYPE", "UDP",
  "TCP", "TCPSSL", "PROTOCOL", "CONNECTION", "ALERT", "NOALERT",
  "MAILFORMAT", "UNIXSOCKET", "SIGNATURE", "TIMEOUT", "RESTART",
  "CHECKSUM", "EVERY", "DEFAULT", "HTTP", "APACHESTATUS", "FTP", "SMTP",
  "POP", "IMAP", "CLAMAV", "NNTP", "NTP3", "MYSQL", "DNS", "SSH", "DWP",
  "LDAP2", "LDAP3", "RDATE", "RSYNC", "TNS", "PGSQL", "POSTFIXPOLICY",
  "SIP", "LMTP", "GPS", "RADIUS", "MEMCACHE", "STRING", "PATH", "MAILADDR",
  "MAILFROM", "MAILREPLYTO", "MAILSUBJECT", "MAILBODY", "SERVICENAME",
  "STRINGNAME", "NUMBER", "PERCENT", "LOGLIMIT", "CLOSELIMIT", "DNSLIMIT",
  "KEEPALIVELIMIT", "REPLYLIMIT", "REQUESTLIMIT", "STARTLIMIT",
  "WAITLIMIT", "GRACEFULLIMIT", "CLEANUPLIMIT", "REAL", "CHECKPROC",
  "CHECKFILESYS", "CHECKFILE", "CHECKDIR", "CHECKHOST", "CHECKSYSTEM",
  "CHECKFIFO", "CHECKSTATUS", "CHILDREN", "SYSTEM", "RESOURCE", "MEMORY",
  "TOTALMEMORY", "LOADAVG1", "LOADAVG5", "LOADAVG15", "SWAP", "MODE",
  "ACTIVE", "PASSIVE", "MANUAL", "CPU", "TOTALCPU", "CPUUSER", "CPUSYSTEM",
  "CPUWAIT", "GROUP", "REQUEST", "DEPENDS", "BASEDIR", "SLOT",
  "EVENTQUEUE", "SECRET", "HOSTHEADER", "UID", "GID", "MMONIT", "INSTANCE",
  "USERNAME", "PASSWORD", "TIMESTAMP", "CHANGED", "SECOND", "MINUTE",
  "HOUR", "DAY", "SSLAUTO", "SSLV2", "SSLV3", "TLSV1", "CERTMD5", "BYTE",
  "KILOBYTE", "MEGABYTE", "GIGABYTE", "INODE", "SPACE", "PERMISSION",
  "SIZE", "MATCH", "NOT", "IGNORE", "ACTION", "EXEC", "UNMONITOR", "ICMP",
  "ICMPECHO", "NONEXIST", "EXIST", "INVALID", "DATA", "RECOVERED",
  "PASSED", "SUCCEEDED", "URL", "CONTENT", "PID", "PPID", "FSFLAG",
  "REGISTER", "CREDENTIALS", "URLOBJECT", "TARGET", "MAXFORWARD", "FIPS",
  "NOTEQUAL", "EQUAL", "LESS", "GREATER", "'{'", "'}'", "':'", "'@'",
  "$accept", "cfgfile", "statement_list", "statement", "optproclist",
  "optproc", "optfilelist", "optfile", "optfilesyslist", "optfilesys",
  "optdirlist", "optdir", "opthostlist", "opthost", "optsystemlist",
  "optsystem", "optfifolist", "optfifo", "optstatuslist", "optstatus",
  "setalert", "setdaemon", "startdelay", "setexpectbuffer", "setinit",
  "setfips", "setlog", "seteventqueue", "setidfile", "setstatefile",
  "setpid", "setmmonits", "mmonitlist", "mmonit", "credentials",
  "setmailservers", "setmailformat", "sethttpd", "mailserverlist",
  "mailserver", "httpdlist", "httpdoption", "ssl", "sslenable",
  "ssldisable", "signature", "sigenable", "sigdisable", "bindaddress",
  "pemfile", "clientpemfile", "allowselfcert", "allow", "$@1", "$@2",
  "$@3", "$@4", "allowuserlist", "allowuser", "readonly", "checkproc",
  "checkfile", "checkfilesys", "checkdir", "checkhost", "checksystem",
  "checkfifo", "checkstatus", "start", "stop", "argumentlist",
  "useroptionlist", "argument", "useroption", "username", "password",
  "hostname", "connection", "connectionunix", "icmp", "host", "port",
  "unixsocket", "type", "certmd5", "sslversion", "protocol",
  "sendexpectlist", "sendexpect", "target", "maxforward", "request",
  "hostheader", "secret", "apache_stat_list", "apache_stat", "exist",
  "pid", "ppid", "icmpcount", "exectimeout", "nettimeout", "actionrate",
  "urloption", "urloperator", "alert", "alertmail", "noalertmail",
  "eventoptionlist", "eventoption", "formatlist", "formatoptionlist",
  "formatoption", "every", "mode", "group", "depend", "dependlist",
  "dependant", "resourceprocess", "resourceprocesslist",
  "resourceprocessopt", "resourcesystem", "resourcesystemlist",
  "resourcesystemopt", "resourcecpuproc", "resourcecpu", "resourcecpuid",
  "resourcemem", "resourceswap", "resourcechild", "resourceload",
  "resourceloadavg", "value", "timestamp", "operator", "time", "action",
  "action1", "action2", "rate1", "rate2", "recovery", "checksum",
  "hashtype", "inode", "space", "fsflag", "unit", "permission", "match",
  "matchflagnot", "size", "uid", "gid", "icmptype", "reminder", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   123,   125,    58,
      64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   201,   202,   202,   203,   203,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   207,   207,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   209,   209,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   211,
     211,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   213,   213,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   215,   215,   216,
     216,   216,   216,   216,   216,   216,   216,   217,   217,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   219,   219,   220,   220,   220,   220,   220,   220,
     221,   221,   221,   222,   223,   223,   224,   225,   226,   227,
     227,   227,   228,   228,   228,   229,   230,   231,   232,   233,
     233,   234,   235,   235,   236,   237,   238,   239,   239,   240,
     240,   241,   241,   242,   242,   242,   242,   243,   243,   244,
     244,   244,   245,   245,   245,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   250,   251,   251,   252,   252,   253,
     253,   253,   253,   253,   253,   254,   253,   255,   253,   256,
     253,   257,   253,   253,   258,   258,   259,   260,   260,   261,
     261,   261,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   269,   270,   270,   271,   271,   272,   272,   273,   273,
     274,   274,   274,   274,   275,   275,   275,   276,   276,   277,
     277,   278,   278,   279,   280,   281,   281,   282,   283,   284,
     284,   284,   284,   285,   285,   286,   286,   286,   286,   286,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   288,   288,
     289,   289,   290,   290,   290,   291,   291,   292,   292,   292,
     293,   293,   294,   295,   295,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   297,   298,   299,   300,   300,
     301,   301,   302,   302,   303,   303,   304,   304,   305,   305,
     306,   306,   306,   306,   307,   308,   309,   309,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   311,   311,
     312,   312,   313,   313,   313,   313,   314,   315,   315,   315,
     316,   317,   318,   318,   319,   320,   321,   321,   322,   322,
     322,   322,   323,   324,   324,   325,   325,   325,   325,   326,
     326,   327,   328,   328,   328,   329,   329,   329,   329,   330,
     330,   331,   332,   333,   333,   333,   334,   334,   335,   335,
     336,   336,   336,   336,   336,   336,   337,   337,   337,   337,
     337,   338,   338,   338,   338,   338,   338,   338,   339,   340,
     341,   341,   341,   342,   342,   342,   343,   343,   343,   343,
     344,   344,   344,   345,   345,   345,   346,   346,   347,   347,
     348,   349,   349,   349,   349,   349,   350,   351,   351,   351,
     351,   352,   352,   353,   353,   354,   354,   355,   355,   356,
     357,   357,   357
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       7,     4,     8,     4,     0,     3,     4,     2,     2,     3,
       3,     5,     4,     6,     4,     3,     3,     3,     3,     2,
       3,     4,     0,     2,     5,     5,     5,     1,     2,     5,
       7,     0,     2,     1,     1,     1,     1,     1,     4,     1,
       2,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       2,     2,     2,     2,     2,     0,     2,     0,     1,     5,
       4,     2,     3,     3,     3,     0,     4,     0,     5,     0,
       5,     0,     5,     2,     1,     2,     1,     0,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     4,     4,
       3,     4,     3,     4,     1,     2,     1,     2,     1,     1,
       2,     2,     2,     2,     0,     2,     2,     0,     2,     0,
       2,    11,    10,    10,    10,     0,     2,     2,     2,     0,
       2,     4,     2,     0,     2,     0,     1,     1,     1,     1,
       0,     3,     2,     2,     2,     2,     3,     2,     2,     2,
       2,     2,     4,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     1,     1,     2,
       2,     2,     0,     2,     2,     0,     2,     0,     3,     5,
       0,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     7,     6,     6,     0,     2,
       0,     3,     0,     3,     7,     7,     0,     3,     1,     1,
       6,     3,     7,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     2,     1,     1,     1,     1,     3,     2,     2,     2,
       2,     2,     1,     2,     1,     6,     1,     2,     1,     1,
       1,     1,     6,     1,     2,     1,     1,     1,     1,     4,
       4,     4,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     3,     3,     1,     1,     1,     1,     1,     9,     6,
       0,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       0,     2,     3,     0,     2,     3,     0,     6,     6,     6,
       8,    10,     7,     0,     1,     1,     8,     9,     9,     9,
       6,     0,     1,     1,     1,     1,     8,     7,     7,     4,
       4,     0,     1,     9,     6,     8,     8,     8,     8,     2,
       0,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     6,     7,    17,    18,    19,     8,     9,
      15,    16,    14,    10,    11,    12,    13,    28,    44,    62,
      79,     0,   107,   117,   132,     0,     0,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   368,
       0,     0,     0,     0,     0,   227,     0,     0,     1,     5,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    94,    96,    97,    99,   100,    98,   101,
     102,   368,   343,   103,   104,   105,   106,    25,    26,    27,
     150,   149,   144,   244,   332,   167,     0,   155,   156,   461,
     157,   344,     0,     0,     0,   332,   158,   162,     0,     0,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    35,    36,    32,    33,    34,
      37,    38,    39,    40,    41,    42,    43,   471,   471,    45,
      46,    47,    48,    50,    52,    51,    59,    60,    61,    49,
      56,    53,    58,    57,    54,    55,     0,    63,    64,    65,
      66,    67,    69,    68,    73,    74,    75,    76,    77,    78,
      70,    71,    72,     0,    80,    81,    82,    83,    85,    87,
      86,    91,    92,    93,    84,    88,    89,    90,   255,     0,
       0,   238,   239,   330,   234,   330,   345,     0,   377,   378,
     379,   380,   384,   381,   382,    95,     0,     0,   480,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   118,
     119,   120,   121,   123,   125,   124,   129,   130,   131,   122,
     126,   127,   128,     0,   133,   135,   134,   136,   137,   138,
     139,     0,     0,   143,     0,     0,   247,     0,   168,   249,
     171,   462,   463,   464,   465,   146,   372,   373,   374,   375,
       0,   370,   152,   154,   265,   162,     0,   159,     0,     0,
     350,   365,   349,   363,   367,   355,   357,   366,   360,   364,
     348,   353,   356,   359,   358,   352,   351,   361,   362,   354,
       0,   346,     0,   141,   219,   220,   221,   222,   224,   223,
     225,   226,   228,   229,   255,   420,   420,   420,   413,   414,
     415,   420,   420,     0,   440,   386,   388,   389,   390,   391,
     420,   453,   420,   453,   420,   472,     0,   472,     0,     0,
       0,   420,   420,     0,     0,     0,     0,     0,     0,   440,
       0,     0,     0,   330,   235,   236,   230,   330,   232,   376,
     383,     0,     0,   341,   420,   402,   403,   404,   440,   393,
     398,   420,   396,   397,   395,   151,     0,   244,   246,   245,
       0,   265,     0,     0,   164,   166,   165,   371,     0,   269,
     266,   267,   268,   263,   160,   163,     0,     0,   368,   347,
     481,     0,   259,   425,   424,   423,   422,   421,     0,     0,
       0,     0,     0,   440,   440,     0,   387,     0,     0,   454,
     455,     0,     0,     0,     0,     0,   440,   440,     0,     0,
       0,     0,   440,     0,     0,   256,     0,   328,   336,     0,
     259,     0,     0,     0,   240,   242,   241,   243,   237,   231,
     233,     0,   368,     0,   394,     0,     0,   145,   247,   248,
     263,   333,   250,     0,     0,     0,     0,   179,     0,   172,
     173,     0,   177,   174,   187,   188,   175,   176,   153,     0,
     161,   369,   368,   480,   482,   258,     0,   270,   411,   417,
     416,   461,   417,   461,     0,     0,     0,     0,   441,     0,
       0,   417,   412,   440,   440,   440,   440,   440,   440,   426,
       0,     0,   440,   461,   440,   440,   470,   469,     0,   440,
     417,   461,   479,     0,   332,     0,   332,   257,   270,     0,
       0,   331,   368,   480,   417,   461,     0,     0,   265,   169,
       0,     0,     0,   213,   201,     0,   193,   181,   190,   183,
     192,   180,   182,   189,   191,     0,   195,     0,     0,   186,
     264,   480,   140,   262,   260,   265,     0,     0,     0,   332,
     297,   298,   406,   405,   408,   407,   399,   400,     0,     0,
     442,   435,   436,   431,   434,     0,   437,   438,   446,     0,
       0,     0,     0,     0,     0,     0,   427,   428,   429,   430,
     440,     0,     0,     0,   440,     0,     0,     0,   440,     0,
     440,   440,   329,   440,   339,   338,     0,   440,   332,     0,
     446,   480,   340,   410,   409,   446,   401,   263,   202,   203,
     204,     0,     0,   217,   194,     0,   197,   184,   185,   142,
     263,   300,   301,   272,   307,     0,   275,   287,   286,   277,
     278,   283,   284,   281,   273,   288,   274,   279,   280,   289,
     290,   291,   292,   285,   302,   293,   294,     0,   296,   440,
     299,   326,   327,   432,     0,   385,     0,     0,     0,     0,
       0,   440,     0,     0,   419,   474,     0,     0,     0,     0,
     460,     0,     0,     0,     0,     0,   337,     0,   440,   335,
     334,   325,   342,   392,   170,     0,     0,     0,   217,   216,
     206,   214,   218,   200,   196,   198,   178,   261,     0,   276,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     271,   313,     0,   305,     0,   295,     0,   433,     0,   446,
     446,   446,   446,   446,     0,   446,     0,   452,     0,   468,
     467,     0,   446,     0,     0,     0,     0,     0,   208,   210,
     212,   199,   215,   310,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,   303,     0,   282,   312,
       0,   443,   443,   443,   475,   476,   477,   478,   466,     0,
     450,   446,   446,   446,   456,   446,   446,   446,   446,     0,
       0,     0,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,   306,   446,     0,     0,     0,     0,
     446,   418,   473,   457,   459,   458,   254,   252,   446,   310,
     311,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   253,   444,     0,     0,     0,     0,   451,   251,   309,
     445,   439,   447,   448,   449
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    60,   122,    61,   139,    62,   157,
      63,   174,    72,    73,    87,   210,    88,   219,    89,   234,
      13,    14,   243,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   106,   107,   267,    24,    25,    26,    94,    95,
     375,   459,   460,   461,   462,   463,   464,   465,   466,   546,
     626,   706,   467,   622,   695,   696,   697,   700,   701,   703,
      27,    28,    29,    30,    31,    32,    33,    34,    74,    75,
     193,   343,   194,   345,   246,   371,   374,    76,   126,    77,
     337,   430,   392,   477,   470,   383,   559,   560,   561,   723,
     768,   709,   792,   725,   720,   721,    78,   128,   129,   514,
     346,   249,    79,   516,   606,    80,    81,    82,   290,   291,
     111,   260,   261,    83,    84,    85,    86,   203,   204,   136,
     314,   315,   218,   358,   359,   316,   360,   361,   317,   363,
     318,   319,   320,   481,   149,   398,   590,   577,   578,   842,
     407,   807,   665,   150,   414,   167,   168,   169,   255,   151,
     152,   326,   153,   154,   155,   427,   293
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -585
static const yytype_int16 yypact[] =
{
     445,    88,   -57,   -22,   -20,   -17,   -14,   -11,    -4,    17,
     108,   445,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,   341,  -585,  -585,  -585,    42,    21,    47,    92,  -585,
      70,   107,   122,   119,   135,    38,   -85,    87,  -585,   -36,
       7,   212,   237,   244,   272,  -585,   252,   279,  -585,  -585,
     473,    41,   526,   549,    22,    67,    67,   238,   235,   196,
     247,   239,   341,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,   -16,  -585,  -585,  -585,  -585,  -585,   577,   549,   206,
     333,  -585,   308,   -26,   -18,  -585,   255,  -585,  -585,   290,
    -585,  -585,   389,   268,   265,   309,    87,   181,   177,   179,
     449,   342,   319,   321,   216,   324,   336,   344,   361,   371,
     374,   178,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,    14,   227,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,    91,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,    39,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,    23,   410,
     294,  -585,  -585,   377,  -585,   377,  -585,   450,  -585,  -585,
    -585,  -585,  -585,   239,  -585,  -585,   292,   449,   342,   544,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,   -56,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,   405,   470,  -585,   413,   -30,   364,   435,  -585,   490,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
     160,  -585,   401,  -585,   393,   181,   354,  -585,   389,   449,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
     186,  -585,   456,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,     9,   245,   245,   245,  -585,  -585,
    -585,   245,   245,   111,   415,  -585,  -585,  -585,  -585,  -585,
     245,   104,   245,    63,   245,   294,   403,  -585,   407,   240,
     386,   245,   245,   431,   504,   548,   406,   555,   511,   523,
     528,    45,    64,   -15,  -585,  -585,  -585,   -15,  -585,  -585,
    -585,   449,   259,  -585,   245,  -585,  -585,  -585,   574,  -585,
    -585,   245,  -585,  -585,  -585,  -585,   530,   497,  -585,  -585,
     535,   393,   532,   575,  -585,   615,  -585,  -585,   583,  -585,
    -585,  -585,  -585,   533,  -585,  -585,   298,   317,   633,  -585,
     668,   605,   659,  -585,  -585,  -585,  -585,  -585,   617,   -40,
     -33,   630,   648,   523,   523,     8,  -585,   742,    -1,  -585,
    -585,   153,   184,   653,   696,   660,   523,   523,   726,   690,
     219,   224,   523,   691,    28,  -585,   613,   752,   606,   695,
     659,   756,   787,   643,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,   398,   633,    49,  -585,   789,   700,  -585,   364,  -585,
     533,  -585,  -585,     0,   710,    15,    33,   288,   313,  -585,
    -585,   773,   209,  -585,  -585,  -585,  -585,  -585,  -585,   712,
    -585,  -585,   633,   342,  -585,  -585,   475,   234,  -585,   703,
    -585,   290,   704,   290,   705,   706,   798,   799,  -585,   770,
     346,  -585,  -585,   523,   523,   523,   523,   523,    26,   452,
     801,   802,   523,   290,   523,   523,  -585,  -585,   803,   303,
     713,   290,  -585,   715,   309,   280,   309,  -585,   234,   806,
     346,  -585,   633,   342,   716,   290,   346,   717,   393,  -585,
     727,   728,   729,   618,   732,   733,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,   734,   792,   735,   736,  -585,
    -585,   342,  -585,  -585,  -585,   393,   738,   739,   698,   309,
     465,  -585,  -585,  -585,  -585,  -585,  -585,  -585,   346,   346,
    -585,  -585,  -585,  -585,  -585,    67,  -585,  -585,   822,   823,
     824,   825,   826,   827,   741,   828,  -585,  -585,  -585,  -585,
     523,   346,   346,   829,   523,   830,   831,   346,   523,   832,
     523,   523,  -585,   523,  -585,  -585,   753,   523,   309,   297,
     822,   342,  -585,  -585,  -585,   822,  -585,   533,   754,   755,
     757,   758,   759,   820,  -585,   760,   813,  -585,  -585,  -585,
     533,  -585,  -585,  -585,   711,   636,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,   658,  -585,  -585,   709,  -585,   523,
    -585,  -585,  -585,   176,   847,  -585,   346,   346,   346,   346,
     346,   523,   346,   846,  -585,  -585,   346,   848,   346,   346,
    -585,   849,   346,   850,   851,   852,  -585,   853,   523,  -585,
    -585,  -585,  -585,  -585,  -585,   759,   759,   759,   820,  -585,
     759,  -585,  -585,  -585,  -585,  -585,  -585,  -585,   765,  -585,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     854,  -585,   155,   670,   776,  -585,   858,   384,   469,   822,
     822,   822,   822,   822,   859,   822,   346,  -585,   346,  -585,
    -585,   346,   822,   346,   346,   346,   346,   860,   759,   759,
     759,  -585,  -585,   -28,   764,   771,   772,   774,   775,   777,
     778,   779,   780,   781,   636,  -585,  -585,   782,  -585,  -585,
     346,   783,   783,   783,  -585,  -585,  -585,  -585,  -585,   346,
    -585,   822,   822,   822,  -585,   822,   822,   822,   822,   346,
     785,   793,  -585,   784,   786,   788,   790,   791,   794,   795,
     796,   797,   800,  -585,  -585,   822,    12,   863,   876,   878,
     822,  -585,  -585,  -585,  -585,  -585,  -585,  -585,   822,   744,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,   862,   346,   346,   346,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -585,  -585,  -585,   877,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,   817,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,   804,   629,  -585,  -585,  -585,  -585,   805,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,    13,  -322,   197,
    -585,  -585,  -585,  -585,  -585,  -585,  -585,  -585,   550,   669,
     -66,  -192,  -191,  -336,   531,   453,  -585,   840,  -585,  -585,
    -585,  -585,  -585,   472,  -422,  -363,   385,  -585,   345,  -585,
    -585,  -585,    85,  -585,  -585,   142,   661,  -585,  -585,  -585,
    -183,  -104,   584,  -585,  -585,   592,   906,  -585,  -158,  -257,
     -76,   640,  -244,   627,   596,   639,   657,  -585,   708,  -585,
    -585,   595,  -585,  -585,   554,  -585,  -585,  -585,  -185,  -585,
    -585,  -169,  -585,  -339,   -13,  -297,  -585,   -83,  -454,  -274,
    -326,  -186,  -584,  -585,   590,  -585,  -585,  -585,     3,   157,
    -585,   807,  -585,   168,   198,  -585,  -202
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -212
static const yytype_int16 yytable[] =
{
     195,   264,   344,   347,   344,   208,   353,   438,   450,   399,
     400,   438,   348,   432,   401,   402,   377,   108,   244,   530,
     531,   321,   532,   408,   362,   415,   691,   419,   529,   188,
     790,   693,   445,   389,   423,   424,    50,   108,   247,   189,
     364,   340,   537,   488,   137,   112,   329,   832,   113,   352,
     184,   334,   103,   104,    90,   479,   368,   443,   369,   584,
     539,   483,   482,   391,   446,   334,   610,   480,    93,   492,
     538,    51,   615,    52,   480,   229,    53,   486,   487,    54,
      65,    66,    55,   409,   410,   511,   533,   534,   540,    56,
     500,   501,    44,    67,   491,   389,   508,    35,   329,    36,
      68,    37,    38,   489,   525,    39,   480,   833,    58,   189,
      57,   387,   190,   791,   661,   662,    92,   189,    40,    41,
     245,   405,    42,   510,   409,   410,    43,   341,   342,    91,
     389,   434,   109,    93,   189,   480,    96,   674,   675,    44,
     435,    45,   377,   680,   524,   774,   775,   776,   777,   778,
     436,   780,   206,   191,   192,   690,   480,    97,   784,   437,
     439,   110,   322,   323,   440,   617,    69,   579,   580,   581,
     582,   583,   585,   362,   114,    70,   593,    71,   595,   596,
     324,   207,   325,   599,   389,   304,   189,   322,   333,   364,
     190,   336,   630,   441,    98,   694,   335,   811,   812,   813,
     535,   814,   815,   816,   817,   336,   100,   190,   707,   233,
     138,   416,   729,   730,   731,   732,   733,    99,   735,   170,
     185,   831,   737,   101,   739,   740,   837,    46,   742,   417,
     171,   186,    47,   547,   838,   102,   270,   548,   549,   493,
     330,   765,   271,   766,   272,   230,   411,   412,   494,   256,
     257,   258,   259,   115,   331,   332,   231,    44,    67,   190,
     172,   187,   191,   192,   673,    68,   556,   557,   677,   413,
     495,   552,   681,   189,   683,   684,   105,   685,   116,   496,
      48,   687,   781,   558,   782,   117,   232,   783,   118,   785,
     786,   787,   788,   119,   305,   403,   404,   306,   307,   308,
     309,   310,   296,   297,   273,   504,   505,   311,   312,   270,
     506,   507,   473,   541,   542,   271,   805,   272,   341,   342,
     120,   612,   198,   199,   200,   810,   196,   313,   274,   275,
     197,   276,   202,   726,   277,   818,   571,   572,   543,   544,
      70,   201,    71,   241,    64,   734,   190,   242,   573,   629,
     250,   278,   279,   689,   574,   262,   280,   281,   376,   282,
     263,   283,   747,   284,   285,   247,   523,   270,   266,   286,
     287,   288,   289,   271,   268,   272,   269,   273,   752,   292,
      65,    66,   411,   412,   388,   571,   572,   256,   257,   258,
     259,   438,    44,    67,   393,   327,   551,   573,   405,   598,
      68,   274,   275,   574,   276,   413,   294,   277,   295,   692,
     603,   298,   607,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   299,   278,   279,   752,   752,   752,   280,
     281,   300,   282,   340,   283,   273,   284,   285,   394,   395,
     396,   397,   286,   287,   288,   289,   611,   301,   270,   251,
     252,   253,   254,     1,   271,   659,   272,   442,   302,   274,
     275,   303,   276,   191,   192,   277,    69,   338,   575,   576,
     339,   727,   344,   604,   605,    70,   121,    71,   256,   257,
     258,   259,   278,   279,   563,   349,   565,   280,   281,   351,
     282,   365,   283,   366,   284,   285,   471,   556,   557,   270,
     286,   287,   288,   289,   688,   271,   594,   272,   367,   663,
     405,   370,    65,    66,   601,   472,   273,   575,   576,   341,
     342,   553,   554,   555,    44,    67,   341,   342,   614,   156,
     372,   305,    68,   373,   306,   307,   308,   309,   310,   378,
     274,   275,   385,   276,   311,   312,   277,   379,   380,   381,
     382,   390,   173,     2,     3,     4,     5,     6,     7,     8,
       9,   843,   844,   278,   279,    65,    66,   273,   280,   281,
     420,   282,   422,   283,   421,   284,   285,    44,    67,   416,
     209,   286,   287,   288,   289,    68,   808,   809,    65,    66,
     425,   274,   275,   426,   276,   428,   522,   277,    69,   429,
      44,    67,   586,   587,   588,   589,   431,    70,    68,    71,
     123,   140,   158,   175,   278,   279,    65,    66,   405,   280,
     281,   449,   282,   433,   283,   447,   284,   285,    44,    67,
     453,   454,   286,   287,   288,   289,    68,   211,   220,   189,
     455,   456,   457,   245,   130,   143,   161,   178,   771,   772,
     773,    69,   131,   144,   162,   179,   133,   146,   164,   181,
      70,   452,    71,   306,   307,   308,   309,   310,   354,   405,
     458,   213,   223,   236,    69,   355,   356,   357,   468,   214,
     224,   237,   451,    70,   226,    71,   108,   132,   145,   163,
     180,   469,   475,   306,   307,   308,   309,   310,   354,   134,
     147,   165,   182,   474,   476,   355,   356,   357,   748,   749,
     750,    70,   478,    71,   215,   225,   238,   135,   148,   166,
     183,   127,   142,   160,   177,   484,   216,   227,   239,   124,
     141,   159,   176,   710,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   485,   217,   228,   240,   490,   497,   222,
     235,   841,   841,   841,   498,   499,   212,   221,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   502,   503,   509,   512,   513,   515,
     517,   519,   520,   521,   526,   527,   536,   545,   550,   562,
     564,   566,   567,   568,   569,   570,   591,   592,   597,   600,
     602,   609,   613,   616,   618,   619,   620,   621,  -205,   623,
     625,   624,   627,   628,   631,   632,   664,   671,   666,   667,
     668,   669,   670,   672,   676,   678,   679,   682,   702,   686,
    -207,  -209,   705,  -211,   698,   699,   708,   704,   722,   724,
     728,   736,   753,   738,   741,   743,   744,   745,   746,   793,
     764,   767,   769,   770,   779,   789,   794,   795,   834,   796,
     797,   819,   798,   799,   800,   801,   802,   804,   806,   820,
     821,   835,   822,   836,   823,   791,   824,   825,    59,   205,
     826,   827,   828,   829,   384,   751,   830,   840,   448,   248,
     125,   528,   518,   608,   839,   660,   803,    49,   386,   406,
     265,   350,   444,   418,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   328
};

static const yytype_int16 yycheck[] =
{
      66,   105,   193,   195,   195,    81,   208,   343,   371,   306,
     307,   347,   195,   339,   311,   312,   260,    53,    44,    19,
      20,     7,    22,   320,   209,   322,   610,   324,   450,     7,
      58,   615,   358,   290,   331,   332,    93,    53,    56,    95,
     209,    56,    27,    35,     3,    38,     7,    35,    41,   207,
      63,    42,   137,   138,    12,    95,    86,   354,    88,    33,
      27,   400,    95,    54,   361,    42,   520,   107,    86,   408,
      55,    93,   526,    93,   107,    88,    93,   403,   404,    93,
      39,    40,    93,    20,    21,   424,    86,    87,    55,    93,
     416,   417,    51,    52,    95,   352,   422,     9,     7,    11,
      59,    13,    14,    95,   443,    17,   107,    95,     0,    95,
      93,   269,   168,   141,   568,   569,    95,    95,    30,    31,
     146,    95,    34,    95,    20,    21,    38,   142,   143,    87,
     387,    86,   168,    86,    95,   107,    44,   591,   592,    51,
      95,    53,   386,   597,    95,   729,   730,   731,   732,   733,
      86,   735,   168,    86,    87,   609,   107,    87,   742,    95,
     343,   197,   148,   149,   347,   528,   125,   493,   494,   495,
     496,   497,   498,   358,   167,   134,   502,   136,   504,   505,
     166,   197,   168,   509,   441,     7,    95,   148,   149,   358,
     168,   182,   555,   351,    87,   617,   173,   781,   782,   783,
     200,   785,   786,   787,   788,   182,    87,   168,   630,     3,
     169,   148,   666,   667,   668,   669,   670,    95,   672,    62,
      63,   805,   676,    88,   678,   679,   810,   139,   682,   166,
      62,    63,   144,    24,   818,   197,    50,    28,    29,    86,
     149,    86,    56,    88,    58,    88,   142,   143,    95,    89,
      90,    91,    92,    41,   163,   164,    88,    51,    52,   168,
      62,    63,    86,    87,   590,    59,    32,    33,   594,   165,
      86,   473,   598,    95,   600,   601,   189,   603,    41,    95,
     192,   607,   736,    49,   738,    41,    88,   741,    16,   743,
     744,   745,   746,    41,   116,   184,   185,   119,   120,   121,
     122,   123,    86,    87,   118,    86,    87,   129,   130,    50,
      86,    87,   388,    25,    26,    56,   770,    58,   142,   143,
      41,   523,   126,   127,   128,   779,    88,   149,   142,   143,
      95,   145,    93,   659,   148,   789,    39,    40,    25,    26,
     134,    94,   136,    10,     3,   671,   168,    39,    51,   551,
      95,   165,   166,    56,    57,    87,   170,   171,   198,   173,
      95,   175,   688,   177,   178,    56,   442,    50,   187,   183,
     184,   185,   186,    56,   197,    58,   197,   118,   700,    37,
      39,    40,   142,   143,   198,    39,    40,    89,    90,    91,
      92,   727,    51,    52,   149,   168,   472,    51,    95,    96,
      59,   142,   143,    57,   145,   165,    87,   148,    87,   611,
     514,    87,   516,   710,   711,   712,   713,   714,   715,   716,
     717,   718,   719,    87,   165,   166,   748,   749,   750,   170,
     171,    87,   173,    56,   175,   118,   177,   178,   193,   194,
     195,   196,   183,   184,   185,   186,   522,    86,    50,   159,
     160,   161,   162,     8,    56,   559,    58,   198,    87,   142,
     143,    87,   145,    86,    87,   148,   125,    57,   171,   172,
     176,   663,   663,   193,   194,   134,     3,   136,    89,    90,
      91,    92,   165,   166,   481,    35,   483,   170,   171,   197,
     173,    86,   175,    23,   177,   178,   198,    32,    33,    50,
     183,   184,   185,   186,   608,    56,   503,    58,    95,   575,
      95,   147,    39,    40,   511,   198,   118,   171,   172,   142,
     143,    46,    47,    48,    51,    52,   142,   143,   525,     3,
      95,   116,    59,    43,   119,   120,   121,   122,   123,   138,
     142,   143,   188,   145,   129,   130,   148,   154,   155,   156,
     157,    95,     3,   108,   109,   110,   111,   112,   113,   114,
     115,   835,   836,   165,   166,    39,    40,   118,   170,   171,
     167,   173,   186,   175,   167,   177,   178,    51,    52,   148,
       3,   183,   184,   185,   186,    59,   772,   773,    39,    40,
      86,   142,   143,    45,   145,   189,   198,   148,   125,    44,
      51,    52,   150,   151,   152,   153,    95,   134,    59,   136,
      60,    61,    62,    63,   165,   166,    39,    40,    95,   170,
     171,    86,   173,    95,   175,    95,   177,   178,    51,    52,
      15,    16,   183,   184,   185,   186,    59,    87,    88,    95,
      25,    26,    27,   146,    60,    61,    62,    63,   179,   180,
     181,   125,    60,    61,    62,    63,    60,    61,    62,    63,
     134,    86,   136,   119,   120,   121,   122,   123,   124,    95,
      55,    87,    88,    89,   125,   131,   132,   133,    95,    87,
      88,    89,   150,   134,    88,   136,    53,    60,    61,    62,
      63,   158,    87,   119,   120,   121,   122,   123,   124,    60,
      61,    62,    63,    35,    45,   131,   132,   133,   695,   696,
     697,   134,    95,   136,    87,    88,    89,    60,    61,    62,
      63,    60,    61,    62,    63,    95,    87,    88,    89,    60,
      61,    62,    63,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    95,    87,    88,    89,     5,    95,    88,
      89,   834,   835,   836,    58,    95,    87,    88,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    58,    95,    95,   174,    36,   183,
      95,    35,     5,   150,     5,    95,    86,    24,    86,    96,
      96,    96,    96,     5,     5,    35,     5,     5,     5,    96,
      95,     5,    96,    96,    87,    87,    87,   199,    86,    86,
      28,    87,    87,    87,    86,    86,     4,    86,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,    18,    86,
      86,    86,    29,    86,    86,    86,   135,    87,   190,   140,
       3,     5,    87,     5,     5,     5,     5,     5,     5,    95,
       6,   191,    86,     5,     5,     5,    95,    95,     5,    95,
      95,    86,    95,    95,    95,    95,    95,    95,    95,    86,
      96,     5,    96,     5,    96,   141,    96,    96,    11,    72,
      96,    96,    96,    96,   265,   698,    96,    35,   367,    94,
      60,   448,   430,   518,   819,   560,   764,     1,   268,   314,
     106,   203,   358,   323,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   108,   109,   110,   111,   112,   113,   114,   115,
     202,   203,   204,   221,   222,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   236,   237,   238,   261,   262,   263,
     264,   265,   266,   267,   268,     9,    11,    13,    14,    17,
      30,    31,    34,    38,    51,    53,   139,   144,   192,   307,
      93,    93,    93,    93,    93,    93,    93,    93,     0,   204,
     205,   207,   209,   211,     3,    39,    40,    52,    59,   125,
     134,   136,   213,   214,   269,   270,   278,   280,   297,   303,
     306,   307,   308,   314,   315,   316,   317,   215,   217,   219,
      12,    87,    95,    86,   239,   240,    44,    87,    87,    95,
      87,    88,   197,   137,   138,   189,   233,   234,    53,   168,
     197,   311,    38,    41,   167,    41,    41,    41,    16,    41,
      41,     3,   206,   269,   270,   278,   279,   297,   298,   299,
     303,   306,   314,   315,   316,   317,   320,     3,   169,   208,
     269,   270,   297,   303,   306,   314,   315,   316,   317,   335,
     344,   350,   351,   353,   354,   355,     3,   210,   269,   270,
     297,   303,   306,   314,   315,   316,   317,   346,   347,   348,
     350,   354,   355,     3,   212,   269,   270,   297,   303,   306,
     314,   315,   316,   317,   335,   350,   354,   355,     7,    95,
     168,    86,    87,   271,   273,   271,    88,    95,   126,   127,
     128,    94,    93,   318,   319,   214,   168,   197,   311,     3,
     216,   269,   270,   303,   306,   314,   316,   317,   323,   218,
     269,   270,   297,   303,   306,   314,   315,   316,   317,   335,
     350,   354,   355,     3,   220,   297,   303,   306,   314,   316,
     317,    10,    39,   223,    44,   146,   275,    56,   240,   302,
      95,   159,   160,   161,   162,   349,    89,    90,    91,    92,
     312,   313,    87,    95,   302,   234,   187,   235,   197,   197,
      50,    56,    58,   118,   142,   143,   145,   148,   165,   166,
     170,   171,   173,   175,   177,   178,   183,   184,   185,   186,
     309,   310,    37,   357,    87,    87,    86,    87,    87,    87,
      87,    86,    87,    87,     7,   116,   119,   120,   121,   122,
     123,   129,   130,   149,   321,   322,   326,   329,   331,   332,
     333,     7,   148,   149,   166,   168,   352,   168,   352,     7,
     149,   163,   164,   149,    42,   173,   182,   281,    57,   176,
      56,   142,   143,   272,   273,   274,   301,   272,   301,    35,
     319,   197,   309,   357,   124,   131,   132,   133,   324,   325,
     327,   328,   329,   330,   332,    86,    23,    95,    86,    88,
     147,   276,    95,    43,   277,   241,   198,   313,   138,   154,
     155,   156,   157,   286,   235,   188,   312,   309,   198,   310,
      95,    54,   283,   149,   193,   194,   195,   196,   336,   336,
     336,   336,   336,   184,   185,    95,   322,   341,   336,    20,
      21,   142,   143,   165,   345,   336,   148,   166,   345,   336,
     167,   167,   186,   336,   336,    86,    45,   356,   189,    44,
     282,    95,   341,    95,    86,    95,    86,    95,   274,   301,
     301,   309,   198,   336,   325,   341,   336,    95,   275,    86,
     286,   150,    86,    15,    16,    25,    26,    27,    55,   242,
     243,   244,   245,   246,   247,   248,   249,   253,    95,   158,
     285,   198,   198,   311,    35,    87,    45,   284,    95,    95,
     107,   334,    95,   334,    95,    95,   341,   341,    35,    95,
       5,    95,   334,    86,    95,    86,    95,    95,    58,    95,
     341,   341,    58,    95,    86,    87,    86,    87,   341,    95,
      95,   334,   174,    36,   300,   183,   304,    95,   284,    35,
       5,   150,   198,   311,    95,   334,     5,    95,   276,   285,
      19,    20,    22,    86,    87,   200,    86,    27,    55,    27,
      55,    25,    26,    25,    26,    24,   250,    24,    28,    29,
      86,   311,   357,    46,    47,    48,    32,    33,    49,   287,
     288,   289,    96,   349,    96,   349,    96,    96,     5,     5,
      35,    39,    40,    51,    57,   171,   172,   338,   339,   341,
     341,   341,   341,   341,    33,   341,   150,   151,   152,   153,
     337,     5,     5,   341,   349,   341,   341,     5,    96,   341,
      96,   349,    95,   302,   193,   194,   305,   302,   287,     5,
     339,   311,   357,    96,   349,   339,    96,   286,    87,    87,
      87,   199,   254,    86,    87,    28,   251,    87,    87,   357,
     286,    86,    86,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   302,
     289,   339,   339,   271,     4,   343,     5,     5,     5,     5,
       5,    86,     5,   341,   339,   339,     5,   341,     5,     5,
     339,   341,     5,   341,   341,   341,    86,   341,   302,    56,
     339,   343,   357,   343,   285,   255,   256,   257,    86,    86,
     258,   259,    18,   260,    87,    29,   252,   285,   135,   292,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     295,   296,   190,   290,   140,   294,   341,   272,     3,   339,
     339,   339,   339,   339,   341,   339,     5,   339,     5,   339,
     339,     5,   339,     5,     5,     5,     5,   341,   258,   258,
     258,   260,   259,    87,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,     6,    86,    88,   191,   291,    86,
       5,   179,   180,   181,   343,   343,   343,   343,   343,     5,
     343,   339,   339,   339,   343,   339,   339,   339,   339,     5,
      58,   141,   293,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,   296,    95,   339,    95,   342,   342,   342,
     339,   343,   343,   343,   343,   343,   343,   343,   339,    86,
      86,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,   343,    35,    95,     5,     5,     5,   343,   343,   293,
      35,   338,   340,   340,   340
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 140:

/* Line 1464 of yacc.c  */
#line 484 "src/p.y"
    {
                    addmail((yyvsp[(2) - (7)].string), &mailset, &Run.maillist, eventset, (yyvsp[(7) - (7)].number));
                  }
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 487 "src/p.y"
    {
                    addmail((yyvsp[(2) - (4)].string), &mailset, &Run.maillist, Event_All, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 490 "src/p.y"
    {
                   addmail((yyvsp[(2) - (8)].string), &mailset, &Run.maillist, ~eventset, (yyvsp[(8) - (8)].number));
                  }
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 498 "src/p.y"
    {
                    if (!Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = TRUE;
                      Run.isdaemon   = TRUE;
                      Run.polltime   = (yyvsp[(3) - (4)].number);
                      Run.startdelay = (yyvsp[(4) - (4)].number);
                    }
                  }
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 508 "src/p.y"
    { (yyval.number) = START_DELAY; }
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 509 "src/p.y"
    { (yyval.number) = (yyvsp[(3) - (3)].number); }
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 512 "src/p.y"
    {
                    Run.expectbuffer = (yyvsp[(3) - (4)].number) * (yyvsp[(4) - (4)].number);
                  }
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 517 "src/p.y"
    {
                    Run.init = TRUE;
                  }
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 522 "src/p.y"
    {
                  #ifdef OPENSSL_FIPS
                    Run.fipsEnabled = TRUE;
                  #endif
                  }
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 529 "src/p.y"
    {
                   if (!Run.logfile || ihp.logfile) {
                     ihp.logfile = TRUE;
                     setlogfile((yyvsp[(3) - (3)].string));
                     Run.use_syslog = FALSE;
                     Run.dolog =TRUE;
                   }
                  }
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 537 "src/p.y"
    {
                    setsyslog(NULL);
                  }
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 540 "src/p.y"
    {
                    setsyslog((yyvsp[(5) - (5)].string)); FREE((yyvsp[(5) - (5)].string));
                  }
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 545 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 548 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (6)].string);
                    Run.eventlist_slots = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 552 "src/p.y"
    {
                    Run.eventlist_dir = xstrdup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[(4) - (4)].number);
                  }
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 558 "src/p.y"
    {
                    Run.idfile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 563 "src/p.y"
    {
                    Run.statefile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 568 "src/p.y"
    {
                   if (!Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = TRUE;
                     setpidfile((yyvsp[(3) - (3)].string));
                   }
                 }
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 583 "src/p.y"
    {
                    check_hostname(((yyvsp[(1) - (4)].url))->hostname);
                    addmmonit((yyvsp[(1) - (4)].url), (yyvsp[(2) - (4)].number), (yyvsp[(3) - (4)].number), (yyvsp[(4) - (4)].string)); 
                  }
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 590 "src/p.y"
    {
                    Run.dommonitcredentials = FALSE;
                  }
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 595 "src/p.y"
    {
                   Run.mailserver_timeout = (yyvsp[(4) - (5)].number);
                   Run.mail_hostname = (yyvsp[(5) - (5)].string);
                  }
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 601 "src/p.y"
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : xstrdup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : xstrdup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : xstrdup(ALERT_MESSAGE);
                   reset_mailset();
                 }
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 610 "src/p.y"
    {
                   Run.dohttpd = TRUE;
                   Run.httpdport = (yyvsp[(4) - (5)].number);
                 }
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 620 "src/p.y"
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = xstrdup((yyvsp[(1) - (5)].string));

                    check_hostname((yyvsp[(1) - (5)].string));
                    mailserverset.host = (yyvsp[(1) - (5)].string);
                    mailserverset.username = (yyvsp[(2) - (5)].string);
                    mailserverset.password = (yyvsp[(3) - (5)].string);
                    mailserverset.ssl.version = (yyvsp[(4) - (5)].number);
                    if (mailserverset.ssl.version != SSL_VERSION_NONE) {
                      mailserverset.ssl.use_ssl = TRUE;
                      if (mailserverset.ssl.version == SSL_VERSION_SSLV2 ||
                         mailserverset.ssl.version == SSL_VERSION_SSLV3)
                         mailserverset.port = PORT_SMTPS;
                      mailserverset.ssl.certmd5 = (yyvsp[(5) - (5)].string);
                    }
                    addmailserver(&mailserverset);
                  }
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 639 "src/p.y"
    {
                    /* Restore the current text overriden by lookahead */
                    FREE(argyytext);
                    argyytext = xstrdup((yyvsp[(1) - (7)].string));

                    check_hostname((yyvsp[(1) - (7)].string));
                    mailserverset.host = (yyvsp[(1) - (7)].string);
                    mailserverset.port = (yyvsp[(3) - (7)].number);
                    mailserverset.username = (yyvsp[(4) - (7)].string);
                    mailserverset.password = (yyvsp[(5) - (7)].string);
                    mailserverset.ssl.version = (yyvsp[(6) - (7)].number);
                    if (mailserverset.ssl.version != SSL_VERSION_NONE) {
                      mailserverset.ssl.use_ssl = TRUE;
                      mailserverset.ssl.certmd5 = (yyvsp[(7) - (7)].string);
                    }
                    addmailserver(&mailserverset);
                  }
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 668 "src/p.y"
    { Run.httpdssl = FALSE; }
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 669 "src/p.y"
    { 
                    Run.httpdssl = TRUE;                   
                    if (!have_ssl())
                      yyerror("SSL is not supported");
                  }
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 683 "src/p.y"
    { FREE((yyvsp[(3) - (3)].string)); }
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 684 "src/p.y"
    { FREE((yyvsp[(3) - (3)].string)); }
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 688 "src/p.y"
    { Run.httpdsig = TRUE; }
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 689 "src/p.y"
    { Run.httpdsig = FALSE; }
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 700 "src/p.y"
    { Run.bind_addr = (yyvsp[(2) - (2)].string); }
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 703 "src/p.y"
    {
                    Run.httpsslpem = (yyvsp[(2) - (2)].string);
                    if (!file_checkStat(Run.httpsslpem, "SSL server PEM file", S_IRWXU))
                      yyerror2("SSL server PEM file has too loose permissions");
                  }
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 711 "src/p.y"
    {
                    Run.httpsslclientpem = (yyvsp[(2) - (2)].string); 
                    Run.clientssl = TRUE;
                    if (!file_checkStat(Run.httpsslclientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                      yyerror2("SSL client PEM file has too loose permissions");
                  }
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 719 "src/p.y"
    { 
                   Run.allowselfcert = FALSE; 
                   config_ssl(Run.allowselfcert); 
                 }
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 723 "src/p.y"
    {   
                    Run.allowselfcert = TRUE;
                    config_ssl(Run.allowselfcert); 
                  }
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 729 "src/p.y"
    {
                    addcredentials((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].string), DIGEST_CLEARTEXT, (yyvsp[(5) - (5)].number));
                  }
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 732 "src/p.y"
    {
#ifdef HAVE_LIBPAM
                    addpamauth((yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].number));
#else
                    yyerror("PAM is not supported");
                    FREE((yyvsp[(3) - (4)].string));
#endif
                  }
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 740 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(2) - (2)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 744 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 748 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_MD5);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 752 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CRYPT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 756 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(2) - (2)].string);
                    digesttype = CLEARTEXT;
                  }
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 760 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 763 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CLEARTEXT;
                  }
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 767 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 770 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_MD5;
                  }
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 774 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 777 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CRYPT;
                  }
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 781 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 784 "src/p.y"
    {
                    if (! (add_net_allow((yyvsp[(2) - (2)].string)) || add_host_allow((yyvsp[(2) - (2)].string)))) {
                      yyerror2("erroneous network or host identifier %s", (yyvsp[(2) - (2)].string)); 
                    }
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 796 "src/p.y"
    { addhtpasswdentry(htpasswd_file, (yyvsp[(1) - (1)].string), digesttype);
                           FREE((yyvsp[(1) - (1)].string)); }
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 800 "src/p.y"
    { (yyval.number) = FALSE; }
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 801 "src/p.y"
    { (yyval.number) = TRUE; }
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 804 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 807 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 810 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = xstrdup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 817 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = xstrdup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 826 "src/p.y"
    {
                    createservice(TYPE_FILE, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_file);
                  }
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 831 "src/p.y"
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_filesystem);
                  }
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 836 "src/p.y"
    {
                    createservice(TYPE_DIRECTORY, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_directory);
                  }
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 841 "src/p.y"
    {
                    check_hostname((yyvsp[(4) - (4)].string)); 
                    createservice(TYPE_HOST, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_remote_host);
                  }
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 847 "src/p.y"
    {
                    createservice(TYPE_SYSTEM, (yyvsp[(2) - (2)].string), xstrdup(""), check_system);
                    hassystem = TRUE;
                  }
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 853 "src/p.y"
    {
                    createservice(TYPE_FIFO, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_fifo);
                  }
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 858 "src/p.y"
    {
                    createservice(TYPE_STATUS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_status);
                  }
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 863 "src/p.y"
    {
                    addcommand(START, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 866 "src/p.y"
    {
                    addcommand(START, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 871 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 874 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 238:

/* Line 1464 of yacc.c  */
#line 895 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 239:

/* Line 1464 of yacc.c  */
#line 896 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 899 "src/p.y"
    { addeuid( get_uid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 900 "src/p.y"
    { addegid( get_gid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 242:

/* Line 1464 of yacc.c  */
#line 901 "src/p.y"
    { addeuid( get_uid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 243:

/* Line 1464 of yacc.c  */
#line 902 "src/p.y"
    { addegid( get_gid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 905 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 906 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 907 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 910 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 911 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 914 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 915 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 919 "src/p.y"
    {
                    portset.timeout = (yyvsp[(7) - (11)].number);
                    addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addport(&portset);
                  }
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 925 "src/p.y"
    { 
                    prepare_urlrequest((yyvsp[(4) - (10)].url));
                    portset.timeout = (yyvsp[(6) - (10)].number);
                    addeventaction(&(portset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addport(&portset);
                  }
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 934 "src/p.y"
    {
                   portset.timeout = (yyvsp[(6) - (10)].number);
                   addeventaction(&(portset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                   addport(&portset);
                  }
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 942 "src/p.y"
    {
                   icmpset.type = (yyvsp[(4) - (10)].number);
                   icmpset.count = (yyvsp[(5) - (10)].number);
                   icmpset.timeout = (yyvsp[(6) - (10)].number);
                   addeventaction(&(icmpset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                   addicmp(&icmpset);
                  }
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 951 "src/p.y"
    {
                    if (current->type == TYPE_HOST)
                      portset.hostname = xstrdup(current->path);
                    else
                      portset.hostname = xstrdup(LOCALHOST);
                  }
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 957 "src/p.y"
    { check_hostname((yyvsp[(2) - (2)].string)); portset.hostname = (yyvsp[(2) - (2)].string); }
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 960 "src/p.y"
    { portset.port = (yyvsp[(2) - (2)].number); portset.family = AF_INET; }
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 963 "src/p.y"
    {
                    portset.pathname = (yyvsp[(2) - (2)].string); portset.family = AF_UNIX;
                  }
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 968 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 971 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 974 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                    portset.SSL.use_ssl = TRUE;
                    portset.SSL.version = (yyvsp[(3) - (4)].number);
                    if (portset.SSL.version == SSL_VERSION_NONE)
                      portset.SSL.version = SSL_VERSION_AUTO;
                    portset.SSL.certmd5 = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 982 "src/p.y"
    {
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 987 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 988 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 991 "src/p.y"
    { (yyval.number) = SSL_VERSION_NONE; }
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 992 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV2; }
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 993 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV3; }
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 994 "src/p.y"
    { (yyval.number) = SSL_VERSION_TLS; }
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 995 "src/p.y"
    { (yyval.number) = SSL_VERSION_AUTO; }
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 998 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DEFAULT);
                  }
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 1001 "src/p.y"
    {
                    portset.protocol = addprotocol(P_APACHESTATUS);
                  }
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 1004 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DEFAULT);
                  }
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 1007 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DNS);
                  }
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 1010 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DWP);
                  }
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 1013 "src/p.y"
    {
                    portset.protocol = addprotocol(P_FTP);
                  }
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 1016 "src/p.y"
    {
                    portset.protocol = addprotocol(P_HTTP);
                  }
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1019 "src/p.y"
    {
                    portset.protocol = addprotocol(P_IMAP);
                  }
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 1022 "src/p.y"
    {
                    portset.protocol = addprotocol(P_CLAMAV);
                  }
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 1025 "src/p.y"
    {
                    portset.protocol = addprotocol(P_LDAP2);
                  }
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1028 "src/p.y"
    {
                    portset.protocol = addprotocol(P_LDAP3);
                  }
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1031 "src/p.y"
    {
                    portset.protocol = addprotocol(P_MYSQL);
                  }
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 1034 "src/p.y"
    {
                    portset.protocol = addprotocol(P_SIP);
                  }
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1037 "src/p.y"
    {
                    portset.protocol = addprotocol(P_NNTP);
                  }
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 1040 "src/p.y"
    {
                    portset.protocol = addprotocol(P_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1044 "src/p.y"
    {
                    portset.protocol = addprotocol(P_POSTFIXPOLICY);
                  }
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1047 "src/p.y"
    {
                    portset.protocol = addprotocol(P_POP);
                  }
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1050 "src/p.y"
    {
                    portset.protocol = addprotocol(P_SMTP);
                  }
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1053 "src/p.y"
    {
                    portset.protocol = addprotocol(P_SSH);
                  }
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1056 "src/p.y"
    {
                    portset.protocol = addprotocol(P_RDATE);
                  }
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1059 "src/p.y"
    {
                    portset.protocol = addprotocol(P_RSYNC);
                  }
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1062 "src/p.y"
    {
                    portset.protocol = addprotocol(P_TNS);
                  }
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 1065 "src/p.y"
    {
                    portset.protocol = addprotocol(P_PGSQL);
                  }
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1068 "src/p.y"
    {
                    portset.protocol = addprotocol(P_LMTP);
                  }
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 1071 "src/p.y"
    {
                    portset.protocol = addprotocol(P_GPS);
                  }
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1074 "src/p.y"
    {
                    portset.protocol = addprotocol(P_RADIUS);
                  }
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1077 "src/p.y"
    {
                    portset.protocol = addprotocol(P_MEMCACHE);
                  }
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1080 "src/p.y"
    {
                    portset.protocol = addprotocol(P_GENERIC);
                  }
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 1089 "src/p.y"
    { addgeneric(&portset, (yyvsp[(2) - (2)].string), NULL); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 301:

/* Line 1464 of yacc.c  */
#line 1090 "src/p.y"
    { addgeneric(&portset, NULL, (yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 303:

/* Line 1464 of yacc.c  */
#line 1094 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 304:

/* Line 1464 of yacc.c  */
#line 1097 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1103 "src/p.y"
    {
                     portset.maxforward = verifyMaxForward((yyvsp[(2) - (2)].number)); 
                   }
    break;

  case 308:

/* Line 1464 of yacc.c  */
#line 1109 "src/p.y"
    { 
                    portset.request = Util_urlEncode((yyvsp[(2) - (3)].string)); 
                    FREE((yyvsp[(2) - (3)].string)); 
                  }
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 1113 "src/p.y"
    {
                    portset.request = Util_urlEncode((yyvsp[(2) - (5)].string));
                    FREE((yyvsp[(2) - (5)].string));
                    portset.request_checksum = (yyvsp[(4) - (5)].string);
                  }
    break;

  case 311:

/* Line 1464 of yacc.c  */
#line 1121 "src/p.y"
    {
                    portset.request_hostheader = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 312:

/* Line 1464 of yacc.c  */
#line 1126 "src/p.y"
    { 
                    portset.request = (yyvsp[(2) - (2)].string); 
                  }
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 1135 "src/p.y"
    { 
                    portset.ApacheStatus.loglimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.loglimit = (int)(yyvsp[(3) - (4)].number); 
                  }
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 1139 "src/p.y"
    { 
                    portset.ApacheStatus.closelimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.closelimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 1143 "src/p.y"
    { 
                    portset.ApacheStatus.dnslimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.dnslimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 1147 "src/p.y"
    { 
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.keepalivelimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 1151 "src/p.y"
    { 
                    portset.ApacheStatus.replylimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.replylimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 1155 "src/p.y"
    { 
                    portset.ApacheStatus.requestlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.requestlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 321:

/* Line 1464 of yacc.c  */
#line 1159 "src/p.y"
    { 
                    portset.ApacheStatus.startlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.startlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 322:

/* Line 1464 of yacc.c  */
#line 1163 "src/p.y"
    { 
                    portset.ApacheStatus.waitlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.waitlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 323:

/* Line 1464 of yacc.c  */
#line 1167 "src/p.y"
    { 
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.gracefullimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 324:

/* Line 1464 of yacc.c  */
#line 1171 "src/p.y"
    { 
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.cleanuplimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 325:

/* Line 1464 of yacc.c  */
#line 1177 "src/p.y"
    {
                    seteventaction(&(current)->action_NONEXIST, (yyvsp[(6) - (7)].number), (yyvsp[(7) - (7)].number));
                  }
    break;

  case 326:

/* Line 1464 of yacc.c  */
#line 1183 "src/p.y"
    {
                    seteventaction(&(current)->action_PID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 327:

/* Line 1464 of yacc.c  */
#line 1188 "src/p.y"
    {
                    seteventaction(&(current)->action_PPID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 328:

/* Line 1464 of yacc.c  */
#line 1193 "src/p.y"
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
    break;

  case 329:

/* Line 1464 of yacc.c  */
#line 1196 "src/p.y"
    {    
                   (yyval.number) = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 330:

/* Line 1464 of yacc.c  */
#line 1201 "src/p.y"
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
    break;

  case 331:

/* Line 1464 of yacc.c  */
#line 1204 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 332:

/* Line 1464 of yacc.c  */
#line 1209 "src/p.y"
    {
                   (yyval.number) = NET_TIMEOUT;
                  }
    break;

  case 333:

/* Line 1464 of yacc.c  */
#line 1212 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 334:

/* Line 1464 of yacc.c  */
#line 1217 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                   addactionrate(&actionrateset);
                 }
    break;

  case 335:

/* Line 1464 of yacc.c  */
#line 1223 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, ACTION_UNMONITOR, ACTION_IGNORE);
                   addactionrate(&actionrateset);
                 }
    break;

  case 337:

/* Line 1464 of yacc.c  */
#line 1232 "src/p.y"
    {
                    seturlrequest((yyvsp[(2) - (3)].number), (yyvsp[(3) - (3)].string));
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 338:

/* Line 1464 of yacc.c  */
#line 1238 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 339:

/* Line 1464 of yacc.c  */
#line 1239 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 340:

/* Line 1464 of yacc.c  */
#line 1242 "src/p.y"
    {
                   addmail((yyvsp[(1) - (6)].string), &mailset, &current->maillist, eventset, (yyvsp[(6) - (6)].number));
                  }
    break;

  case 341:

/* Line 1464 of yacc.c  */
#line 1245 "src/p.y"
    {
                   addmail((yyvsp[(1) - (3)].string), &mailset, &current->maillist, Event_All, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 342:

/* Line 1464 of yacc.c  */
#line 1248 "src/p.y"
    {
                   addmail((yyvsp[(1) - (7)].string), &mailset, &current->maillist, ~eventset, (yyvsp[(7) - (7)].number));
                  }
    break;

  case 343:

/* Line 1464 of yacc.c  */
#line 1251 "src/p.y"
    {
                   addmail((yyvsp[(1) - (1)].string), &mailset, &current->maillist, Event_Null, 0);
                  }
    break;

  case 344:

/* Line 1464 of yacc.c  */
#line 1256 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 345:

/* Line 1464 of yacc.c  */
#line 1259 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 348:

/* Line 1464 of yacc.c  */
#line 1266 "src/p.y"
    { eventset |= Event_Action; }
    break;

  case 349:

/* Line 1464 of yacc.c  */
#line 1267 "src/p.y"
    { eventset |= Event_Checksum; }
    break;

  case 350:

/* Line 1464 of yacc.c  */
#line 1268 "src/p.y"
    { eventset |= Event_Connection; }
    break;

  case 351:

/* Line 1464 of yacc.c  */
#line 1269 "src/p.y"
    { eventset |= Event_Content; }
    break;

  case 352:

/* Line 1464 of yacc.c  */
#line 1270 "src/p.y"
    { eventset |= Event_Data; }
    break;

  case 353:

/* Line 1464 of yacc.c  */
#line 1271 "src/p.y"
    { eventset |= Event_Exec; }
    break;

  case 354:

/* Line 1464 of yacc.c  */
#line 1272 "src/p.y"
    { eventset |= Event_Fsflag; }
    break;

  case 355:

/* Line 1464 of yacc.c  */
#line 1273 "src/p.y"
    { eventset |= Event_Gid; }
    break;

  case 356:

/* Line 1464 of yacc.c  */
#line 1274 "src/p.y"
    { eventset |= Event_Icmp; }
    break;

  case 357:

/* Line 1464 of yacc.c  */
#line 1275 "src/p.y"
    { eventset |= Event_Instance; }
    break;

  case 358:

/* Line 1464 of yacc.c  */
#line 1276 "src/p.y"
    { eventset |= Event_Invalid; }
    break;

  case 359:

/* Line 1464 of yacc.c  */
#line 1277 "src/p.y"
    { eventset |= Event_Nonexist; }
    break;

  case 360:

/* Line 1464 of yacc.c  */
#line 1278 "src/p.y"
    { eventset |= Event_Permission; }
    break;

  case 361:

/* Line 1464 of yacc.c  */
#line 1279 "src/p.y"
    { eventset |= Event_Pid; }
    break;

  case 362:

/* Line 1464 of yacc.c  */
#line 1280 "src/p.y"
    { eventset |= Event_PPid; }
    break;

  case 363:

/* Line 1464 of yacc.c  */
#line 1281 "src/p.y"
    { eventset |= Event_Resource; }
    break;

  case 364:

/* Line 1464 of yacc.c  */
#line 1282 "src/p.y"
    { eventset |= Event_Size; }
    break;

  case 365:

/* Line 1464 of yacc.c  */
#line 1283 "src/p.y"
    { eventset |= Event_Timeout; }
    break;

  case 366:

/* Line 1464 of yacc.c  */
#line 1284 "src/p.y"
    { eventset |= Event_Timestamp; }
    break;

  case 367:

/* Line 1464 of yacc.c  */
#line 1285 "src/p.y"
    { eventset |= Event_Uid; }
    break;

  case 372:

/* Line 1464 of yacc.c  */
#line 1296 "src/p.y"
    { mailset.from = (yyvsp[(1) - (1)].string); }
    break;

  case 373:

/* Line 1464 of yacc.c  */
#line 1297 "src/p.y"
    { mailset.replyto = (yyvsp[(1) - (1)].string); }
    break;

  case 374:

/* Line 1464 of yacc.c  */
#line 1298 "src/p.y"
    { mailset.subject = (yyvsp[(1) - (1)].string); }
    break;

  case 375:

/* Line 1464 of yacc.c  */
#line 1299 "src/p.y"
    { mailset.message = (yyvsp[(1) - (1)].string); }
    break;

  case 376:

/* Line 1464 of yacc.c  */
#line 1302 "src/p.y"
    {
                   check_every((yyvsp[(2) - (3)].number));
                   current->def_every = TRUE;
                   current->every = (yyvsp[(2) - (3)].number);
                 }
    break;

  case 377:

/* Line 1464 of yacc.c  */
#line 1309 "src/p.y"
    {
                    current->mode = MODE_ACTIVE;
                  }
    break;

  case 378:

/* Line 1464 of yacc.c  */
#line 1312 "src/p.y"
    {
                    current->mode = MODE_PASSIVE;
                  }
    break;

  case 379:

/* Line 1464 of yacc.c  */
#line 1315 "src/p.y"
    {
                    current->mode = MODE_MANUAL;
                    current->monitor = MONITOR_NOT;
                  }
    break;

  case 380:

/* Line 1464 of yacc.c  */
#line 1321 "src/p.y"
    { addservicegroup((yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 384:

/* Line 1464 of yacc.c  */
#line 1332 "src/p.y"
    { adddependant((yyvsp[(1) - (1)].string)); }
    break;

  case 385:

/* Line 1464 of yacc.c  */
#line 1335 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 392:

/* Line 1464 of yacc.c  */
#line 1351 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 399:

/* Line 1464 of yacc.c  */
#line 1367 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 400:

/* Line 1464 of yacc.c  */
#line 1372 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 401:

/* Line 1464 of yacc.c  */
#line 1379 "src/p.y"
    {
                    resourceset.resource_id = (yyvsp[(1) - (4)].number);
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 402:

/* Line 1464 of yacc.c  */
#line 1386 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUUSER; }
    break;

  case 403:

/* Line 1464 of yacc.c  */
#line 1387 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUSYSTEM; }
    break;

  case 404:

/* Line 1464 of yacc.c  */
#line 1388 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUWAIT; }
    break;

  case 405:

/* Line 1464 of yacc.c  */
#line 1391 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0)); 
                  }
    break;

  case 406:

/* Line 1464 of yacc.c  */
#line 1396 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 407:

/* Line 1464 of yacc.c  */
#line 1401 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 408:

/* Line 1464 of yacc.c  */
#line 1406 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 409:

/* Line 1464 of yacc.c  */
#line 1413 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 410:

/* Line 1464 of yacc.c  */
#line 1418 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 411:

/* Line 1464 of yacc.c  */
#line 1425 "src/p.y"
    { 
                    resourceset.resource_id = RESOURCE_ID_CHILDREN;
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) (yyvsp[(3) - (3)].number); 
                  }
    break;

  case 412:

/* Line 1464 of yacc.c  */
#line 1432 "src/p.y"
    { 
                    resourceset.resource_id = (yyvsp[(1) - (3)].number);
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (3)].real) * 10.0); 
                  }
    break;

  case 413:

/* Line 1464 of yacc.c  */
#line 1439 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD1; }
    break;

  case 414:

/* Line 1464 of yacc.c  */
#line 1440 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD5; }
    break;

  case 415:

/* Line 1464 of yacc.c  */
#line 1441 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD15; }
    break;

  case 416:

/* Line 1464 of yacc.c  */
#line 1444 "src/p.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); }
    break;

  case 417:

/* Line 1464 of yacc.c  */
#line 1445 "src/p.y"
    { (yyval.real) = (float) (yyvsp[(1) - (1)].number); }
    break;

  case 418:

/* Line 1464 of yacc.c  */
#line 1448 "src/p.y"
    {
                    timestampset.operator = (yyvsp[(3) - (9)].number);
                    timestampset.time = ((yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(timestampset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addtimestamp(&timestampset, FALSE);
                  }
    break;

  case 419:

/* Line 1464 of yacc.c  */
#line 1454 "src/p.y"
    {
                    timestampset.test_changes = TRUE;
                    addeventaction(&(timestampset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addtimestamp(&timestampset, TRUE);
                  }
    break;

  case 420:

/* Line 1464 of yacc.c  */
#line 1461 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 421:

/* Line 1464 of yacc.c  */
#line 1462 "src/p.y"
    { (yyval.number) = OPERATOR_GREATER; }
    break;

  case 422:

/* Line 1464 of yacc.c  */
#line 1463 "src/p.y"
    { (yyval.number) = OPERATOR_LESS; }
    break;

  case 423:

/* Line 1464 of yacc.c  */
#line 1464 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 424:

/* Line 1464 of yacc.c  */
#line 1465 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 425:

/* Line 1464 of yacc.c  */
#line 1466 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 426:

/* Line 1464 of yacc.c  */
#line 1469 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 427:

/* Line 1464 of yacc.c  */
#line 1470 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 428:

/* Line 1464 of yacc.c  */
#line 1471 "src/p.y"
    { (yyval.number) = TIME_MINUTE; }
    break;

  case 429:

/* Line 1464 of yacc.c  */
#line 1472 "src/p.y"
    { (yyval.number) = TIME_HOUR; }
    break;

  case 430:

/* Line 1464 of yacc.c  */
#line 1473 "src/p.y"
    { (yyval.number) = TIME_DAY; }
    break;

  case 431:

/* Line 1464 of yacc.c  */
#line 1476 "src/p.y"
    { (yyval.number) = ACTION_ALERT; }
    break;

  case 432:

/* Line 1464 of yacc.c  */
#line 1477 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 433:

/* Line 1464 of yacc.c  */
#line 1478 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 434:

/* Line 1464 of yacc.c  */
#line 1479 "src/p.y"
    { (yyval.number) = ACTION_RESTART; }
    break;

  case 435:

/* Line 1464 of yacc.c  */
#line 1480 "src/p.y"
    { (yyval.number) = ACTION_START; }
    break;

  case 436:

/* Line 1464 of yacc.c  */
#line 1481 "src/p.y"
    { (yyval.number) = ACTION_STOP; }
    break;

  case 437:

/* Line 1464 of yacc.c  */
#line 1482 "src/p.y"
    { (yyval.number) = ACTION_UNMONITOR; }
    break;

  case 438:

/* Line 1464 of yacc.c  */
#line 1485 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
    break;

  case 439:

/* Line 1464 of yacc.c  */
#line 1494 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
    break;

  case 441:

/* Line 1464 of yacc.c  */
#line 1504 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (2)].number);
                    rate1.cycles = (yyvsp[(1) - (2)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 442:

/* Line 1464 of yacc.c  */
#line 1510 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (3)].number);
                    rate1.cycles = (yyvsp[(2) - (3)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("the number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 444:

/* Line 1464 of yacc.c  */
#line 1521 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (2)].number);
                    rate2.cycles = (yyvsp[(1) - (2)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 445:

/* Line 1464 of yacc.c  */
#line 1527 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (3)].number);
                    rate2.cycles = (yyvsp[(2) - (3)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("the number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 446:

/* Line 1464 of yacc.c  */
#line 1537 "src/p.y"
    {
                    (yyval.number) = ACTION_ALERT;
                  }
    break;

  case 447:

/* Line 1464 of yacc.c  */
#line 1540 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 448:

/* Line 1464 of yacc.c  */
#line 1543 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 449:

/* Line 1464 of yacc.c  */
#line 1546 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 450:

/* Line 1464 of yacc.c  */
#line 1551 "src/p.y"
    {
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 451:

/* Line 1464 of yacc.c  */
#line 1556 "src/p.y"
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[(6) - (10)].string));
                    FREE((yyvsp[(6) - (10)].string));
                    addeventaction(&(checksumset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 452:

/* Line 1464 of yacc.c  */
#line 1562 "src/p.y"
    {
                    checksumset.test_changes = TRUE;
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                    addchecksum(&checksumset);
                  }
    break;

  case 453:

/* Line 1464 of yacc.c  */
#line 1568 "src/p.y"
    { checksumset.type = HASH_UNKNOWN; }
    break;

  case 454:

/* Line 1464 of yacc.c  */
#line 1569 "src/p.y"
    { checksumset.type = HASH_MD5; }
    break;

  case 455:

/* Line 1464 of yacc.c  */
#line 1570 "src/p.y"
    { checksumset.type = HASH_SHA1; }
    break;

  case 456:

/* Line 1464 of yacc.c  */
#line 1573 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (8)].number);
                    filesystemset.limit_absolute = (yyvsp[(4) - (8)].number);
                    addeventaction(&(filesystemset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 457:

/* Line 1464 of yacc.c  */
#line 1580 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 458:

/* Line 1464 of yacc.c  */
#line 1589 "src/p.y"
    {
                    if (!filesystem_usage(current->inf, current->path))
                      yyerror2("cannot read usage of filesystem %s", current->path);
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_absolute = (int)((float)(yyvsp[(4) - (9)].real) / (float)current->inf->priv.filesystem.f_bsize * (float)(yyvsp[(5) - (9)].number));
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 459:

/* Line 1464 of yacc.c  */
#line 1598 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 460:

/* Line 1464 of yacc.c  */
#line 1607 "src/p.y"
    {
                    seteventaction(&(current)->action_FSFLAG, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 461:

/* Line 1464 of yacc.c  */
#line 1612 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 462:

/* Line 1464 of yacc.c  */
#line 1613 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 463:

/* Line 1464 of yacc.c  */
#line 1614 "src/p.y"
    { (yyval.number) = UNIT_KILOBYTE; }
    break;

  case 464:

/* Line 1464 of yacc.c  */
#line 1615 "src/p.y"
    { (yyval.number) = UNIT_MEGABYTE; }
    break;

  case 465:

/* Line 1464 of yacc.c  */
#line 1616 "src/p.y"
    { (yyval.number) = UNIT_GIGABYTE; }
    break;

  case 466:

/* Line 1464 of yacc.c  */
#line 1619 "src/p.y"
    {
                    permset.perm = check_perm((yyvsp[(4) - (8)].number));
                    addeventaction(&(permset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addperm(&permset);
                  }
    break;

  case 467:

/* Line 1464 of yacc.c  */
#line 1626 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = (yyvsp[(4) - (7)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[(7) - (7)].number));
                    FREE((yyvsp[(4) - (7)].string)); 
                  }
    break;

  case 468:

/* Line 1464 of yacc.c  */
#line 1633 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (7)].string);
                    addmatch(&matchset, (yyvsp[(7) - (7)].number), 0);
                  }
    break;

  case 469:

/* Line 1464 of yacc.c  */
#line 1639 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = (yyvsp[(4) - (4)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, ACTION_IGNORE);
                    FREE((yyvsp[(4) - (4)].string)); 
                  }
    break;

  case 470:

/* Line 1464 of yacc.c  */
#line 1646 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (4)].string);
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 471:

/* Line 1464 of yacc.c  */
#line 1654 "src/p.y"
    {
                    matchset.not = FALSE;
                  }
    break;

  case 472:

/* Line 1464 of yacc.c  */
#line 1657 "src/p.y"
    {
                    matchset.not = TRUE;
                  }
    break;

  case 473:

/* Line 1464 of yacc.c  */
#line 1663 "src/p.y"
    {
                    sizeset.operator = (yyvsp[(3) - (9)].number);
                    sizeset.size = ((unsigned long long)(yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(sizeset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addsize(&sizeset);
                  }
    break;

  case 474:

/* Line 1464 of yacc.c  */
#line 1669 "src/p.y"
    {
                    sizeset.test_changes = TRUE;
                    addeventaction(&(sizeset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addsize(&sizeset);
                  }
    break;

  case 475:

/* Line 1464 of yacc.c  */
#line 1676 "src/p.y"
    {
                    uidset.uid = get_uid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    adduid(&uidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 476:

/* Line 1464 of yacc.c  */
#line 1682 "src/p.y"
    {
                    uidset.uid = get_uid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    adduid(&uidset);
                  }
    break;

  case 477:

/* Line 1464 of yacc.c  */
#line 1689 "src/p.y"
    {
                    gidset.gid = get_gid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addgid(&gidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 478:

/* Line 1464 of yacc.c  */
#line 1695 "src/p.y"
    {
                    gidset.gid = get_gid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addgid(&gidset);
                  }
    break;

  case 479:

/* Line 1464 of yacc.c  */
#line 1702 "src/p.y"
    { (yyval.number) = ICMP_ECHO; }
    break;

  case 480:

/* Line 1464 of yacc.c  */
#line 1705 "src/p.y"
    { (yyval.number) = 0; }
    break;

  case 481:

/* Line 1464 of yacc.c  */
#line 1706 "src/p.y"
    { (yyval.number) = (yyvsp[(2) - (2)].number); }
    break;

  case 482:

/* Line 1464 of yacc.c  */
#line 1707 "src/p.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number); }
    break;



/* Line 1464 of yacc.c  */
#line 5430 "src/y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 1710 "src/p.y"



/* -------------------------------------------------------- Parser interface */


/**
 * Syntactic error routine
 *
 * This routine is automatically called by the lexer!
 */
void yyerror(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogError("%s:%i: Error: %s '%s'\n", currentfile, lineno, msg, yytext);
  cfg_errflag++;
 
  FREE(msg);
  
}

/**
 * Syntactical warning routine
 */
void yywarning(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogWarning("%s:%i: Warning: %s '%s'\n", currentfile, lineno, msg, yytext);
 
  FREE(msg);
  
}

/**
 * Argument error routine
 */
void yyerror2(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogError("%s:%i: Error: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
  cfg_errflag++;
 
  FREE(msg);
  
}

/**
 * Argument warning routine
 */
void yywarning2(const char *s, ...) {
  
  long len;
  va_list ap;
  char *msg = NULL;

  ASSERT(s);
  
  va_start(ap,s);
  msg = Util_formatString(s, ap, &len);
  va_end(ap);
  
  LogWarning("%s:%i: Warning: %s '%s'\n", argcurrentfile, arglineno, msg, argyytext);
 
  FREE(msg);
  
}

/*
 * The Parser hook - start parsing the control file
 * Returns TRUE if parsing succeeded, otherwise FALSE
 */
int parse(char *controlfile) {

  ASSERT(controlfile);

  servicelist = tail = current = NULL;

  /*
   * Secure check the monitrc file. The run control file must have the
   * same uid as the REAL uid of this process, it must have permissions
   * no greater than 700 and it must not be a symbolic link.
   */
  if (! file_checkStat(controlfile, "control file", S_IRUSR|S_IWUSR|S_IXUSR))
    return FALSE;

  if ((yyin = fopen(controlfile,"r")) == (FILE *)NULL) {
    LogError("%s: Error: cannot open the control file '%s' -- %s\n", prog, controlfile, STRERROR);
    return FALSE;
  }

  currentfile = xstrdup(controlfile);

  /* 
   * Creation of the global service list is synchronized  
   */
  LOCK(Run.mutex)
    preparse();
    yyparse();
    fclose(yyin);
    /* Add the default general system service if not specified explicitly */
    if (!hassystem) {
      char *name = Util_getString("system_%s", Run.localhostname);
      if (Util_existService(name) || (current && IS(name, current->name))) {
        LogError("'check system' not defined in control file, failed to add automatic configuration (service name %s is used already) -- please add 'check system <name>' manually\n", name, name);
        FREE(name);
        cfg_errflag++;
      } else {
        createservice(TYPE_SYSTEM, name, xstrdup(""), check_system);
      }
    }
    /* If defined - add the last service to the service list */
    if (current) {
      addservice(current);
      FREE(current);
    }
    postparse();
  END_LOCK;

  FREE(currentfile);

  if (argyytext != NULL)
    FREE(argyytext);

  return(cfg_errflag == 0);
}


/* ----------------------------------------------------------------- Private */


/**
 * Initialize objects used by the parser.
 */
static void preparse() {
  int i;
  char localhost[STRLEN];

  /*
   * Get the localhost name
   */
  if (Util_getfqdnhostname(localhost, sizeof(localhost)))
    snprintf(localhost, STRLEN, "%s", LOCALHOST);

  /* Set instance incarnation ID */
  time(&Run.incarnation);
  /* Reset lexer */
  buffer_stack_ptr        = 0;
  lineno                  = 1;
  arglineno               = 1;
  argcurrentfile          = NULL;
  argyytext               = NULL;
  /* Reset parser */
  Run.stopped             = FALSE;
  Run.dolog               = FALSE;
  Run.dohttpd             = FALSE;
  Run.doaction            = FALSE;
  Run.httpdsig            = TRUE;
  Run.dommonitcredentials = TRUE;
  Run.mmonitcredentials   = NULL;
  Run.credentials         = NULL;
  Run.httpdssl            = FALSE;
  Run.httpsslpem          = NULL;
  Run.httpsslclientpem    = NULL;
  Run.clientssl           = FALSE;
  Run.mailserver_timeout  = NET_TIMEOUT;
  Run.bind_addr           = NULL;
  Run.eventlist           = NULL;
  Run.eventlist_dir       = NULL;
  Run.eventlist_slots     = -1;
  Run.system              = NULL;
  Run.expectbuffer        = STRLEN;
  Run.mmonits             = NULL;
  Run.maillist            = NULL;
  Run.alert_exec          = NULL;  
  Run.mailservers         = NULL;
  Run.MailFormat.from     = NULL;
  Run.MailFormat.replyto  = NULL;
  Run.MailFormat.subject  = NULL;
  Run.MailFormat.message  = NULL;
  Run.localhostname       = xstrdup(localhost);
  depend_list             = NULL;
  Run.handler_init        = TRUE;
#ifdef OPENSSL_FIPS  
  Run.fipsEnabled         = FALSE;
#endif
  for (i = 0; i <= HANDLER_MAX; i++)
    Run.handler_queue[i] = 0;
  /* 
   * Initialize objects
   */
  reset_uidset();
  reset_gidset();
  reset_sizeset();
  reset_mailset();
  reset_mailserverset();
  reset_portset();
  reset_permset();
  reset_icmpset();
  reset_rateset();
  reset_filesystemset();
  reset_resourceset();
  reset_checksumset();
  reset_timestampset();
  reset_actionrateset();
}


/*
 * Check that values are reasonable after parsing
 */
static void postparse() {
  Service_T s;

  if (cfg_errflag || ! servicelist)
    return;

  /* Check the sanity of any dependency graph */
  check_depend();

  /* Check that we do not start monit in daemon mode without having a
   * poll time */
  if (!Run.polltime && (Run.isdaemon || Run.init)) {
    LogError("%s: Error: Poll time not defined. Please define poll time in the\n control file or use the -d option when starting monit\n", prog);
    cfg_errflag++;
  }

  if (Run.logfile)
    Run.dolog = TRUE;

  for (s = servicelist; s; s = s->next) {
    /* Set the general system service shortcut */
    if (s->type == TYPE_SYSTEM)
      Run.system = s;
    if (s->type != TYPE_HOST)
	continue;
    /* Verify that a remote service has a port or an icmp list */
    if (!s->portlist && !s->icmplist) {
      LogError("%s: Error: 'check host' statement is incomplete; Please specify a port number to test\n or an icmp test at the remote host: '%s'\n", prog, s->name);
      cfg_errflag++;
    }
  }

  if (Run.mmonits) {
    if (Run.dohttpd) {
      if (Run.dommonitcredentials) {
        Auth_T c;
        for (c = Run.credentials; c; c = c->next) {
          if (c->digesttype == DIGEST_CLEARTEXT && ! c->is_readonly) {
              Run.mmonitcredentials = c;
              break;
          }
        }
        if (! Run.mmonitcredentials)
          LogWarning("%s: Warning: M/Monit registration with credentials enabled, but no suitable credentials found in monit configuration file -- please add 'allow user:password' option to 'set httpd' statement\n", prog);
      }
    } else
        LogWarning("%s: Warning: M/Monit enabled but no httpd allowed -- please add 'set httpd' statement\n", prog);
  }
}


/*
 * Create a new service object and add any current objects to the
 * service list.
 */
static void createservice(int type, char *name, char *value, int (*check)(Service_T s)) {

  ASSERT(name);
  ASSERT(value);

  check_name(name);

  if (current) {
    addservice(current);
    memset(current, 0, sizeof(*current));
  } else {
    NEW(current);
  }

  current->type = type;

  NEW(current->inf);
  Util_resetInfo(current);

  /* Set default values */
  current->monitor = MONITOR_INIT;
  current->mode    = MODE_ACTIVE;
  current->name    = name;
  current->check   = check;
  current->path    = value;

  /* Initialize general event handlers */
  addeventaction(&(current)->action_DATA,     ACTION_ALERT,     ACTION_ALERT);
  addeventaction(&(current)->action_EXEC,     ACTION_ALERT,     ACTION_ALERT);
  addeventaction(&(current)->action_INVALID,  ACTION_RESTART,   ACTION_ALERT);
  addeventaction(&(current)->action_NONEXIST, ACTION_RESTART,   ACTION_ALERT);
  addeventaction(&(current)->action_PID,      ACTION_ALERT,     ACTION_IGNORE);
  addeventaction(&(current)->action_PPID,     ACTION_ALERT,     ACTION_IGNORE);
  addeventaction(&(current)->action_FSFLAG,   ACTION_ALERT,     ACTION_IGNORE);

  /* Initialize internal event handlers */
  addeventaction(&(current)->action_MONIT_START,  ACTION_START, ACTION_IGNORE);
  addeventaction(&(current)->action_MONIT_STOP,   ACTION_STOP,  ACTION_IGNORE);
  addeventaction(&(current)->action_MONIT_RELOAD, ACTION_START, ACTION_IGNORE);
  addeventaction(&(current)->action_ACTION,       ACTION_ALERT, ACTION_IGNORE);
  
  gettimeofday(&current->collected, NULL);
}


/*
 * Add a service object to the servicelist
 */
static void addservice(Service_T s) {
  Service_T n;

  ASSERT(s);
 
  NEW(n);
  memcpy(n, s, sizeof(*s));
  /* Add the service to the end of the service list */
  if (tail != NULL) {
    tail->next = n;
    tail->next_conf = n;
  } else {
    servicelist = n;
    servicelist_conf = n;
  }
  tail = n;
}


/* 
 * Add entry to service group list
 */
static void addservicegroup(char *name) {
  ServiceGroup_T g;
  ServiceGroupMember_T m;

  ASSERT(name);
 
  /* Check if service group with the same name is defined already */
  for (g = servicegrouplist; g; g = g->next)
    if (! strcasecmp(g->name, name))
      break;

  if (! g) {
    NEW(g);
    g->name = xstrdup(name);
    g->next = servicegrouplist;
    servicegrouplist = g;
  }

  NEW(m);
  m->name = xstrdup(current->name);
  m->next = g->members;
  g->members = m;
}


/* 
 * Add a dependant entry to the current service dependant list
 *
 */
static void adddependant(char *dependant) {
  Dependant_T d; 

  ASSERT(dependant);
  
  NEW(d);
  
  if (current->dependantlist != NULL)
    d->next = current->dependantlist;

  d->dependant = dependant;
  current->dependantlist = d;

}


/*
 * Add the given mailaddress with the apropriate alert notification
 * values and mail attributes to the given mailinglist.
 */
static void addmail(char *mailto, Mail_T f, Mail_T *l, unsigned int events, unsigned int reminder) {
  Mail_T m;

  ASSERT(mailto);

  NEW(m);
  m->events   = events;
  m->to       = mailto;
  m->from     = f->from;
  m->subject  = f->subject;
  m->message  = f->message;
  m->reminder = reminder;
  
  m->next = *l;
  *l = m;

  reset_mailset();
}


/*
 * Add the given portset to the current service's portlist
 */
static void addport(Port_T port) {
  Port_T p;
  
  ASSERT(port);

  NEW(p);
  p->port               = port->port;
  p->type               = port->type;
  p->socket             = port->socket;
  p->family             = port->family;
  p->action             = port->action;
  p->timeout            = port->timeout;
  p->request            = port->request;
  p->generic            = port->generic;
  p->protocol           = port->protocol;
  p->pathname           = port->pathname;
  p->hostname           = port->hostname;
  p->url_request        = port->url_request;
  p->request_checksum   = port->request_checksum;
  p->request_hostheader = port->request_hostheader;
  memcpy(&p->ApacheStatus, &port->ApacheStatus, sizeof(struct apache_status));

  if (p->request_checksum) {
    cleanup_hash_string(p->request_checksum);
    if (strlen(p->request_checksum) == 32)
      p->request_hashtype = HASH_MD5;
    else if (strlen(p->request_checksum) == 40)
      p->request_hashtype = HASH_SHA1;
    else
      yyerror2("invalid checksum [%s]", p->request_checksum);
  } else
    p->request_hashtype = 0;

  if (port->SSL.use_ssl == TRUE) {
    if (!have_ssl()) {
      yyerror("ssl check cannot be activated. SSL is not supported");
    } else {
      if (port->SSL.certmd5 != NULL) {
	p->SSL.certmd5 = port->SSL.certmd5;
	cleanup_hash_string(p->SSL.certmd5);
      }
      p->SSL.use_ssl = TRUE;
      p->SSL.version = port->SSL.version;
    }
  }
  p->maxforward = port->maxforward;
  p->next = current->portlist;
  current->portlist = p;
  
  reset_portset();

}


/*
 * Add a new resource object to the current service resource list
 */
static void addresource(Resource_T rr) {
  Resource_T r;

  ASSERT(rr);

  NEW(r);
  if (! Run.doprocess)
    yyerror("Cannot activate service check. The process status engine was disabled. On certain systems you must run monit as root to utilize this feature)\n");
  r->resource_id = rr->resource_id;
  r->limit       = rr->limit;
  r->action      = rr->action;
  r->operator    = rr->operator;
  r->next        = current->resourcelist;

  current->resourcelist = r;
  reset_resourceset();
}


/*
 * Add a new file object to the current service timestamp list
 */
static void addtimestamp(Timestamp_T ts, int notime) {
  Timestamp_T t;

  ASSERT(ts);

  NEW(t);
  t->operator     = ts->operator;
  t->time         = ts->time;
  t->action       = ts->action;
  t->test_changes = ts->test_changes;
  
  if (t->test_changes || notime) {
    if (! file_exist(current->path)) {
      DEBUG("%s: Debug: the path '%s' used in the TIMESTAMP statement refer to a non-existing object\n", prog, current->path);
    } else if (!(t->timestamp = file_getTimestamp(current->path, S_IFDIR|S_IFREG))) {
      yyerror2("cannot get the timestamp for '%s'", current->path);
    }
  }
  
  t->next = current->timestamplist;
  current->timestamplist = t;

  reset_timestampset();
}


/*
 * Add a new object to the current service actionrate list
 */
static void addactionrate(ActionRate_T ar) {
  ActionRate_T a;

  ASSERT(ar);

  if (ar->count > ar->cycle)
    yyerror2("the number of restarts must be less than poll cycles");
  if (ar->count <= 0 || ar->cycle <= 0)
    yyerror2("zero or negative values not allowed in a action rate statement");

  NEW(a);
  a->count  = ar->count;
  a->cycle  = ar->cycle;
  a->action = ar->action;

  a->next = current->actionratelist;
  current->actionratelist = a;

  reset_actionrateset();
}



/*
 * Add a new Size object to the current service size list
 */
static void addsize(Size_T ss) {
  Size_T s;
  struct stat buf;

  ASSERT(ss);

  NEW(s);
  s->operator     = ss->operator;
  s->size         = ss->size;
  s->action       = ss->action;
  s->test_changes = ss->test_changes;
  /* Get the initial size for future comparision, if the file exists */
  if (s->test_changes) {
    s->test_changes_ok = !stat(current->path, &buf);
    if (s->test_changes_ok)
      s->size = (unsigned long long)buf.st_size;
  }
 
  s->next = current->sizelist;
  current->sizelist = s;

  reset_sizeset();
}


/*
 * Set Checksum object in the current service
 */
static void addchecksum(Checksum_T cs) {

  int len;
  Checksum_T c;

  ASSERT(cs);

  cs->test_changes_ok = TRUE;

  if (! *cs->hash) {
    if (cs->type == HASH_UNKNOWN)
      cs->type = DEFAULT_HASH;
    if ( !(Util_getChecksum(current->path, cs->type, cs->hash, sizeof(cs->hash)))) {
      if (cs->test_changes == TRUE) {
        /* If the file doesn't exist and we're checking for checksum changes, set dummy value */
        cs->test_changes_ok = FALSE;
        snprintf(cs->hash, sizeof(cs->hash), "00000000000000000000000000000000");
      } else {
        yyerror2("cannot compute a checksum for file %s", current->path);
        reset_checksumset();
        return;
      }
    }
  }

  len = cleanup_hash_string(cs->hash);

  if (cs->type == HASH_UNKNOWN) {
    if (len == 32) {
      cs->type = HASH_MD5;
    } else if (len == 40) {
      cs->type = HASH_SHA1;
    } else {
      yyerror2("invalid checksum [%s] for file %s", cs->hash, current->path);
      reset_checksumset();
      return;
    }
  } else if (( cs->type == HASH_MD5 && len!=32 ) || ( cs->type == HASH_SHA1 && len != 40 )) {
    yyerror2("invalid checksum [%s] for file %s", cs->hash, current->path);
    reset_checksumset();
    return;
  }

  NEW(c);

  c->type            = cs->type;
  c->test_changes    = cs->test_changes;
  c->test_changes_ok = cs->test_changes_ok;
  c->action          = cs->action;
  snprintf(c->hash, sizeof(c->hash), "%s", cs->hash);
 
  current->checksum = c;

  reset_checksumset();

}


/*
 * Set Perm object in the current service
 */
static void addperm(Perm_T ps) {
  Perm_T p;

  ASSERT(ps);

  NEW(p);
  p->perm       = ps->perm;
  p->action     = ps->action;
  current->perm = p;
  reset_permset();

}

/*
 * Set Match object in the current service
 */
static void addmatch(Match_T ms, int actionnumber, int linenumber) {
  Match_T m;
  Match_T ml;
  int     reg_return;
  
  ASSERT(ms);

  NEW(m);
#ifdef HAVE_REGEX_H
  NEW(m->regex_comp);
#endif

  m->match_string = ms->match_string;
  m->match_path   = ms->match_path ? xstrdup(ms->match_path) : NULL;
  m->action       = ms->action;
  m->not          = ms->not;
  m->ignore       = ms->ignore;
  m->next         = NULL;

  addeventaction(&(m->action), actionnumber, ACTION_IGNORE);

#ifdef HAVE_REGEX_H
  reg_return = regcomp(m->regex_comp, ms->match_string, REG_NOSUB|REG_EXTENDED);

  if (reg_return != 0) {
    char errbuf[STRLEN];
    regerror(reg_return, ms->regex_comp, errbuf, STRLEN);
    if (m->match_path != NULL) 
      yyerror2("regex parsing error:%s on line %i of", errbuf, linenumber);
    else
      yyerror2("regex parsing error:%s", errbuf);
  }
#endif

  if (current->matchlist) {
    /* Find the end of the list */
    for (ml = current->matchlist; ml->next; ml = ml->next)
      ;

    ml->next = m;
    
  } else
    current->matchlist = m;
}


static void addmatchpath(Match_T ms, int actionnumber) {

  FILE *handle;
  Command_T savecommand = NULL;
  char buf[2048];
  int linenumber = 0;

  ASSERT(ms->match_path);

  handle = fopen(ms->match_path, "r");
  if (handle == NULL) {
    yyerror2("cannot read regex match file (%s)", ms->match_path);
    return;
  }
  
  while (!feof(handle)) {
    int len;

    linenumber++;
    
    if (! fgets(buf, 2048, handle))
      continue;

    len = strlen(buf);

    if (len == 0 || buf[0] == '\n')
      continue;

    if (buf[len-1] == '\n')
      buf[len-1] = 0;

    ms->match_string = xstrdup(buf);

    /* The addeventaction() called from addmatch() will reset the
     * command1 to NULL, but we need to duplicate the command for
     * each line, thus need to save it here */
    if (actionnumber == ACTION_EXEC) {
      if (command1 == NULL) {
        ASSERT(savecommand);
        command1 = savecommand;
      }
      savecommand = copycommand(command1);
    }

    addmatch(ms, actionnumber, linenumber);
  }

  if (actionnumber == ACTION_EXEC && savecommand)
    gccmd(&savecommand);

  fclose(handle);
}


/*
 * Set Uid object in the current service
 */
static void adduid(Uid_T us) {
  Uid_T u;

  ASSERT(us);

  NEW(u);
  u->uid       = us->uid;
  u->action    = us->action;
  current->uid = u;
  reset_uidset();
}


/*
 * Set Gid object in the current service
 */
static void addgid(Gid_T gs) {
  Gid_T g;

  ASSERT(gs);

  NEW(g);
  g->gid       = gs->gid;
  g->action    = gs->action;
  current->gid = g;
  reset_gidset();
}


/*
 * Add a new filesystem to the current service's filesystem list
 */
static void addfilesystem(Filesystem_T ds) {
  Filesystem_T dev;

  ASSERT(ds);
  
  NEW(dev);
  dev->resource           = ds->resource;
  dev->operator           = ds->operator;
  dev->limit_absolute     = ds->limit_absolute;
  dev->limit_percent      = ds->limit_percent;
  dev->action             = ds->action;

  dev->next               = current->filesystemlist;
  current->filesystemlist = dev;

  reset_filesystemset();

}


/*
 * Add a new icmp object to the current service's icmp list
 */
static void addicmp(Icmp_T is) {
  Icmp_T icmp;

  ASSERT(is);

  NEW(icmp);
  icmp->type         = is->type;      
  icmp->count        = is->count;
  icmp->timeout      = is->timeout;
  icmp->action       = is->action;
  icmp->is_available = FALSE;
  icmp->response     = -1;
  
  icmp->next         = current->icmplist;
  current->icmplist  = icmp;

  reset_icmpset();
}


/*
 * Set EventAction object
 */
static void addeventaction(EventAction_T *_ea, int failed, int succeeded) {
  EventAction_T ea;

  ASSERT(_ea);

  NEW(ea);
  NEW(ea->failed);
  NEW(ea->succeeded);

  ea->failed->id     = failed;
  ea->failed->count  = rate1.count;
  ea->failed->cycles = rate1.cycles;
  if (failed == ACTION_EXEC) {
    ASSERT(command1);
    ea->failed->exec = command1;
    command1 = NULL;
  }

  ea->succeeded->id     = succeeded;
  ea->succeeded->count  = rate2.count;
  ea->succeeded->cycles = rate2.cycles;
  if (succeeded == ACTION_EXEC) {
    ASSERT(command2);
    ea->succeeded->exec = command2;
    command2 = NULL;
  }
  *_ea = ea;
  reset_rateset();
}


/*
 * Redefine EventAction object (used for default action overloading)
 */
static void seteventaction(EventAction_T *_ea, int failed, int succeeded) {
  EventAction_T ea = *_ea;

  ASSERT(ea);
  ASSERT(ea->failed);
  ASSERT(ea->succeeded);

  ea->failed->id     = failed;
  ea->failed->count  = rate1.count;
  ea->failed->cycles = rate1.cycles;
  if (failed == ACTION_EXEC) {
    ASSERT(command1);
    ea->failed->exec = command1;
    command1 = NULL;
  }

  ea->succeeded->id     = succeeded;
  ea->succeeded->count  = rate2.count;
  ea->succeeded->cycles = rate2.cycles;
  if (succeeded == ACTION_EXEC) {
    ASSERT(command2);
    ea->succeeded->exec = command2;
    command2 = NULL;
  }
}


/*
 * Return a protocol object for the given protocol
 */
static void *addprotocol(int protocol) {

  switch (protocol) {
  case P_APACHESTATUS:  return create_apache_status();
  case P_DNS:           return create_dns();
  case P_DWP:           return create_dwp();
  case P_FTP:           return create_ftp();
  case P_GENERIC:       return create_generic();
  case P_HTTP:          return create_http();
  case P_IMAP:          return create_imap();
  case P_CLAMAV:        return create_clamav();
  case P_LDAP2:         return create_ldap2();
  case P_LDAP3:         return create_ldap3();
  case P_MYSQL:         return create_mysql();
  case P_NNTP:          return create_nntp();
  case P_NTP3:          return create_ntp3();
  case P_POSTFIXPOLICY: return create_postfix_policy();
  case P_POP:           return create_pop();
  case P_SMTP:          return create_smtp();
  case P_SSH:           return create_ssh();
  case P_RDATE:         return create_rdate();
  case P_RSYNC:         return create_rsync();
  case P_TNS:           return create_tns();
  case P_PGSQL:         return create_pgsql();
  case P_SIP:           return create_sip();
  case P_LMTP:          return create_lmtp();
  case P_GPS:           return create_gps();
  case P_RADIUS:        return create_radius();
  case P_MEMCACHE:      return create_memcache();
  }

  return create_default();
   
}


/*
 * Add a generic protocol handler to 
 */
static void addgeneric(Port_T port, char *send, char *expect) {
  Generic_T g = port->generic;
  
  if (g == NULL) {
    NEW(g);
    port->generic = g;
  } else {
    while (g->next != NULL)
      g = g->next;
    NEW(g->next);
    g = g->next;
  }
  
  if (send != NULL) {
    g->send = xstrdup(send);
    g->expect = NULL;
  } else if (expect != NULL) {
#ifdef HAVE_REGEX_H
    
    int   reg_return;
    NEW(g->expect);
    reg_return = regcomp(g->expect, expect, REG_NOSUB|REG_EXTENDED);
    if (reg_return != 0) {
      char errbuf[STRLEN];
      regerror(reg_return, g->expect, errbuf, STRLEN);
      yyerror2("regex parsing error:%s", errbuf);
    }
#else
    g->expect = xstrdup(expect);
#endif
    g->send = NULL;
  } 
}


/*
 * Add the current command object to the current service object's
 * start or stop program.
 */
static void addcommand(int what, unsigned timeout) {

  switch(what) {
  case START: current->start = command; break;
  case STOP:  current->stop = command; break;
  }

  command->timeout = timeout;
  
  command = NULL;
  
}

  
/*
 * Add a new argument to the argument list
 */
static void addargument(char *argument) {

  ASSERT(argument);

  if (! command) {
    
    NEW(command);
    check_exec(argument);
    
  }
  
  command->arg[command->length++] = argument;
  command->arg[command->length] = NULL;
  
  if (command->length >= ARGMAX)
    yyerror("exceeded maximum number of program arguments");
  
}

static void addexec(char *more_exec) {
  if (! exec)
  {
    exec = more_exec;
  }
  else
  {
    exec = Util_getString("%s '%s'",exec, more_exec);
  }
}

/*
 * Setup a url request for the current port object
 */
static void prepare_urlrequest(URL_T U) {

  ASSERT(U);
  
  portset.protocol = addprotocol(P_HTTP);

  if (urlrequest == NULL)
    NEW(urlrequest);
  urlrequest->url = U;
  portset.hostname = xstrdup(U->hostname);
  check_hostname(portset.hostname);
  portset.port = U->port;
  portset.url_request = urlrequest;
  portset.type = SOCK_STREAM;
  portset.request = Util_getString("%s%s%s", U->path, U->query ? "?" : "", U->query ? U->query : "");
  /* Only the HTTP protocol is supported for URLs.
     See also the lexer if this is to be changed in
     the future */
  portset.protocol = addprotocol(P_HTTP);
  if (IS(U->protocol, "https"))
    portset.SSL.use_ssl = TRUE;
  
}


/*
 * Set the url request for a port
 */
static void  seturlrequest(int operator, char *regex) {
  
  ASSERT(regex);

  if (! urlrequest)
    NEW(urlrequest);
  urlrequest->operator = operator;
#ifdef HAVE_REGEX_H
  {    
    int reg_return;
    NEW(urlrequest->regex);
    reg_return = regcomp(urlrequest->regex, regex, REG_NOSUB|REG_EXTENDED);
    if (reg_return != 0) {
      char errbuf[STRLEN];
      regerror(reg_return, urlrequest->regex, errbuf, STRLEN);
      yyerror2("regex parsing error: %s", errbuf);
    }
  }
#else
  urlrequest->regex = xstrdup(regex);
#endif

}


/*
 * Add a new data recipient server to the mmonit server list
 */
static void addmmonit(URL_T url, int timeout, int sslversion, char *certmd5) {
  Mmonit_T c;
  
  ASSERT(url);

  NEW(c);
  c->url = url;
  if (!strcmp(c->url->protocol, "https")) {
    if (!have_ssl()) {
      yyerror("ssl check cannot be activated. SSL is not supported");
    } else {
      c->ssl.use_ssl = TRUE;
      c->ssl.version = (sslversion == SSL_VERSION_NONE) ? SSL_VERSION_AUTO : sslversion;
      if (certmd5) {
	c->ssl.certmd5 = certmd5;
	cleanup_hash_string(c->ssl.certmd5);
      }
    }
  }
  c->timeout = timeout;
  c->next = NULL;

  if (Run.mmonits) {
    Mmonit_T C;
    for (C = Run.mmonits; C->next; C = C->next)
      /* Empty */ ;
    C->next = c;
  } else {
    Run.mmonits = c;
  }
}


/*
 * Add a new smtp server to the mail server list
 */
static void addmailserver(MailServer_T mailserver) {

  MailServer_T s;
  
  ASSERT(mailserver->host);

  NEW(s);
  s->host        = mailserver->host;
  s->port        = mailserver->port;
  s->username    = mailserver->username;
  s->password    = mailserver->password;
  s->ssl.use_ssl = mailserver->ssl.use_ssl;
  s->ssl.version = mailserver->ssl.version;
  s->ssl.certmd5 = mailserver->ssl.certmd5;

  s->next = NULL;

  if (Run.mailservers) {
    MailServer_T l;
    for (l = Run.mailservers; l->next; l = l->next) /* empty */;
    l->next = s;
  } else {
    Run.mailservers = s;
  }
  
  reset_mailserverset();
}


/*
 * Return uid if found on the system. If the parameter user is NULL
 * the uid parameter is used for looking up the user id on the system,
 * otherwise the user parameter is used.
 */
static uid_t get_uid(char *user, uid_t uid) {
  struct passwd *pwd;

  if (user) {
    pwd = getpwnam(user);

    if (pwd == NULL) {
      yyerror2("requested user not found on the system");
      return(0);
    }

  } else {

    if ( (pwd = getpwuid(uid)) == NULL ) {
      yyerror2("requested uid not found on the system");
      return(0);
    }
  }

  return(pwd->pw_uid);

}


/*
 * Return gid if found on the system. If the parameter group is NULL
 * the gid parameter is used for looking up the group id on the system,
 * otherwise the group parameter is used.
 */
static gid_t get_gid(char *group, gid_t gid) {
  struct group *grd;

  if (group) {
    grd = getgrnam(group);

    if (grd == NULL) {
      yyerror2("requested group not found on the system");
      return(0);
    }

  } else {

    if ( (grd = getgrgid(gid)) == NULL ) {
      yyerror2("requested gid not found on the system");
      return(0);
    }

  }

  return(grd->gr_gid);

}


/*
 * Add a new user id to the current command object.
 */
static void addeuid(uid_t uid) {
  if (!getuid()) {
    command->has_uid = TRUE;
    command->uid = uid;
  } else
    yyerror("uid statement requires root privileges");
}


/*
 * Add a new group id to the current command object.
 */
static void addegid(gid_t gid) {
  if (!getuid()) {
    command->has_gid = TRUE;
    command->gid = gid;
  } else
    yyerror("gid statement requires root privileges");
}


/*
 * Reset the logfile if changed
 */
static void setlogfile(char *logfile) {
  if (Run.logfile) {
    if (IS(Run.logfile, logfile)) {
      FREE(logfile);
      return;
    } else
      FREE(Run.logfile);
  }
  Run.logfile = logfile;
}


/*
 * Reset the pidfile if changed
 */
static void setpidfile(char *pidfile) {
  if (Run.pidfile) {
    if (IS(Run.pidfile, pidfile)) {
      FREE(pidfile);
      return;
    } else
      FREE(Run.pidfile);
  }
  Run.pidfile = pidfile;
}


/*
 * Read a apache htpasswd file and add credentials found for username
 */
static void addhtpasswdentry(char *filename, char *username, int dtype) {
  char *ht_username = NULL;
  char *ht_passwd = NULL;
  char buf[STRLEN];
  FILE *handle = NULL;
  int credentials_added = 0;
  
  ASSERT(filename);

  handle = fopen(filename, "r");

  if ( handle == NULL ) {
    if (username != NULL)
      yyerror2("cannot read htpasswd (%s)", filename);
    else
      yyerror2("cannot read htpasswd", filename);
    return;
  }
  
  while (!feof(handle)) {
    char *colonindex = NULL;
    int i;
    
    if (! fgets(buf, STRLEN, handle))
      continue;

    /* strip trailing non visible characters */
    for (i = strlen(buf)-1; i >= 0; i--) {
      if ( buf[i] == ' '  || buf[i] == '\r' || buf[i] == '\n' || buf[i] == '\t' )
        buf[i] ='\0';
      else
        break;
    }

    if ( NULL == (colonindex = strchr(buf, ':')))
      continue;

    ht_passwd = xstrdup(colonindex+1);
    *colonindex = '\0';

    /* In case we have a file in /etc/passwd or /etc/shadow style we
     *  want to remove ":.*$" and Crypt and MD5 hashed dont have a colon
     */ 
    
    if ( (NULL != (colonindex = strchr(ht_passwd, ':'))) && ( dtype != DIGEST_CLEARTEXT) )
      *colonindex = '\0';

    ht_username = xstrdup(buf);

    if (username == NULL) {
      if (addcredentials(ht_username, ht_passwd, dtype, FALSE))
        credentials_added++;
    } else if (strcmp(username, ht_username) == 0)  {
      if (addcredentials(ht_username, ht_passwd, dtype, FALSE))
        credentials_added++;
    } else {
      FREE(ht_passwd);
      FREE(ht_username);
    }
  }

  if (credentials_added == 0) {
    if ( username == NULL )
      yywarning2("htpasswd file (%s) has no usable credentials", filename);
    else
      yywarning2("htpasswd file (%s) has no usable credentials for user %s", filename, username);
  }
  fclose(handle);
}


#ifdef HAVE_LIBPAM
static void addpamauth(char* groupname, int readonly) {
  Auth_T c = NULL;
  Auth_T prev = NULL;

  ASSERT(groupname);

  if (Run.credentials == NULL)
    NEW(Run.credentials);

  c = Run.credentials;
  do {
    if (c->groupname != NULL && IS(c->groupname, groupname)) {
      yywarning2("PAM group %s was added already, entry ignored", groupname);
      FREE(groupname);
      return;
    }
    prev = c;
    c = c->next;
  } while (c != NULL);

  NEW(prev->next);
  c = prev->next;

  c->next        = NULL;
  c->uname       = NULL;
  c->passwd      = NULL;
  c->groupname   = groupname;
  c->digesttype  = DIGEST_PAM;
  c->is_readonly = readonly;
  
  DEBUG("%s: Adding PAM group '%s'.\n", prog, groupname); 

  return;
}
#endif


/*
 * Add Basic Authentication credentials
 */
static int addcredentials(char *uname, char *passwd, int dtype, int readonly) {
  Auth_T c;

  ASSERT(uname);
  ASSERT(passwd);

  if (Run.credentials == NULL) {
    NEW(Run.credentials);
    c = Run.credentials;
  } else {

    if (Util_getUserCredentials(uname) != NULL) {
      yywarning2("credentials for user %s were already added, entry ignored", uname);
      FREE(uname);
      FREE(passwd);
      return FALSE;
    }

    c = Run.credentials;

    while ( c->next != NULL )
      c = c->next;

    NEW(c->next);
    c = c->next;
        
  }
  
  c->next        = NULL;
  c->uname       = uname;
  c->passwd      = passwd;
  c->groupname   = NULL;
  c->digesttype  = dtype;
  c->is_readonly = readonly;
  
  DEBUG("%s: Debug: Adding credentials for user '%s'.\n", prog, uname); 
  
  return TRUE;
  
}


/*
 * Set the syslog and the facilities to be used
 */
static void setsyslog(char *facility) {

  if (!Run.logfile || ihp.logfile) {
    ihp.logfile = TRUE;
    setlogfile(xstrdup("syslog"));
    Run.use_syslog = TRUE;
    Run.dolog = TRUE;
  }

  if (facility) {
    if (IS(facility,"log_local0"))
      Run.facility = LOG_LOCAL0;
    else if (IS(facility, "log_local1"))
      Run.facility = LOG_LOCAL1;
    else if (IS(facility, "log_local2"))
      Run.facility = LOG_LOCAL2;
    else if (IS(facility, "log_local3"))
      Run.facility = LOG_LOCAL3;
    else if (IS(facility, "log_local4"))
      Run.facility = LOG_LOCAL4;
    else if (IS(facility, "log_local5"))
      Run.facility = LOG_LOCAL5;
    else if (IS(facility, "log_local6"))
      Run.facility = LOG_LOCAL6;
    else if (IS(facility, "log_local7"))
      Run.facility = LOG_LOCAL7;
    else if (IS(facility, "log_daemon"))
      Run.facility = LOG_DAEMON;
    else
      yyerror2("invalid syslog facility");
  } else {
    Run.facility = LOG_USER;
  }
  
}


/*
 * Reset the current mailset, eventset and reminder for reuse
 */
static void reset_mailset() {
  memset(&mailset, 0, sizeof(struct mymail));
  eventset = Event_Null;
}


/*
 * Reset the mailserver set to default values
 */
static void reset_mailserverset() {
  memset(&mailserverset, 0, sizeof(struct mymailserver));
  mailserverset.port = PORT_SMTP;
  mailserverset.ssl.use_ssl = FALSE;
  mailserverset.ssl.version = SSL_VERSION_AUTO;
}


/*
 * Reset the Port set to default values
 */
static void reset_portset() {
  memset(&portset, 0, sizeof(struct myport));
  portset.socket = -1;
  portset.type = SOCK_STREAM;
  portset.family = AF_INET;
  portset.SSL.version = SSL_VERSION_AUTO;
  portset.timeout = NET_TIMEOUT;
  portset.maxforward = 70;
  urlrequest = NULL;
}


/*
 * Reset the Proc set to default values
 */
static void reset_resourceset() {
  resourceset.resource_id = 0;
  resourceset.limit = 0;
  resourceset.action = NULL;
  resourceset.operator = OPERATOR_EQUAL;
}


/*
 * Reset the Timestamp set to default values
 */
static void reset_timestampset() {
  timestampset.operator = OPERATOR_EQUAL;
  timestampset.time = 0;
  timestampset.test_changes = FALSE;
  timestampset.action = NULL;
}


/*
 * Reset the ActionRate set to default values
 */
static void reset_actionrateset() {
  actionrateset.count = 0;
  actionrateset.cycle = 0;
  actionrateset.action = NULL;
}


/*
 * Reset the Size set to default values
 */
static void reset_sizeset() {
  sizeset.operator = OPERATOR_EQUAL;
  sizeset.size = 0;
  sizeset.test_changes = FALSE;
  sizeset.action = NULL;
}


/*
 * Reset the Checksum set to default values
 */
static void reset_checksumset() {
  checksumset.type         = HASH_UNKNOWN;
  checksumset.test_changes = FALSE;
  checksumset.action       = NULL;
  *checksumset.hash        = 0;
}


/*
 * Reset the Perm set to default values
 */
static void reset_permset() {
  permset.perm = 0;
  permset.action = NULL;
}


/*
 * Reset the Uid set to default values
 */
static void reset_uidset() {
  uidset.uid = 0;
  uidset.action = NULL;
}


/*
 * Reset the Gid set to default values
 */
static void reset_gidset() {
  gidset.gid = 0;
  gidset.action = NULL;
}


/*
 * Reset the Filesystem set to default values
 */
static void reset_filesystemset() {
  filesystemset.resource = 0;
  filesystemset.operator = OPERATOR_EQUAL;
  filesystemset.limit_absolute = -1;
  filesystemset.limit_percent = -1;
  filesystemset.action = NULL;
}


/*
 * Reset the ICMP set to default values
 */
static void reset_icmpset() {
  icmpset.type = ICMP_ECHO;
  icmpset.count = ICMP_ATTEMPT_COUNT;
  icmpset.timeout = NET_TIMEOUT;
  icmpset.action = NULL;
}


/*
 * Reset the Rate set to default values
 */
static void reset_rateset() {
  rate1.count  = 1;
  rate1.cycles = 1;

  rate2.count  = 1;
  rate2.cycles = 1;
}


/* ---------------------------------------------------------------- Checkers */


/*
 * Check for unique service name
 */
static void check_name(char *name) {
  ASSERT(name);

  if (Util_existService(name) || (current && IS(name, current->name)))
    yyerror2("service name conflict, %s already defined", name);
  if (name && *name == '/')		
          yyerror2("service name '%s' must not start with '/' -- ", name);	
}


/*
 * Permission statement semantic check
 */
static int check_perm(int perm) {
  long result;
  char *status;
  char buf[STRLEN];

  snprintf(buf, STRLEN, "%d", perm);

  result = strtol(buf, &status, 8);

  if ( *status != '\0' || result < 0 || result > 07777 )
    yyerror2("permission statements must have an octal value between 0 and 7777");

  return result;
}


/*
 * Every statement semantic check
 */
static void check_every(int every) {
  if (every <= 1)
    yyerror2("an EVERY statement must have a value greater than 1");
}


/*
 * Check hostname 
 */
static void check_hostname(char *hostname) {

  ASSERT(hostname);

  if (!check_host(hostname))
    yywarning2("hostname did not resolve");
}

/*
 * Check the dependency graph for errors
 * by doing a topological sort, thereby finding any cycles.
 * Assures that graph is a Directed Acyclic Graph (DAG).
 */
static void check_depend() {
  Service_T s;
  Service_T depends_on = NULL;
  Service_T* dlt = &depend_list; /* the current tail of it                                 */
  int done;                      /* no unvisited nodes left?                               */
  int found_some;                /* last iteration found anything new ?                    */
  depend_list = NULL;            /* depend_list will be the topological sorted servicelist */

  do { 
    done = TRUE;
    found_some = FALSE; 
    for (s = servicelist; s; s = s->next) {
        Dependant_T d;
      if (s->visited)
	  continue;
      done = FALSE; // still unvisited nodes
      depends_on = NULL;
      for (d = s->dependantlist; d; d = d->next) {
        Service_T dp = Util_getService(d->dependant);
        if (!dp) {
          LogError("%s: Error: Depend service '%s' is not defined in the control file\n", prog, d->dependant);
          exit(1);
        }
        if (!dp->visited) {
          depends_on = dp;
        }
      }

      if (!depends_on) {
        s->visited = TRUE;
        found_some = TRUE;
        *dlt = s;
        dlt = &s->next_depend;
      }
    }
  } while (found_some && !done);
	
  if (!done) {
        ASSERT(depends_on);
	LogError("%s: Error: Found a depend loop in the control file involving the service '%s'\n", prog, depends_on->name);
	exit(1);
   } 

  ASSERT(depend_list);
  servicelist = depend_list;
    
  for (s = depend_list; s; s = s->next_depend)
    s->next = s->next_depend;
    
  reset_depend();
}


/*
 * Check if the executable exist
 */
static void check_exec(char *exec) {
  if (! file_exist(exec))
    yywarning2("the executable does not exist");
}
 
 
/* Return a valid max forward value for SIP header */
static int verifyMaxForward(int mf) { 
  int max = 70;
  
  if (mf >= 0 && mf <= 255)
    max = mf;
  else
    yywarning2("SIP max forward is outside the range [0..255]. Setting max forward to 70");
  
  return max;
}


/* -------------------------------------------------------------------- Misc */


/*
 * Cleans up an md5 string, tolower and remove byte separators
 */
static int cleanup_hash_string(char *hashstring) {
  int i = 0, j = 0;

  ASSERT(hashstring);

  while (hashstring[i] != '\0') {
    if (isxdigit((int) hashstring[i])) {
      hashstring[j] = tolower((int)hashstring[i]);
      j++;
    } 
    i++;
  }
  hashstring[j] = '\0';
  return j;
}


/* Return deep copy of the command */
static Command_T copycommand(Command_T source) {
  int i;
  Command_T copy = NULL;

  NEW(copy);
  copy->length = source->length;
  copy->has_uid = source->has_uid;
  copy->uid = source->uid;
  copy->has_gid = source->has_gid;
  copy->gid = source->gid;
  copy->timeout = source->timeout;
  for (i = 0; i < copy->length; i++)
     copy->arg[i] = xstrdup(source->arg[i]);
  copy->arg[copy->length] = NULL;

  return copy;
}


