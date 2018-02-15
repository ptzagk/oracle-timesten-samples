Copyright (c) 1997, 2018, Oracle and/or its affiliates. All rights reserved.

# Compile time program options

When building this sample program you can control some optional features at build time by setting values for specific constants defined in **GSConstants.java**.

The specific features that can be controlled are as follows:

**DEBUG**

By default debug mode is not enabled for performance reasons. If you wish to be able to obtain a much more detailed execution log (essentially a trace of program execution including JDBC API calls, data values etc.) then you can enable this by adding setting the value of the variable _debugEnabled_ at the start of the definition of the _GSConstants_ class in **GSConstants.java** to _true_ (the default is _false_).

When running the program you can activate debug mode using the **-debug** command line flag. See the online help for information on that flag (the help info for this flag is only displayed if the program has been built with debug enabled).