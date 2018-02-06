Description: Use mysql/mysql.h instead of mysql.h
Author: Francesco Paolo Lovergine <frankie@debian.org>
Forwarded: not needed

--- proftpd-dfsg.orig/contrib/mod_sql_mysql.c
+++ proftpd-dfsg/contrib/mod_sql_mysql.c
@@ -131,7 +131,7 @@
 #include "conf.h"
 #include "../contrib/mod_sql.h"
 
-#include <mysql.h>
+#include <mysql/mysql.h>
 
 /* The my_make_scrambled_password{,_323} functions are not part of the public
  * MySQL API and are not declared in any of the MySQL header files. But the
