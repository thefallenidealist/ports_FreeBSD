--- src/Mod/Drawing/App/DrawingExport.cpp.orig	2019-10-04 10:55:17 UTC
+++ src/Mod/Drawing/App/DrawingExport.cpp
@@ -434,7 +434,7 @@ void SVGOutput::printGeneric(const BRepAdaptor_Curve& 
             out << c << " " << nodes(i).X() << " " << nodes(i).Y()<< " " ; 
             c = 'L';
         }
-        out << "\" />" << endl;
+        out << "\" />" << std::endl;
     } else if (c.GetType() == GeomAbs_Line) {
         //BRep_Tool::Polygon3D assumes the edge has polygon representation - ie already been "tessellated"
         //this is not true for all edges, especially "floating edges"
@@ -447,7 +447,7 @@ void SVGOutput::printGeneric(const BRepAdaptor_Curve& 
         out << c << " " << s.X() << " " << s.Y()<< " " ; 
         c = 'L';
         out << c << " " << e.X() << " " << e.Y()<< " " ; 
-        out << "\" />" << endl;
+        out << "\" />" << std::endl;
     }
 }
 
@@ -485,10 +485,10 @@ std::string DXFOutput::exportEdges(const TopoDS_Shape&
 
 void DXFOutput::printHeader( std::ostream& out)
 {
-        out	 << 0          << endl;
-        out << "SECTION"  << endl;
-        out << 2          << endl;
-        out << "ENTITIES" << endl;
+        out	 << 0          << std::endl;
+        out << "SECTION"  << std::endl;
+        out << 2          << std::endl;
+        out << "ENTITIES" << std::endl;
 }
 
 void DXFOutput::printCircle(const BRepAdaptor_Curve& c, std::ostream& out)
@@ -512,22 +512,22 @@ void DXFOutput::printCircle(const BRepAdaptor_Curve& c
     if (s.SquareDistance(e) < 0.001) {
         //out << "<circle cx =\"" << p.X() << "\" cy =\"" 
             //<< p.Y() << "\" r =\"" << r << "\" />";
-	    out << 0			<< endl;
-	    out << "CIRCLE"		<< endl;
-	    out << 8			<< endl;	// Group code for layer name
-	    out << "sheet_layer"	<< endl;	// Layer number
-        out << "100"        << endl;
-        out << "AcDbEntity" << endl;
-        out << "100"        << endl;
-        out << "AcDbCircle"   << endl;
-	    out << 10			<< endl;	// Centre X
-	    out << p.X()		<< endl;	// X in WCS coordinates
-	    out << 20			<< endl;
-	    out << p.Y()		<< endl;	// Y in WCS coordinates
-	    out << 30			<< endl;
-	    out << 0		<< endl;	// Z in WCS coordinates-leaving flat
-	    out << 40			<< endl;	//
-	    out << r		<< endl;	// Radius
+	    out << 0			<< std::endl;
+	    out << "CIRCLE"		<< std::endl;
+	    out << 8			<< std::endl;	// Group code for layer name
+	    out << "sheet_layer"	<< std::endl;	// Layer number
+        out << "100"        << std::endl;
+        out << "AcDbEntity" << std::endl;
+        out << "100"        << std::endl;
+        out << "AcDbCircle"   << std::endl;
+	    out << 10			<< std::endl;	// Centre X
+	    out << p.X()		<< std::endl;	// X in WCS coordinates
+	    out << 20			<< std::endl;
+	    out << p.Y()		<< std::endl;	// Y in WCS coordinates
+	    out << 30			<< std::endl;
+	    out << 0		<< std::endl;	// Z in WCS coordinates-leaving flat
+	    out << 40			<< std::endl;	//
+	    out << r		<< std::endl;	// Radius
                                 }
 
 
@@ -555,28 +555,28 @@ void DXFOutput::printCircle(const BRepAdaptor_Curve& c
 		double temp = start_angle;
 		start_angle = end_angle;
 		end_angle = temp;}
-	out << 0			<< endl;
-	out << "ARC"		<< endl;
-	out << 8			<< endl;	// Group code for layer name
-	out << "sheet_layer"	<< endl;	// Layer number
-    out << "100"        << endl;
-    out << "AcDbEntity" << endl;
-    out << "100"        << endl;
-    out << "AcDbCircle" << endl;
-	out << 10			<< endl;	// Centre X
-	out << p.X()		<< endl;	// X in WCS coordinates
-	out << 20			<< endl;
-	out << p.Y()		<< endl;	// Y in WCS coordinates
-	out << 30			<< endl;
-	out << 0		<< endl;	// Z in WCS coordinates
-	out << 40			<< endl;	//
-	out << r		<< endl;	// Radius
-    out << "100"        << endl;
-    out << "AcDbArc" << endl;
-	out << 50			<< endl;
-	out << start_angle	<< endl;	// Start angle
-	out << 51			<< endl;
-	out << end_angle	<< endl;	// End angle
+	out << 0			<< std::endl;
+	out << "ARC"		<< std::endl;
+	out << 8			<< std::endl;	// Group code for layer name
+	out << "sheet_layer"	<< std::endl;	// Layer number
+    out << "100"        << std::endl;
+    out << "AcDbEntity" << std::endl;
+    out << "100"        << std::endl;
+    out << "AcDbCircle" << std::endl;
+	out << 10			<< std::endl;	// Centre X
+	out << p.X()		<< std::endl;	// X in WCS coordinates
+	out << 20			<< std::endl;
+	out << p.Y()		<< std::endl;	// Y in WCS coordinates
+	out << 30			<< std::endl;
+	out << 0		<< std::endl;	// Z in WCS coordinates
+	out << 40			<< std::endl;	//
+	out << r		<< std::endl;	// Radius
+    out << "100"        << std::endl;
+    out << "AcDbArc" << std::endl;
+	out << 50			<< std::endl;
+	out << start_angle	<< std::endl;	// Start angle
+	out << 51			<< std::endl;
+	out << end_angle	<< std::endl;	// End angle
 
 
 
@@ -628,32 +628,32 @@ void DXFOutput::printEllipse(const BRepAdaptor_Curve& 
 		start_angle = end_angle;
 		end_angle = temp;
 	}
-	out << 0			<< endl;
-	out << "ELLIPSE"		<< endl;
-	out << 8			<< endl;	// Group code for layer name
-	out << "sheet_layer"	<< endl;	// Layer number
-    out << "100"        << endl;
-    out << "AcDbEntity" << endl;
-    out << "100"        << endl;
-    out << "AcDbEllipse"   << endl;
-	out << 10			<< endl;	// Centre X
-	out << p.X()		<< endl;	// X in WCS coordinates
-	out << 20			<< endl;
-	out << p.Y()		<< endl;	// Y in WCS coordinates
-	out << 30			<< endl;
-	out << 0		<< endl;	// Z in WCS coordinates
-	out << 11			<< endl;	//
-	out << major_x		<< endl;	// Major X
-	out << 21			<< endl;
-	out << major_y		<< endl;	// Major Y
-	out << 31			<< endl;
-	out << 0		<< endl;	// Major Z
-	out << 40			<< endl;	//
-	out << ratio		<< endl;	// Ratio
-	out << 41		<< endl;
-	out << start_angle	<< endl;	// Start angle
-	out << 42		<< endl;
-	out << end_angle	<< endl;	// End angle
+	out << 0			<< std::endl;
+	out << "ELLIPSE"		<< std::endl;
+	out << 8			<< std::endl;	// Group code for layer name
+	out << "sheet_layer"	<< std::endl;	// Layer number
+    out << "100"        << std::endl;
+    out << "AcDbEntity" << std::endl;
+    out << "100"        << std::endl;
+    out << "AcDbEllipse"   << std::endl;
+	out << 10			<< std::endl;	// Centre X
+	out << p.X()		<< std::endl;	// X in WCS coordinates
+	out << 20			<< std::endl;
+	out << p.Y()		<< std::endl;	// Y in WCS coordinates
+	out << 30			<< std::endl;
+	out << 0		<< std::endl;	// Z in WCS coordinates
+	out << 11			<< std::endl;	//
+	out << major_x		<< std::endl;	// Major X
+	out << 21			<< std::endl;
+	out << major_y		<< std::endl;	// Major Y
+	out << 31			<< std::endl;
+	out << 0		<< std::endl;	// Major Z
+	out << 40			<< std::endl;	//
+	out << ratio		<< std::endl;	// Ratio
+	out << 41		<< std::endl;
+	out << start_angle	<< std::endl;	// Start angle
+	out << 42		<< std::endl;
+	out << end_angle	<< std::endl;	// End angle
 }
 
 void DXFOutput::printBSpline(const BRepAdaptor_Curve& c, int id, std::ostream& out) //Not even close yet- DF 
@@ -692,31 +692,31 @@ void DXFOutput::printBSpline(const BRepAdaptor_Curve& 
         spline->Poles(poles);
 
 
-        str << 0 << endl
-            << "SPLINE" << endl
-            << 8 << endl // Group code for layer name
-            << "sheet_layer" << endl // Layer name
-            << "100"        << endl
-            << "AcDbEntity" << endl
-            << "100"        << endl
-            << "AcDbSpline"   << endl
-            << 70 << endl
-            << spline->IsRational()*4 << endl //flags
-            << 71 << endl << spline->Degree() << endl
-            << 72 << endl << knotsequence.Length() << endl
-            << 73 << endl << poles.Length() << endl
-            << 74 << endl << 0 << endl; //fitpoints
+        str << 0 << std::endl
+            << "SPLINE" << std::endl
+            << 8 << std::endl // Group code for layer name
+            << "sheet_layer" << std::endl // Layer name
+            << "100"        << std::endl
+            << "AcDbEntity" << std::endl
+            << "100"        << std::endl
+            << "AcDbSpline"   << std::endl
+            << 70 << std::endl
+            << spline->IsRational()*4 << std::endl //flags
+            << 71 << std::endl << spline->Degree() << std::endl
+            << 72 << std::endl << knotsequence.Length() << std::endl
+            << 73 << std::endl << poles.Length() << std::endl
+            << 74 << std::endl << 0 << std::endl; //fitpoints
 
         for (int i = knotsequence.Lower() ; i <= knotsequence.Upper(); i++) {
-            str << 40 << endl << knotsequence(i) << endl;
+            str << 40 << std::endl << knotsequence(i) << std::endl;
         }
         for (int i = poles.Lower(); i <= poles.Upper(); i++) {
             gp_Pnt pole = poles(i);
-            str << 10 << endl << pole.X() << endl
-                << 20 << endl << pole.Y() << endl
-                << 30 << endl << pole.Z() << endl;
+            str << 10 << std::endl << pole.X() << std::endl
+                << 20 << std::endl << pole.Y() << std::endl
+                << 30 << std::endl << pole.Z() << std::endl;
             if (spline->IsRational()) {
-                str << 41 << endl << spline->Weight(i) << endl;
+                str << 41 << std::endl << spline->Weight(i) << std::endl;
             }
         }
 
@@ -740,24 +740,24 @@ void DXFOutput::printGeneric(const BRepAdaptor_Curve& 
     gp_Vec VE;
     c.D1(uEnd, PE, VE);
 
-    out << "0"			<< endl;
-    out << "LINE"		<< endl;
-    out << "8"			<< endl;	// Group code for layer name
-    out << "sheet_layer" << endl; // Layer name 
-    out << "100"        << endl;
-    out << "AcDbEntity" << endl;
-    out << "100"        << endl;
-    out << "AcDbLine"   << endl;
-    out << "10"			<< endl;	// Start point of line
-    out << PS.X()		<< endl;	// X in WCS coordinates
-    out << "20"			<< endl;
-    out << PS.Y()		<< endl;	// Y in WCS coordinates
-    out << "30"			<< endl;
-    out << "0"		<< endl;	// Z in WCS coordinates
-    out << "11"			<< endl;	// End point of line
-    out << PE.X()		<< endl;	// X in WCS coordinates
-    out << "21"			<< endl;
-    out << PE.Y()		<< endl;	// Y in WCS coordinates
-    out << "31"			<< endl;
-    out << "0"		<< endl;	// Z in WCS coordinates
+    out << "0"			<< std::endl;
+    out << "LINE"		<< std::endl;
+    out << "8"			<< std::endl;	// Group code for layer name
+    out << "sheet_layer" << std::endl; // Layer name 
+    out << "100"        << std::endl;
+    out << "AcDbEntity" << std::endl;
+    out << "100"        << std::endl;
+    out << "AcDbLine"   << std::endl;
+    out << "10"			<< std::endl;	// Start point of line
+    out << PS.X()		<< std::endl;	// X in WCS coordinates
+    out << "20"			<< std::endl;
+    out << PS.Y()		<< std::endl;	// Y in WCS coordinates
+    out << "30"			<< std::endl;
+    out << "0"		<< std::endl;	// Z in WCS coordinates
+    out << "11"			<< std::endl;	// End point of line
+    out << PE.X()		<< std::endl;	// X in WCS coordinates
+    out << "21"			<< std::endl;
+    out << PE.Y()		<< std::endl;	// Y in WCS coordinates
+    out << "31"			<< std::endl;
+    out << "0"		<< std::endl;	// Z in WCS coordinates
 }
