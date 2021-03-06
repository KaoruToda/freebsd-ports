Author: Niko Tyni <ntyni@debian.org>
Description: Closes: #537996
The SvIV call crashes in on Perl 5.10.0 when warnings are
enabled and the value is undef.
--- src/speedy_perl.c
+++ src/speedy_perl.c
@@ -818,7 +818,7 @@
     my_call_sv(get_perlvar(&PERLVAR_RESET_GLOBALS));
 
     /* Copy option values in from the perl vars */
-    if (SvIV(PERLVAL_OPTS_CHANGED)) {
+    if (SvTRUE(PERLVAL_OPTS_CHANGED)) {
 	int i;
 	for (i = 0; i < SPEEDY_NUMOPTS; ++i) {
 	    OptRec *o = speedy_optdefs + i;
