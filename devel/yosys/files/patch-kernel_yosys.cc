--- kernel/yosys.cc.orig	2018-03-11 12:00:00.000000000 UTC
+++ kernel/yosys.cc			2018-03-11 13:00:00.000000000 UTC
@@ -42,6 +42,12 @@
 #  include <dirent.h>
 #  include <sys/stat.h>
 #  include <glob.h>
+#elif defined(__FreeBSD__)
+#  include <sys/wait.h>
+#  include <unistd.h>
+#  include <dirent.h>
+#  include <sys/stat.h>
+#  include <glob.h>
 #else
 #  include <unistd.h>
 #  include <dirent.h>
@@ -665,6 +671,18 @@ std::string proc_self_dirname()
 		buflen--;
 	return std::string(path, buflen);
 }
+#elif defined(__FreeBSD__)
+std::string proc_self_dirname()
+{
+	char path[PATH_MAX];
+	ssize_t buflen = readlink("/proc/curproc/file", path, sizeof(path));
+	if (buflen < 0) {
+		log_error("readlink(\"/proc/curproc/file\") failed: %s\n", strerror(errno));
+	}
+	while (buflen > 0 && path[buflen-1] != '/')
+		buflen--;
+	return std::string(path, buflen);
+}
 #elif defined(__APPLE__)
 std::string proc_self_dirname()
 {
