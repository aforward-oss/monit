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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  201
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  488
/* YYNRULES -- Number of states.  */
#define YYNSTATES  852

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
      39,    41,    44,    47,    50,    53,    56,    59,    62,    65,
      66,    69,    71,    73,    75,    77,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    97,    98,   101,   103,   105,
     107,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   133,   134,   137,   139,   141,   143,   145,
     147,   149,   151,   153,   155,   157,   159,   161,   163,   165,
     167,   168,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   199,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   225,
     228,   230,   232,   234,   236,   238,   240,   242,   244,   245,
     248,   250,   252,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   274,   275,   278,   280,   282,   284,   286,
     288,   290,   298,   303,   312,   316,   321,   322,   326,   331,
     334,   337,   341,   345,   351,   356,   363,   368,   372,   376,
     380,   384,   387,   391,   396,   397,   400,   406,   412,   418,
     420,   423,   429,   437,   438,   441,   443,   445,   447,   449,
     451,   456,   458,   461,   464,   467,   470,   474,   478,   481,
     483,   485,   488,   491,   494,   497,   500,   503,   504,   507,
     508,   510,   516,   521,   524,   528,   532,   536,   537,   542,
     543,   549,   550,   556,   557,   563,   566,   568,   571,   573,
     574,   576,   581,   586,   591,   596,   601,   606,   611,   616,
     619,   624,   629,   633,   638,   642,   647,   649,   652,   654,
     657,   659,   661,   663,   666,   668,   670,   673,   676,   679,
     682,   683,   686,   689,   690,   693,   694,   697,   709,   720,
     731,   742,   743,   746,   749,   752,   753,   756,   761,   764,
     765,   768,   769,   771,   773,   775,   777,   778,   782,   785,
     788,   791,   794,   798,   801,   804,   807,   810,   813,   818,
     821,   824,   827,   830,   833,   836,   839,   842,   845,   848,
     851,   854,   858,   861,   863,   865,   868,   871,   874,   875,
     878,   881,   882,   885,   886,   890,   896,   897,   900,   903,
     905,   909,   914,   919,   924,   929,   934,   939,   944,   949,
     954,   959,   967,   974,   981,   982,   985,   986,   990,   991,
     995,  1003,  1011,  1012,  1016,  1018,  1020,  1027,  1031,  1039,
    1041,  1044,  1047,  1049,  1052,  1054,  1056,  1058,  1060,  1062,
    1064,  1066,  1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,
    1084,  1086,  1088,  1090,  1092,  1093,  1098,  1100,  1103,  1105,
    1107,  1109,  1111,  1115,  1118,  1121,  1124,  1127,  1130,  1132,
    1135,  1137,  1144,  1146,  1149,  1151,  1153,  1155,  1157,  1164,
    1166,  1169,  1171,  1173,  1175,  1177,  1182,  1187,  1192,  1194,
    1196,  1198,  1203,  1208,  1213,  1218,  1223,  1228,  1232,  1236,
    1238,  1240,  1242,  1244,  1246,  1256,  1263,  1264,  1266,  1268,
    1270,  1272,  1274,  1275,  1277,  1279,  1281,  1283,  1285,  1288,
    1292,  1294,  1296,  1298,  1300,  1302,  1304,  1305,  1308,  1312,
    1313,  1316,  1320,  1321,  1328,  1335,  1342,  1351,  1362,  1370,
    1371,  1373,  1375,  1384,  1394,  1404,  1414,  1421,  1422,  1424,
    1426,  1428,  1430,  1439,  1447,  1455,  1460,  1465,  1466,  1468,
    1478,  1485,  1494,  1503,  1512,  1521,  1524,  1525,  1528
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     202,     0,    -1,    -1,   203,    -1,   204,    -1,   203,   204,
      -1,   221,    -1,   222,    -1,   223,    -1,   228,    -1,   229,
      -1,   233,    -1,   237,    -1,   238,    -1,   239,    -1,   232,
      -1,   230,    -1,   231,    -1,   225,    -1,   226,    -1,   227,
      -1,   262,   205,    -1,   263,   207,    -1,   264,   209,    -1,
     265,   211,    -1,   266,   213,    -1,   267,   215,    -1,   268,
     217,    -1,   269,   219,    -1,    -1,   205,   206,    -1,   270,
      -1,   271,    -1,   300,    -1,   301,    -1,   302,    -1,   281,
      -1,   282,    -1,   306,    -1,   309,    -1,   317,    -1,   318,
      -1,   319,    -1,   320,    -1,   323,    -1,    -1,   207,   208,
      -1,   270,    -1,   271,    -1,   300,    -1,   338,    -1,   306,
      -1,   317,    -1,   309,    -1,   353,    -1,   357,    -1,   358,
      -1,   347,    -1,   356,    -1,   354,    -1,   318,    -1,   319,
      -1,   320,    -1,    -1,   209,   210,    -1,   270,    -1,   271,
      -1,   300,    -1,   306,    -1,   317,    -1,   309,    -1,   353,
      -1,   357,    -1,   358,    -1,   318,    -1,   319,    -1,   320,
      -1,   349,    -1,   350,    -1,   351,    -1,    -1,   211,   212,
      -1,   270,    -1,   271,    -1,   300,    -1,   338,    -1,   306,
      -1,   317,    -1,   309,    -1,   353,    -1,   357,    -1,   358,
      -1,   318,    -1,   319,    -1,   320,    -1,   214,    -1,   213,
     214,    -1,   270,    -1,   271,    -1,   300,    -1,   281,    -1,
     283,    -1,   306,    -1,   309,    -1,   317,    -1,   318,    -1,
     319,    -1,   320,    -1,    -1,   215,   216,    -1,   270,    -1,
     271,    -1,   306,    -1,   309,    -1,   317,    -1,   319,    -1,
     320,    -1,   326,    -1,    -1,   217,   218,    -1,   270,    -1,
     271,    -1,   300,    -1,   338,    -1,   306,    -1,   317,    -1,
     309,    -1,   353,    -1,   357,    -1,   358,    -1,   318,    -1,
     319,    -1,   320,    -1,    -1,   219,   220,    -1,   306,    -1,
     300,    -1,   309,    -1,   317,    -1,   319,    -1,   320,    -1,
       8,   310,   197,   312,   198,   314,   360,    -1,     8,   310,
     314,   360,    -1,     8,   310,   168,   197,   312,   198,   314,
     360,    -1,     8,   171,   273,    -1,     8,    11,    95,   224,
      -1,    -1,    39,    23,    95,    -1,     8,    34,    95,   352,
      -1,     8,    17,    -1,     8,   192,    -1,     8,     9,    87,
      -1,     8,     9,    12,    -1,     8,     9,    12,    10,    86,
      -1,     8,   139,   137,    87,    -1,     8,   139,   137,    87,
     138,    95,    -1,     8,   139,   138,    95,    -1,     8,    30,
      87,    -1,     8,    31,    87,    -1,     8,    38,    87,    -1,
       8,   144,   234,    -1,   235,   236,    -1,   234,   235,   236,
      -1,   189,   305,   289,   288,    -1,    -1,   187,   188,    -1,
       8,    13,   240,   305,   280,    -1,     8,    53,   197,   315,
     198,    -1,     8,    14,    44,    95,   242,    -1,   241,    -1,
     240,   241,    -1,    86,   278,   279,   289,   288,    -1,    86,
      44,    95,   278,   279,   289,   288,    -1,    -1,   242,   243,
      -1,   244,    -1,   247,    -1,   250,    -1,   254,    -1,   246,
      -1,   245,   251,   252,   253,    -1,    27,    -1,    27,    25,
      -1,    25,    27,    -1,    27,    26,    -1,    26,    27,    -1,
     246,    24,    87,    -1,   246,    28,    87,    -1,   246,    29,
      -1,   248,    -1,   249,    -1,    55,    25,    -1,    25,    55,
      -1,    55,    26,    -1,    26,    55,    -1,    16,    86,    -1,
      24,    87,    -1,    -1,    28,    87,    -1,    -1,    29,    -1,
      15,    86,   199,    86,   261,    -1,    15,   200,    86,   261,
      -1,    15,    87,    -1,    15,    19,    87,    -1,    15,    20,
      87,    -1,    15,    22,    87,    -1,    -1,    15,    87,   255,
     259,    -1,    -1,    15,    19,    87,   256,   259,    -1,    -1,
      15,    20,    87,   257,   259,    -1,    -1,    15,    22,    87,
     258,   259,    -1,    15,    86,    -1,   260,    -1,   259,   260,
      -1,    86,    -1,    -1,    18,    -1,   108,    93,    38,    87,
      -1,   108,    93,    41,    87,    -1,   108,    93,   167,    86,
      -1,   108,    93,   167,    87,    -1,   110,    93,    41,    87,
      -1,   109,    93,    41,    87,    -1,   111,    93,    41,    87,
      -1,   112,    93,    16,    86,    -1,   113,    93,    -1,   114,
      93,    41,    87,    -1,   115,    93,    41,    87,    -1,    39,
     272,   304,    -1,    39,   272,   275,   304,    -1,    40,   272,
     304,    -1,    40,   272,   275,   304,    -1,   276,    -1,   272,
     276,    -1,   274,    -1,   273,   274,    -1,    86,    -1,    87,
      -1,   277,    -1,   275,   277,    -1,    86,    -1,    87,    -1,
     142,    86,    -1,   143,    86,    -1,   142,    95,    -1,   143,
      95,    -1,    -1,   146,    88,    -1,   146,    86,    -1,    -1,
     147,    86,    -1,    -1,    43,    86,    -1,     3,     7,   284,
     285,   287,   290,   305,   344,     5,   342,   346,    -1,     3,
       7,   182,   189,   307,   305,   344,     5,   342,   346,    -1,
       3,     7,   286,   287,   290,   305,   344,     5,   342,   346,
      -1,     3,     7,   173,   359,   303,   305,   344,     5,   342,
     346,    -1,    -1,    42,    86,    -1,    44,    95,    -1,    54,
      87,    -1,    -1,    45,    47,    -1,    45,    48,   289,   288,
      -1,    45,    46,    -1,    -1,   158,    86,    -1,    -1,   155,
      -1,   156,    -1,   157,    -1,   154,    -1,    -1,    49,    62,
     298,    -1,    49,    60,    -1,    49,    71,    -1,    49,    73,
      -1,    49,    63,    -1,    49,    61,   295,    -1,    49,    66,
      -1,    49,    67,    -1,    49,    74,    -1,    49,    75,    -1,
      49,    70,    -1,    49,    81,   293,   294,    -1,    49,    68,
      -1,    49,    69,    -1,    49,    80,    -1,    49,    65,    -1,
      49,    64,    -1,    49,    72,    -1,    49,    76,    -1,    49,
      77,    -1,    49,    78,    -1,    49,    79,    -1,    49,    82,
      -1,    49,    83,    -1,    49,    84,   297,    -1,    49,    85,
      -1,   291,    -1,   292,    -1,   291,   292,    -1,    32,    86,
      -1,    33,    86,    -1,    -1,   190,    88,    -1,   190,    86,
      -1,    -1,   191,    95,    -1,    -1,   135,    87,   296,    -1,
     135,    87,    58,    86,   296,    -1,    -1,   141,    86,    -1,
     140,    86,    -1,   299,    -1,   298,     6,   299,    -1,    97,
     339,    95,    96,    -1,    98,   339,    95,    96,    -1,    99,
     339,    95,    96,    -1,   100,   339,    95,    96,    -1,   101,
     339,    95,    96,    -1,   102,   339,    95,    96,    -1,   103,
     339,    95,    96,    -1,   104,   339,    95,    96,    -1,   105,
     339,    95,    96,    -1,   106,   339,    95,    96,    -1,     3,
     168,   176,   344,     5,   342,   346,    -1,     3,   149,   184,
     344,     5,   342,    -1,     3,   149,   185,   344,     5,   342,
      -1,    -1,    36,    95,    -1,    -1,    56,    95,   150,    -1,
      -1,    56,    95,   150,    -1,     3,    95,    57,    95,    35,
       5,   342,    -1,     3,    95,    57,    95,    35,     5,    56,
      -1,    -1,   183,   308,    86,    -1,   194,    -1,   193,    -1,
     310,   197,   312,   198,   314,   360,    -1,   310,   314,   360,
      -1,   310,   168,   197,   312,   198,   314,   360,    -1,   311,
      -1,    51,    88,    -1,    52,    88,    -1,   313,    -1,   312,
     313,    -1,   170,    -1,    58,    -1,    50,    -1,   183,    -1,
     178,    -1,   171,    -1,   186,    -1,   143,    -1,   173,    -1,
     145,    -1,   177,    -1,   175,    -1,   165,    -1,   184,    -1,
     185,    -1,   118,    -1,   166,    -1,    56,    -1,   148,    -1,
     142,    -1,    -1,    53,   197,   315,   198,    -1,   316,    -1,
     315,   316,    -1,    89,    -1,    90,    -1,    91,    -1,    92,
      -1,    59,    95,    35,    -1,   125,   126,    -1,   125,   127,
      -1,   125,   128,    -1,   134,    94,    -1,   136,   321,    -1,
     322,    -1,   321,   322,    -1,    93,    -1,     3,   324,   344,
       5,   342,   346,    -1,   325,    -1,   324,   325,    -1,   329,
      -1,   332,    -1,   334,    -1,   335,    -1,     3,   327,   344,
       5,   342,   346,    -1,   328,    -1,   327,   328,    -1,   335,
      -1,   332,    -1,   333,    -1,   330,    -1,   129,   339,    95,
      96,    -1,   130,   339,    95,    96,    -1,   331,   339,    95,
      96,    -1,   131,    -1,   132,    -1,   133,    -1,   119,   339,
     337,   352,    -1,   119,   339,    95,    96,    -1,   120,   339,
     337,   352,    -1,   120,   339,    95,    96,    -1,   124,   339,
     337,   352,    -1,   124,   339,    95,    96,    -1,   116,   339,
      95,    -1,   336,   339,   337,    -1,   121,    -1,   122,    -1,
     123,    -1,   107,    -1,    95,    -1,     3,   148,   339,    95,
     340,   344,     5,   342,   346,    -1,     3,   149,   148,   344,
       5,   342,    -1,    -1,   196,    -1,   195,    -1,   194,    -1,
     193,    -1,   149,    -1,    -1,   150,    -1,   151,    -1,   152,
      -1,   153,    -1,    51,    -1,   171,   272,    -1,   171,   272,
     275,    -1,    57,    -1,    39,    -1,    40,    -1,   172,    -1,
     341,    -1,   341,    -1,    -1,    95,    35,    -1,    95,    95,
      35,    -1,    -1,    95,    35,    -1,    95,    95,    35,    -1,
      -1,     4,     3,   179,   345,     5,   343,    -1,     4,     3,
     180,   345,     5,   343,    -1,     4,     3,   181,   345,     5,
     343,    -1,     3,     7,   348,    58,   344,     5,   342,   346,
      -1,     3,     7,   348,    58,    33,    86,   344,     5,   342,
     346,    -1,     3,   149,   348,    58,   344,     5,   342,    -1,
      -1,    20,    -1,    21,    -1,     3,   163,   339,    95,   344,
       5,   342,   346,    -1,     3,   163,   339,    95,    96,   344,
       5,   342,   346,    -1,     3,   164,   339,   337,   352,   344,
       5,   342,   346,    -1,     3,   164,   339,    95,    96,   344,
       5,   342,   346,    -1,     3,   149,   186,   344,     5,   342,
      -1,    -1,   159,    -1,   160,    -1,   161,    -1,   162,    -1,
       3,     7,   165,    95,   344,     5,   342,   346,    -1,     3,
     355,   167,    87,   344,     5,   342,    -1,     3,   355,   167,
      86,   344,     5,   342,    -1,   169,   355,   167,    87,    -1,
     169,   355,   167,    86,    -1,    -1,   168,    -1,     3,   166,
     339,    95,   352,   344,     5,   342,   346,    -1,     3,   149,
     166,   344,     5,   342,    -1,     3,     7,   142,    86,   344,
       5,   342,   346,    -1,     3,     7,   142,    95,   344,     5,
     342,   346,    -1,     3,     7,   143,    86,   344,     5,   342,
     346,    -1,     3,     7,   143,    95,   344,     5,   342,   346,
      -1,    45,   174,    -1,    -1,    37,    95,    -1,    37,    95,
      35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   308,   308,   309,   312,   313,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   341,
     342,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   361,   362,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   383,   384,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     404,   405,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   423,   424,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   440,   441,
     444,   445,   446,   447,   448,   449,   450,   451,   454,   455,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   473,   474,   477,   478,   479,   480,   481,
     482,   485,   488,   491,   496,   499,   509,   510,   513,   518,
     523,   530,   538,   541,   546,   549,   553,   559,   564,   569,
     577,   580,   581,   584,   590,   591,   596,   602,   611,   617,
     618,   621,   640,   659,   660,   663,   664,   665,   666,   669,
     670,   677,   678,   679,   682,   683,   684,   685,   686,   689,
     690,   693,   694,   697,   698,   701,   704,   711,   712,   720,
     724,   730,   733,   741,   745,   749,   753,   757,   757,   764,
     764,   771,   771,   778,   778,   785,   793,   794,   797,   801,
     802,   805,   808,   811,   818,   827,   832,   837,   842,   848,
     854,   859,   864,   867,   872,   875,   880,   881,   884,   885,
     888,   889,   892,   893,   896,   897,   900,   901,   902,   903,
     906,   907,   908,   911,   912,   915,   916,   919,   925,   934,
     942,   952,   958,   961,   964,   969,   972,   975,   983,   988,
     989,   992,   993,   994,   995,   996,   999,  1002,  1005,  1008,
    1011,  1014,  1017,  1020,  1023,  1026,  1029,  1032,  1035,  1038,
    1041,  1045,  1048,  1051,  1054,  1057,  1060,  1063,  1066,  1069,
    1072,  1075,  1078,  1081,  1086,  1087,  1090,  1091,  1094,  1095,
    1098,  1103,  1104,  1109,  1110,  1114,  1121,  1122,  1127,  1132,
    1133,  1136,  1140,  1144,  1148,  1152,  1156,  1160,  1164,  1168,
    1172,  1178,  1184,  1189,  1194,  1197,  1202,  1205,  1210,  1213,
    1218,  1224,  1232,  1233,  1239,  1240,  1243,  1246,  1249,  1252,
    1257,  1260,  1263,  1264,  1267,  1268,  1269,  1270,  1271,  1272,
    1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,  1281,  1282,
    1283,  1284,  1285,  1286,  1289,  1290,  1293,  1294,  1297,  1298,
    1299,  1300,  1303,  1310,  1313,  1316,  1322,  1326,  1329,  1330,
    1333,  1336,  1342,  1343,  1346,  1347,  1348,  1349,  1352,  1358,
    1359,  1362,  1363,  1364,  1365,  1368,  1373,  1380,  1387,  1388,
    1389,  1392,  1397,  1402,  1407,  1414,  1419,  1426,  1433,  1440,
    1441,  1442,  1445,  1446,  1449,  1455,  1462,  1463,  1464,  1465,
    1466,  1467,  1470,  1471,  1472,  1473,  1474,  1477,  1478,  1479,
    1480,  1481,  1482,  1483,  1486,  1495,  1504,  1505,  1511,  1521,
    1522,  1528,  1538,  1541,  1544,  1547,  1552,  1556,  1563,  1569,
    1570,  1571,  1574,  1581,  1590,  1599,  1608,  1613,  1614,  1615,
    1616,  1617,  1620,  1627,  1634,  1640,  1647,  1655,  1658,  1664,
    1670,  1677,  1683,  1690,  1696,  1703,  1706,  1707,  1708
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
  "setalert", "setexec", "setdaemon", "startdelay", "setexpectbuffer",
  "setinit", "setfips", "setlog", "seteventqueue", "setidfile",
  "setstatefile", "setpid", "setmmonits", "mmonitlist", "mmonit",
  "credentials", "setmailservers", "setmailformat", "sethttpd",
  "mailserverlist", "mailserver", "httpdlist", "httpdoption", "ssl",
  "sslenable", "ssldisable", "signature", "sigenable", "sigdisable",
  "bindaddress", "pemfile", "clientpemfile", "allowselfcert", "allow",
  "$@1", "$@2", "$@3", "$@4", "allowuserlist", "allowuser", "readonly",
  "checkproc", "checkfile", "checkfilesys", "checkdir", "checkhost",
  "checksystem", "checkfifo", "checkstatus", "start", "stop",
  "argumentlist", "execlist", "exec", "useroptionlist", "argument",
  "useroption", "username", "password", "hostname", "connection",
  "connectionunix", "icmp", "host", "port", "unixsocket", "type",
  "certmd5", "sslversion", "protocol", "sendexpectlist", "sendexpect",
  "target", "maxforward", "request", "hostheader", "secret",
  "apache_stat_list", "apache_stat", "exist", "pid", "ppid", "icmpcount",
  "exectimeout", "nettimeout", "actionrate", "urloption", "urloperator",
  "alert", "alertmail", "noalertmail", "eventoptionlist", "eventoption",
  "formatlist", "formatoptionlist", "formatoption", "every", "mode",
  "group", "depend", "dependlist", "dependant", "resourceprocess",
  "resourceprocesslist", "resourceprocessopt", "resourcesystem",
  "resourcesystemlist", "resourcesystemopt", "resourcecpuproc",
  "resourcecpu", "resourcecpuid", "resourcemem", "resourceswap",
  "resourcechild", "resourceload", "resourceloadavg", "value", "timestamp",
  "operator", "time", "action", "action1", "action2", "rate1", "rate2",
  "recovery", "checksum", "hashtype", "inode", "space", "fsflag", "unit",
  "permission", "match", "matchflagnot", "size", "uid", "gid", "icmptype",
  "reminder", 0
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
     204,   204,   204,   204,   204,   204,   204,   204,   204,   205,
     205,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   207,   207,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   209,   209,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     211,   211,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   213,   213,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   215,   215,
     216,   216,   216,   216,   216,   216,   216,   216,   217,   217,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   219,   219,   220,   220,   220,   220,   220,
     220,   221,   221,   221,   222,   223,   224,   224,   225,   226,
     227,   228,   228,   228,   229,   229,   229,   230,   231,   232,
     233,   234,   234,   235,   236,   236,   237,   238,   239,   240,
     240,   241,   241,   242,   242,   243,   243,   243,   243,   244,
     244,   245,   245,   245,   246,   246,   246,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   251,   252,   252,   253,
     253,   254,   254,   254,   254,   254,   254,   255,   254,   256,
     254,   257,   254,   258,   254,   254,   259,   259,   260,   261,
     261,   262,   262,   262,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   270,   271,   271,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   276,   277,   277,   277,   277,
     278,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     283,   284,   284,   285,   286,   287,   287,   287,   287,   288,
     288,   289,   289,   289,   289,   289,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   291,   291,   292,   292,   293,   293,
     293,   294,   294,   295,   295,   295,   296,   296,   297,   298,
     298,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   300,   301,   302,   303,   303,   304,   304,   305,   305,
     306,   306,   307,   307,   308,   308,   309,   309,   309,   309,
     310,   311,   312,   312,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   314,   314,   315,   315,   316,   316,
     316,   316,   317,   318,   318,   318,   319,   320,   321,   321,
     322,   323,   324,   324,   325,   325,   325,   325,   326,   327,
     327,   328,   328,   328,   328,   329,   329,   330,   331,   331,
     331,   332,   332,   332,   332,   333,   333,   334,   335,   336,
     336,   336,   337,   337,   338,   338,   339,   339,   339,   339,
     339,   339,   340,   340,   340,   340,   340,   341,   341,   341,
     341,   341,   341,   341,   342,   343,   344,   344,   344,   345,
     345,   345,   346,   346,   346,   346,   347,   347,   347,   348,
     348,   348,   349,   349,   350,   350,   351,   352,   352,   352,
     352,   352,   353,   354,   354,   354,   354,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   360,   360,   360
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     7,     4,     8,     3,     4,     0,     3,     4,     2,
       2,     3,     3,     5,     4,     6,     4,     3,     3,     3,
       3,     2,     3,     4,     0,     2,     5,     5,     5,     1,
       2,     5,     7,     0,     2,     1,     1,     1,     1,     1,
       4,     1,     2,     2,     2,     2,     3,     3,     2,     1,
       1,     2,     2,     2,     2,     2,     2,     0,     2,     0,
       1,     5,     4,     2,     3,     3,     3,     0,     4,     0,
       5,     0,     5,     0,     5,     2,     1,     2,     1,     0,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     2,
       4,     4,     3,     4,     3,     4,     1,     2,     1,     2,
       1,     1,     1,     2,     1,     1,     2,     2,     2,     2,
       0,     2,     2,     0,     2,     0,     2,    11,    10,    10,
      10,     0,     2,     2,     2,     0,     2,     4,     2,     0,
       2,     0,     1,     1,     1,     1,     0,     3,     2,     2,
       2,     2,     3,     2,     2,     2,     2,     2,     4,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     1,     1,     2,     2,     2,     0,     2,
       2,     0,     2,     0,     3,     5,     0,     2,     2,     1,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     7,     6,     6,     0,     2,     0,     3,     0,     3,
       7,     7,     0,     3,     1,     1,     6,     3,     7,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     2,     1,     1,
       1,     1,     3,     2,     2,     2,     2,     2,     1,     2,
       1,     6,     1,     2,     1,     1,     1,     1,     6,     1,
       2,     1,     1,     1,     1,     4,     4,     4,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     3,     3,     1,
       1,     1,     1,     1,     9,     6,     0,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     0,     2,     3,     0,
       2,     3,     0,     6,     6,     6,     8,    10,     7,     0,
       1,     1,     8,     9,     9,     9,     6,     0,     1,     1,
       1,     1,     8,     7,     7,     4,     4,     0,     1,     9,
       6,     8,     8,     8,     8,     2,     0,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     6,     7,     8,    18,    19,    20,     9,
      10,    16,    17,    15,    11,    12,    13,    14,    29,    45,
      63,    80,     0,   108,   118,   133,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,   374,     0,     0,     0,     0,     0,   229,     0,     0,
       1,     5,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    95,    97,    98,   100,   101,
      99,   102,   103,   374,   349,   104,   105,   106,   107,    26,
      27,    28,   152,   151,   146,   250,   338,   169,     0,   157,
     158,   467,   159,   350,     0,     0,     0,   338,   160,   164,
     240,   241,   144,   238,     0,     0,     0,   486,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    36,    37,    33,    34,    35,    38,    39,    40,    41,
      42,    43,    44,   477,   477,    46,    47,    48,    49,    51,
      53,    52,    60,    61,    62,    50,    57,    54,    59,    58,
      55,    56,     0,    64,    65,    66,    67,    68,    70,    69,
      74,    75,    76,    77,    78,    79,    71,    72,    73,     0,
      81,    82,    83,    84,    86,    88,    87,    92,    93,    94,
      85,    89,    90,    91,   261,     0,     0,   244,   245,   336,
     236,   336,   351,     0,   383,   384,   385,   386,   390,   387,
     388,    96,     0,     0,   486,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   119,   120,   121,   122,   124,
     126,   125,   130,   131,   132,   123,   127,   128,   129,     0,
     134,   136,   135,   137,   138,   139,   140,     0,     0,   145,
       0,     0,   253,     0,   170,   255,   173,   468,   469,   470,
     471,   148,   378,   379,   380,   381,     0,   376,   154,   156,
     271,   164,     0,   161,   239,     0,     0,   356,   371,   355,
     369,   373,   361,   363,   372,   366,   370,   354,   359,   362,
     365,   364,   358,   357,   367,   368,   360,     0,   352,     0,
     142,   221,   222,   223,   224,   226,   225,   227,   228,   230,
     231,   261,   426,   426,   426,   419,   420,   421,   426,   426,
       0,   446,   392,   394,   395,   396,   397,   426,   459,   426,
     459,   426,   478,     0,   478,     0,     0,     0,   426,   426,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
     336,   237,   242,   232,   336,   234,   382,   389,     0,     0,
     347,   426,   408,   409,   410,   446,   399,   404,   426,   402,
     403,   401,   153,     0,   250,   252,   251,     0,   271,     0,
       0,   166,   168,   167,   377,     0,   275,   272,   273,   274,
     269,   162,   165,     0,     0,   374,   353,   487,     0,   265,
     431,   430,   429,   428,   427,     0,     0,     0,     0,     0,
     446,   446,     0,   393,     0,     0,   460,   461,     0,     0,
       0,     0,     0,   446,   446,     0,     0,     0,     0,   446,
       0,     0,   262,     0,   334,   342,     0,   265,     0,     0,
       0,   246,   248,   247,   249,   243,   233,   235,     0,   374,
       0,   400,     0,     0,   147,   253,   254,   269,   339,   256,
       0,     0,     0,     0,   181,     0,   174,   175,     0,   179,
     176,   189,   190,   177,   178,   155,     0,   163,   375,   374,
     486,   488,   264,     0,   276,   417,   423,   422,   467,   423,
     467,     0,     0,     0,     0,   447,     0,     0,   423,   418,
     446,   446,   446,   446,   446,   446,   432,     0,     0,   446,
     467,   446,   446,   476,   475,     0,   446,   423,   467,   485,
       0,   338,     0,   338,   263,   276,     0,     0,   337,   374,
     486,   423,   467,     0,     0,   271,   171,     0,     0,     0,
     215,   203,     0,   195,   183,   192,   185,   194,   182,   184,
     191,   193,     0,   197,     0,     0,   188,   270,   486,   141,
     268,   266,   271,     0,     0,     0,   338,   303,   304,   412,
     411,   414,   413,   405,   406,     0,     0,   448,   441,   442,
     437,   440,     0,   443,   444,   452,     0,     0,     0,     0,
       0,     0,     0,   433,   434,   435,   436,   446,     0,     0,
       0,   446,     0,     0,     0,   446,     0,   446,   446,   335,
     446,   345,   344,     0,   446,   338,     0,   452,   486,   346,
     416,   415,   452,   407,   269,   204,   205,   206,     0,     0,
     219,   196,     0,   199,   186,   187,   143,   269,   306,   307,
     278,   313,     0,   281,   293,   292,   283,   284,   289,   290,
     287,   279,   294,   280,   285,   286,   295,   296,   297,   298,
     291,   308,   299,   300,     0,   302,   446,   305,   332,   333,
     438,     0,   391,     0,     0,     0,     0,     0,   446,     0,
       0,   425,   480,     0,     0,     0,     0,   466,     0,     0,
       0,     0,     0,   343,     0,   446,   341,   340,   331,   348,
     398,   172,     0,     0,     0,   219,   218,   208,   216,   220,
     202,   198,   200,   180,   267,     0,   282,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   277,   319,     0,
     311,     0,   301,     0,   439,     0,   452,   452,   452,   452,
     452,     0,   452,     0,   458,     0,   474,   473,     0,   452,
       0,     0,     0,     0,     0,   210,   212,   214,   201,   217,
     316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   310,   309,     0,   288,   318,     0,   449,   449,
     449,   481,   482,   483,   484,   472,     0,   456,   452,   452,
     452,   462,   452,   452,   452,   452,     0,     0,     0,   314,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     320,   312,   452,     0,     0,     0,     0,   452,   424,   479,
     463,   465,   464,   260,   258,   452,   316,   317,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   259,   450,
       0,     0,     0,     0,   457,   257,   315,   451,   445,   453,
     454,   455
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    62,   128,    63,   145,    64,   163,
      65,   180,    74,    75,    89,   216,    90,   225,    91,   240,
      13,    14,    15,   249,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   108,   109,   273,    25,    26,    27,    96,
      97,   382,   466,   467,   468,   469,   470,   471,   472,   473,
     553,   633,   713,   474,   629,   702,   703,   704,   707,   708,
     710,    28,    29,    30,    31,    32,    33,    34,    35,    76,
      77,   199,   112,   113,   350,   200,   352,   252,   378,   381,
      78,   132,    79,   344,   437,   399,   484,   477,   390,   566,
     567,   568,   730,   775,   716,   799,   732,   727,   728,    80,
     134,   135,   521,   353,   255,    81,   523,   613,    82,    83,
      84,   297,   298,   117,   266,   267,    85,    86,    87,    88,
     209,   210,   142,   321,   322,   224,   365,   366,   323,   367,
     368,   324,   370,   325,   326,   327,   488,   155,   405,   597,
     584,   585,   849,   414,   814,   672,   156,   421,   173,   174,
     175,   261,   157,   158,   333,   159,   160,   161,   434,   300
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -597
static const yytype_int16 yypact[] =
{
     254,    41,   -44,   -25,    36,    38,    42,    52,    56,   108,
      91,   254,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,   456,  -597,  -597,  -597,    17,   109,    33,   174,
    -597,   135,   139,   137,   159,   187,    81,   127,    94,   212,
    -597,   -45,    67,   264,   271,   282,   313,  -597,   307,   329,
    -597,  -597,   527,   185,   545,   614,    18,   253,   253,   255,
     279,   385,   285,   289,   456,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,    34,  -597,  -597,  -597,  -597,  -597,   250,
     614,   256,   392,  -597,   350,   -21,   -13,  -597,   316,  -597,
    -597,   343,  -597,  -597,   447,   320,   319,   360,    94,   241,
    -597,  -597,   212,  -597,   243,   261,   473,   401,   376,   378,
     259,   380,   396,   398,   361,   403,   419,    35,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,    79,   311,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,    86,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,    11,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,    69,   471,   371,  -597,  -597,   270,
    -597,   270,  -597,   516,  -597,  -597,  -597,  -597,  -597,   289,
    -597,  -597,   356,   473,   401,   565,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,   -50,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,   469,   535,  -597,
     485,   -40,   425,   500,  -597,   557,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,    -8,  -597,   464,  -597,
     468,   241,   439,  -597,  -597,   447,   473,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,   210,  -597,   552,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,    24,   248,   248,   248,  -597,  -597,  -597,   248,   248,
     152,   512,  -597,  -597,  -597,  -597,  -597,   248,    96,   248,
      82,   248,   371,   482,  -597,   495,   235,   454,   248,   248,
     497,   569,   619,   483,   627,   579,   585,   587,    53,   211,
     -15,  -597,  -597,  -597,   -15,  -597,  -597,  -597,   473,   291,
    -597,   248,  -597,  -597,  -597,   580,  -597,  -597,   248,  -597,
    -597,  -597,  -597,   588,   548,  -597,  -597,   609,   468,   559,
     624,  -597,   455,  -597,  -597,   620,  -597,  -597,  -597,  -597,
     556,  -597,  -597,     7,   379,   663,  -597,   700,   649,   692,
    -597,  -597,  -597,  -597,  -597,   645,   -51,   -48,   646,   647,
     585,   585,    25,  -597,   733,    29,  -597,  -597,   232,   247,
     648,   687,   651,   585,   585,   689,   654,   312,   363,   585,
     658,    88,  -597,   581,   708,   571,   698,   692,   759,   790,
     650,  -597,  -597,  -597,  -597,  -597,  -597,  -597,   428,   663,
     193,  -597,   791,   702,  -597,   425,  -597,   556,  -597,  -597,
      14,   712,    10,    30,   462,   491,  -597,  -597,   775,   424,
    -597,  -597,  -597,  -597,  -597,  -597,   715,  -597,  -597,   663,
     401,  -597,  -597,   541,   302,  -597,   706,  -597,   343,   707,
     343,   709,   710,   799,   802,  -597,   773,   274,  -597,  -597,
     585,   585,   585,   585,   585,    20,   570,   804,   805,   585,
     343,   585,   585,  -597,  -597,   806,   359,   716,   343,  -597,
     718,   360,   381,   360,  -597,   302,   809,   274,  -597,   663,
     401,   719,   343,   274,   720,   468,  -597,   730,   731,   732,
     621,   735,   736,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,   737,   795,   738,   739,  -597,  -597,   401,  -597,
    -597,  -597,   468,   741,   742,   697,   360,   550,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,   274,   274,  -597,  -597,  -597,
    -597,  -597,   253,  -597,  -597,   825,   826,   827,   828,   829,
     830,   744,   831,  -597,  -597,  -597,  -597,   585,   274,   274,
     832,   585,   833,   834,   274,   585,   835,   585,   585,  -597,
     585,  -597,  -597,   755,   585,   360,   201,   825,   401,  -597,
    -597,  -597,   825,  -597,   556,   756,   757,   758,   760,   761,
     836,  -597,   762,   816,  -597,  -597,  -597,   556,  -597,  -597,
    -597,   713,   686,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,   660,  -597,  -597,   711,  -597,   585,  -597,  -597,  -597,
     217,   849,  -597,   274,   274,   274,   274,   274,   585,   274,
     848,  -597,  -597,   274,   850,   274,   274,  -597,   851,   274,
     852,   853,   854,  -597,   855,   585,  -597,  -597,  -597,  -597,
    -597,  -597,   761,   761,   761,   836,  -597,   761,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,   774,  -597,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   856,  -597,    26,
     672,   778,  -597,   860,   477,   488,   825,   825,   825,   825,
     825,   861,   825,   274,  -597,   274,  -597,  -597,   274,   825,
     274,   274,   274,   274,   862,   761,   761,   761,  -597,  -597,
     -34,   776,   777,   779,   780,   781,   782,   783,   784,   785,
     786,   686,  -597,  -597,   787,  -597,  -597,   274,   788,   788,
     788,  -597,  -597,  -597,  -597,  -597,   274,  -597,   825,   825,
     825,  -597,   825,   825,   825,   825,   274,   798,   800,  -597,
     772,   789,   792,   793,   794,   796,   797,   801,   803,   807,
    -597,  -597,   825,    39,   864,   865,   868,   825,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,   825,   746,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
     859,   274,   274,   274,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -597,  -597,  -597,   880,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,   821,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,   808,   625,  -597,  -597,  -597,  -597,
     810,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,
    -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,   -94,  -464,
     195,  -597,  -597,  -597,  -597,  -597,  -597,  -597,  -597,   436,
     662,   -68,  -597,   811,  -198,  -197,  -343,   524,   446,  -597,
     840,  -597,  -597,  -597,  -597,  -597,   467,  -448,  -362,   382,
    -597,   338,  -597,  -597,  -597,    83,  -597,  -597,   140,   478,
    -597,  -597,  -597,  -163,  -106,   341,  -597,  -597,   429,   907,
    -597,  -196,  -233,   -78,   635,  -256,   470,   666,   628,   643,
    -597,   703,  -597,  -597,   592,  -597,  -597,   549,  -597,  -597,
    -597,  -202,  -597,  -597,  -193,  -597,  -380,    -2,  -299,  -597,
    -165,  -466,  -213,  -334,  -143,  -596,  -597,   589,  -597,  -597,
    -597,  -194,    57,  -597,   771,  -597,   191,   205,  -597,  -208
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -214
static const yytype_int16 yytable[] =
{
     201,   270,   351,   354,   351,   214,   360,   445,   114,   536,
     384,   445,   439,   369,   406,   407,   457,   359,   336,   408,
     409,   698,   371,   250,   797,   194,   700,   490,   415,    92,
     422,   452,   426,   537,   538,   499,   539,   544,   355,   430,
     431,   347,   311,   253,   486,   195,   375,   489,   376,    52,
      36,   518,    37,   591,    38,    39,   487,   546,    40,   487,
     495,   617,   450,   190,   396,   545,   341,   622,    53,   453,
     532,    41,    42,    95,   839,    43,   493,   494,   398,    44,
     394,   262,   263,   264,   265,   547,   328,   114,   235,   507,
     508,    60,    45,   336,    46,   515,   262,   263,   264,   265,
     540,   541,   416,   417,    93,   118,   195,   798,   119,   668,
     669,   341,   772,   195,   773,   412,   416,   417,   196,    95,
     496,   176,   191,   115,   498,   251,   396,   348,   349,    54,
     195,    55,   681,   682,   840,    56,   487,   384,   687,   441,
     781,   782,   783,   784,   785,    57,   787,   236,   442,    58,
     697,   312,   116,   791,   313,   314,   315,   316,   317,   329,
     340,   396,   448,   369,   318,   319,   586,   587,   588,   589,
     590,   592,   371,   624,   195,   600,   701,   602,   603,   196,
      47,   195,   606,   517,   320,    48,   196,   446,   143,   714,
     383,   447,   818,   819,   820,   487,   821,   822,   823,   824,
     637,    59,   212,   196,    94,   478,   343,   736,   737,   738,
     739,   740,    49,   742,   542,   396,   838,   744,    98,   746,
     747,   844,    99,   749,    67,    68,   100,   329,   330,   845,
     423,   213,   101,    50,   120,   337,    45,    69,   418,   419,
     578,   579,   342,   759,    70,   331,   102,   332,   424,   338,
     339,   343,   580,   215,   196,   177,   192,   696,   581,   239,
     277,   420,     1,   680,   105,   106,   278,   684,   279,   178,
     193,   688,   559,   690,   691,   103,   692,   788,   104,   789,
     694,   237,   790,   107,   792,   793,   794,   795,   531,    67,
      68,   759,   759,   759,   570,   238,   572,   443,   110,   111,
     487,    45,    69,   197,   198,   121,   444,    45,    69,    70,
      71,   812,   122,   578,   579,    70,   601,   480,   500,    72,
     817,    73,   619,   123,   608,   580,   347,   501,   280,   124,
     825,   581,   733,   502,   563,   564,   410,   411,   621,   197,
     198,   277,   503,   202,   741,   303,   304,   278,   125,   279,
     636,   565,   281,   282,   144,   283,   197,   198,   284,   348,
     349,   754,     2,     3,     4,     5,     6,     7,     8,     9,
     126,   530,   582,   583,   203,   285,   286,   418,   419,   207,
     287,   288,   208,   289,    72,   290,    73,   291,   292,   248,
      72,   445,    73,   293,   294,   295,   296,   400,   511,   512,
     420,   558,   247,   136,   149,   167,   184,   268,   395,   280,
     699,   256,   348,   349,   269,   610,   253,   614,   761,   762,
     763,   764,   765,   766,   767,   768,   769,   770,   272,   277,
     219,   229,   242,   281,   282,   278,   283,   279,   299,   284,
     275,   401,   402,   403,   404,   582,   583,   308,   554,   513,
     514,   618,   555,   556,   412,   605,   285,   286,   276,    66,
     666,   287,   288,   301,   289,   302,   290,   305,   291,   292,
     460,   461,   734,   351,   293,   294,   295,   296,   277,   334,
     462,   463,   464,   306,   278,   307,   279,   548,   549,   449,
     309,   137,   150,   168,   185,    67,    68,   280,   129,   146,
     164,   181,   257,   258,   259,   260,   310,    45,    69,   695,
     465,   204,   205,   206,   670,    70,   550,   551,   220,   230,
     243,   281,   282,   277,   283,   217,   226,   284,   345,   278,
     127,   279,   138,   151,   169,   186,   262,   263,   264,   265,
     133,   148,   166,   183,   285,   286,   280,   346,   162,   287,
     288,   356,   289,   358,   290,   372,   291,   292,   373,   221,
     231,   244,   293,   294,   295,   296,    67,    68,   228,   241,
     281,   282,   377,   283,   611,   612,   284,   479,    45,    69,
     374,    71,   563,   564,    67,    68,    70,   560,   561,   562,
      72,   280,    73,   285,   286,   379,    45,    69,   287,   288,
     380,   289,   385,   290,    70,   291,   292,   412,   755,   756,
     757,   293,   294,   295,   296,   281,   282,   179,   283,   348,
     349,   284,   386,   387,   388,   389,   529,   392,   312,   850,
     851,   313,   314,   315,   316,   317,   815,   816,   285,   286,
     429,   318,   319,   287,   288,   423,   289,   397,   290,   427,
     291,   292,    71,    67,    68,   432,   293,   294,   295,   296,
     195,    72,   428,    73,   433,    45,    69,   778,   779,   780,
      71,   436,   435,    70,   438,   412,   848,   848,   848,    72,
     412,    73,   440,   454,   313,   314,   315,   316,   317,   361,
     140,   153,   171,   188,   251,   456,   362,   363,   364,   313,
     314,   315,   316,   317,   361,   141,   154,   172,   189,   458,
     459,   362,   363,   364,   476,   475,   114,   222,   233,   245,
     593,   594,   595,   596,   130,   147,   165,   182,   139,   152,
     170,   187,   223,   234,   246,   481,   482,   483,   497,    71,
     485,   491,   492,   504,   520,   505,   506,   509,    72,   510,
      73,   218,   227,   516,   522,   519,   232,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   524,   526,   527,   533,   534,   543,   552,
     528,   557,   569,   571,   575,   573,   574,   576,   577,   598,
     599,   604,   607,   609,   616,   620,   623,   625,   626,   627,
     628,  -207,   630,   632,   631,   634,   635,   638,   639,   671,
     678,   673,   674,   675,   676,   677,   679,   683,   685,   686,
     689,   693,  -209,  -211,  -213,   712,   705,   706,   715,   711,
     729,   731,   735,   743,   709,   745,   748,   750,   751,   752,
     753,   760,   771,   774,   776,   777,   786,   796,   828,   841,
     842,   800,   801,   843,   802,   803,   804,   805,   806,   807,
     808,   809,   811,   813,   826,   829,   827,   798,   830,   831,
     832,    61,   833,   834,   847,   211,   391,   835,   455,   836,
     758,   535,   131,   837,   525,   667,   254,   615,    51,   846,
     393,   810,   357,   413,   451,   335,   271,     0,     0,   425,
       0,     0,     0,   274
};

static const yytype_int16 yycheck[] =
{
      68,   107,   199,   201,   201,    83,   214,   350,    53,   457,
     266,   354,   346,   215,   313,   314,   378,   213,     7,   318,
     319,   617,   215,    44,    58,     7,   622,   407,   327,    12,
     329,   365,   331,    19,    20,   415,    22,    27,   201,   338,
     339,    56,     7,    56,    95,    95,    86,    95,    88,    93,
       9,   431,    11,    33,    13,    14,   107,    27,    17,   107,
      35,   527,   361,    65,   297,    55,    42,   533,    93,   368,
     450,    30,    31,    86,    35,    34,   410,   411,    54,    38,
     276,    89,    90,    91,    92,    55,     7,    53,    90,   423,
     424,     0,    51,     7,    53,   429,    89,    90,    91,    92,
      86,    87,    20,    21,    87,    38,    95,   141,    41,   575,
     576,    42,    86,    95,    88,    95,    20,    21,   168,    86,
      95,    64,    65,   168,    95,   146,   359,   142,   143,    93,
      95,    93,   598,   599,    95,    93,   107,   393,   604,    86,
     736,   737,   738,   739,   740,    93,   742,    90,    95,    93,
     616,   116,   197,   749,   119,   120,   121,   122,   123,   148,
     149,   394,   358,   365,   129,   130,   500,   501,   502,   503,
     504,   505,   365,   535,    95,   509,   624,   511,   512,   168,
     139,    95,   516,    95,   149,   144,   168,   350,     3,   637,
     198,   354,   788,   789,   790,   107,   792,   793,   794,   795,
     562,    93,   168,   168,    95,   198,   182,   673,   674,   675,
     676,   677,   171,   679,   200,   448,   812,   683,    44,   685,
     686,   817,    87,   689,    39,    40,    87,   148,   149,   825,
     148,   197,    95,   192,   167,   149,    51,    52,   142,   143,
      39,    40,   173,   707,    59,   166,    87,   168,   166,   163,
     164,   182,    51,     3,   168,    64,    65,    56,    57,     3,
      50,   165,     8,   597,   137,   138,    56,   601,    58,    64,
      65,   605,   480,   607,   608,    88,   610,   743,   197,   745,
     614,    90,   748,   189,   750,   751,   752,   753,    95,    39,
      40,   755,   756,   757,   488,    90,   490,    86,    86,    87,
     107,    51,    52,    86,    87,    41,    95,    51,    52,    59,
     125,   777,    41,    39,    40,    59,   510,   395,    86,   134,
     786,   136,   530,    41,   518,    51,    56,    95,   118,    16,
     796,    57,   666,    86,    32,    33,   184,   185,   532,    86,
      87,    50,    95,    88,   678,    86,    87,    56,    41,    58,
     558,    49,   142,   143,   169,   145,    86,    87,   148,   142,
     143,   695,   108,   109,   110,   111,   112,   113,   114,   115,
      41,   449,   171,   172,    95,   165,   166,   142,   143,    94,
     170,   171,    93,   173,   134,   175,   136,   177,   178,    39,
     134,   734,   136,   183,   184,   185,   186,   149,    86,    87,
     165,   479,    10,    62,    63,    64,    65,    87,   198,   118,
     618,    95,   142,   143,    95,   521,    56,   523,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   187,    50,
      89,    90,    91,   142,   143,    56,   145,    58,    37,   148,
     197,   193,   194,   195,   196,   171,   172,    86,    24,    86,
      87,   529,    28,    29,    95,    96,   165,   166,   197,     3,
     566,   170,   171,    87,   173,    87,   175,    87,   177,   178,
      15,    16,   670,   670,   183,   184,   185,   186,    50,   168,
      25,    26,    27,    87,    56,    87,    58,    25,    26,   198,
      87,    62,    63,    64,    65,    39,    40,   118,    62,    63,
      64,    65,   159,   160,   161,   162,    87,    51,    52,   615,
      55,   126,   127,   128,   582,    59,    25,    26,    89,    90,
      91,   142,   143,    50,   145,    89,    90,   148,    57,    56,
       3,    58,    62,    63,    64,    65,    89,    90,    91,    92,
      62,    63,    64,    65,   165,   166,   118,   176,     3,   170,
     171,    35,   173,   197,   175,    86,   177,   178,    23,    89,
      90,    91,   183,   184,   185,   186,    39,    40,    90,    91,
     142,   143,   147,   145,   193,   194,   148,   198,    51,    52,
      95,   125,    32,    33,    39,    40,    59,    46,    47,    48,
     134,   118,   136,   165,   166,    95,    51,    52,   170,   171,
      43,   173,   138,   175,    59,   177,   178,    95,   702,   703,
     704,   183,   184,   185,   186,   142,   143,     3,   145,   142,
     143,   148,   154,   155,   156,   157,   198,   188,   116,   842,
     843,   119,   120,   121,   122,   123,   779,   780,   165,   166,
     186,   129,   130,   170,   171,   148,   173,    95,   175,   167,
     177,   178,   125,    39,    40,    86,   183,   184,   185,   186,
      95,   134,   167,   136,    45,    51,    52,   179,   180,   181,
     125,    44,   189,    59,    95,    95,   841,   842,   843,   134,
      95,   136,    95,    95,   119,   120,   121,   122,   123,   124,
      62,    63,    64,    65,   146,    86,   131,   132,   133,   119,
     120,   121,   122,   123,   124,    62,    63,    64,    65,   150,
      86,   131,   132,   133,   158,    95,    53,    89,    90,    91,
     150,   151,   152,   153,    62,    63,    64,    65,    62,    63,
      64,    65,    89,    90,    91,    35,    87,    45,     5,   125,
      95,    95,    95,    95,    36,    58,    95,    58,   134,    95,
     136,    89,    90,    95,   183,   174,    90,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    95,    35,     5,     5,    95,    86,    24,
     150,    86,    96,    96,     5,    96,    96,     5,    35,     5,
       5,     5,    96,    95,     5,    96,    96,    87,    87,    87,
     199,    86,    86,    28,    87,    87,    87,    86,    86,     4,
      86,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,    86,    86,    86,    86,    29,    86,    86,   135,    87,
     190,   140,     3,     5,    18,     5,     5,     5,     5,     5,
       5,    87,     6,   191,    86,     5,     5,     5,    96,     5,
       5,    95,    95,     5,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    86,    96,    86,   141,    96,    96,
      96,    11,    96,    96,    35,    74,   271,    96,   374,    96,
     705,   455,    62,    96,   437,   567,    96,   525,     1,   826,
     275,   771,   209,   321,   365,   144,   108,    -1,    -1,   330,
      -1,    -1,    -1,   112
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,   108,   109,   110,   111,   112,   113,   114,   115,
     202,   203,   204,   221,   222,   223,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   237,   238,   239,   262,   263,
     264,   265,   266,   267,   268,   269,     9,    11,    13,    14,
      17,    30,    31,    34,    38,    51,    53,   139,   144,   171,
     192,   310,    93,    93,    93,    93,    93,    93,    93,    93,
       0,   204,   205,   207,   209,   211,     3,    39,    40,    52,
      59,   125,   134,   136,   213,   214,   270,   271,   281,   283,
     300,   306,   309,   310,   311,   317,   318,   319,   320,   215,
     217,   219,    12,    87,    95,    86,   240,   241,    44,    87,
      87,    95,    87,    88,   197,   137,   138,   189,   234,   235,
      86,    87,   273,   274,    53,   168,   197,   314,    38,    41,
     167,    41,    41,    41,    16,    41,    41,     3,   206,   270,
     271,   281,   282,   300,   301,   302,   306,   309,   317,   318,
     319,   320,   323,     3,   169,   208,   270,   271,   300,   306,
     309,   317,   318,   319,   320,   338,   347,   353,   354,   356,
     357,   358,     3,   210,   270,   271,   300,   306,   309,   317,
     318,   319,   320,   349,   350,   351,   353,   357,   358,     3,
     212,   270,   271,   300,   306,   309,   317,   318,   319,   320,
     338,   353,   357,   358,     7,    95,   168,    86,    87,   272,
     276,   272,    88,    95,   126,   127,   128,    94,    93,   321,
     322,   214,   168,   197,   314,     3,   216,   270,   271,   306,
     309,   317,   319,   320,   326,   218,   270,   271,   300,   306,
     309,   317,   318,   319,   320,   338,   353,   357,   358,     3,
     220,   300,   306,   309,   317,   319,   320,    10,    39,   224,
      44,   146,   278,    56,   241,   305,    95,   159,   160,   161,
     162,   352,    89,    90,    91,    92,   315,   316,    87,    95,
     305,   235,   187,   236,   274,   197,   197,    50,    56,    58,
     118,   142,   143,   145,   148,   165,   166,   170,   171,   173,
     175,   177,   178,   183,   184,   185,   186,   312,   313,    37,
     360,    87,    87,    86,    87,    87,    87,    87,    86,    87,
      87,     7,   116,   119,   120,   121,   122,   123,   129,   130,
     149,   324,   325,   329,   332,   334,   335,   336,     7,   148,
     149,   166,   168,   355,   168,   355,     7,   149,   163,   164,
     149,    42,   173,   182,   284,    57,   176,    56,   142,   143,
     275,   276,   277,   304,   275,   304,    35,   322,   197,   312,
     360,   124,   131,   132,   133,   327,   328,   330,   331,   332,
     333,   335,    86,    23,    95,    86,    88,   147,   279,    95,
      43,   280,   242,   198,   316,   138,   154,   155,   156,   157,
     289,   236,   188,   315,   312,   198,   313,    95,    54,   286,
     149,   193,   194,   195,   196,   339,   339,   339,   339,   339,
     184,   185,    95,   325,   344,   339,    20,    21,   142,   143,
     165,   348,   339,   148,   166,   348,   339,   167,   167,   186,
     339,   339,    86,    45,   359,   189,    44,   285,    95,   344,
      95,    86,    95,    86,    95,   277,   304,   304,   312,   198,
     339,   328,   344,   339,    95,   278,    86,   289,   150,    86,
      15,    16,    25,    26,    27,    55,   243,   244,   245,   246,
     247,   248,   249,   250,   254,    95,   158,   288,   198,   198,
     314,    35,    87,    45,   287,    95,    95,   107,   337,    95,
     337,    95,    95,   344,   344,    35,    95,     5,    95,   337,
      86,    95,    86,    95,    95,    58,    95,   344,   344,    58,
      95,    86,    87,    86,    87,   344,    95,    95,   337,   174,
      36,   303,   183,   307,    95,   287,    35,     5,   150,   198,
     314,    95,   337,     5,    95,   279,   288,    19,    20,    22,
      86,    87,   200,    86,    27,    55,    27,    55,    25,    26,
      25,    26,    24,   251,    24,    28,    29,    86,   314,   360,
      46,    47,    48,    32,    33,    49,   290,   291,   292,    96,
     352,    96,   352,    96,    96,     5,     5,    35,    39,    40,
      51,    57,   171,   172,   341,   342,   344,   344,   344,   344,
     344,    33,   344,   150,   151,   152,   153,   340,     5,     5,
     344,   352,   344,   344,     5,    96,   344,    96,   352,    95,
     305,   193,   194,   308,   305,   290,     5,   342,   314,   360,
      96,   352,   342,    96,   289,    87,    87,    87,   199,   255,
      86,    87,    28,   252,    87,    87,   360,   289,    86,    86,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   305,   292,   342,   342,
     272,     4,   346,     5,     5,     5,     5,     5,    86,     5,
     344,   342,   342,     5,   344,     5,     5,   342,   344,     5,
     344,   344,   344,    86,   344,   305,    56,   342,   346,   360,
     346,   288,   256,   257,   258,    86,    86,   259,   260,    18,
     261,    87,    29,   253,   288,   135,   295,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   298,   299,   190,
     293,   140,   297,   344,   275,     3,   342,   342,   342,   342,
     342,   344,   342,     5,   342,     5,   342,   342,     5,   342,
       5,     5,     5,     5,   344,   259,   259,   259,   261,   260,
      87,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,     6,    86,    88,   191,   294,    86,     5,   179,   180,
     181,   346,   346,   346,   346,   346,     5,   346,   342,   342,
     342,   346,   342,   342,   342,   342,     5,    58,   141,   296,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
     299,    95,   342,    95,   345,   345,   345,   342,   346,   346,
     346,   346,   346,   346,   346,   342,    86,    86,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,   346,    35,
      95,     5,     5,     5,   346,   346,   296,    35,   341,   343,
     343,   343
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
        case 141:

/* Line 1464 of yacc.c  */
#line 485 "src/p.y"
    {
                    addmail((yyvsp[(2) - (7)].string), &mailset, &Run.maillist, eventset, (yyvsp[(7) - (7)].number));
                  }
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 488 "src/p.y"
    {
                    addmail((yyvsp[(2) - (4)].string), &mailset, &Run.maillist, Event_All, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 491 "src/p.y"
    {
                   addmail((yyvsp[(2) - (8)].string), &mailset, &Run.maillist, ~eventset, (yyvsp[(8) - (8)].number));
                  }
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 496 "src/p.y"
    { Run.alert_exec = exec; exec = NULL; }
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 499 "src/p.y"
    {
                    if (!Run.isdaemon || ihp.daemon) {
                      ihp.daemon     = TRUE;
                      Run.isdaemon   = TRUE;
                      Run.polltime   = (yyvsp[(3) - (4)].number);
                      Run.startdelay = (yyvsp[(4) - (4)].number);
                    }
                  }
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 509 "src/p.y"
    { (yyval.number) = START_DELAY; }
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 510 "src/p.y"
    { (yyval.number) = (yyvsp[(3) - (3)].number); }
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 513 "src/p.y"
    {
                    Run.expectbuffer = (yyvsp[(3) - (4)].number) * (yyvsp[(4) - (4)].number);
                  }
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 518 "src/p.y"
    {
                    Run.init = TRUE;
                  }
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 523 "src/p.y"
    {
                  #ifdef OPENSSL_FIPS
                    Run.fipsEnabled = TRUE;
                  #endif
                  }
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 530 "src/p.y"
    {
                   if (!Run.logfile || ihp.logfile) {
                     ihp.logfile = TRUE;
                     setlogfile((yyvsp[(3) - (3)].string));
                     Run.use_syslog = FALSE;
                     Run.dolog =TRUE;
                   }
                  }
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 538 "src/p.y"
    {
                    setsyslog(NULL);
                  }
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 541 "src/p.y"
    {
                    setsyslog((yyvsp[(5) - (5)].string)); FREE((yyvsp[(5) - (5)].string));
                  }
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 546 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 549 "src/p.y"
    {
                    Run.eventlist_dir = (yyvsp[(4) - (6)].string);
                    Run.eventlist_slots = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 553 "src/p.y"
    {
                    Run.eventlist_dir = xstrdup(MYEVENTLISTBASE);
                    Run.eventlist_slots = (yyvsp[(4) - (4)].number);
                  }
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 559 "src/p.y"
    {
                    Run.idfile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 564 "src/p.y"
    {
                    Run.statefile = (yyvsp[(3) - (3)].string);
                  }
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 569 "src/p.y"
    {
                   if (!Run.pidfile || ihp.pidfile) {
                     ihp.pidfile = TRUE;
                     setpidfile((yyvsp[(3) - (3)].string));
                   }
                 }
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 584 "src/p.y"
    {
                    check_hostname(((yyvsp[(1) - (4)].url))->hostname);
                    addmmonit((yyvsp[(1) - (4)].url), (yyvsp[(2) - (4)].number), (yyvsp[(3) - (4)].number), (yyvsp[(4) - (4)].string)); 
                  }
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 591 "src/p.y"
    {
                    Run.dommonitcredentials = FALSE;
                  }
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 596 "src/p.y"
    {
                   Run.mailserver_timeout = (yyvsp[(4) - (5)].number);
                   Run.mail_hostname = (yyvsp[(5) - (5)].string);
                  }
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 602 "src/p.y"
    {
                   Run.MailFormat.from    = mailset.from    ?  mailset.from    : xstrdup(ALERT_FROM);
                   Run.MailFormat.replyto = mailset.replyto ?  mailset.replyto : NULL;
                   Run.MailFormat.subject = mailset.subject ?  mailset.subject : xstrdup(ALERT_SUBJECT);
                   Run.MailFormat.message = mailset.message ?  mailset.message : xstrdup(ALERT_MESSAGE);
                   reset_mailset();
                 }
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 611 "src/p.y"
    {
                   Run.dohttpd = TRUE;
                   Run.httpdport = (yyvsp[(4) - (5)].number);
                 }
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 621 "src/p.y"
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

  case 172:

/* Line 1464 of yacc.c  */
#line 640 "src/p.y"
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

  case 179:

/* Line 1464 of yacc.c  */
#line 669 "src/p.y"
    { Run.httpdssl = FALSE; }
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 670 "src/p.y"
    { 
                    Run.httpdssl = TRUE;                   
                    if (!have_ssl())
                      yyerror("SSL is not supported");
                  }
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 684 "src/p.y"
    { FREE((yyvsp[(3) - (3)].string)); }
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 685 "src/p.y"
    { FREE((yyvsp[(3) - (3)].string)); }
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 689 "src/p.y"
    { Run.httpdsig = TRUE; }
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 690 "src/p.y"
    { Run.httpdsig = FALSE; }
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 701 "src/p.y"
    { Run.bind_addr = (yyvsp[(2) - (2)].string); }
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 704 "src/p.y"
    {
                    Run.httpsslpem = (yyvsp[(2) - (2)].string);
                    if (!file_checkStat(Run.httpsslpem, "SSL server PEM file", S_IRWXU))
                      yyerror2("SSL server PEM file has too loose permissions");
                  }
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 712 "src/p.y"
    {
                    Run.httpsslclientpem = (yyvsp[(2) - (2)].string); 
                    Run.clientssl = TRUE;
                    if (!file_checkStat(Run.httpsslclientpem, "SSL client PEM file", S_IRWXU | S_IRGRP | S_IROTH))
                      yyerror2("SSL client PEM file has too loose permissions");
                  }
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 720 "src/p.y"
    { 
                   Run.allowselfcert = FALSE; 
                   config_ssl(Run.allowselfcert); 
                 }
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 724 "src/p.y"
    {   
                    Run.allowselfcert = TRUE;
                    config_ssl(Run.allowselfcert); 
                  }
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 730 "src/p.y"
    {
                    addcredentials((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].string), DIGEST_CLEARTEXT, (yyvsp[(5) - (5)].number));
                  }
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 733 "src/p.y"
    {
#ifdef HAVE_LIBPAM
                    addpamauth((yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].number));
#else
                    yyerror("PAM is not supported");
                    FREE((yyvsp[(3) - (4)].string));
#endif
                  }
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 741 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(2) - (2)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 745 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CLEARTEXT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 749 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_MD5);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 753 "src/p.y"
    {
                    addhtpasswdentry((yyvsp[(3) - (3)].string), NULL, DIGEST_CRYPT);
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 757 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(2) - (2)].string);
                    digesttype = CLEARTEXT;
                  }
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 761 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 764 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CLEARTEXT;
                  }
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 768 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 771 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_MD5;
                  }
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 775 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 778 "src/p.y"
    {
                    htpasswd_file = (yyvsp[(3) - (3)].string);
                    digesttype = DIGEST_CRYPT;
                  }
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 782 "src/p.y"
    {
                    FREE(htpasswd_file);
                  }
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 785 "src/p.y"
    {
                    if (! (add_net_allow((yyvsp[(2) - (2)].string)) || add_host_allow((yyvsp[(2) - (2)].string)))) {
                      yyerror2("erroneous network or host identifier %s", (yyvsp[(2) - (2)].string)); 
                    }
                    FREE((yyvsp[(2) - (2)].string));
                  }
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 797 "src/p.y"
    { addhtpasswdentry(htpasswd_file, (yyvsp[(1) - (1)].string), digesttype);
                           FREE((yyvsp[(1) - (1)].string)); }
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 801 "src/p.y"
    { (yyval.number) = FALSE; }
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 802 "src/p.y"
    { (yyval.number) = TRUE; }
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 805 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 808 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                  }
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 811 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = xstrdup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 818 "src/p.y"
    {
                    createservice(TYPE_PROCESS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_process);
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = xstrdup((yyvsp[(4) - (4)].string));
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 827 "src/p.y"
    {
                    createservice(TYPE_FILE, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_file);
                  }
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 832 "src/p.y"
    {
                    createservice(TYPE_FILESYSTEM, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_filesystem);
                  }
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 837 "src/p.y"
    {
                    createservice(TYPE_DIRECTORY, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_directory);
                  }
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 842 "src/p.y"
    {
                    check_hostname((yyvsp[(4) - (4)].string)); 
                    createservice(TYPE_HOST, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_remote_host);
                  }
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 848 "src/p.y"
    {
                    createservice(TYPE_SYSTEM, (yyvsp[(2) - (2)].string), xstrdup(""), check_system);
                    hassystem = TRUE;
                  }
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 854 "src/p.y"
    {
                    createservice(TYPE_FIFO, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_fifo);
                  }
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 859 "src/p.y"
    {
                    createservice(TYPE_STATUS, (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].string), check_status);
                  }
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 864 "src/p.y"
    {
                    addcommand(START, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 867 "src/p.y"
    {
                    addcommand(START, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 872 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 875 "src/p.y"
    {
                    addcommand(STOP, (yyvsp[(4) - (4)].number));
                  }
    break;

  case 240:

/* Line 1464 of yacc.c  */
#line 888 "src/p.y"
    { addexec((yyvsp[(1) - (1)].string)); }
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 889 "src/p.y"
    { addexec((yyvsp[(1) - (1)].string)); }
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 896 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 245:

/* Line 1464 of yacc.c  */
#line 897 "src/p.y"
    { addargument((yyvsp[(1) - (1)].string)); }
    break;

  case 246:

/* Line 1464 of yacc.c  */
#line 900 "src/p.y"
    { addeuid( get_uid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 901 "src/p.y"
    { addegid( get_gid((yyvsp[(2) - (2)].string), 0) ); FREE((yyvsp[(2) - (2)].string)); }
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 902 "src/p.y"
    { addeuid( get_uid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 249:

/* Line 1464 of yacc.c  */
#line 903 "src/p.y"
    { addegid( get_gid(NULL, (yyvsp[(2) - (2)].number)) ); }
    break;

  case 250:

/* Line 1464 of yacc.c  */
#line 906 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 251:

/* Line 1464 of yacc.c  */
#line 907 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 908 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 911 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 912 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 915 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 916 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 920 "src/p.y"
    {
                    portset.timeout = (yyvsp[(7) - (11)].number);
                    addeventaction(&(portset).action, (yyvsp[(10) - (11)].number), (yyvsp[(11) - (11)].number));
                    addport(&portset);
                  }
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 926 "src/p.y"
    { 
                    prepare_urlrequest((yyvsp[(4) - (10)].url));
                    portset.timeout = (yyvsp[(6) - (10)].number);
                    addeventaction(&(portset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addport(&portset);
                  }
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 935 "src/p.y"
    {
                   portset.timeout = (yyvsp[(6) - (10)].number);
                   addeventaction(&(portset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                   addport(&portset);
                  }
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 943 "src/p.y"
    {
                   icmpset.type = (yyvsp[(4) - (10)].number);
                   icmpset.count = (yyvsp[(5) - (10)].number);
                   icmpset.timeout = (yyvsp[(6) - (10)].number);
                   addeventaction(&(icmpset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                   addicmp(&icmpset);
                  }
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 952 "src/p.y"
    {
                    if (current->type == TYPE_HOST)
                      portset.hostname = xstrdup(current->path);
                    else
                      portset.hostname = xstrdup(LOCALHOST);
                  }
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 958 "src/p.y"
    { check_hostname((yyvsp[(2) - (2)].string)); portset.hostname = (yyvsp[(2) - (2)].string); }
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 961 "src/p.y"
    { portset.port = (yyvsp[(2) - (2)].number); portset.family = AF_INET; }
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 964 "src/p.y"
    {
                    portset.pathname = (yyvsp[(2) - (2)].string); portset.family = AF_UNIX;
                  }
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 969 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 972 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                  }
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 975 "src/p.y"
    {
                    portset.type = SOCK_STREAM;
                    portset.SSL.use_ssl = TRUE;
                    portset.SSL.version = (yyvsp[(3) - (4)].number);
                    if (portset.SSL.version == SSL_VERSION_NONE)
                      portset.SSL.version = SSL_VERSION_AUTO;
                    portset.SSL.certmd5 = (yyvsp[(4) - (4)].string);
                  }
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 983 "src/p.y"
    {
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 988 "src/p.y"
    { (yyval.string) = NULL; }
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 989 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 992 "src/p.y"
    { (yyval.number) = SSL_VERSION_NONE; }
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 993 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV2; }
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 994 "src/p.y"
    { (yyval.number) = SSL_VERSION_SSLV3; }
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 995 "src/p.y"
    { (yyval.number) = SSL_VERSION_TLS; }
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 996 "src/p.y"
    { (yyval.number) = SSL_VERSION_AUTO; }
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 999 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DEFAULT);
                  }
    break;

  case 277:

/* Line 1464 of yacc.c  */
#line 1002 "src/p.y"
    {
                    portset.protocol = addprotocol(P_APACHESTATUS);
                  }
    break;

  case 278:

/* Line 1464 of yacc.c  */
#line 1005 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DEFAULT);
                  }
    break;

  case 279:

/* Line 1464 of yacc.c  */
#line 1008 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DNS);
                  }
    break;

  case 280:

/* Line 1464 of yacc.c  */
#line 1011 "src/p.y"
    {
                    portset.protocol = addprotocol(P_DWP);
                  }
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1014 "src/p.y"
    {
                    portset.protocol = addprotocol(P_FTP);
                  }
    break;

  case 282:

/* Line 1464 of yacc.c  */
#line 1017 "src/p.y"
    {
                    portset.protocol = addprotocol(P_HTTP);
                  }
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1020 "src/p.y"
    {
                    portset.protocol = addprotocol(P_IMAP);
                  }
    break;

  case 284:

/* Line 1464 of yacc.c  */
#line 1023 "src/p.y"
    {
                    portset.protocol = addprotocol(P_CLAMAV);
                  }
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1026 "src/p.y"
    {
                    portset.protocol = addprotocol(P_LDAP2);
                  }
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1029 "src/p.y"
    {
                    portset.protocol = addprotocol(P_LDAP3);
                  }
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1032 "src/p.y"
    {
                    portset.protocol = addprotocol(P_MYSQL);
                  }
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1035 "src/p.y"
    {
                    portset.protocol = addprotocol(P_SIP);
                  }
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1038 "src/p.y"
    {
                    portset.protocol = addprotocol(P_NNTP);
                  }
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1041 "src/p.y"
    {
                    portset.protocol = addprotocol(P_NTP3);
                    portset.type = SOCK_DGRAM;
                  }
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1045 "src/p.y"
    {
                    portset.protocol = addprotocol(P_POSTFIXPOLICY);
                  }
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 1048 "src/p.y"
    {
                    portset.protocol = addprotocol(P_POP);
                  }
    break;

  case 293:

/* Line 1464 of yacc.c  */
#line 1051 "src/p.y"
    {
                    portset.protocol = addprotocol(P_SMTP);
                  }
    break;

  case 294:

/* Line 1464 of yacc.c  */
#line 1054 "src/p.y"
    {
                    portset.protocol = addprotocol(P_SSH);
                  }
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 1057 "src/p.y"
    {
                    portset.protocol = addprotocol(P_RDATE);
                  }
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 1060 "src/p.y"
    {
                    portset.protocol = addprotocol(P_RSYNC);
                  }
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 1063 "src/p.y"
    {
                    portset.protocol = addprotocol(P_TNS);
                  }
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 1066 "src/p.y"
    {
                    portset.protocol = addprotocol(P_PGSQL);
                  }
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 1069 "src/p.y"
    {
                    portset.protocol = addprotocol(P_LMTP);
                  }
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 1072 "src/p.y"
    {
                    portset.protocol = addprotocol(P_GPS);
                  }
    break;

  case 301:

/* Line 1464 of yacc.c  */
#line 1075 "src/p.y"
    {
                    portset.protocol = addprotocol(P_RADIUS);
                  }
    break;

  case 302:

/* Line 1464 of yacc.c  */
#line 1078 "src/p.y"
    {
                    portset.protocol = addprotocol(P_MEMCACHE);
                  }
    break;

  case 303:

/* Line 1464 of yacc.c  */
#line 1081 "src/p.y"
    {
                    portset.protocol = addprotocol(P_GENERIC);
                  }
    break;

  case 306:

/* Line 1464 of yacc.c  */
#line 1090 "src/p.y"
    { addgeneric(&portset, (yyvsp[(2) - (2)].string), NULL); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 307:

/* Line 1464 of yacc.c  */
#line 1091 "src/p.y"
    { addgeneric(&portset, NULL, (yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 309:

/* Line 1464 of yacc.c  */
#line 1095 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 310:

/* Line 1464 of yacc.c  */
#line 1098 "src/p.y"
    {
                    portset.request = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 312:

/* Line 1464 of yacc.c  */
#line 1104 "src/p.y"
    {
                     portset.maxforward = verifyMaxForward((yyvsp[(2) - (2)].number)); 
                   }
    break;

  case 314:

/* Line 1464 of yacc.c  */
#line 1110 "src/p.y"
    { 
                    portset.request = Util_urlEncode((yyvsp[(2) - (3)].string)); 
                    FREE((yyvsp[(2) - (3)].string)); 
                  }
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 1114 "src/p.y"
    {
                    portset.request = Util_urlEncode((yyvsp[(2) - (5)].string));
                    FREE((yyvsp[(2) - (5)].string));
                    portset.request_checksum = (yyvsp[(4) - (5)].string);
                  }
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 1122 "src/p.y"
    {
                    portset.request_hostheader = (yyvsp[(2) - (2)].string);
                  }
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 1127 "src/p.y"
    { 
                    portset.request = (yyvsp[(2) - (2)].string); 
                  }
    break;

  case 321:

/* Line 1464 of yacc.c  */
#line 1136 "src/p.y"
    { 
                    portset.ApacheStatus.loglimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.loglimit = (int)(yyvsp[(3) - (4)].number); 
                  }
    break;

  case 322:

/* Line 1464 of yacc.c  */
#line 1140 "src/p.y"
    { 
                    portset.ApacheStatus.closelimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.closelimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 323:

/* Line 1464 of yacc.c  */
#line 1144 "src/p.y"
    { 
                    portset.ApacheStatus.dnslimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.dnslimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 324:

/* Line 1464 of yacc.c  */
#line 1148 "src/p.y"
    { 
                    portset.ApacheStatus.keepalivelimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.keepalivelimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 325:

/* Line 1464 of yacc.c  */
#line 1152 "src/p.y"
    { 
                    portset.ApacheStatus.replylimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.replylimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 326:

/* Line 1464 of yacc.c  */
#line 1156 "src/p.y"
    { 
                    portset.ApacheStatus.requestlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.requestlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 327:

/* Line 1464 of yacc.c  */
#line 1160 "src/p.y"
    { 
                    portset.ApacheStatus.startlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.startlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 328:

/* Line 1464 of yacc.c  */
#line 1164 "src/p.y"
    { 
                    portset.ApacheStatus.waitlimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.waitlimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 329:

/* Line 1464 of yacc.c  */
#line 1168 "src/p.y"
    { 
                    portset.ApacheStatus.gracefullimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.gracefullimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 330:

/* Line 1464 of yacc.c  */
#line 1172 "src/p.y"
    { 
                    portset.ApacheStatus.cleanuplimitOP = (yyvsp[(2) - (4)].number); 
                    portset.ApacheStatus.cleanuplimit = (int)((yyvsp[(3) - (4)].number)); 
                  }
    break;

  case 331:

/* Line 1464 of yacc.c  */
#line 1178 "src/p.y"
    {
                    seteventaction(&(current)->action_NONEXIST, (yyvsp[(6) - (7)].number), (yyvsp[(7) - (7)].number));
                  }
    break;

  case 332:

/* Line 1464 of yacc.c  */
#line 1184 "src/p.y"
    {
                    seteventaction(&(current)->action_PID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 333:

/* Line 1464 of yacc.c  */
#line 1189 "src/p.y"
    {
                    seteventaction(&(current)->action_PPID, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 334:

/* Line 1464 of yacc.c  */
#line 1194 "src/p.y"
    {
                   (yyval.number) = ICMP_ATTEMPT_COUNT;
                  }
    break;

  case 335:

/* Line 1464 of yacc.c  */
#line 1197 "src/p.y"
    {    
                   (yyval.number) = (yyvsp[(2) - (2)].number);
                  }
    break;

  case 336:

/* Line 1464 of yacc.c  */
#line 1202 "src/p.y"
    {
                   (yyval.number) = EXEC_TIMEOUT;
                  }
    break;

  case 337:

/* Line 1464 of yacc.c  */
#line 1205 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 338:

/* Line 1464 of yacc.c  */
#line 1210 "src/p.y"
    {
                   (yyval.number) = NET_TIMEOUT;
                  }
    break;

  case 339:

/* Line 1464 of yacc.c  */
#line 1213 "src/p.y"
    {
                   (yyval.number) = (yyvsp[(2) - (3)].number);
                  }
    break;

  case 340:

/* Line 1464 of yacc.c  */
#line 1218 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                   addactionrate(&actionrateset);
                 }
    break;

  case 341:

/* Line 1464 of yacc.c  */
#line 1224 "src/p.y"
    {
                   actionrateset.count = (yyvsp[(2) - (7)].number);
                   actionrateset.cycle = (yyvsp[(4) - (7)].number);
                   addeventaction(&(actionrateset).action, ACTION_UNMONITOR, ACTION_IGNORE);
                   addactionrate(&actionrateset);
                 }
    break;

  case 343:

/* Line 1464 of yacc.c  */
#line 1233 "src/p.y"
    {
                    seturlrequest((yyvsp[(2) - (3)].number), (yyvsp[(3) - (3)].string));
                    FREE((yyvsp[(3) - (3)].string));
                  }
    break;

  case 344:

/* Line 1464 of yacc.c  */
#line 1239 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 345:

/* Line 1464 of yacc.c  */
#line 1240 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 346:

/* Line 1464 of yacc.c  */
#line 1243 "src/p.y"
    {
                   addmail((yyvsp[(1) - (6)].string), &mailset, &current->maillist, eventset, (yyvsp[(6) - (6)].number));
                  }
    break;

  case 347:

/* Line 1464 of yacc.c  */
#line 1246 "src/p.y"
    {
                   addmail((yyvsp[(1) - (3)].string), &mailset, &current->maillist, Event_All, (yyvsp[(3) - (3)].number));
                  }
    break;

  case 348:

/* Line 1464 of yacc.c  */
#line 1249 "src/p.y"
    {
                   addmail((yyvsp[(1) - (7)].string), &mailset, &current->maillist, ~eventset, (yyvsp[(7) - (7)].number));
                  }
    break;

  case 349:

/* Line 1464 of yacc.c  */
#line 1252 "src/p.y"
    {
                   addmail((yyvsp[(1) - (1)].string), &mailset, &current->maillist, Event_Null, 0);
                  }
    break;

  case 350:

/* Line 1464 of yacc.c  */
#line 1257 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 351:

/* Line 1464 of yacc.c  */
#line 1260 "src/p.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 354:

/* Line 1464 of yacc.c  */
#line 1267 "src/p.y"
    { eventset |= Event_Action; }
    break;

  case 355:

/* Line 1464 of yacc.c  */
#line 1268 "src/p.y"
    { eventset |= Event_Checksum; }
    break;

  case 356:

/* Line 1464 of yacc.c  */
#line 1269 "src/p.y"
    { eventset |= Event_Connection; }
    break;

  case 357:

/* Line 1464 of yacc.c  */
#line 1270 "src/p.y"
    { eventset |= Event_Content; }
    break;

  case 358:

/* Line 1464 of yacc.c  */
#line 1271 "src/p.y"
    { eventset |= Event_Data; }
    break;

  case 359:

/* Line 1464 of yacc.c  */
#line 1272 "src/p.y"
    { eventset |= Event_Exec; }
    break;

  case 360:

/* Line 1464 of yacc.c  */
#line 1273 "src/p.y"
    { eventset |= Event_Fsflag; }
    break;

  case 361:

/* Line 1464 of yacc.c  */
#line 1274 "src/p.y"
    { eventset |= Event_Gid; }
    break;

  case 362:

/* Line 1464 of yacc.c  */
#line 1275 "src/p.y"
    { eventset |= Event_Icmp; }
    break;

  case 363:

/* Line 1464 of yacc.c  */
#line 1276 "src/p.y"
    { eventset |= Event_Instance; }
    break;

  case 364:

/* Line 1464 of yacc.c  */
#line 1277 "src/p.y"
    { eventset |= Event_Invalid; }
    break;

  case 365:

/* Line 1464 of yacc.c  */
#line 1278 "src/p.y"
    { eventset |= Event_Nonexist; }
    break;

  case 366:

/* Line 1464 of yacc.c  */
#line 1279 "src/p.y"
    { eventset |= Event_Permission; }
    break;

  case 367:

/* Line 1464 of yacc.c  */
#line 1280 "src/p.y"
    { eventset |= Event_Pid; }
    break;

  case 368:

/* Line 1464 of yacc.c  */
#line 1281 "src/p.y"
    { eventset |= Event_PPid; }
    break;

  case 369:

/* Line 1464 of yacc.c  */
#line 1282 "src/p.y"
    { eventset |= Event_Resource; }
    break;

  case 370:

/* Line 1464 of yacc.c  */
#line 1283 "src/p.y"
    { eventset |= Event_Size; }
    break;

  case 371:

/* Line 1464 of yacc.c  */
#line 1284 "src/p.y"
    { eventset |= Event_Timeout; }
    break;

  case 372:

/* Line 1464 of yacc.c  */
#line 1285 "src/p.y"
    { eventset |= Event_Timestamp; }
    break;

  case 373:

/* Line 1464 of yacc.c  */
#line 1286 "src/p.y"
    { eventset |= Event_Uid; }
    break;

  case 378:

/* Line 1464 of yacc.c  */
#line 1297 "src/p.y"
    { mailset.from = (yyvsp[(1) - (1)].string); }
    break;

  case 379:

/* Line 1464 of yacc.c  */
#line 1298 "src/p.y"
    { mailset.replyto = (yyvsp[(1) - (1)].string); }
    break;

  case 380:

/* Line 1464 of yacc.c  */
#line 1299 "src/p.y"
    { mailset.subject = (yyvsp[(1) - (1)].string); }
    break;

  case 381:

/* Line 1464 of yacc.c  */
#line 1300 "src/p.y"
    { mailset.message = (yyvsp[(1) - (1)].string); }
    break;

  case 382:

/* Line 1464 of yacc.c  */
#line 1303 "src/p.y"
    {
                   check_every((yyvsp[(2) - (3)].number));
                   current->def_every = TRUE;
                   current->every = (yyvsp[(2) - (3)].number);
                 }
    break;

  case 383:

/* Line 1464 of yacc.c  */
#line 1310 "src/p.y"
    {
                    current->mode = MODE_ACTIVE;
                  }
    break;

  case 384:

/* Line 1464 of yacc.c  */
#line 1313 "src/p.y"
    {
                    current->mode = MODE_PASSIVE;
                  }
    break;

  case 385:

/* Line 1464 of yacc.c  */
#line 1316 "src/p.y"
    {
                    current->mode = MODE_MANUAL;
                    current->monitor = MONITOR_NOT;
                  }
    break;

  case 386:

/* Line 1464 of yacc.c  */
#line 1322 "src/p.y"
    { addservicegroup((yyvsp[(2) - (2)].string)); FREE((yyvsp[(2) - (2)].string));}
    break;

  case 390:

/* Line 1464 of yacc.c  */
#line 1333 "src/p.y"
    { adddependant((yyvsp[(1) - (1)].string)); }
    break;

  case 391:

/* Line 1464 of yacc.c  */
#line 1336 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 398:

/* Line 1464 of yacc.c  */
#line 1352 "src/p.y"
    {
                     addeventaction(&(resourceset).action, (yyvsp[(5) - (6)].number), (yyvsp[(6) - (6)].number));
                     addresource(&resourceset);
                   }
    break;

  case 405:

/* Line 1464 of yacc.c  */
#line 1368 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 406:

/* Line 1464 of yacc.c  */
#line 1373 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_CPU_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 407:

/* Line 1464 of yacc.c  */
#line 1380 "src/p.y"
    {
                    resourceset.resource_id = (yyvsp[(1) - (4)].number);
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 408:

/* Line 1464 of yacc.c  */
#line 1387 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUUSER; }
    break;

  case 409:

/* Line 1464 of yacc.c  */
#line 1388 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUSYSTEM; }
    break;

  case 410:

/* Line 1464 of yacc.c  */
#line 1389 "src/p.y"
    { (yyval.number) = RESOURCE_ID_CPUWAIT; }
    break;

  case 411:

/* Line 1464 of yacc.c  */
#line 1392 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0)); 
                  }
    break;

  case 412:

/* Line 1464 of yacc.c  */
#line 1397 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10); 
                  }
    break;

  case 413:

/* Line 1464 of yacc.c  */
#line 1402 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 414:

/* Line 1464 of yacc.c  */
#line 1407 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_TOTAL_MEM_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 415:

/* Line 1464 of yacc.c  */
#line 1414 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_KBYTE;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (4)].real) * ((yyvsp[(4) - (4)].number) / 1024.0));
                  }
    break;

  case 416:

/* Line 1464 of yacc.c  */
#line 1419 "src/p.y"
    {
                    resourceset.resource_id = RESOURCE_ID_SWAP_PERCENT;
                    resourceset.operator = (yyvsp[(2) - (4)].number);
                    resourceset.limit = ((yyvsp[(3) - (4)].number) * 10);
                  }
    break;

  case 417:

/* Line 1464 of yacc.c  */
#line 1426 "src/p.y"
    { 
                    resourceset.resource_id = RESOURCE_ID_CHILDREN;
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) (yyvsp[(3) - (3)].number); 
                  }
    break;

  case 418:

/* Line 1464 of yacc.c  */
#line 1433 "src/p.y"
    { 
                    resourceset.resource_id = (yyvsp[(1) - (3)].number);
                    resourceset.operator = (yyvsp[(2) - (3)].number);
                    resourceset.limit = (int) ((yyvsp[(3) - (3)].real) * 10.0); 
                  }
    break;

  case 419:

/* Line 1464 of yacc.c  */
#line 1440 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD1; }
    break;

  case 420:

/* Line 1464 of yacc.c  */
#line 1441 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD5; }
    break;

  case 421:

/* Line 1464 of yacc.c  */
#line 1442 "src/p.y"
    { (yyval.number) = RESOURCE_ID_LOAD15; }
    break;

  case 422:

/* Line 1464 of yacc.c  */
#line 1445 "src/p.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); }
    break;

  case 423:

/* Line 1464 of yacc.c  */
#line 1446 "src/p.y"
    { (yyval.real) = (float) (yyvsp[(1) - (1)].number); }
    break;

  case 424:

/* Line 1464 of yacc.c  */
#line 1449 "src/p.y"
    {
                    timestampset.operator = (yyvsp[(3) - (9)].number);
                    timestampset.time = ((yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(timestampset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addtimestamp(&timestampset, FALSE);
                  }
    break;

  case 425:

/* Line 1464 of yacc.c  */
#line 1455 "src/p.y"
    {
                    timestampset.test_changes = TRUE;
                    addeventaction(&(timestampset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addtimestamp(&timestampset, TRUE);
                  }
    break;

  case 426:

/* Line 1464 of yacc.c  */
#line 1462 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 427:

/* Line 1464 of yacc.c  */
#line 1463 "src/p.y"
    { (yyval.number) = OPERATOR_GREATER; }
    break;

  case 428:

/* Line 1464 of yacc.c  */
#line 1464 "src/p.y"
    { (yyval.number) = OPERATOR_LESS; }
    break;

  case 429:

/* Line 1464 of yacc.c  */
#line 1465 "src/p.y"
    { (yyval.number) = OPERATOR_EQUAL; }
    break;

  case 430:

/* Line 1464 of yacc.c  */
#line 1466 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 431:

/* Line 1464 of yacc.c  */
#line 1467 "src/p.y"
    { (yyval.number) = OPERATOR_NOTEQUAL; }
    break;

  case 432:

/* Line 1464 of yacc.c  */
#line 1470 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 433:

/* Line 1464 of yacc.c  */
#line 1471 "src/p.y"
    { (yyval.number) = TIME_SECOND; }
    break;

  case 434:

/* Line 1464 of yacc.c  */
#line 1472 "src/p.y"
    { (yyval.number) = TIME_MINUTE; }
    break;

  case 435:

/* Line 1464 of yacc.c  */
#line 1473 "src/p.y"
    { (yyval.number) = TIME_HOUR; }
    break;

  case 436:

/* Line 1464 of yacc.c  */
#line 1474 "src/p.y"
    { (yyval.number) = TIME_DAY; }
    break;

  case 437:

/* Line 1464 of yacc.c  */
#line 1477 "src/p.y"
    { (yyval.number) = ACTION_ALERT; }
    break;

  case 438:

/* Line 1464 of yacc.c  */
#line 1478 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 439:

/* Line 1464 of yacc.c  */
#line 1479 "src/p.y"
    { (yyval.number) = ACTION_EXEC; }
    break;

  case 440:

/* Line 1464 of yacc.c  */
#line 1480 "src/p.y"
    { (yyval.number) = ACTION_RESTART; }
    break;

  case 441:

/* Line 1464 of yacc.c  */
#line 1481 "src/p.y"
    { (yyval.number) = ACTION_START; }
    break;

  case 442:

/* Line 1464 of yacc.c  */
#line 1482 "src/p.y"
    { (yyval.number) = ACTION_STOP; }
    break;

  case 443:

/* Line 1464 of yacc.c  */
#line 1483 "src/p.y"
    { (yyval.number) = ACTION_UNMONITOR; }
    break;

  case 444:

/* Line 1464 of yacc.c  */
#line 1486 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command1 = command;
                      command = NULL;
                    }
                  }
    break;

  case 445:

/* Line 1464 of yacc.c  */
#line 1495 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(1) - (1)].number);
                    if ((yyvsp[(1) - (1)].number) == ACTION_EXEC && command) {
                      command2 = command;
                      command = NULL;
                    }
                  }
    break;

  case 447:

/* Line 1464 of yacc.c  */
#line 1505 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (2)].number);
                    rate1.cycles = (yyvsp[(1) - (2)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 448:

/* Line 1464 of yacc.c  */
#line 1511 "src/p.y"
    {
                    rate1.count  = (yyvsp[(1) - (3)].number);
                    rate1.cycles = (yyvsp[(2) - (3)].number);
                    if (rate1.cycles < 1 || rate1.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate1.count < 1 || rate1.count > rate1.cycles)
                      yyerror2("the number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 450:

/* Line 1464 of yacc.c  */
#line 1522 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (2)].number);
                    rate2.cycles = (yyvsp[(1) - (2)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                  }
    break;

  case 451:

/* Line 1464 of yacc.c  */
#line 1528 "src/p.y"
    {
                    rate2.count  = (yyvsp[(1) - (3)].number);
                    rate2.cycles = (yyvsp[(2) - (3)].number);
                    if (rate2.cycles < 1 || rate2.cycles > BITMAP_MAX)
                      yyerror2("the number of cycles must be between 1 and %d", BITMAP_MAX);
                    if (rate2.count < 1 || rate2.count > rate2.cycles)
                      yyerror2("the number of events must be bigger then 0 and less than poll cycles");
                  }
    break;

  case 452:

/* Line 1464 of yacc.c  */
#line 1538 "src/p.y"
    {
                    (yyval.number) = ACTION_ALERT;
                  }
    break;

  case 453:

/* Line 1464 of yacc.c  */
#line 1541 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 454:

/* Line 1464 of yacc.c  */
#line 1544 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 455:

/* Line 1464 of yacc.c  */
#line 1547 "src/p.y"
    {
                    (yyval.number) = (yyvsp[(6) - (6)].number);
                  }
    break;

  case 456:

/* Line 1464 of yacc.c  */
#line 1552 "src/p.y"
    {
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 457:

/* Line 1464 of yacc.c  */
#line 1557 "src/p.y"
    {
                    snprintf(checksumset.hash, sizeof(checksumset.hash), "%s", (yyvsp[(6) - (10)].string));
                    FREE((yyvsp[(6) - (10)].string));
                    addeventaction(&(checksumset).action, (yyvsp[(9) - (10)].number), (yyvsp[(10) - (10)].number));
                    addchecksum(&checksumset);
                  }
    break;

  case 458:

/* Line 1464 of yacc.c  */
#line 1563 "src/p.y"
    {
                    checksumset.test_changes = TRUE;
                    addeventaction(&(checksumset).action, (yyvsp[(7) - (7)].number), ACTION_IGNORE);
                    addchecksum(&checksumset);
                  }
    break;

  case 459:

/* Line 1464 of yacc.c  */
#line 1569 "src/p.y"
    { checksumset.type = HASH_UNKNOWN; }
    break;

  case 460:

/* Line 1464 of yacc.c  */
#line 1570 "src/p.y"
    { checksumset.type = HASH_MD5; }
    break;

  case 461:

/* Line 1464 of yacc.c  */
#line 1571 "src/p.y"
    { checksumset.type = HASH_SHA1; }
    break;

  case 462:

/* Line 1464 of yacc.c  */
#line 1574 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (8)].number);
                    filesystemset.limit_absolute = (yyvsp[(4) - (8)].number);
                    addeventaction(&(filesystemset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 463:

/* Line 1464 of yacc.c  */
#line 1581 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_INODE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 464:

/* Line 1464 of yacc.c  */
#line 1590 "src/p.y"
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

  case 465:

/* Line 1464 of yacc.c  */
#line 1599 "src/p.y"
    {
                    filesystemset.resource = RESOURCE_ID_SPACE;
                    filesystemset.operator = (yyvsp[(3) - (9)].number);
                    filesystemset.limit_percent = (int)((yyvsp[(4) - (9)].number) * 10);
                    addeventaction(&(filesystemset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addfilesystem(&filesystemset);
                  }
    break;

  case 466:

/* Line 1464 of yacc.c  */
#line 1608 "src/p.y"
    {
                    seteventaction(&(current)->action_FSFLAG, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                  }
    break;

  case 467:

/* Line 1464 of yacc.c  */
#line 1613 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 468:

/* Line 1464 of yacc.c  */
#line 1614 "src/p.y"
    { (yyval.number) = UNIT_BYTE; }
    break;

  case 469:

/* Line 1464 of yacc.c  */
#line 1615 "src/p.y"
    { (yyval.number) = UNIT_KILOBYTE; }
    break;

  case 470:

/* Line 1464 of yacc.c  */
#line 1616 "src/p.y"
    { (yyval.number) = UNIT_MEGABYTE; }
    break;

  case 471:

/* Line 1464 of yacc.c  */
#line 1617 "src/p.y"
    { (yyval.number) = UNIT_GIGABYTE; }
    break;

  case 472:

/* Line 1464 of yacc.c  */
#line 1620 "src/p.y"
    {
                    permset.perm = check_perm((yyvsp[(4) - (8)].number));
                    addeventaction(&(permset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addperm(&permset);
                  }
    break;

  case 473:

/* Line 1464 of yacc.c  */
#line 1627 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = (yyvsp[(4) - (7)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, (yyvsp[(7) - (7)].number));
                    FREE((yyvsp[(4) - (7)].string)); 
                  }
    break;

  case 474:

/* Line 1464 of yacc.c  */
#line 1634 "src/p.y"
    {
                    matchset.ignore = FALSE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (7)].string);
                    addmatch(&matchset, (yyvsp[(7) - (7)].number), 0);
                  }
    break;

  case 475:

/* Line 1464 of yacc.c  */
#line 1640 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = (yyvsp[(4) - (4)].string);
                    matchset.match_string = NULL;
                    addmatchpath(&matchset, ACTION_IGNORE);
                    FREE((yyvsp[(4) - (4)].string)); 
                  }
    break;

  case 476:

/* Line 1464 of yacc.c  */
#line 1647 "src/p.y"
    {
                    matchset.ignore = TRUE;
                    matchset.match_path = NULL;
                    matchset.match_string = (yyvsp[(4) - (4)].string);
                    addmatch(&matchset, ACTION_IGNORE, 0);
                  }
    break;

  case 477:

/* Line 1464 of yacc.c  */
#line 1655 "src/p.y"
    {
                    matchset.not = FALSE;
                  }
    break;

  case 478:

/* Line 1464 of yacc.c  */
#line 1658 "src/p.y"
    {
                    matchset.not = TRUE;
                  }
    break;

  case 479:

/* Line 1464 of yacc.c  */
#line 1664 "src/p.y"
    {
                    sizeset.operator = (yyvsp[(3) - (9)].number);
                    sizeset.size = ((unsigned long long)(yyvsp[(4) - (9)].number) * (yyvsp[(5) - (9)].number));
                    addeventaction(&(sizeset).action, (yyvsp[(8) - (9)].number), (yyvsp[(9) - (9)].number));
                    addsize(&sizeset);
                  }
    break;

  case 480:

/* Line 1464 of yacc.c  */
#line 1670 "src/p.y"
    {
                    sizeset.test_changes = TRUE;
                    addeventaction(&(sizeset).action, (yyvsp[(6) - (6)].number), ACTION_IGNORE);
                    addsize(&sizeset);
                  }
    break;

  case 481:

/* Line 1464 of yacc.c  */
#line 1677 "src/p.y"
    {
                    uidset.uid = get_uid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    adduid(&uidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 482:

/* Line 1464 of yacc.c  */
#line 1683 "src/p.y"
    {
                    uidset.uid = get_uid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(uidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    adduid(&uidset);
                  }
    break;

  case 483:

/* Line 1464 of yacc.c  */
#line 1690 "src/p.y"
    {
                    gidset.gid = get_gid((yyvsp[(4) - (8)].string), 0);
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addgid(&gidset);
                    FREE((yyvsp[(4) - (8)].string));
                  }
    break;

  case 484:

/* Line 1464 of yacc.c  */
#line 1696 "src/p.y"
    {
                    gidset.gid = get_gid(NULL, (yyvsp[(4) - (8)].number));
                    addeventaction(&(gidset).action, (yyvsp[(7) - (8)].number), (yyvsp[(8) - (8)].number));
                    addgid(&gidset);
                  }
    break;

  case 485:

/* Line 1464 of yacc.c  */
#line 1703 "src/p.y"
    { (yyval.number) = ICMP_ECHO; }
    break;

  case 486:

/* Line 1464 of yacc.c  */
#line 1706 "src/p.y"
    { (yyval.number) = 0; }
    break;

  case 487:

/* Line 1464 of yacc.c  */
#line 1707 "src/p.y"
    { (yyval.number) = (yyvsp[(2) - (2)].number); }
    break;

  case 488:

/* Line 1464 of yacc.c  */
#line 1708 "src/p.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number); }
    break;



/* Line 1464 of yacc.c  */
#line 5453 "src/y.tab.c"
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
#line 1711 "src/p.y"



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


