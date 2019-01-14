--- Panel.h.orig	2019-01-14 19:20:40.623980000 +0100
+++ Panel.h	2019-01-14 19:20:40.626781000 +0100
@@ -72,6 +72,13 @@
 #endif
 
 #define KEY_CTRL(l) ((l)-'A'+1)
+// 190110 found out experimentally with ncurses example
+#define KEY_G		103
+#define KEY_SHIFT_G	71
+#define KEY_H		104
+#define KEY_J		106
+#define KEY_K		107
+#define KEY_L		108
 
 extern PanelClass Panel_class;
 
