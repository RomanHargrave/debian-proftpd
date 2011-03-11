Description: Use mysql/mysql.h instead of mysql.h
Author: Francesco Paolo Lovergine <frankie@debian.org>
Forwarded: not needed

Index: proftpd-dfsg/contrib/mod_sql_mysql.c
===================================================================
--- proftpd-dfsg.orig/contrib/mod_sql_mysql.c	2011-02-07 17:47:07.000000000 +0100
+++ proftpd-dfsg/contrib/mod_sql_mysql.c	2011-02-08 13:35:03.000000000 +0100
@@ -135,7 +135,7 @@
 #include "conf.h"
 #include "../contrib/mod_sql.h"
 
-#include <mysql.h>
+#include <mysql/mysql.h>
 
 /* 
  * timer-handling code adds the need for a couple of forward declarations
