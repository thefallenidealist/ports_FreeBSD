--- Action.c.orig	2019-01-14 19:20:40.622926000 +0100
+++ Action.c	2019-01-14 19:20:40.626704000 +0100
@@ -575,7 +575,7 @@
    keys['q'] = actionQuit;
    keys['a'] = actionSetAffinity;
    keys[KEY_F(9)] = actionKill;
-   keys['k'] = actionKill;
+   keys['x'] = actionKill;
    keys[KEY_RECLICK] = actionExpandOrCollapse;
    keys['+'] = actionExpandOrCollapse;
    keys['='] = actionExpandOrCollapse;
@@ -586,12 +586,11 @@
    keys['S'] = actionSetup;
    keys['C'] = actionSetup;
    keys[KEY_F(2)] = actionSetup;
-   keys['l'] = actionLsof;
+   keys['L'] = actionLsof;
    keys['s'] = actionStrace;
    keys[' '] = actionTag;
    keys['\014'] = actionRedraw; // Ctrl+L
    keys[KEY_F(1)] = actionHelp;
-   keys['h'] = actionHelp;
    keys['?'] = actionHelp;
    keys['U'] = actionUntagAll;
    keys['c'] = actionTagAllChildren;
