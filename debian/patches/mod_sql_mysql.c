Description: Use mysql/mysql.h instead of mysql.h
Author: Francesco Paolo Lovergine <frankie@debian.org>
Forwarded: not needed

Index: proftpd-dfsg/contrib/mod_sql_mysql.c
===================================================================
--- proftpd-dfsg.orig/contrib/mod_sql_mysql.c	2013-06-24 17:58:16.000000000 +0200
+++ proftpd-dfsg/contrib/mod_sql_mysql.c	2013-06-24 17:58:16.000000000 +0200
@@ -135,7 +135,7 @@
 #include "conf.h"
 #include "../contrib/mod_sql.h"
 
-#include <mysql.h>
+#include <mysql/mysql.h>
 
 /* The my_make_scrambled_password{,_323} functions are not part of the public
  * MySQL API and are not declared in any of the MySQL header files. But the
