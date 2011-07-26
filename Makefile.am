# Copyright (C) Tildeslash Ltd. All rights reserved.

AUTOMAKE_OPTIONS = foreign no-dependencies subdir-objects
ACLOCAL_AMFLAGS	 = -I m4

EXTRA_DIST	= README AUTHORS CHANGES COPYING bootstrap doc src config monitrc contrib monit.1

CC		= @CC@
FLEX		= @FLEX@
FLEXFLAGS	= -i
YACC		= @YACC@
YACCFLAGS	= -dvt
POD2MAN		= @POD2MAN@
POD2MANFLAGS	= @POD2MANFLAGS@

AM_CPPFLAGS	= $(CPPFLAGS) $(EXTCPPFLAGS) -D@ARCH@ -DSYSCONFDIR="\"@sysconfdir@\""
AM_LDFLAGS	= $(LDFLAGS) $(EXTLDFLAGS) -L./lib/
INCLUDES	= -I./src -I./src/device -I./src/http -I./src/process -I./src/protocols 

# The mmonit binary
bin_PROGRAMS	= monit
monit_SOURCES	= src/y.tab.c \
		  src/lex.yy.c \
		  src/monit.c \
		  src/alert.c \
		  src/collector.c \
		  src/control.c \
		  src/daemonize.c \
		  src/env.c \
		  src/event.c \
		  src/file.c \
		  src/gc.c \
		  src/http.c \
		  src/log.c \
		  src/md5.c \
		  src/net.c \
		  src/process.c \
		  src/sendmail.c \
		  src/sha.c \
		  src/signal.c \
		  src/socket.c \
		  src/spawn.c \
		  src/ssl.c \
		  src/state.c \
		  src/status.c \
		  src/util.c \
		  src/validate.c \
		  src/xmalloc.c \
		  src/xml.c \
		  src/http/base64.c \
		  src/http/cervlet.c \
		  src/http/engine.c \
		  src/http/processor.c \
		  src/protocols/apache_status.c \
		  src/protocols/clamav.c \
		  src/protocols/default.c \
		  src/protocols/dns.c \
		  src/protocols/dwp.c \
		  src/protocols/ftp.c \
		  src/protocols/generic.c \
		  src/protocols/gps.c \
		  src/protocols/http.c \
		  src/protocols/imap.c \
		  src/protocols/ldap2.c \
		  src/protocols/ldap3.c \
		  src/protocols/lmtp.c \
		  src/protocols/memcache.c \
		  src/protocols/mysql.c \
		  src/protocols/nntp.c \
		  src/protocols/ntp3.c \
		  src/protocols/pgsql.c \
		  src/protocols/pop.c \
		  src/protocols/postfix_policy.c \
		  src/protocols/protocol.c \
		  src/protocols/radius.c \
		  src/protocols/rdate.c \
		  src/protocols/rsync.c \
		  src/protocols/sip.c \
		  src/protocols/smtp.c \
		  src/protocols/ssh.c \
		  src/protocols/tns.c \
		  src/device/device_common.c \
		  src/device/sysdep_@ARCH@.c \
		  src/process/process_common.c \
		  src/process/sysdep_@ARCH@.c
 
monit_LDFLAGS 	= -static $(EXTLDFLAGS)

man_MANS 	= monit.1

BUILT_SOURCES   = src/lex.yy.c src/y.tab.c src/tokens.h

CLEANFILES	= $(BUILT_SOURCES)
DISTCLEANFILES	= *~ 


# -------
# Targets
# -------

dist-hook::
	-rm -rf `find $(distdir) -name "._*"`
	-rm -rf `find $(distdir) -name ".DS_Store"`
	-rm -rf `find $(distdir) -name ".libs"`
	-rm -rf `find $(distdir) -name ".svn"`
	-rm -f $(distdir)/src/config.h $(distdir)/src/stamp-* 
	-perl -pi -e 's/^Version: .*/Version: '$(VERSION)'/' $(distdir)/contrib/packages/redhat/monit.spec
	-chmod 600 monitrc
	
clean-local:
	-rm -f `find . -name "*.o" -o -name "*.lo" -o -name "*.loT" -o -name "*~"`

distclean-local:
	-rm -rf autom4te.cache/ \
		src/y.output \
		monit-[0-9].*tar.gz
	-rm -rf lib include

cleanall: clean distclean
	-rm -f Makefile.in configure aclocal.m4 autom4te.cache src/config.h.in monit.1 config/config.*
	-rm -rf m4
		
monit.1: doc/monit.pod
	$(POD2MAN) $(POD2MANFLAGS) $< > $@
	-rm -f pod2*

# -------------
# Grammar rules
# -------------

src/y.tab.c src/tokens.h : src/p.y
	$(YACC) $(YACCFLAGS) $< -o src/y.tab.c
	echo "#include <config.h>" > src/.y.tab.c
	cat src/y.tab.c >> src/.y.tab.c
	-mv src/.y.tab.c src/y.tab.c
	-mv src/y.tab.h src/tokens.h
	
src/lex.yy.c: src/l.l
	$(FLEX) $(FLEXFLAGS) -o $@ $< 


