--- Panel.c.orig	2019-01-14 19:20:40.623475000 +0100
+++ Panel.c	2019-01-14 19:20:40.626744000 +0100
@@ -372,15 +372,17 @@
 
 bool Panel_onKey(Panel* this, int key) {
    assert (this != NULL);
-   
+
    int size = Vector_size(this->items);
    switch (key) {
    case KEY_DOWN:
    case KEY_CTRL('N'):
+   case KEY_J:
       this->selected++;
       break;
    case KEY_UP:
    case KEY_CTRL('P'):
+   case KEY_K:
       this->selected--;
       break;
    #ifdef KEY_C_DOWN
@@ -394,23 +396,25 @@
       break;
    #endif
    case KEY_LEFT:
-   case KEY_CTRL('B'):
+   case KEY_H:
       if (this->scrollH > 0) {
          this->scrollH -= MAX(CRT_scrollHAmount, 0);
          this->needsRedraw = true;
       }
       break;
    case KEY_RIGHT:
-   case KEY_CTRL('F'):
+   case KEY_L:
       this->scrollH += CRT_scrollHAmount;
       this->needsRedraw = true;
       break;
    case KEY_PPAGE:
+   case KEY_CTRL('B'):
       this->selected -= (this->h - 1);
       this->scrollV = MAX(0, this->scrollV - this->h + 1);
       this->needsRedraw = true;
       break;
    case KEY_NPAGE:
+   case KEY_CTRL('F'):
       this->selected += (this->h - 1);
       this->scrollV = MAX(0, MIN(Vector_size(this->items) - this->h,
                                  this->scrollV + this->h - 1));
@@ -432,9 +436,11 @@
       break;
    }
    case KEY_HOME:
+   case KEY_G:
       this->selected = 0;
       break;
    case KEY_END:
+   case KEY_SHIFT_G:
       this->selected = size - 1;
       break;
    case KEY_CTRL('A'):
@@ -455,7 +461,7 @@
    if (this->selected < 0 || size == 0) {
       this->selected = 0;
       this->needsRedraw = true;
-   } else if (this->selected >= size) {   
+   } else if (this->selected >= size) {
       this->selected = size - 1;
       this->needsRedraw = true;
    }
