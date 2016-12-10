Description: Use mysql/mysql.h instead of mysql.h
Author: Francesco Paolo Lovergine <frankie@debian.org>
Forwarded: not needed

Index: git/contrib/mod_sql_mysql.c
===================================================================
--- git.orig/contrib/mod_sql_mysql.c	2016-12-10 20:51:54.996366780 +0100
+++ git/contrib/mod_sql_mysql.c	2016-12-10 20:51:54.988366803 +0100
@@ -132,7 +132,7 @@
 #include "conf.h"
 #include "../contrib/mod_sql.h"
 
-#include <mysql.h>
+#include <mysql/mysql.h>
 
 /* The my_make_scrambled_password{,_323} functions are not part of the public
  * MySQL API and are not declared in any of the MySQL header files. But the
