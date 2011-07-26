/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1685 of yacc.c  */
#line 262 "src/p.y"

  URL_T url;
  float real;
  int   number;
  char *string;



/* Line 1685 of yacc.c  */
#line 452 "src/y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


