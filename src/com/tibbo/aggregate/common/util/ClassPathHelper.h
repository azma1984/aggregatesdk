#ifndef _CLASSPATH_HELPER_H_
#define _CLASSPATH_HELPER_H_


class ClassPathHelper
{
	/*
  private static final String JAVA_LIBRARY_PATH_PROPERTY = "java.library.path";
  private static final String JAR_FILE_EXTENSION = ".jar";
  private static final String PROTOCOL_FILE = "file";
  
  public static void loadJars(File directory) throws IOException, IllegalArgumentException, IllegalAccessException, InvocationTargetException, SecurityException, NoSuchMethodException
  {
    for (String path : listJars(directory))
    {
      addToClassPath(path);
    }
  }
  
  public static List<String> listJars(File directory)
  {
    if (!directory.isDirectory())
    {
      Log.CORE.error("Error loading JARs from a directory: Not a directory: " + directory);
      return Collections.emptyList();
    }
    List<String> res = new LinkedList();
    for (File file : directory.listFiles())
    {
      if (file.getName().endsWith(JAR_FILE_EXTENSION))
      {
        res.add(file.getAbsolutePath());
      }
      else if (file.isDirectory())
      {
        res.addAll(listJars(file));
      }
    }
    return res;
  }
  
  public static void addToClassPath(String path) throws MalformedURLException, IllegalArgumentException, IllegalAccessException, InvocationTargetException, SecurityException, NoSuchMethodException
  {
    Log.CORE.info("Loading external JAR file: " + path);
    URL u = new URL(PROTOCOL_FILE, null, path);
    URLClassLoader urlClassLoader = (URLClassLoader) ClassLoader.getSystemClassLoader();
    Class urlClass = URLClassLoader.class;
    Method method = urlClass.getDeclaredMethod("addURL", new Class[] { URL.class });
    method.setAccessible(true);
    method.invoke(urlClassLoader, u);
  }
  
  public static void addToLibraryPath(String path) throws IllegalArgumentException, IllegalAccessException
  {
    String newLibPath = path + File.pathSeparator + System.getProperty(JAVA_LIBRARY_PATH_PROPERTY);
    System.setProperty(JAVA_LIBRARY_PATH_PROPERTY, newLibPath);
    Field fieldSysPath;
    try
    {
      fieldSysPath = ClassLoader.class.getDeclaredField("sys_paths");
      fieldSysPath.setAccessible(true);
      if (fieldSysPath != null)
      {
        fieldSysPath.set(System.class.getClassLoader(), null);
      }
    }
    catch (NoSuchFieldException ex)
    {
      throw new IllegalStateException("Failed to extend java.library.path:" + ex.getMessage(), ex);
    }
  }
  */
};

#endif